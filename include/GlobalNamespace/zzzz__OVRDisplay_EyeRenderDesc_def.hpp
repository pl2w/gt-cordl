#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDisplay_EyeRenderDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRDisplay_EyeFov_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRDisplay_EyeRenderDesc)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDisplay_EyeRenderDesc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDisplay_EyeRenderDesc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDisplay_EyeRenderDesc, "", "OVRDisplay/EyeRenderDesc");
// Dependencies OVRDisplay::EyeFov, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDisplay/EyeRenderDesc
struct CORDL_TYPE OVRDisplay_EyeRenderDesc {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDisplay_EyeRenderDesc() ;

// Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "fov", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "fullFov", ty: "::GlobalNamespace::OVRDisplay_EyeFov", modifiers: "", def_value: None, comment: None }]
constexpr OVRDisplay_EyeRenderDesc(::UnityEngine::Vector2  resolution, ::UnityEngine::Vector2  fov, ::GlobalNamespace::OVRDisplay_EyeFov  fullFov) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11883};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field resolution, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  resolution;

/// @brief Field fov, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  fov;

/// @brief Field fullFov, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::OVRDisplay_EyeFov  fullFov;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeRenderDesc, resolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeRenderDesc, fov) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeRenderDesc, fullFov) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDisplay_EyeRenderDesc) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
