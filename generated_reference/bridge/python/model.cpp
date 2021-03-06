// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <scapix/bridge/python/init.h>
#include <chat/model.h>

void scapix_python_export_model(pybind11::module& m)
{
	pybind11::class_<chat::model, std::shared_ptr<chat::model>>(m, "Model")
		.def(pybind11::init<>())
		.def<void(chat::model::*)(std::basic_string<char>, std::basic_string<char>)>("connect", &chat::model::connect)
		.def<void(chat::model::*)()>("disconnect", &chat::model::disconnect)
		.def<const std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > > &(chat::model::*)()>("friends", &chat::model::friends)
		.def<std::vector<std::shared_ptr<chat::contact>, std::allocator<std::shared_ptr<chat::contact> > >(chat::model::*)(std::basic_string<char>)>("friends", &chat::model::friends)
		.def<void(chat::model::*)(std::shared_ptr<chat::contact>)>("add_friend", &chat::model::add_friend)
		.def<void(chat::model::*)(std::shared_ptr<chat::contact>)>("remove_friend", &chat::model::remove_friend)
		.def<const std::vector<std::shared_ptr<chat::session>, std::allocator<std::shared_ptr<chat::session> > > &(chat::model::*)()>("sessions", &chat::model::sessions)
		.def<std::shared_ptr<chat::session>(chat::model::*)(std::shared_ptr<chat::contact>)>("session_with_contact", &chat::model::session_with_contact)
	;
}
