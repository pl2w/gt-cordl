#pragma once
// IWYU pragma private; include "System/Uri_Offset.hpp"
#include "System/zzzz__Uri_Offset_def.hpp"
// Ctor Parameters [CppParam { name: "Scheme", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "User", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Host", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PortValue", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Path", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Query", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fragment", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "End", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Uri_Offset::Uri_Offset(uint16_t  Scheme, uint16_t  User, uint16_t  Host, uint16_t  PortValue, uint16_t  Path, uint16_t  Query, uint16_t  Fragment, uint16_t  End) noexcept  {
this->Scheme = Scheme;
this->User = User;
this->Host = Host;
this->PortValue = PortValue;
this->Path = Path;
this->Query = Query;
this->Fragment = Fragment;
this->End = End;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Uri_Offset::Uri_Offset()   {
}
