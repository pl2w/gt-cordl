#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_Writer_StringParts.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__BinaryStorageBuffer_Writer_StringParts_def.hpp"
// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isUnicode", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Writer_BinaryStorageBuffer_StringParts::Writer_BinaryStorageBuffer_StringParts(::StringW  str, uint32_t  dataSize, bool  isUnicode) noexcept  {
this->str = str;
this->dataSize = dataSize;
this->isUnicode = isUnicode;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Writer_BinaryStorageBuffer_StringParts::Writer_BinaryStorageBuffer_StringParts()   {
}
