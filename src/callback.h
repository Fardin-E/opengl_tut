#pragma once
#include <cstdio>

static void glfw_error_callback(int error, const char* description) {
	fprintf(stderr, "Error: %s\n", description);
	throw("glfw error");
}

static void glfw_window_close_callback(GLFWwindow* window) {
	printf("window closed\n");
}

static void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
}