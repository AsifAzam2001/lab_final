

/*

#include <iostream>

class Calculator
{
public:
    // Method for addition
    double add(double a, double b)
    {
        return a + b;
    }

    // Method for subtraction
    double subtract(double a, double b)
    {
        return a - b;
    }

    // Method for multiplication
    double multiply(double a, double b)
    {
        return a * b;
    }

    // Method for division
    double divide(double a, double b)
    {
        if (b == 0)
        {
            throw std::invalid_argument("Cannot divide by zero.");
        }
        return a / b;
    }
};

int main()
{
    Calculator calc;


    return 0;
}

*/


#include <iostream>

class Window
{
public:
    virtual void draw() = 0; 
};

class ScrollBar
{
public:
    virtual void draw() = 0; 
};

class WindowsWindow : public Window
{
public:
    void draw() override
    {
        std::cout << "Drawing a Windows window." << std::endl;
    }
};

class WindowsScrollBar : public ScrollBar
{
public:
    void draw() override
    {
        std::cout << "Drawing a Windows scrollbar." << std::endl;
    }
};

class LinuxWindow : public Window
{
public:
    void draw() override
    {
        std::cout << "Drawing a Linux window." << std::endl;
    }
};

class LinuxScrollBar : public ScrollBar
{
public:
    void draw() override
    {
        std::cout << "Drawing a Linux scrollbar." << std::endl;
    }
};

class GUIFactory
{
public:
    virtual Window *createWindow() = 0;     
    virtual ScrollBar *createScrollBar() = 0; 
};

class WindowsFactory : public GUIFactory
{
public:
    Window *createWindow() override
    {
        return new WindowsWindow(); 
    }

    ScrollBar *createScrollBar() override
    {
        return new WindowsScrollBar(); 
    }
};

class LinuxFactory : public GUIFactory
{
public:
    Window *createWindow() override
    {
        return new LinuxWindow(); 
    }

    ScrollBar *createScrollBar() override
    {
        return new LinuxScrollBar(); 
    }
};

int main()
{
    GUIFactory *factory = nullptr; 

    factory = new WindowsFactory();
    Window *win = factory->createWindow();
    ScrollBar *sb = factory->createScrollBar(); 

    win->draw();
    sb->draw();

    return 0;
}