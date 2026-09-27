#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineInstantiate_Space.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineInstantiate_Space)
// Forward declare root types
namespace GlobalNamespace {
struct SplineInstantiate_Space;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineInstantiate_Space);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineInstantiate_Space, "UnityEngine.Splines", "SplineInstantiate/Space");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineInstantiate/Space
struct CORDL_TYPE SplineInstantiate_Space {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineInstantiate_Space_Unwrapped
enum struct __SplineInstantiate_Space_Unwrapped : int32_t {
__E_Spline = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_World = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineInstantiate_Space_Unwrapped () const noexcept {
return static_cast<__SplineInstantiate_Space_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineInstantiate_Space() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineInstantiate_Space(int32_t  value__) noexcept;

/// @brief Field Local value: I32(1)
static ::GlobalNamespace::SplineInstantiate_Space const Local;

/// @brief Field Spline value: I32(0)
static ::GlobalNamespace::SplineInstantiate_Space const Spline;

/// @brief Field World value: I32(2)
static ::GlobalNamespace::SplineInstantiate_Space const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27976};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineInstantiate_Space, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineInstantiate_Space) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
