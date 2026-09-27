#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Vector2f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Vector2f)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Vector2f;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Vector2f);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Vector2f, "", "OVRPlugin/Vector2f");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Vector2f
struct CORDL_TYPE OVRPlugin_Vector2f {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Vector2f() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Vector2f(float_t  x, float_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12083};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector2f, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector2f, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Vector2f) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
