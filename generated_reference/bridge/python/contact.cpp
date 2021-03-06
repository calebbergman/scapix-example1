// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <scapix/bridge/python/init.h>
#include <chat/contact.h>

void scapix_python_export_contact(pybind11::module& m)
{
	pybind11::class_<chat::contact, std::shared_ptr<chat::contact>>(m, "Contact")
		.def(pybind11::init<>())
		.def(pybind11::init<const std::basic_string<char> &, const std::basic_string<char> &>())
		.def<std::basic_string<char>(chat::contact::*)() const>("device_name", &chat::contact::device_name)
		.def<const std::basic_string<char> &(chat::contact::*)()>("id", &chat::contact::id)
		.def<void(chat::contact::*)(const std::basic_string<char> &)>("id", &chat::contact::id)
		.def<const std::basic_string<char> &(chat::contact::*)()>("name", &chat::contact::name)
		.def<void(chat::contact::*)(const std::basic_string<char> &)>("name", &chat::contact::name)
		.def<void(chat::contact::*)(std::function<void (std::basic_string<char>)>)>("register_on_name_change", &chat::contact::register_on_name_change)
	;
}
