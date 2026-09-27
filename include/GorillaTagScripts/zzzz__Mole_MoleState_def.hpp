#pragma once
// IWYU pragma private; include "GorillaTagScripts/Mole_MoleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mole_MoleState)
// Forward declare root types
namespace GlobalNamespace {
struct Mole_MoleState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Mole_MoleState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Mole_MoleState, "GorillaTagScripts", "Mole/MoleState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Mole/MoleState
struct CORDL_TYPE Mole_MoleState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Mole_MoleState_Unwrapped
enum struct __Mole_MoleState_Unwrapped : int32_t {
__E_Reset = static_cast<int32_t>(0x0),
__E_Ready = static_cast<int32_t>(0x1),
__E_TransitionToVisible = static_cast<int32_t>(0x2),
__E_Visible = static_cast<int32_t>(0x3),
__E_TransitionToHidden = static_cast<int32_t>(0x4),
__E_Hidden = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mole_MoleState_Unwrapped () const noexcept {
return static_cast<__Mole_MoleState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Mole_MoleState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Mole_MoleState(int32_t  value__) noexcept;

/// @brief Field Hidden value: I32(5)
static ::GlobalNamespace::Mole_MoleState const Hidden;

/// @brief Field Ready value: I32(1)
static ::GlobalNamespace::Mole_MoleState const Ready;

/// @brief Field Reset value: I32(0)
static ::GlobalNamespace::Mole_MoleState const Reset;

/// @brief Field TransitionToHidden value: I32(4)
static ::GlobalNamespace::Mole_MoleState const TransitionToHidden;

/// @brief Field TransitionToVisible value: I32(2)
static ::GlobalNamespace::Mole_MoleState const TransitionToVisible;

/// @brief Field Visible value: I32(3)
static ::GlobalNamespace::Mole_MoleState const Visible;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3906};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mole_MoleState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Mole_MoleState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
