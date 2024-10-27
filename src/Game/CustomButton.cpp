#include <CustomButton.h>

namespace GUIComponents {
    CustomButtonComponent::CustomButtonComponent(const char* imagePath, Vector2 imagePos, float scale)
    {
        Image image = LoadImage(imagePath);

        texture = LoadTextureFromImage(image);
        position = imagePos;
        originalHeight = image.height;
        originalWidth = image.width;
    }
    void CustomButtonComponent::Draw(Rendering::Renderer& renderer) {
        DrawTextureV(texture, position, WHITE);
    }

    bool CustomButtonComponent::isPressed(Vector2 mousePos, bool mousePressed)
    {
        Rectangle rect = { position.x, position.y, static_cast<float>(texture.width), static_cast<float>(texture.height) };

        if (CheckCollisionPointRec(mousePos, rect) && mousePressed)
            return true;

        return false;
    }

    bool CustomButtonComponent::isHovered(Vector2 mousePos)
    {
        Rectangle rect = { position.x, position.y, static_cast<float>(texture.width), static_cast<float>(texture.height) };

        if (CheckCollisionPointRec(mousePos, rect))
            return true;

        return false;
    }
}