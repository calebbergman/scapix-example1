// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <scapix/bridge/java/init.h>
#include <chat/session.h>

namespace scapix {
namespace link {
namespace java {

template <>
struct class_name<chat::session>
{
	using type = SCAPIX_META_STRING("com/scapix/chat/Session");
};

template <>
struct class_name<chat::session2>
{
	using type = SCAPIX_META_STRING("com/scapix/chat/Session2");
};

template <>
struct class_name<chat::contact>
{
	using type = SCAPIX_META_STRING("com/scapix/chat/Contact");
};

} // namespace java
} // namespace link
} // namespace scapix

void scapix_java_export_session()
{
	scapix::link::java::native_methods
	<
		scapix::link::java::class_name_t<chat::session>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("_init"),
			void(),
			void(scapix::bridge::java::init<chat::session>::*)(),
			&scapix::bridge::java::init<chat::session>::create
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("_init"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>),
			void(scapix::bridge::java::init<chat::session>::*)(const std::basic_string<char> &),
			&scapix::bridge::java::init<chat::session>::create
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("_init"),
			void(scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("java/lang/String")>>, jint, jint, jint, jint),
			void(scapix::bridge::java::init<chat::session>::*)(std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >, int, int, int, int),
			&scapix::bridge::java::init<chat::session>::create
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("_init"),
			void(jint, jlong),
			void(scapix::bridge::java::init<chat::session>::*)(int, long long),
			&scapix::bridge::java::init<chat::session>::create
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("_init"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, jint),
			void(scapix::bridge::java::init<chat::session>::*)(std::basic_string<char> &&, std::basic_string<char> &&, const int &),
			&scapix::bridge::java::init<chat::session>::create
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("_init"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, jint, jlong),
			void(scapix::bridge::java::init<chat::session>::*)(std::basic_string<char> &&, std::basic_string<char> &&, const int &, long long),
			&scapix::bridge::java::init<chat::session>::create
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("string"),
			scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>),
			std::basic_string<char>(chat::session::*)(std::basic_string<char>),
			&chat::session::string
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("testJavaKeyword"),
			void(jint),
			void(chat::session::*)(int),
			&chat::session::test_java_keyword
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("synchronized_"),
			void(),
			void(chat::session::*)(),
			&chat::session::synchronized
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("global"),
			void(),
			void(chat::session::*)(),
			&chat::session::global
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("del"),
			void(),
			void(chat::session::*)(),
			&chat::session::del
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("getHTTPRequest22"),
			void(),
			void(chat::session::*)(),
			&chat::session::getHTTPRequest22
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("SetHTTP2Request3D"),
			void(),
			void(chat::session::*)(),
			&chat::session::SetHTTP2Request_3D
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("SetHTTP2Request4d"),
			void(),
			void(chat::session::*)(),
			&chat::session::SetHTTP2Request_4d
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("someCSharpName"),
			void(),
			void(chat::session::*)(),
			&chat::session::someCSharpName
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("SomeNSStringName"),
			void(),
			void(chat::session::*)(),
			&chat::session::_someNSStringName_
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("HELLOHTTP2A333De8"),
			void(),
			void(chat::session::*)(),
			&chat::session::HELLO_HTTP2A333De8
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("HELLOHttp"),
			void(),
			void(chat::session::*)(),
			&chat::session::HELLO_Http
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("object"),
			scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>(scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>),
			std::shared_ptr<chat::contact>(chat::session::*)(std::shared_ptr<chat::contact>),
			&chat::session::object
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("autoTest"),
			jint(),
			int(chat::session::*)(),
			&chat::session::auto_test
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("aliasTest"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, jint, jint),
			void(chat::session::*)(std::basic_string<char>, std::basic_string<char>, int, int),
			&chat::session::alias_test
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("asyncConnect"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, scapix::link::java::ref<scapix::link::java::function<SCAPIX_META_STRING("com/scapix/chat/Session$Function0"), void(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>)>>),
			void(chat::session::*)(std::basic_string<char>, std::function<void (std::basic_string<char>)>),
			&chat::session::async_connect
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("contacts"),
			scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("com/scapix/chat/Contact")>>(),
			const std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > > &(chat::session::*)(),
			&chat::session::contacts
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("contacts"),
			scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("com/scapix/chat/Contact")>>(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>),
			std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >(chat::session::*)(std::basic_string<char>),
			&chat::session::contacts
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("map"),
			scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/TreeMap"), SCAPIX_META_STRING("java/lang/String"), SCAPIX_META_STRING("com/scapix/chat/Contact")>>(scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/TreeMap"), SCAPIX_META_STRING("java/lang/String"), SCAPIX_META_STRING("com/scapix/chat/Contact")>>),
			std::map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >(chat::session::*)(std::map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >),
			&chat::session::map
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("map2"),
			scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/TreeMap"), SCAPIX_META_STRING("java/lang/Integer"), SCAPIX_META_STRING("java/lang/String")>>(scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/TreeMap"), SCAPIX_META_STRING("java/lang/Integer"), SCAPIX_META_STRING("java/lang/String")>>),
			std::map<int, std::basic_string<char>, std::less<int>, std::allocator<std::pair<const int, std::basic_string<char> > > >(chat::session::*)(std::map<int, std::basic_string<char>, std::less<int>, std::allocator<std::pair<const int, std::basic_string<char> > > >),
			&chat::session::map2
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("map3"),
			scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/TreeMap"), SCAPIX_META_STRING("java/lang/Integer"), SCAPIX_META_STRING("java/lang/Float")>>(scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/TreeMap"), SCAPIX_META_STRING("java/lang/Integer"), SCAPIX_META_STRING("java/lang/Float")>>),
			std::map<int, float, std::less<int>, std::allocator<std::pair<const int, float> > >(chat::session::*)(std::map<int, float, std::less<int>, std::allocator<std::pair<const int, float> > >),
			&chat::session::map3
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("set"),
			scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/TreeSet"), SCAPIX_META_STRING("java/lang/String")>>(scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/TreeSet"), SCAPIX_META_STRING("java/lang/String")>>),
			std::set<std::basic_string<char>, std::less<std::basic_string<char> >, std::allocator<std::basic_string<char> > >(chat::session::*)(std::set<std::basic_string<char>, std::less<std::basic_string<char> >, std::allocator<std::basic_string<char> > >),
			&chat::session::set
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("unorderedMap"),
			scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/HashMap"), SCAPIX_META_STRING("java/lang/String"), SCAPIX_META_STRING("com/scapix/chat/Contact")>>(scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/HashMap"), SCAPIX_META_STRING("java/lang/String"), SCAPIX_META_STRING("com/scapix/chat/Contact")>>),
			std::unordered_map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >(chat::session::*)(std::unordered_map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >),
			&chat::session::unordered_map
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("unorderedSet"),
			scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/HashSet"), SCAPIX_META_STRING("java/lang/String")>>(scapix::link::java::ref<scapix::link::java::generic_type<SCAPIX_META_STRING("java/util/HashSet"), SCAPIX_META_STRING("java/lang/String")>>),
			std::unordered_set<std::basic_string<char>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::basic_string<char> > >(chat::session::*)(std::unordered_set<std::basic_string<char>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::basic_string<char> > >),
			&chat::session::unordered_set
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("tags"),
			scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("com/scapix/chat/Contact")>>(scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("com/scapix/chat/Contact")>>),
			std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >(chat::session::*)(std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >),
			&chat::session::tags
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("ints"),
			scapix::link::java::ref<scapix::link::java::array<jint>>(scapix::link::java::ref<scapix::link::java::array<jint>>),
			std::vector<int, std::allocator<int> >(chat::session::*)(std::vector<int, std::allocator<int> >),
			&chat::session::ints
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("strings"),
			scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("java/lang/String")>>(scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("java/lang/String")>>),
			std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >(chat::session::*)(std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >),
			&chat::session::strings
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("addContact"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>),
			void(chat::session::*)(std::shared_ptr<chat::contact>),
			&chat::session::add_contact
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("removeContact"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>),
			void(chat::session::*)(std::shared_ptr<chat::contact>),
			&chat::session::remove_contact
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("sendMessage"),
			scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>),
			std::basic_string<char>(chat::session::*)(std::basic_string<char>),
			&chat::session::send_message
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("sendMessage2"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, jint),
			void(chat::session::*)(std::basic_string<char>, int),
			&chat::session::send_message2
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("sendMessage3"),
			scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>(scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>, scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, jint),
			std::basic_string<char>(chat::session::*)(std::shared_ptr<chat::contact>, std::basic_string<char>, int),
			&chat::session::send_message3
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("close"),
			void(),
			void(chat::session::*)(),
			&chat::session::close
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("sample2"),
			scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>(),
			std::shared_ptr<chat::contact>(chat::session::*)(),
			&chat::session::sample2
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("sample2"),
			scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>(jboolean, jshort, jint, jfloat, jdouble),
			std::shared_ptr<chat::contact>(chat::session::*)(bool, short, int, float, double),
			&chat::session::sample2
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("sample"),
			void(),
			void(),
			&chat::session::sample
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("sample"),
			jint(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("java/lang/String")>>),
			int(std::basic_string<char>, std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >),
			&chat::session::sample
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("connect"),
			jint(scapix::link::java::ref<scapix::link::java::function<SCAPIX_META_STRING("com/scapix/chat/Session$Function1"), jint(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("com/scapix/chat/Contact")>>)>>),
			int(chat::session::*)(std::function<int (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>),
			&chat::session::connect
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("connect2"),
			void(scapix::link::java::ref<scapix::link::java::function<SCAPIX_META_STRING("com/scapix/chat/Session$Function1"), jint(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("com/scapix/chat/Contact")>>)>>),
			void(chat::session::*)(std::function<int (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>),
			&chat::session::connect2
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("connect3"),
			void(scapix::link::java::ref<scapix::link::java::function<SCAPIX_META_STRING("com/scapix/chat/Session$Function2"), scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>(scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>, scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("com/scapix/chat/Contact")>>)>>),
			void(chat::session::*)(std::function<std::basic_string<char> (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>),
			&chat::session::connect3
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("connect4"),
			void(scapix::link::java::ref<scapix::link::java::function<SCAPIX_META_STRING("com/scapix/chat/Session$Function3"), scapix::link::java::ref<SCAPIX_META_STRING("java/lang/String")>(jint, scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("com/scapix/chat/Contact")>>)>>),
			void(chat::session::*)(std::function<std::basic_string<char> (int, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>),
			&chat::session::connect4
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("connect7"),
			void(scapix::link::java::ref<scapix::link::java::array<scapix::link::java::array<scapix::link::java::function<SCAPIX_META_STRING("com/scapix/chat/Session$Function4"), void()>>>>),
			void(chat::session::*)(std::vector<std::vector<std::function<void ()>, std::allocator<std::function<void ()> > >, std::allocator<std::vector<std::function<void ()>, std::allocator<std::function<void ()> > > > >),
			&chat::session::connect7
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("connect8"),
			void(scapix::link::java::ref<scapix::link::java::array<scapix::link::java::array<SCAPIX_META_STRING("java/lang/String")>>>),
			void(chat::session::*)(std::vector<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >, std::allocator<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > > > >),
			&chat::session::connect8
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("testException"),
			void(scapix::link::java::ref<scapix::link::java::function<SCAPIX_META_STRING("com/scapix/chat/Session$Function4"), void()>>),
			void(chat::session::*)(std::function<void ()>),
			&chat::session::test_exception
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("throwException"),
			void(),
			void(chat::session::*)(),
			&chat::session::throw_exception
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("strings"),
			scapix::link::java::ref<scapix::link::java::array<SCAPIX_META_STRING("java/lang/String")>>(),
			const std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > > &(chat::session::*)() const,
			&chat::session::strings
		>
	>::register_();

	scapix::link::java::native_methods
	<
		scapix::link::java::class_name_t<chat::session2>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("_init"),
			void(),
			void(scapix::bridge::java::init<chat::session2>::*)(),
			&scapix::bridge::java::init<chat::session2>::create
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("addContact"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>),
			void(chat::session2::*)(std::shared_ptr<chat::contact>),
			&chat::session2::add_contact
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("addSession"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Session")>),
			void(chat::session2::*)(std::shared_ptr<chat::session>),
			&chat::session2::add_session
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("addSession2"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Session2")>),
			void(chat::session2::*)(std::shared_ptr<chat::session2>),
			&chat::session2::add_session2
		>
	>::register_();
}
