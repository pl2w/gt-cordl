#pragma once
// IWYU pragma private; include "GlobalNamespace/GTEnumValueMap`1_EnumValueToUnityObject.hpp"
#include "GlobalNamespace/zzzz__GTEnumValueMap`1_EnumValueToUnityObject_def.hpp"
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enumKey", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enumName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>::GTEnumValueMap_1_EnumValueToUnityObject(bool  enabled, int64_t  enumKey, ::StringW  enumName, T  value) noexcept  {
this->enabled = enabled;
this->enumKey = enumKey;
this->enumName = enumName;
this->value = value;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>::GTEnumValueMap_1_EnumValueToUnityObject()   {
}
