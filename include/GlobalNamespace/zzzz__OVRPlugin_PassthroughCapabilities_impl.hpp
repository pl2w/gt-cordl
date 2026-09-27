#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PassthroughCapabilities.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughCapabilityFields_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughCapabilityFlags_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughCapabilities_def.hpp"
// Ctor Parameters [CppParam { name: "Fields", ty: "::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxColorLutResolution", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_PassthroughCapabilities::OVRPlugin_PassthroughCapabilities(::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields  Fields, ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags  Flags, uint32_t  MaxColorLutResolution) noexcept  {
this->Fields = Fields;
this->Flags = Flags;
this->MaxColorLutResolution = MaxColorLutResolution;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_PassthroughCapabilities::OVRPlugin_PassthroughCapabilities()   {
}
