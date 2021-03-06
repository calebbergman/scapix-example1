// Generated by Scapix Language Bridge
// https://www.scapix.com

#import "scapix/bridge/objc/BridgeObject.h"

NS_ASSUME_NONNULL_BEGIN

@class Contact;
@class Session2;

@interface Session : BridgeObject

-(instancetype)init;
-(instancetype)initWithP1:(NSString*)p1;
-(instancetype)initWithP1:(NSArray<NSString*>*)p1 p2:(int)p2 p3:(int)p3 p4:(int)p4 p5:(int)p5;
//-(instancetype)initWithP1:(int)p1;
-(instancetype)initWithP1:(int)p1 p2:(long long)p2;
//-(instancetype)initWithS1:(NSString*)s1 s2:(NSString*)s2;
-(instancetype)initWithS1:(NSString*)s1 s2:(NSString*)s2 p3:(int)p3;
-(instancetype)initWithS1:(NSString*)s1 s2:(NSString*)s2 p3:(int)p3 p4:(long long)p4;
//-(instancetype)initWithS1:(NSString*)s1 s2:(NSString*)s2 p3:(NSString*)p3;
//-(instancetype)initWithCallback:(void(^)(void))callback;

-(NSString*)string:(NSString*)filter;
//-(NSString*)string:(NSString*)filter;
//-(!UNKNOWN!)string:(!UNKNOWN!)filter;
//-(NSString*)string:(NSString*)filter;
//-(NSString*)string:(NSString*)filter;
//-(NSString*)string:(NSString*)filter;
-(void)testJavaKeyword:(int)package;
-(void)synchronized;
-(void)global;
-(void)del;
-(void)getHTTPRequest22;
-(void)SetHTTP2Request3D;
-(void)SetHTTP2Request4d;
-(void)someCSharpName;
-(void)SomeNSStringName;
-(void)HELLOHTTP2A333De8;
-(void)HELLOHttp;
-(Contact*)object:(Contact*)m;
//-(NSString*)object:(NSString*)m;
//-(int)object:(int)m;
//-(void)testEnum:(!UNKNOWN!)p1;
-(int)autoTest;
//-(!UNKNOWN!)autoTest2;
//-(!UNKNOWN!)testUnsupportedParamType;
//-(void)testUnsupportedParamType:(int)p1 p2:(!UNKNOWN!)p2;
//-(void)testUnsupportedParamType:(NSString*)p1 p2:(!UNKNOWN!)p2;
-(void)aliasTest:(NSString*)s1 s2:(NSString*)s2 i1:(int)i1 i2:(int)i2;
-(void)asyncConnect:(NSString*)host handler:(void(^)(NSString*))handler;
-(NSArray<Contact*>*)contacts;
-(NSArray<Contact*>*)contacts:(NSString*)filter;
-(NSDictionary<NSString*, Contact*>*)map:(NSDictionary<NSString*, Contact*>*)m;
//-(NSDictionary<NSString*, NSString*>*)map:(NSDictionary<NSString*, NSString*>*)m;
-(NSDictionary<NSNumber*, NSString*>*)map2:(NSDictionary<NSNumber*, NSString*>*)m;
-(NSDictionary<NSNumber*, NSNumber*>*)map3:(NSDictionary<NSNumber*, NSNumber*>*)m;
-(NSOrderedSet<NSString*>*)set:(NSOrderedSet<NSString*>*)s;
-(NSDictionary<NSString*, Contact*>*)unorderedMap:(NSDictionary<NSString*, Contact*>*)s;
-(NSSet<NSString*>*)unorderedSet:(NSSet<NSString*>*)s;
-(NSArray<Contact*>*)tags:(NSArray<Contact*>*)tags;
-(NSArray<NSNumber*>*)ints:(NSArray<NSNumber*>*)ints;
-(NSArray<NSString*>*)strings:(NSArray<NSString*>*)p1;
-(void)addContact:(Contact*)contact;
-(void)removeContact:(Contact*)contact;
-(NSString*)sendMessage:(NSString*)message;
-(void)sendMessage2:(NSString*)message count:(int)count;
-(NSString*)sendMessage3:(Contact*)contact message:(NSString*)message count:(int)count;
-(void)close;
-(Contact*)sample2;
-(Contact*)sample2:(BOOL)p1 p2:(short)p2 p3:(int)p3 p4:(float)p4 p5:(double)p5;
+(void)sample;
+(int)sample:(NSString*)p1 p2:(NSArray<NSString*>*)p2;
-(int)connect:(int(^)(NSString*, NSArray<Contact*>*))handler;
-(void)connect2:(int(^)(NSString*, NSArray<Contact*>*))handler;
-(void)connect3:(NSString*(^)(NSString*, NSArray<Contact*>*))handler;
-(void)connect4:(NSString*(^)(int, NSArray<Contact*>*))handler;
-(void)connect7:(NSArray<NSArray<void(^)(void)>*>*)p1;
-(void)connect8:(NSArray<NSArray<NSString*>*>*)p1;
-(void)testException:(void(^)(void))callback;
-(void)throwException;
-(NSArray<NSString*>*)strings;

@end

@interface Session2 : BridgeObject

-(instancetype)init;

-(void)addContact:(Contact*)contact;
-(void)addSession:(Session*)session;
-(void)addSession2:(Session2*)session;

@end

NS_ASSUME_NONNULL_END
