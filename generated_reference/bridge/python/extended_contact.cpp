// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <scapix/bridge/python/init.h>
#include <chat/extended_contact.h>

void scapix_python_export_extended_contact(pybind11::module& m)
{
	pybind11::class_<chat::extended_contact, chat::contact, std::shared_ptr<chat::extended_contact>>(m, "ExtendedContact")
		.def(pybind11::init<const std::basic_string<char> &, const std::basic_string<char> &>())
		.def(pybind11::init<int>())
		.def(pybind11::init<>())
		.def<void(chat::extended_contact::*)(std::basic_string<char>, std::shared_ptr<chat::contact>, std::shared_ptr<chat::extended_contact>)>("test", &chat::extended_contact::test)
	;

	pybind11::class_<chat::extended_contact2, chat::extended_contact, std::shared_ptr<chat::extended_contact2>>(m, "ExtendedContact2")
		.def(pybind11::init<>())
		.def<void(chat::extended_contact2::*)()>("test", &chat::extended_contact2::test)
	;

	pybind11::class_<chat::extended_contact3, chat::contact, std::shared_ptr<chat::extended_contact3>>(m, "ExtendedContact3")
		.def(pybind11::init<>())
		.def<void(chat::extended_contact3::*)()>("test", &chat::extended_contact3::test)
	;
}
