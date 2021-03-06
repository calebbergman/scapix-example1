// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <chat/model.h>
#import "Contact.h"
#import "Model.h"
#import "Session.h"

@implementation Model

-(instancetype)init
{
	return scapix::bridge::objc::init<chat::model, void()>(self);
}

-(void)connect:(NSString*)id password:(NSString*)password
{
	return scapix::bridge::objc::call<void(chat::model::*)(std::basic_string<char>, std::basic_string<char>), &chat::model::connect, void>(self, id, password);
}

-(void)disconnect
{
	return scapix::bridge::objc::call<void(chat::model::*)(), &chat::model::disconnect, void>(self);
}

-(NSArray<Contact*>*)friends
{
	return scapix::bridge::objc::call<const std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > > &(chat::model::*)(), &chat::model::friends, NSArray<Contact*>*>(self);
}

-(NSArray<Contact*>*)friends:(NSString*)filter
{
	return scapix::bridge::objc::call<std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >(chat::model::*)(std::basic_string<char>), &chat::model::friends, NSArray<Contact*>*>(self, filter);
}

-(void)addFriend:(Contact*)contact
{
	return scapix::bridge::objc::call<void(chat::model::*)(std::shared_ptr<chat::contact>), &chat::model::add_friend, void>(self, contact);
}

-(void)removeFriend:(Contact*)contact
{
	return scapix::bridge::objc::call<void(chat::model::*)(std::shared_ptr<chat::contact>), &chat::model::remove_friend, void>(self, contact);
}

-(NSArray<Session*>*)sessions
{
	return scapix::bridge::objc::call<const std::vector<std::shared_ptr<chat::session>, std::allocator<std::shared_ptr<chat::session> > > &(chat::model::*)(), &chat::model::sessions, NSArray<Session*>*>(self);
}

-(Session*)sessionWithContact:(Contact*)contact
{
	return scapix::bridge::objc::call<std::shared_ptr<chat::session>(chat::model::*)(std::shared_ptr<chat::contact>), &chat::model::session_with_contact, Session*>(self, contact);
}

@end
