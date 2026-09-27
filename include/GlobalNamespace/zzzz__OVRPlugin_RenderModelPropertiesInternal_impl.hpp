#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RenderModelPropertiesInternal.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RenderModelPropertiesInternal_def.hpp"
// Ctor Parameters [CppParam { name: "ModelName", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModelKey", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VendorId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModelVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_RenderModelPropertiesInternal::OVRPlugin_RenderModelPropertiesInternal(::ArrayW<uint8_t>  ModelName, uint64_t  ModelKey, uint32_t  VendorId, uint32_t  ModelVersion) noexcept  {
this->ModelName = ModelName;
this->ModelKey = ModelKey;
this->VendorId = VendorId;
this->ModelVersion = ModelVersion;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_RenderModelPropertiesInternal::OVRPlugin_RenderModelPropertiesInternal()   {
}
