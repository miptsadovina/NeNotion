#pragma once
#include <iostream>
#include "../interfaceSFML/interfaceSFML.h"

class Factory {
public:
    void createBackButton(Button&, Window& window, int x, int y);
};

class MainPageFactory : public Factory {

public:
    MainPageFactory() = default;
    void createBoardButton(Button&, int x, int y, Window& window);
};

class BoardPageFactory : public Factory {
public:
    BoardPageFactory() = default;
    void createMenuButton(Button&, Window& window);
};

class MenuPageFactory : public Factory {
public:
    void createWidgetButton(Button& button, Window& window, std::string text, int x, int y);
};

class PositionsPageFactory : public Factory {
public:
    void createPositionButton(Button&, int x, int y, Window& window);
};

class CalendarPageFactory : public Factory {
public:
    void createTaskButton(Button& TaskButton, int x, int y, Window& window, sf::Color color);
};

class PicturePageFactory : public Factory {
public:
    void createPictureButton(Button&, int x, int y, int size_x, int size_y, Window& window);
};

class ColorPageFactory : public Factory {
public:
    void createColorButton(Button&, int x, int y, Window& window, sf::Color color);
};

class TaskPageFactory  : public Factory {
public:
    void createTaskButton(Button&, int x, int y, Window& window, sf::Color color);
};

