#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


float vertices[] = {
	-0.5f, 0.5f, 0.0f,
	0.5f, -0.5f, 0.0f,
	0.0f, 0.5f, 0.0f
};

unsigned int VBO;
unsigned int vertexShader;
unsigned int fragmentShader;
unsigned int shaderProgram;
