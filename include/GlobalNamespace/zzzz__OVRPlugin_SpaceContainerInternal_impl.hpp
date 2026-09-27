#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceContainerInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceContainerInternal_def.hpp"
// Ctor Parameters [CppParam { name: "uuidCapacityInput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuidCountOutput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuids", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceContainerInternal::OVRPlugin_SpaceContainerInternal(int32_t  uuidCapacityInput, int32_t  uuidCountOutput, ::System::IntPtr  uuids) noexcept  {
this->uuidCapacityInput = uuidCapacityInput;
this->uuidCountOutput = uuidCountOutput;
this->uuids = uuids;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceContainerInternal::OVRPlugin_SpaceContainerInternal()   {
}
