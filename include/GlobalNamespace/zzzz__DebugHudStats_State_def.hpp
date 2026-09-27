#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugHudStats_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugHudStats_State)
// Forward declare root types
namespace GlobalNamespace {
struct DebugHudStats_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugHudStats_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugHudStats_State, "", "DebugHudStats/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DebugHudStats/State
struct CORDL_TYPE DebugHudStats_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugHudStats_State_Unwrapped
enum struct __DebugHudStats_State_Unwrapped : int32_t {
__E_Inactive = static_cast<int32_t>(0x0),
__E_Active = static_cast<int32_t>(0x1),
__E_ShowLog = static_cast<int32_t>(0x2),
__E_ShowError = static_cast<int32_t>(0x3),
__E_ShowStats = static_cast<int32_t>(0x4),
__E_ShowRBs = static_cast<int32_t>(0x5),
__E_timeAdjust = static_cast<int32_t>(0x6),
__E_RecordingMode = static_cast<int32_t>(0x7),
__E_TitleDataMonitor = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugHudStats_State_Unwrapped () const noexcept {
return static_cast<__DebugHudStats_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugHudStats_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugHudStats_State(int32_t  value__) noexcept;

/// @brief Field Active value: I32(1)
static ::GlobalNamespace::DebugHudStats_State const Active;

/// @brief Field Inactive value: I32(0)
static ::GlobalNamespace::DebugHudStats_State const Inactive;

/// @brief Field RecordingMode value: I32(7)
static ::GlobalNamespace::DebugHudStats_State const RecordingMode;

/// @brief Field ShowError value: I32(3)
static ::GlobalNamespace::DebugHudStats_State const ShowError;

/// @brief Field ShowLog value: I32(2)
static ::GlobalNamespace::DebugHudStats_State const ShowLog;

/// @brief Field ShowRBs value: I32(5)
static ::GlobalNamespace::DebugHudStats_State const ShowRBs;

/// @brief Field ShowStats value: I32(4)
static ::GlobalNamespace::DebugHudStats_State const ShowStats;

/// @brief Field TitleDataMonitor value: I32(8)
static ::GlobalNamespace::DebugHudStats_State const TitleDataMonitor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3487};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field timeAdjust value: I32(6)
static ::GlobalNamespace::DebugHudStats_State const timeAdjust;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugHudStats_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugHudStats_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
