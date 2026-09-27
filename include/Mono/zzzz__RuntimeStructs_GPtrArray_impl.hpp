#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs_GPtrArray.hpp"
#include "Mono/zzzz__RuntimeStructs_GPtrArray_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "data", ty: "::System::IntPtr*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RuntimeStructs_GPtrArray::RuntimeStructs_GPtrArray(::System::IntPtr*  data, int32_t  len) noexcept  {
this->data = data;
this->len = len;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeStructs_GPtrArray::RuntimeStructs_GPtrArray()   {
}
