#version 330

out vec4 fragColor;

in vec2 texCoord0;
in vec3 normal0;

uniform sampler2D diffuse;
uniform vec3 lightDirection;

void main() {
	fragColor = texture(diffuse, texCoord0)
		* clamp(dot(-vec3(0, 0, 1), normal0), 0.0, 1.0);
}