// Generated by Scapix Language Bridge
// https://www.scapix.com

#include <scapix/bridge/java/init.h>
#include <chat/folder/element.h>

namespace scapix {
namespace link {
namespace java {

template <>
struct class_name<chat::folder::element>
{
	using type = SCAPIX_META_STRING("com/scapix/chat/Element");
};

template <>
struct class_name<chat::folder::abstruct_element>
{
	using type = SCAPIX_META_STRING("com/scapix/chat/AbstructElement");
};

template <>
struct class_name<chat::contact>
{
	using type = SCAPIX_META_STRING("com/scapix/chat/Contact");
};

} // namespace java
} // namespace link
} // namespace scapix

void scapix_java_export_element()
{
	scapix::link::java::native_methods
	<
		scapix::link::java::class_name_t<chat::folder::element>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("_init"),
			void(),
			void(scapix::bridge::java::init<chat::folder::element>::*)(),
			&scapix::bridge::java::init<chat::folder::element>::create
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("func1"),
			void(),
			void(chat::folder::element::*)(),
			&chat::folder::element::func1
		>,

		scapix::link::java::native_method
		<
			SCAPIX_META_STRING("func2"),
			void(scapix::link::java::ref<SCAPIX_META_STRING("com/scapix/chat/Contact")>),
			void(chat::folder::element::*)(std::shared_ptr<chat::contact>),
			&chat::folder::element::func2
		>
	>::register_();
}
