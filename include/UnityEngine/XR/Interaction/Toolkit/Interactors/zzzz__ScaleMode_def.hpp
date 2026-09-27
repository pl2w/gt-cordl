#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/ScaleMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleMode)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct ScaleMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode, "UnityEngine.XR.Interaction.Toolkit.Interactors", "ScaleMode");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.ScaleMode
struct CORDL_TYPE ScaleMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScaleMode_Unwrapped
enum struct __ScaleMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ScaleOverTime = static_cast<int32_t>(0x1),
__E_Input = static_cast<int32_t>(0x1),
__E_DistanceDelta = static_cast<int32_t>(0x2),
__E_Distance = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScaleMode_Unwrapped () const noexcept {
return static_cast<__ScaleMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScaleMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScaleMode(int32_t  value__) noexcept;

/// @brief Field Distance value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode const Distance;

/// @brief Field DistanceDelta value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode const DistanceDelta;

/// @brief Field Input value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode const Input;

/// @brief Field None value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode const None;

/// @brief Field ScaleOverTime value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode const ScaleOverTime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11436};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
