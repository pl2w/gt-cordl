#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeStation_TechTreeStationTerminalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SITechTreeStation_TechTreeStationTerminalState)
// Forward declare root types
namespace GlobalNamespace {
struct SITechTreeStation_TechTreeStationTerminalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState, "", "SITechTreeStation/TechTreeStationTerminalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITechTreeStation/TechTreeStationTerminalState
struct CORDL_TYPE SITechTreeStation_TechTreeStationTerminalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SITechTreeStation_TechTreeStationTerminalState_Unwrapped
enum struct __SITechTreeStation_TechTreeStationTerminalState_Unwrapped : int32_t {
__E_WaitingForScan = static_cast<int32_t>(0x0),
__E_TechTreePagesList = static_cast<int32_t>(0x1),
__E_TechTreePage = static_cast<int32_t>(0x2),
__E_TechTreeNodePopup = static_cast<int32_t>(0x3),
__E_HelpScreen = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SITechTreeStation_TechTreeStationTerminalState_Unwrapped () const noexcept {
return static_cast<__SITechTreeStation_TechTreeStationTerminalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeStation_TechTreeStationTerminalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SITechTreeStation_TechTreeStationTerminalState(int32_t  value__) noexcept;

/// @brief Field HelpScreen value: I32(4)
static ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const HelpScreen;

/// @brief Field TechTreeNodePopup value: I32(3)
static ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const TechTreeNodePopup;

/// @brief Field TechTreePage value: I32(2)
static ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const TechTreePage;

/// @brief Field TechTreePagesList value: I32(1)
static ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const TechTreePagesList;

/// @brief Field WaitingForScan value: I32(0)
static ::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState const WaitingForScan;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{364};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeStation_TechTreeStationTerminalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
