#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs_RemoteClass.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Mono/zzzz__RuntimeStructs_RemoteClass_def.hpp"
#include "Mono/zzzz__RuntimeStructs_MonoClass_def.hpp"
// Ctor Parameters [CppParam { name: "default_vtable", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xdomain_vtable", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "proxy_class", ty: "::GlobalNamespace::RuntimeStructs_MonoClass*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "proxy_class_name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RuntimeStructs_RemoteClass::RuntimeStructs_RemoteClass(::System::IntPtr  default_vtable, ::System::IntPtr  xdomain_vtable, ::GlobalNamespace::RuntimeStructs_MonoClass*  proxy_class, ::System::IntPtr  proxy_class_name, uint32_t  interface_count) noexcept  {
this->default_vtable = default_vtable;
this->xdomain_vtable = xdomain_vtable;
this->proxy_class = proxy_class;
this->proxy_class_name = proxy_class_name;
this->interface_count = interface_count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeStructs_RemoteClass::RuntimeStructs_RemoteClass()   {
}
