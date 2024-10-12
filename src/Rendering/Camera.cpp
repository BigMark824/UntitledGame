#include <Camera.h>

namespace Rendering {
	Camera::Camera() {
		camera = { 0 };
		v3Position = { 0.0f, 0.0f, 0.0f };
		v3Target = { 0.0f, 0.0f, 0.0f };
		v3Up = { 0.0f, 1.0f, 0.0f };
		fFov = 45.0f;
		camera.projection = CAMERA_PERSPECTIVE;
	}

	Camera::~Camera()
	{

	}
}