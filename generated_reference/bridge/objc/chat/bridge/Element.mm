// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <chat/folder/element.h>
#import "Contact.h"
#import "Element.h"

@implementation Element

-(instancetype)init
{
	return scapix::bridge::objc::init<chat::folder::element, void()>(self);
}

-(void)func1
{
	return scapix::bridge::objc::call<void(chat::folder::element::*)(), &chat::folder::element::func1, void>(self);
}

-(void)func2:(Contact*)p1
{
	return scapix::bridge::objc::call<void(chat::folder::element::*)(std::shared_ptr<chat::contact>), &chat::folder::element::func2, void>(self, p1);
}

@end
