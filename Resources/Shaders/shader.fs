#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 TexCoord;

// texture samplers
uniform sampler2D texture1;

void main()
{
	FragColor = texture(texture1, TexCoord) * vec4(ourColor, 1.0);
	
	if (FragColor.a < 1.0) {
		FragColor = vec4(0.0, 0.0, 0.0, 0.0);
	}
}