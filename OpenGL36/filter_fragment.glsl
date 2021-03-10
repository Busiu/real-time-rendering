#version 450

// filter_fragment

in vec2 fragTexCoor;

uniform float horizontal;

out vec4 color;

uniform sampler2D textureIn;
uniform float w[20];
uniform int wLength;

void main()
{
  vec2 texel = 1.0/textureSize(textureIn, 0);
  texel.x *= horizontal;
  texel.y *= (1.0 - horizontal);

  color = texture(textureIn, fragTexCoor)*w[0];
  for (int i = 1; i < wLength; i++)
    color += texture(textureIn, fragTexCoor + vec2(texel.x*i, texel.y*i))*w[i]
          +  texture(textureIn, fragTexCoor - vec2(texel.x*i, texel.y*i))*w[i];
}
