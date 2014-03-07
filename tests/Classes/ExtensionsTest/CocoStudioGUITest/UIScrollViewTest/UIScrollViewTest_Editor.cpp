

#include "UIScrollViewTest_Editor.h"


// UIScrollViewTest_Vertical_Editor

UIScrollViewTest_Vertical_Editor::UIScrollViewTest_Vertical_Editor()
{
    
}

UIScrollViewTest_Vertical_Editor::~UIScrollViewTest_Vertical_Editor()
{
    
}

bool UIScrollViewTest_Vertical_Editor::init()
{
    if (UIScene_Editor::init())
    {
        _layout = static_cast<Layout*>(cocostudio::GUIReader::getInstance()->widgetFromJsonFile("cocosgui/UIEditorTest/UIScrollView_Editor/UIScrollView_Vertical_Editor/ui_scrollview_editor_1.json"));
        _touchGroup->addChild(_layout);
        Size screenSize = CCDirector::getInstance()->getWinSize();
        Size rootSize = _layout->getSize();
        _touchGroup->setPosition(Point((screenSize.width - rootSize.width) / 2,
                                       (screenSize.height - rootSize.height) / 2));
        
        Layout* root = static_cast<Layout*>(_layout->getChildByName("root_Panel"));
        
        Text* back_label = static_cast<Text*>(Helper::seekWidgetByName(root, "back"));
        back_label->addTouchEventListener(this, toucheventselector(UIScene_Editor::toGUIEditorTestScene));
        
        _sceneTitle = static_cast<Text*>(Helper::seekWidgetByName(root, "UItest"));
        
        Button* left_button = Button::create();
        left_button->loadTextures("images/b1.png", "images/b2.png", "");
        left_button->setPosition(Point(_layout->getSize().width / 2 - left_button->getSize().width,
                                     left_button->getSize().height * 0.625));
        left_button->setTouchEnabled(true);
        left_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::previousCallback));
        left_button->setZOrder(_layout->getZOrder() + 1);
        _layout->addChild(left_button);
        
        Button* right_button = Button::create();
        right_button->loadTextures("images/f1.png", "images/f2.png", "");
        right_button->setPosition(Point(_layout->getSize().width / 2 + right_button->getSize().width,
                                      right_button->getSize().height * 0.625));
        right_button->setTouchEnabled(true);
        right_button->setZOrder(_layout->getZOrder() + 1);
        right_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::nextCallback));
        _layout->addChild(right_button);
        
        return true;
    }
    
    return false;
}


// UIScrollViewTest_Horizontal_Editor

UIScrollViewTest_Horizontal_Editor::UIScrollViewTest_Horizontal_Editor()
{
    
}

UIScrollViewTest_Horizontal_Editor::~UIScrollViewTest_Horizontal_Editor()
{
    
}

bool UIScrollViewTest_Horizontal_Editor::init()
{
    if (UIScene_Editor::init())
    {
        _layout = static_cast<Layout*>(cocostudio::GUIReader::getInstance()->widgetFromJsonFile("cocosgui/UIEditorTest/UIScrollView_Editor/UIScrollView_Horizontal_Editor/ui_scrollview_horizontal_editor_1.json"));
        _touchGroup->addChild(_layout);
        Size screenSize = CCDirector::getInstance()->getWinSize();
        Size rootSize = _layout->getSize();
        _touchGroup->setPosition(Point((screenSize.width - rootSize.width) / 2,
                                        (screenSize.height - rootSize.height) / 2));
        
        Layout* root = static_cast<Layout*>(_layout->getChildByName("root_Panel"));
        
        Text* back_label = static_cast<Text*>(Helper::seekWidgetByName(root, "back"));
        back_label->addTouchEventListener(this, toucheventselector(UIScene_Editor::toGUIEditorTestScene));
        
        _sceneTitle = static_cast<Text*>(Helper::seekWidgetByName(root, "UItest"));
        
        Button* left_button = Button::create();
        left_button->loadTextures("images/b1.png", "images/b2.png", "");
        left_button->setPosition(Point(_layout->getSize().width / 2 - left_button->getSize().width,
                                     left_button->getSize().height * 0.625));
        left_button->setTouchEnabled(true);
        left_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::previousCallback));
        left_button->setZOrder(_layout->getZOrder() + 1);
        _layout->addChild(left_button);
        
        Button* right_button = Button::create();
        right_button->loadTextures("images/f1.png", "images/f2.png", "");
        right_button->setPosition(Point(_layout->getSize().width / 2 + right_button->getSize().width,
                                      right_button->getSize().height * 0.625));
        right_button->setTouchEnabled(true);
        right_button->setZOrder(_layout->getZOrder() + 1);
        right_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::nextCallback));
        _layout->addChild(right_button);
        
        return true;
    }
    
    return false;
}


// UIScrollViewTest_Both_Editor

UIScrollViewTest_Both_Editor::UIScrollViewTest_Both_Editor()
{
    
}

UIScrollViewTest_Both_Editor::~UIScrollViewTest_Both_Editor()
{
    
}

bool UIScrollViewTest_Both_Editor::init()
{
    if (UIScene_Editor::init())
    {
        _layout = static_cast<Layout*>(cocostudio::GUIReader::getInstance()->widgetFromJsonFile("cocosgui/UIEditorTest/UIScrollView_Editor/UIScrollView_Both_Editor/ui_scrollview_both_editor_1.json"));
        _touchGroup->addChild(_layout);
        Size screenSize = CCDirector::getInstance()->getWinSize();
        Size rootSize = _layout->getSize();
        _touchGroup->setPosition(Point((screenSize.width - rootSize.width) / 2,
                                        (screenSize.height - rootSize.height) / 2));
        
        Layout* root = static_cast<Layout*>(_layout->getChildByName("root_Panel"));
        
        Text* back_label = static_cast<Text*>(Helper::seekWidgetByName(root, "back"));
        back_label->addTouchEventListener(this, toucheventselector(UIScene_Editor::toGUIEditorTestScene));
        
        _sceneTitle = static_cast<Text*>(Helper::seekWidgetByName(root, "UItest"));
        
        Button* left_button = Button::create();
        left_button->loadTextures("images/b1.png", "images/b2.png", "");
        left_button->setPosition(Point(_layout->getSize().width / 2 - left_button->getSize().width,
                                     left_button->getSize().height * 0.625));
        left_button->setTouchEnabled(true);
        left_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::previousCallback));
        left_button->setZOrder(_layout->getZOrder() + 1);
        _layout->addChild(left_button);
        
        Button* right_button = Button::create();
        right_button->loadTextures("images/f1.png", "images/f2.png", "");
        right_button->setPosition(Point(_layout->getSize().width / 2 + right_button->getSize().width,
                                      right_button->getSize().height * 0.625));
        right_button->setTouchEnabled(true);
        right_button->setZOrder(_layout->getZOrder() + 1);
        right_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::nextCallback));
        _layout->addChild(right_button);
        
        return true;
    }
    
    return false;
}


// UIScrollViewTest_ScrollToPercentBothDirection_Editor

UIScrollViewTest_ScrollToPercentBothDirection_Editor::UIScrollViewTest_ScrollToPercentBothDirection_Editor()
{
    
}

UIScrollViewTest_ScrollToPercentBothDirection_Editor::~UIScrollViewTest_ScrollToPercentBothDirection_Editor()
{
    
}

bool UIScrollViewTest_ScrollToPercentBothDirection_Editor::init()
{
    if (UIScene_Editor::init())
    {
        _layout = static_cast<Layout*>(cocostudio::GUIReader::getInstance()->widgetFromJsonFile("cocosgui/UITest/UITest.json"));
        _touchGroup->addChild(_layout);
        Size screenSize = CCDirector::getInstance()->getWinSize();
        Size rootSize = _layout->getSize();
        _touchGroup->setPosition(Point((screenSize.width - rootSize.width) / 2,
                                        (screenSize.height - rootSize.height) / 2));
        
        Layout* root = static_cast<Layout*>(_layout->getChildByName("root_Panel"));
        
        Text* back_label = static_cast<Text*>(Helper::seekWidgetByName(root, "back"));
        back_label->addTouchEventListener(this, toucheventselector(UIScene_Editor::toGUIEditorTestScene));
        
        _sceneTitle = static_cast<Text*>(Helper::seekWidgetByName(root, "UItest"));
        
        Button* left_button = static_cast<Button*>(Helper::seekWidgetByName(root, "left_Button"));
        left_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::previousCallback));
        
        Button* middle_button = static_cast<Button*>(Helper::seekWidgetByName(root, "middle_Button"));
        middle_button->setVisible(false);
        
        Button* right_button = static_cast<Button*>(Helper::seekWidgetByName(root, "right_Button"));
        right_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::nextCallback));
        
        return true;
    }
    
    return false;
}


// UIScrollViewTest_ScrollToPercentBothDirection_Bounce_Editor

UIScrollViewTest_ScrollToPercentBothDirection_Bounce_Editor::UIScrollViewTest_ScrollToPercentBothDirection_Bounce_Editor()
{
    
}

UIScrollViewTest_ScrollToPercentBothDirection_Bounce_Editor::~UIScrollViewTest_ScrollToPercentBothDirection_Bounce_Editor()
{
    
}

bool UIScrollViewTest_ScrollToPercentBothDirection_Bounce_Editor::init()
{
    if (UIScene_Editor::init())
    {
        _layout = static_cast<Layout*>(cocostudio::GUIReader::getInstance()->widgetFromJsonFile("cocosgui/UITest/UITest.json"));
        _touchGroup->addChild(_layout);
        Size screenSize = CCDirector::getInstance()->getWinSize();
        Size rootSize = _layout->getSize();
        _touchGroup->setPosition(Point((screenSize.width - rootSize.width) / 2,
                                        (screenSize.height - rootSize.height) / 2));
        
        Layout* root = static_cast<Layout*>(_layout->getChildByName("root_Panel"));
        
        Text* back_label = static_cast<Text*>(Helper::seekWidgetByName(root, "back"));
        back_label->addTouchEventListener(this, toucheventselector(UIScene_Editor::toGUIEditorTestScene));
        
        _sceneTitle = static_cast<Text*>(Helper::seekWidgetByName(root, "UItest"));
        
        Button* left_button = static_cast<Button*>(Helper::seekWidgetByName(root, "left_Button"));
        left_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::previousCallback));
        
        Button* middle_button = static_cast<Button*>(Helper::seekWidgetByName(root, "middle_Button"));
        middle_button->setVisible(false);
        
        Button* right_button = static_cast<Button*>(Helper::seekWidgetByName(root, "right_Button"));
        right_button->addTouchEventListener(this, toucheventselector(UIScene_Editor::nextCallback));
        
        return true;
    }
    
    return false;
}