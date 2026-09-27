#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/WaterVolumeProperties.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_EZoneLiquidType_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__WaterVolumeProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "surfacePlane", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfaceColliders", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "liquidType", ty: "::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::WaterVolumeProperties::WaterVolumeProperties(::UnityW<::UnityEngine::Transform>  surfacePlane, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  surfaceColliders, ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  liquidType) noexcept  {
this->surfacePlane = surfacePlane;
this->surfaceColliders = surfaceColliders;
this->liquidType = liquidType;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::WaterVolumeProperties::WaterVolumeProperties()   {
}
