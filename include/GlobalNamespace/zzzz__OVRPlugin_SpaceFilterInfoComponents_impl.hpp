#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceFilterInfoComponents.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceFilterInfoComponents_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
// Ctor Parameters [CppParam { name: "Components", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NumComponents", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents::OVRPlugin_SpaceFilterInfoComponents(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>  Components, int32_t  NumComponents) noexcept  {
this->Components = Components;
this->NumComponents = NumComponents;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents::OVRPlugin_SpaceFilterInfoComponents()   {
}
