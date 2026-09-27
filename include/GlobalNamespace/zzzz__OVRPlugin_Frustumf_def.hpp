#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Frustumf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Frustumf)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Frustumf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Frustumf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Frustumf, "", "OVRPlugin/Frustumf");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Frustumf
struct CORDL_TYPE OVRPlugin_Frustumf {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Frustumf() ;

// Ctor Parameters [CppParam { name: "zNear", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "zFar", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fovX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fovY", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Frustumf(float_t  zNear, float_t  zFar, float_t  fovX, float_t  fovY) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field zNear, offset: 0x0, size: 0x4, def value: None
 float_t  zNear;

/// @brief Field zFar, offset: 0x4, size: 0x4, def value: None
 float_t  zFar;

/// @brief Field fovX, offset: 0x8, size: 0x4, def value: None
 float_t  fovX;

/// @brief Field fovY, offset: 0xc, size: 0x4, def value: None
 float_t  fovY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Frustumf, zNear) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Frustumf, zFar) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Frustumf, fovX) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Frustumf, fovY) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Frustumf) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
