#include "Factories.h"
#include "../Constants/Constants.h"

void MainPageFactory::createBoardButton(Button& BoardButton, int x, int y, Window& window) {
    BoardButton.setAll("add Board", height_of_button_text, 400, 180, white, blue, x, y, window);
}

void BoardPageFactory::createMenuButton(Button& MenuButton, Window& window) {
    MenuButton.setAll("Menu", height_of_button_text,200, 100, white, blue, 1500, 700, window);
}

void Factory::createBackButton(Button& BackButton, Window& window, int x, int y) {
    BackButton.setAll("Back", height_of_button_text,200, 100, white, blue, x, y, window);
}

void MenuPageFactory::createWidgetButton(Button& button, Window& window, std::string button_text, int x, int y) {
    button.setAll(button_text, height_of_button_text, 1300, 80, white, blue, x, y, window);
}

void PositionsPageFactory::createPositionButton(Button& PositionButton, int x, int y, Window& window) {
    PositionButton.setAll("this", 80, 400, 180, white, blue, x, y, window);
}

void PicturePageFactory::createPictureButton(Button & PictureButton, int x, int y, int size_x, int size_y, Window &window) {
    PictureButton.setAll(size_x, size_y, white, x, y, window);
}

void ColorPageFactory::createColorButton(Button& PositionButton, int x, int y, Window& window, sf::Color color) {
    PositionButton.setAll("this", 80, 400, 180, black, color, x, y, window);
}

void TaskPageFactory::createTaskButton(Button& TaskButton, int x, int y, Window& window, sf::Color color) {
    TaskButton.setAll("", height_of_button_text, 30, 30, black, color, x, y, window);
}

void CalendarPageFactory::createTaskButton(Button& TaskButton, int x, int y, Window& window, sf::Color color) {
    TaskButton.setAll("", height_of_button_text, 40, 40, black, color, x, y, window);
}


