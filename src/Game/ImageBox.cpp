#include <ImageBox.h>

namespace GUIComponents {
    ImageBox::ImageBox(const char* imagePath, Vector2 imagePos, float imageRotation, float imageScale)
    {
        Image image = LoadImage(imagePath);
        scale = imageScale;
        rotation = imageRotation;
        texture = LoadTextureFromImage(image);
        position = imagePos;
    }
    void ImageBox::Draw(Rendering::RenderJobs& renderJob) {
        DrawTextureEx(texture, position, rotation, scale, WHITE);
    }
}