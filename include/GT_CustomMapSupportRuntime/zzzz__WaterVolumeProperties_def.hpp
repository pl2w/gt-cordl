#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/WaterVolumeProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_EZoneLiquidType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WaterVolumeProperties)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct WaterVolumeProperties;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::WaterVolumeProperties);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::WaterVolumeProperties, "GT_CustomMapSupportRuntime", "WaterVolumeProperties");
// Dependencies GT_CustomMapSupportRuntime.CMSZoneShaderSettings::EZoneLiquidType
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.WaterVolumeProperties
struct CORDL_TYPE WaterVolumeProperties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WaterVolumeProperties() ;

// Ctor Parameters [CppParam { name: "surfacePlane", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfaceColliders", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "liquidType", ty: "::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType", modifiers: "", def_value: None, comment: None }]
constexpr WaterVolumeProperties(::UnityW<::UnityEngine::Transform>  surfacePlane, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  surfaceColliders, ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  liquidType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30900};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [Nullable(2)]
/// @brief Field surfacePlane, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  surfacePlane;

/// [Nullable(1)]
/// @brief Field surfaceColliders, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  surfaceColliders;

/// @brief Field liquidType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  liquidType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::WaterVolumeProperties, surfacePlane) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::WaterVolumeProperties, surfaceColliders) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::WaterVolumeProperties, liquidType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::WaterVolumeProperties) == 0x18, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
