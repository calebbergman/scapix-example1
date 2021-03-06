// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <scapix/bridge/python/init.h>
#include <chat/session.h>

void scapix_python_export_session(pybind11::module& m)
{
	pybind11::class_<chat::session, std::shared_ptr<chat::session>>(m, "Session")
		.def(pybind11::init<>())
		.def(pybind11::init<const std::basic_string<char> &>())
		.def(pybind11::init<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >, int, int, int, int>())
		.def(pybind11::init<int, long long>())
		.def(pybind11::init<std::basic_string<char> &&, std::basic_string<char> &&, const int &>())
		.def(pybind11::init<std::basic_string<char> &&, std::basic_string<char> &&, const int &, long long>())
		.def<std::basic_string<char>(chat::session::*)(std::basic_string<char>)>("string", &chat::session::string)
		.def<void(chat::session::*)(int)>("test_java_keyword", &chat::session::test_java_keyword)
		.def<void(chat::session::*)()>("synchronized", &chat::session::synchronized)
		.def<void(chat::session::*)()>("global_", &chat::session::global)
		.def<void(chat::session::*)()>("del_", &chat::session::del)
		.def<void(chat::session::*)()>("get_http_request22", &chat::session::getHTTPRequest22)
		.def<void(chat::session::*)()>("set_http2_request_3d", &chat::session::SetHTTP2Request_3D)
		.def<void(chat::session::*)()>("set_http2_request_4d", &chat::session::SetHTTP2Request_4d)
		.def<void(chat::session::*)()>("some_c_sharp_name", &chat::session::someCSharpName)
		.def<void(chat::session::*)()>("_some_ns_string_name_", &chat::session::_someNSStringName_)
		.def<void(chat::session::*)()>("hello_http2a333_de8", &chat::session::HELLO_HTTP2A333De8)
		.def<void(chat::session::*)()>("hello_http", &chat::session::HELLO_Http)
		.def<std::shared_ptr<chat::contact>(chat::session::*)(std::shared_ptr<chat::contact>)>("object", &chat::session::object)
		.def<int(chat::session::*)()>("auto_test", &chat::session::auto_test)
		.def<void(chat::session::*)(std::basic_string<char>, std::basic_string<char>, int, int)>("alias_test", &chat::session::alias_test)
		.def<void(chat::session::*)(std::basic_string<char>, std::function<void (std::basic_string<char>)>)>("async_connect", &chat::session::async_connect)
		.def<const std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > > &(chat::session::*)()>("contacts", &chat::session::contacts)
		.def<std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >(chat::session::*)(std::basic_string<char>)>("contacts", &chat::session::contacts)
		.def<std::map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >(chat::session::*)(std::map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::less<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >)>("map", &chat::session::map)
		.def<std::map<int, std::basic_string<char>, std::less<int>, std::allocator<std::pair<const int, std::basic_string<char> > > >(chat::session::*)(std::map<int, std::basic_string<char>, std::less<int>, std::allocator<std::pair<const int, std::basic_string<char> > > >)>("map2", &chat::session::map2)
		.def<std::map<int, float, std::less<int>, std::allocator<std::pair<const int, float> > >(chat::session::*)(std::map<int, float, std::less<int>, std::allocator<std::pair<const int, float> > >)>("map3", &chat::session::map3)
		.def<std::set<std::basic_string<char>, std::less<std::basic_string<char> >, std::allocator<std::basic_string<char> > >(chat::session::*)(std::set<std::basic_string<char>, std::less<std::basic_string<char> >, std::allocator<std::basic_string<char> > >)>("set", &chat::session::set)
		.def<std::unordered_map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >(chat::session::*)(std::unordered_map<std::basic_string<char>, std::shared_ptr<chat::contact>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::pair<const std::basic_string<char>, std::shared_ptr<chat::contact> > > >)>("unordered_map", &chat::session::unordered_map)
		.def<std::unordered_set<std::basic_string<char>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::basic_string<char> > >(chat::session::*)(std::unordered_set<std::basic_string<char>, std::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> >, std::allocator<std::basic_string<char> > >)>("unordered_set", &chat::session::unordered_set)
		.def<std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >(chat::session::*)(std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>("tags", &chat::session::tags)
		.def<std::vector<int, std::allocator<int> >(chat::session::*)(std::vector<int, std::allocator<int> >)>("ints", &chat::session::ints)
		.def<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >(chat::session::*)(std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >)>("strings", &chat::session::strings)
		.def<void(chat::session::*)(std::shared_ptr<chat::contact>)>("add_contact", &chat::session::add_contact)
		.def<void(chat::session::*)(std::shared_ptr<chat::contact>)>("remove_contact", &chat::session::remove_contact)
		.def<std::basic_string<char>(chat::session::*)(std::basic_string<char>)>("send_message", &chat::session::send_message)
		.def<void(chat::session::*)(std::basic_string<char>, int)>("send_message2", &chat::session::send_message2)
		.def<std::basic_string<char>(chat::session::*)(std::shared_ptr<chat::contact>, std::basic_string<char>, int)>("send_message3", &chat::session::send_message3)
		.def<void(chat::session::*)()>("close", &chat::session::close)
		.def<std::shared_ptr<chat::contact>(chat::session::*)()>("sample2", &chat::session::sample2)
		.def<std::shared_ptr<chat::contact>(chat::session::*)(bool, short, int, float, double)>("sample2", &chat::session::sample2)
		.def_static<void(*)()>("sample", &chat::session::sample)
		.def_static<int(*)(std::basic_string<char>, std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >)>("sample", &chat::session::sample)
		.def<int(chat::session::*)(std::function<int (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>)>("connect", &chat::session::connect)
		.def<void(chat::session::*)(std::function<int (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>)>("connect2", &chat::session::connect2)
		.def<void(chat::session::*)(std::function<std::basic_string<char> (std::basic_string<char>, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>)>("connect3", &chat::session::connect3)
		.def<void(chat::session::*)(std::function<std::basic_string<char> (int, std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >)>)>("connect4", &chat::session::connect4)
		.def<void(chat::session::*)(std::vector<std::vector<std::function<void ()>, std::allocator<std::function<void ()> > >, std::allocator<std::vector<std::function<void ()>, std::allocator<std::function<void ()> > > > >)>("connect7", &chat::session::connect7)
		.def<void(chat::session::*)(std::vector<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > >, std::allocator<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > > > >)>("connect8", &chat::session::connect8)
		.def<void(chat::session::*)(std::function<void ()>)>("test_exception", &chat::session::test_exception)
		.def<void(chat::session::*)()>("throw_exception", &chat::session::throw_exception)
		.def<const std::vector<std::basic_string<char>, std::allocator<std::basic_string<char> > > &(chat::session::*)() const>("strings", &chat::session::strings)
	;

	pybind11::class_<chat::session2, std::shared_ptr<chat::session2>>(m, "Session2")
		.def(pybind11::init<>())
		.def<void(chat::session2::*)(std::shared_ptr<chat::contact>)>("add_contact", &chat::session2::add_contact)
		.def<void(chat::session2::*)(std::shared_ptr<chat::session>)>("add_session", &chat::session2::add_session)
		.def<void(chat::session2::*)(std::shared_ptr<chat::session2>)>("add_session2", &chat::session2::add_session2)
	;
}
