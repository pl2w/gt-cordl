#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractorState)
// Forward declare root types
namespace Oculus::Interaction {
struct InteractorState;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::InteractorState);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorState, "Oculus.Interaction", "InteractorState");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.InteractorState
struct CORDL_TYPE InteractorState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InteractorState_Unwrapped
enum struct __InteractorState_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Hover = static_cast<int32_t>(0x1),
__E_Select = static_cast<int32_t>(0x2),
__E_Disabled = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InteractorState_Unwrapped () const noexcept {
return static_cast<__InteractorState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InteractorState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InteractorState(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(3)
static ::Oculus::Interaction::InteractorState const Disabled;

/// @brief Field Hover value: I32(1)
static ::Oculus::Interaction::InteractorState const Hover;

/// @brief Field Normal value: I32(0)
static ::Oculus::Interaction::InteractorState const Normal;

/// @brief Field Select value: I32(2)
static ::Oculus::Interaction::InteractorState const Select;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractorState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractorState) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction
