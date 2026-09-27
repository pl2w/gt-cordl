#pragma once
// IWYU pragma private; include "System/Net/hostent.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/zzzz__hostent_def.hpp"
// Ctor Parameters [CppParam { name: "h_name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h_aliases", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h_addrtype", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h_length", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h_addr_list", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::hostent::hostent(::System::IntPtr  h_name, ::System::IntPtr  h_aliases, int16_t  h_addrtype, int16_t  h_length, ::System::IntPtr  h_addr_list) noexcept  {
this->h_name = h_name;
this->h_aliases = h_aliases;
this->h_addrtype = h_addrtype;
this->h_length = h_length;
this->h_addr_list = h_addr_list;
}
// Ctor Parameters []
constexpr ::System::Net::hostent::hostent()   {
}
