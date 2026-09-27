#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/LocomotionPhase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionPhase)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct LocomotionPhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase, "UnityEngine.XR.Interaction.Toolkit", "LocomotionPhase");
// [Obsolete("LocomotionPhase is deprecated in XRI 3.0.0 and will be removed in a future release. Use LocomotionState instead.", false)]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.LocomotionPhase
struct CORDL_TYPE LocomotionPhase {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocomotionPhase_Unwrapped
enum struct __LocomotionPhase_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Started = static_cast<int32_t>(0x1),
__E_Moving = static_cast<int32_t>(0x2),
__E_Done = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocomotionPhase_Unwrapped () const noexcept {
return static_cast<__LocomotionPhase_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocomotionPhase() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LocomotionPhase(int32_t  value__) noexcept;

/// @brief Field Done value: I32(3)
static ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const Done;

/// @brief Field Idle value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const Idle;

/// @brief Field Moving value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const Moving;

/// @brief Field Started value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const Started;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
