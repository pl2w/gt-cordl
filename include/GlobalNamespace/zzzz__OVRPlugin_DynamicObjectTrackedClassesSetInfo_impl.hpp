#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_DynamicObjectTrackedClassesSetInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_DynamicObjectTrackedClassesSetInfo_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_DynamicObjectClass_def.hpp"
// Ctor Parameters [CppParam { name: "Classes", ty: "::GlobalNamespace::OVRPlugin_DynamicObjectClass*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClassCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo::OVRPlugin_DynamicObjectTrackedClassesSetInfo(::GlobalNamespace::OVRPlugin_DynamicObjectClass*  Classes, uint32_t  ClassCount) noexcept  {
this->Classes = Classes;
this->ClassCount = ClassCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo::OVRPlugin_DynamicObjectTrackedClassesSetInfo()   {
}
