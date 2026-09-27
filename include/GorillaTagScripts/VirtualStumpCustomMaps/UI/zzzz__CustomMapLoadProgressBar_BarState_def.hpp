#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapLoadProgressBar_BarState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapLoadProgressBar_BarState)
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapLoadProgressBar_BarState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapLoadProgressBar_BarState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoadProgressBar_BarState, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "CustomMapLoadProgressBar/BarState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapLoadProgressBar/BarState
struct CORDL_TYPE CustomMapLoadProgressBar_BarState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomMapLoadProgressBar_BarState_Unwrapped
enum struct __CustomMapLoadProgressBar_BarState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Working = static_cast<int32_t>(0x1),
__E_Ready = static_cast<int32_t>(0x2),
__E_Failed = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomMapLoadProgressBar_BarState_Unwrapped () const noexcept {
return static_cast<__CustomMapLoadProgressBar_BarState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoadProgressBar_BarState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapLoadProgressBar_BarState(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(3)
static ::GlobalNamespace::CustomMapLoadProgressBar_BarState const Failed;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::CustomMapLoadProgressBar_BarState const Idle;

/// @brief Field Ready value: I32(2)
static ::GlobalNamespace::CustomMapLoadProgressBar_BarState const Ready;

/// @brief Field Working value: I32(1)
static ::GlobalNamespace::CustomMapLoadProgressBar_BarState const Working;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoadProgressBar_BarState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoadProgressBar_BarState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
