#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDisplay_EyeFov.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRDisplay_EyeFov)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDisplay_EyeFov;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDisplay_EyeFov);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDisplay_EyeFov, "", "OVRDisplay/EyeFov");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDisplay/EyeFov
struct CORDL_TYPE OVRDisplay_EyeFov {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDisplay_EyeFov() ;

// Ctor Parameters [CppParam { name: "UpFov", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DownFov", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LeftFov", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RightFov", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRDisplay_EyeFov(float_t  UpFov, float_t  DownFov, float_t  LeftFov, float_t  RightFov) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field UpFov, offset: 0x0, size: 0x4, def value: None
 float_t  UpFov;

/// @brief Field DownFov, offset: 0x4, size: 0x4, def value: None
 float_t  DownFov;

/// @brief Field LeftFov, offset: 0x8, size: 0x4, def value: None
 float_t  LeftFov;

/// @brief Field RightFov, offset: 0xc, size: 0x4, def value: None
 float_t  RightFov;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeFov, UpFov) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeFov, DownFov) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeFov, LeftFov) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_EyeFov, RightFov) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDisplay_EyeFov) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
