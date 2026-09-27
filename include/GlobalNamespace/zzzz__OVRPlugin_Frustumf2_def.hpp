#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Frustumf2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Fovf_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Frustumf2)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Frustumf2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Frustumf2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Frustumf2, "", "OVRPlugin/Frustumf2");
// Dependencies OVRPlugin::Fovf
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Frustumf2
struct CORDL_TYPE OVRPlugin_Frustumf2 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Frustumf2() ;

// Ctor Parameters [CppParam { name: "zNear", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "zFar", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fov", ty: "::GlobalNamespace::OVRPlugin_Fovf", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Frustumf2(float_t  zNear, float_t  zFar, ::GlobalNamespace::OVRPlugin_Fovf  Fov) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field zNear, offset: 0x0, size: 0x4, def value: None
 float_t  zNear;

/// @brief Field zFar, offset: 0x4, size: 0x4, def value: None
 float_t  zFar;

/// @brief Field Fov, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Fovf  Fov;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Frustumf2, zNear) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Frustumf2, zFar) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Frustumf2, Fov) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Frustumf2) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
