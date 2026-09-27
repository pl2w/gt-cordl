#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineAnimate_AlignmentMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineAnimate_AlignmentMode)
// Forward declare root types
namespace GlobalNamespace {
struct SplineAnimate_AlignmentMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineAnimate_AlignmentMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineAnimate_AlignmentMode, "UnityEngine.Splines", "SplineAnimate/AlignmentMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineAnimate/AlignmentMode
struct CORDL_TYPE SplineAnimate_AlignmentMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineAnimate_AlignmentMode_Unwrapped
enum struct __SplineAnimate_AlignmentMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SplineElement = static_cast<int32_t>(0x1),
__E_SplineObject = static_cast<int32_t>(0x2),
__E_World = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineAnimate_AlignmentMode_Unwrapped () const noexcept {
return static_cast<__SplineAnimate_AlignmentMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineAnimate_AlignmentMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SplineAnimate_AlignmentMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SplineAnimate_AlignmentMode const None;

/// @brief Field SplineElement value: I32(1)
static ::GlobalNamespace::SplineAnimate_AlignmentMode const SplineElement;

/// @brief Field SplineObject value: I32(2)
static ::GlobalNamespace::SplineAnimate_AlignmentMode const SplineObject;

/// @brief Field World value: I32(3)
static ::GlobalNamespace::SplineAnimate_AlignmentMode const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineAnimate_AlignmentMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineAnimate_AlignmentMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
