#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructure_BuildSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RayTracingAccelerationStructure_BuildSettings)
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructureBuildFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct RayTracingAccelerationStructure_BuildSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings, "UnityEngine.Rendering", "RayTracingAccelerationStructure/BuildSettings");
// Dependencies UnityEngine.Rendering.RayTracingAccelerationStructureBuildFlags, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/BuildSettings
struct CORDL_TYPE RayTracingAccelerationStructure_BuildSettings {
public:
// Declarations
 __declspec(property(put=set_buildFlags)) ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags  buildFlags;

 __declspec(property(put=set_relativeOrigin)) ::UnityEngine::Vector3  relativeOrigin;

/// @brief Method .ctor, addr 0xb6080b0, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method set_buildFlags, addr 0xb60809c, size 0x8, virtual false, abstract: false, final false
inline void set_buildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags  value) ;

/// [CompilerGenerated]
/// @brief Method set_relativeOrigin, addr 0xb6080a4, size 0xc, virtual false, abstract: false, final false
inline void set_relativeOrigin(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RayTracingAccelerationStructure_BuildSettings() ;

// Ctor Parameters [CppParam { name: "_buildFlags_k__BackingField", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "_relativeOrigin_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr RayTracingAccelerationStructure_BuildSettings(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags  _buildFlags_k__BackingField, ::UnityEngine::Vector3  _relativeOrigin_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15506};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <buildFlags>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags  _buildFlags_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <relativeOrigin>k__BackingField, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  _relativeOrigin_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings, _buildFlags_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings, _relativeOrigin_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
