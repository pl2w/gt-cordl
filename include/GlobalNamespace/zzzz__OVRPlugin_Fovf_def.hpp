#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Fovf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Fovf)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Fovf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Fovf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Fovf, "", "OVRPlugin/Fovf");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Fovf
struct CORDL_TYPE OVRPlugin_Fovf {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Fovf() ;

// Ctor Parameters [CppParam { name: "UpTan", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DownTan", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LeftTan", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RightTan", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Fovf(float_t  UpTan, float_t  DownTan, float_t  LeftTan, float_t  RightTan) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field UpTan, offset: 0x0, size: 0x4, def value: None
 float_t  UpTan;

/// @brief Field DownTan, offset: 0x4, size: 0x4, def value: None
 float_t  DownTan;

/// @brief Field LeftTan, offset: 0x8, size: 0x4, def value: None
 float_t  LeftTan;

/// @brief Field RightTan, offset: 0xc, size: 0x4, def value: None
 float_t  RightTan;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Fovf, UpTan) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Fovf, DownTan) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Fovf, LeftTan) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Fovf, RightTan) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Fovf) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
