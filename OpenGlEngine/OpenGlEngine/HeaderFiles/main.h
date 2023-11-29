#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


float vertices[] = {
	0.1f, 0.1f, 0.0f,
	0.1f, -0.1f, 0.0f,
	-0.1f, -0.1f, 0.0f,
	-0.1f, 0.1f, 0.0f,
	0.1f,0.3f,0.0f,
	-0.1f,0.3f,0.0f
};

unsigned indices[] = {
	0,1,3,	//first tri
	1,2,3,  //second tri
	4,0,5,	//third tri
	0,3,5	//fourth tri
};

///Vertex buffer object
//	Vertex data: position, normal vector, colour to the gpu (NON-IMMEDIATE)
unsigned int VBO;

///Vertex array object
//	Contains one or more vertex buffer objects
//	Designed to store the information for a complete object
unsigned int VAO;

/// Element buffer object
//	Stores indices that is used to decide what vertices should be drawn.
unsigned int EBO;


unsigned int vertexShader;
unsigned int fragmentShader;
unsigned int shaderProgram;
