#pragma once
#include "Renderer.h"

namespace Rendering {
	class Camera {
	public:
		Camera3D camera;
		Vector3 v3Position;
		Vector3 v3Target;
		Vector3 v3Up;
		float fFov;

		Camera();
		~Camera();
	};
}