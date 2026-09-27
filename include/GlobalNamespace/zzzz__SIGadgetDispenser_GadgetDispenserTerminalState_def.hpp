#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDispenser_GadgetDispenserTerminalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetDispenser_GadgetDispenserTerminalState)
// Forward declare root types
namespace GlobalNamespace {
struct SIGadgetDispenser_GadgetDispenserTerminalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState, "", "SIGadgetDispenser/GadgetDispenserTerminalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIGadgetDispenser/GadgetDispenserTerminalState
struct CORDL_TYPE SIGadgetDispenser_GadgetDispenserTerminalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIGadgetDispenser_GadgetDispenserTerminalState_Unwrapped
enum struct __SIGadgetDispenser_GadgetDispenserTerminalState_Unwrapped : int32_t {
__E_WaitingForScan = static_cast<int32_t>(0x0),
__E_GadgetType = static_cast<int32_t>(0x1),
__E_GadgetList = static_cast<int32_t>(0x2),
__E_GadgetInformation = static_cast<int32_t>(0x3),
__E_GadgetDispensed = static_cast<int32_t>(0x4),
__E_HelpScreen = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIGadgetDispenser_GadgetDispenserTerminalState_Unwrapped () const noexcept {
return static_cast<__SIGadgetDispenser_GadgetDispenserTerminalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetDispenser_GadgetDispenserTerminalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIGadgetDispenser_GadgetDispenserTerminalState(int32_t  value__) noexcept;

/// @brief Field GadgetDispensed value: I32(4)
static ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const GadgetDispensed;

/// @brief Field GadgetInformation value: I32(3)
static ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const GadgetInformation;

/// @brief Field GadgetList value: I32(2)
static ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const GadgetList;

/// @brief Field GadgetType value: I32(1)
static ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const GadgetType;

/// @brief Field HelpScreen value: I32(5)
static ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const HelpScreen;

/// @brief Field WaitingForScan value: I32(0)
static ::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState const WaitingForScan;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetDispenser_GadgetDispenserTerminalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
