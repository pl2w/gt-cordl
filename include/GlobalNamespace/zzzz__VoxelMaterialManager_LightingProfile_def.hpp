#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelMaterialManager_LightingProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VoxelMaterialManager_LightingProfile)
// Forward declare root types
namespace GlobalNamespace {
struct VoxelMaterialManager_LightingProfile;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoxelMaterialManager_LightingProfile);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelMaterialManager_LightingProfile, "", "VoxelMaterialManager/LightingProfile");
// Dependencies UnityEngine.Color, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: VoxelMaterialManager/LightingProfile
struct CORDL_TYPE VoxelMaterialManager_LightingProfile {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VoxelMaterialManager_LightingProfile() ;

// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr VoxelMaterialManager_LightingProfile(::UnityEngine::Color  color, ::UnityEngine::Vector3  direction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{502};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field color, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field direction, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager_LightingProfile, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager_LightingProfile, direction) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelMaterialManager_LightingProfile) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
