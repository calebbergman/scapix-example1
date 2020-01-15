// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <chat/session.h>
#import "Contact.h"
#import "Session.h"

@implementation Session

-(instancetype)init
{
	return scapix::bridge::objc::init<chat::session, void()>(self);
}

-(instancetype)initWithP1:(NSString*)p1
{
	return scapix::bridge::objc::init<chat::session, void(const std::basic_string<char> &)>(self, p1);
}

-(instancetype)initWithP1:(NSArray<NSString*>*)p1 p2:(int)p2 p3:(int)p3 p4:(int)p4 p5:(int)p5
{
	return scapix::bridge::objc::init<chat::session, void(std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >, int, int, int, int)>(self, p1, p2, p3, p4, p5);
}

-(instancetype)initWithP1:(int)p1 p2:(long long)p2
{
	return scapix::bridge::objc::init<chat::session, void(int, long long)>(self, p1, p2);
}

-(instancetype)initWithS1:(NSString*)s1 s2:(NSString*)s2 p3:(int)p3
{
	return scapix::bridge::objc::init<chat::session, void(std::basic_string<char> &&, std::basic_string<char> &&, const int &)>(self, s1, s2, p3);
}

-(instancetype)initWithS1:(NSString*)s1 s2:(NSString*)s2 p3:(int)p3 p4:(long long)p4
{
	return scapix::bridge::objc::init<chat::session, void(std::basic_string<char> &&, std::basic_string<char> &&, const int &, long long)>(self, s1, s2, p3, p4);
}

-(NSString*)string:(NSString*)filter
{
	return scapix::bridge::objc::call<std::basic_string<char>(chat::session::*)(std::basic_string<char>), &chat::session::string, NSString*>(self, filter);
}

-(void)testJavaKeyword:(int)package
{
	return scapix::bridge::objc::call<void(chat::session::*)(int), &chat::session::test_java_keyword, void>(self, package);
}

-(void)synchronized
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::synchronized, void>(self);
}

-(void)global
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::global, void>(self);
}

-(void)del
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::del, void>(self);
}

-(void)getHTTPRequest22
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::getHTTPRequest22, void>(self);
}

-(void)SetHTTP2Request3D
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::SetHTTP2Request_3D, void>(self);
}

-(void)SetHTTP2Request4d
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::SetHTTP2Request_4d, void>(self);
}

-(void)someCSharpName
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::someCSharpName, void>(self);
}

-(void)SomeNSStringName
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::_someNSStringName_, void>(self);
}

-(void)HELLOHTTP2A333De8
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::HELLO_HTTP2A333De8, void>(self);
}

-(void)HELLOHttp
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::HELLO_Http, void>(self);
}

-(Contact*)object:(Contact*)m
{
	return scapix::bridge::objc::call<std::shared_ptr<chat::contact>(chat::session::*)(std::shared_ptr<chat::contact>), &chat::session::object, Contact*>(self, m);
}

-(int)autoTest
{
	return scapix::bridge::objc::call<int(chat::session::*)(), &chat::session::auto_test, int>(self);
}

-(void)aliasTest:(NSString*)s1 s2:(NSString*)s2 i1:(int)i1 i2:(int)i2
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::basic_string<char>, std::basic_string<char>, int, int), &chat::session::alias_test, void>(self, s1, s2, i1, i2);
}

-(void)asyncConnect:(NSString*)host handler:(void(^)(NSString*))handler
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::basic_string<char>, std::function<void (std::basic_string<char>)>), &chat::session::async_connect, void>(self, host, handler);
}

-(NSArray<Contact*>*)contacts
{
	return scapix::bridge::objc::call<const std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > > &(chat::session::*)(), &chat::session::contacts, NSArray<Contact*>*>(self);
}

-(NSArray<Contact*>*)contacts:(NSString*)filter
{
	return scapix::bridge::objc::call<std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >(chat::session::*)(std::basic_string<char>), &chat::session::contacts, NSArray<Contact*>*>(self, filter);
}

-(NSDictionary<NSString*, Contact*>*)map:(NSDictionary<NSString*, Contact*>*)m
{
	return scapix::bridge::objc::call<std::map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >(chat::session::*)(std::map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >), &chat::session::map, NSDictionary<NSString*, Contact*>*>(self, m);
}

-(NSDictionary<NSNumber*, NSString*>*)map2:(NSDictionary<NSNumber*, NSString*>*)m
{
	return scapix::bridge::objc::call<std::map<int, std::basic_string<char>, std::less<int>, std::allocator<std::pair<const int, std::basic_string<char> > > >(chat::session::*)(std::map<int, std::basic_string<char>, std::less<int>, std::allocator<std::pair<const int, std::basic_string<char> > > >), &chat::session::map2, NSDictionary<NSNumber*, NSString*>*>(self, m);
}

-(NSDictionary<NSNumber*, NSNumber*>*)map3:(NSDictionary<NSNumber*, NSNumber*>*)m
{
	return scapix::bridge::objc::call<std::map<int, float, std::less<int>, std::allocator<std::pair<const int, float> > >(chat::session::*)(std::map<int, float, std::less<int>, std::allocator<std::pair<const int, float> > >), &chat::session::map3, NSDictionary<NSNumber*, NSNumber*>*>(self, m);
}

-(NSOrderedSet<NSString*>*)set:(NSOrderedSet<NSString*>*)s
{
	return scapix::bridge::objc::call<std::set<std::basic_string<char>, std::less<std::basic_string<char> >, std::allocator<std::basic_string<char> > >(chat::session::*)(std::set<std::basic_string<char>, std::less<std::basic_string<char> >, std::allocator<std::basic_string<char> > >), &chat::session::set, NSOrderedSet<NSString*>*>(self, s);
}

-(NSDictionary<NSString*, Contact*>*)unorderedMap:(NSDictionary<NSString*, Contact*>*)s
{
	return scapix::bridge::objc::call<std::unordered_map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >(chat::session::*)(std::unordered_map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >), &chat::session::unordered_map, NSDictionary<NSString*, Contact*>*>(self, s);
}

-(NSSet<NSString*>*)unorderedSet:(NSSet<NSString*>*)s
{
	return scapix::bridge::objc::call<std::unordered_set<std::basic_string<char>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::basic_string<char> > >(chat::session::*)(std::unordered_set<std::basic_string<char>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::basic_string<char> > >), &chat::session::unordered_set, NSSet<NSString*>*>(self, s);
}

-(NSArray<Contact*>*)tags:(NSArray<Contact*>*)tags
{
	return scapix::bridge::objc::call<std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >(chat::session::*)(std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >), &chat::session::tags, NSArray<Contact*>*>(self, tags);
}

-(NSArray<NSNumber*>*)ints:(NSArray<NSNumber*>*)ints
{
	return scapix::bridge::objc::call<std::vector<int, std::allocator<int> >(chat::session::*)(std::vector<int, std::allocator<int> >), &chat::session::ints, NSArray<NSNumber*>*>(self, ints);
}

-(NSArray<NSString*>*)strings:(NSArray<NSString*>*)p1
{
	return scapix::bridge::objc::call<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >(chat::session::*)(std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >), &chat::session::strings, NSArray<NSString*>*>(self, p1);
}

-(void)addContact:(Contact*)contact
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::shared_ptr<chat::contact>), &chat::session::add_contact, void>(self, contact);
}

-(void)removeContact:(Contact*)contact
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::shared_ptr<chat::contact>), &chat::session::remove_contact, void>(self, contact);
}

-(NSString*)sendMessage:(NSString*)message
{
	return scapix::bridge::objc::call<std::basic_string<char>(chat::session::*)(std::basic_string<char>), &chat::session::send_message, NSString*>(self, message);
}

-(void)sendMessage2:(NSString*)message count:(int)count
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::basic_string<char>, int), &chat::session::send_message2, void>(self, message, count);
}

-(NSString*)sendMessage3:(Contact*)contact message:(NSString*)message count:(int)count
{
	return scapix::bridge::objc::call<std::basic_string<char>(chat::session::*)(std::shared_ptr<chat::contact>, std::basic_string<char>, int), &chat::session::send_message3, NSString*>(self, contact, message, count);
}

-(void)close
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::close, void>(self);
}

-(Contact*)sample2
{
	return scapix::bridge::objc::call<std::shared_ptr<chat::contact>(chat::session::*)(), &chat::session::sample2, Contact*>(self);
}

-(Contact*)sample2:(BOOL)p1 p2:(short)p2 p3:(int)p3 p4:(float)p4 p5:(double)p5
{
	return scapix::bridge::objc::call<std::shared_ptr<chat::contact>(chat::session::*)(bool, short, int, float, double), &chat::session::sample2, Contact*>(self, p1, p2, p3, p4, p5);
}

+(void)sample
{
	return scapix::bridge::objc::call<void(), &chat::session::sample, void>();
}

+(int)sample:(NSString*)p1 p2:(NSArray<NSString*>*)p2
{
	return scapix::bridge::objc::call<int(std::basic_string<char>, std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >), &chat::session::sample, int>(p1, p2);
}

-(int)connect:(int(^)(NSString*, NSArray<Contact*>*))handler
{
	return scapix::bridge::objc::call<int(chat::session::*)(std::function<int (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>), &chat::session::connect, int>(self, handler);
}

-(void)connect2:(int(^)(NSString*, NSArray<Contact*>*))handler
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::function<int (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>), &chat::session::connect2, void>(self, handler);
}

-(void)connect3:(NSString*(^)(NSString*, NSArray<Contact*>*))handler
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::function<std::basic_string<char> (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>), &chat::session::connect3, void>(self, handler);
}

-(void)connect4:(NSString*(^)(int, NSArray<Contact*>*))handler
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::function<std::basic_string<char> (int, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>), &chat::session::connect4, void>(self, handler);
}

-(void)connect7:(NSArray<NSArray<void(^)(void)>*>*)p1
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::vector<std::vector<std::function<void ()>, std::allocator<std::function<void ()> > >, std::allocator<std::vector<std::function<void ()>, std::allocator<std::function<void ()> > > > >), &chat::session::connect7, void>(self, p1);
}

-(void)connect8:(NSArray<NSArray<NSString*>*>*)p1
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::vector<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >, std::allocator<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > > > >), &chat::session::connect8, void>(self, p1);
}

-(void)testException:(void(^)(void))callback
{
	return scapix::bridge::objc::call<void(chat::session::*)(std::function<void ()>), &chat::session::test_exception, void>(self, callback);
}

-(void)throwException
{
	return scapix::bridge::objc::call<void(chat::session::*)(), &chat::session::throw_exception, void>(self);
}

-(NSArray<NSString*>*)strings
{
	return scapix::bridge::objc::call<const std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > > &(chat::session::*)() const, &chat::session::strings, NSArray<NSString*>*>(self);
}

@end

@implementation Session2

-(instancetype)init
{
	return scapix::bridge::objc::init<chat::session2, void()>(self);
}

-(void)addContact:(Contact*)contact
{
	return scapix::bridge::objc::call<void(chat::session2::*)(std::shared_ptr<chat::contact>), &chat::session2::add_contact, void>(self, contact);
}

-(void)addSession:(Session*)session
{
	return scapix::bridge::objc::call<void(chat::session2::*)(std::shared_ptr<chat::session>), &chat::session2::add_session, void>(self, session);
}

-(void)addSession2:(Session2*)session
{
	return scapix::bridge::objc::call<void(chat::session2::*)(std::shared_ptr<chat::session2>), &chat::session2::add_session2, void>(self, session);
}

@end