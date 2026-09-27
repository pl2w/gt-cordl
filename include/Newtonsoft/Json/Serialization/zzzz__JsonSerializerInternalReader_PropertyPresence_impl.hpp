#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalReader_PropertyPresence.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_PropertyPresence_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence::JsonSerializerInternalReader_PropertyPresence(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence::JsonSerializerInternalReader_PropertyPresence()   {
}
constexpr ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence  GlobalNamespace::JsonSerializerInternalReader_PropertyPresence::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence  GlobalNamespace::JsonSerializerInternalReader_PropertyPresence::Null{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence  GlobalNamespace::JsonSerializerInternalReader_PropertyPresence::Value{static_cast<int32_t>(0x2)};
