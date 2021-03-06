// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <scapix/bridge/js/init.h>
#include <chat/extended_contact.h>

EMSCRIPTEN_BINDINGS(scapix_extended_contact)
{
	emscripten::class_<chat::extended_contact, emscripten::base<chat::contact>>("ExtendedContact")
		.smart_ptr<std::shared_ptr<chat::extended_contact>>("shared_ptr<chat::extended_contact>")
		.constructor(&std::make_shared<chat::extended_contact, const std::basic_string<char> &, const std::basic_string<char> &>)
		.constructor(&std::make_shared<chat::extended_contact, int>)
		.constructor(&std::make_shared<chat::extended_contact>)
		.function("test", scapix::link::js::function<void(chat::extended_contact::*)(std::basic_string<char>, std::shared_ptr<chat::contact>, std::shared_ptr<chat::extended_contact>), &chat::extended_contact::test>::select<>::func)
	;

	emscripten::class_<chat::extended_contact2, emscripten::base<chat::extended_contact>>("ExtendedContact2")
		.smart_ptr<std::shared_ptr<chat::extended_contact2>>("shared_ptr<chat::extended_contact2>")
		.constructor(&std::make_shared<chat::extended_contact2>)
		.function("test", scapix::link::js::function<void(chat::extended_contact2::*)(), &chat::extended_contact2::test>::select<>::func)
	;

	emscripten::class_<chat::extended_contact3, emscripten::base<chat::contact>>("ExtendedContact3")
		.smart_ptr<std::shared_ptr<chat::extended_contact3>>("shared_ptr<chat::extended_contact3>")
		.constructor(&std::make_shared<chat::extended_contact3>)
		.function("test", scapix::link::js::function<void(chat::extended_contact3::*)(), &chat::extended_contact3::test>::select<>::func)
	;
}
