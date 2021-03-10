#version 450

layout (triangles) in;
layout (triangle_strip, max_vertices=36) out;

in vec3 geoNormal[];
in vec4 geoPos[];

out vec3 fragNormal;
out vec4 fragPos;
out vec4 fragColor;
out flat float useColor;

uniform mat4 p_matrix;
uniform mat4 v_matrix;
uniform mat4 m_matrix;

uniform int slider;

void generate_triangle(vec4 position1, vec4 position2, vec4 position3)
{
    useColor = 0;
    fragNormal = geoNormal[0];
    fragPos = geoPos[0];
    gl_Position = position1;
    EmitVertex();

    fragNormal = geoNormal[1];
    fragPos = geoPos[1];
    gl_Position = position2;
    EmitVertex();

    fragNormal = geoNormal[2];
    fragPos = geoPos[2];
    gl_Position = position3;
    EmitVertex();

    EndPrimitive();
}

void generate_triangle_fractal(vec4 a, vec4 b, vec4 c)
{
    generate_triangle(a, (a + c) / 2, (a + b) / 2);
    generate_triangle((a + c) / 2, c, (c + b) / 2);
    generate_triangle((a + b) / 2, (c + b) / 2, b);
}

void main()
{
  vec4 a = gl_in[0].gl_Position;
  vec4 b = gl_in[1].gl_Position;
  vec4 c = gl_in[2].gl_Position;

  vec4 ac = (a + c) / 2;
  vec4 ab = (a + b) / 2;
  vec4 bc = (b + c) / 2;

  generate_triangle_fractal(a, ac, ab);
  generate_triangle_fractal(ac, c, bc);
  generate_triangle_fractal(ab, bc, b);

  // normalna

  useColor = 1;
  mat4 pvm_matrix = p_matrix*v_matrix*m_matrix;

  fragNormal = (geoNormal[0] + geoNormal[1] + geoNormal[2])/3.0;
  fragColor = vec4(abs(fragNormal), 1.0);
  fragPos = (geoPos[0] + geoPos[1] + geoPos[2])/3.0;
  gl_Position = (gl_in[0].gl_Position + gl_in[1].gl_Position + gl_in[2].gl_Position)/3.0;
  EmitVertex();

  fragPos += vec4(fragNormal, 0.0);
  gl_Position += pvm_matrix*vec4(fragNormal, 0.0)*0.001*slider;
  EmitVertex();

  EndPrimitive();
}
