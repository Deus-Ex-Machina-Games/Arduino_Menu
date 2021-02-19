#ifndef _MENU_ABSTRACT_H_
#define _MENU_ABSTRACT_H_

#include "UTFT_Menu/Menus.h"

/// Основной класс страницы
class Page {
    public:
    /// Название меню
    char* Name;
    /// Название меню до перехода (не используется)
    char* LastMenuName;

    /// Список объектов
    UIObject* UIObjects[MAX_OBJECTS_ON_PAGE];

    /// Функция пробуждения
    virtual void Awake();
    /// Функция старта
    virtual void Start();
    /// Функция обновления
    virtual void Update();
    
    /// Перерисовать элемент по его индексу
    void RepaintByIndex(int index) {
        if (UIObjects[index] == NULL) return;
        UIObjects[index]->Repaint();
    }

    /// Перерисовать всё
    void RepaintAll() {
        GLCD.fillScreen(BACKGDOUND);

        for (int i = 0; i < MAX_OBJECTS_ON_PAGE; i++) {
            if (UIObjects[i] == NULL) break;
            UIObjects[i]->Repaint();
        }
    }
};

/// Пустая страница
class Empty : public Page {
    private:

    public:
    /// Костыль локальные объекты
    UIObject* localObjects[MAX_OBJECTS_ON_PAGE] = {
        NULL,
    };

    /// Базовый конструктор
    Empty(char* getName) {
        Name = getName;
        
        for (int i = 0; i < MAX_OBJECTS_ON_PAGE; i++) {
            UIObjects[i] = localObjects[i];
        }
    }

    void Awake() override {
        
    }

    void Start() override {
        RepaintAll();
    }

    void Update() override {
        for (int i = 0; i < MAX_OBJECTS_ON_PAGE; i++) {
            if (UIObjects[i] == NULL) break;
            UIObjects[i]->Update();
        }
    }
};

#endif