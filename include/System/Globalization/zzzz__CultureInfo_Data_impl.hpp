#pragma once
// IWYU pragma private; include "System/Globalization/CultureInfo_Data.hpp"
#include "System/Globalization/zzzz__CultureInfo_Data_def.hpp"
// Ctor Parameters [CppParam { name: "ansi", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ebcdic", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mac", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "oem", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "right_to_left", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "list_sep", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CultureInfo_Data::CultureInfo_Data(int32_t  ansi, int32_t  ebcdic, int32_t  mac, int32_t  oem, bool  right_to_left, uint8_t  list_sep) noexcept  {
this->ansi = ansi;
this->ebcdic = ebcdic;
this->mac = mac;
this->oem = oem;
this->right_to_left = right_to_left;
this->list_sep = list_sep;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CultureInfo_Data::CultureInfo_Data()   {
}
