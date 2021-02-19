#ifndef _UIPANEL_H_
#define _UIPANEL_H_

#include "UTFT_Menu/Menus.h"

/// Простая панель
class UIPanel : public UIObject {
    private:
    public:
    char* Name;
    Rect rect;
    
    /// Основной цвет
    uint16_t Color;

    /// Базовый конструктор
    UIPanel(char* getName, Rect getRect, uint16_t getColor) : Name(getName), rect(getRect), Color(getColor) {}

    void Repaint() override {
        GLCD.fillRect(rect.x, rect.y, rect.w, rect.h, Color);
    }

    void Move(int x, int y) override {
        GLCD.fillRect(rect.x, rect.y, rect.w, rect.h, BACKGDOUND);

        rect.x = x; rect.y = y;
        Repaint();
    }

    void Update() override {}
};


#endif