#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorShiftManager_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorShiftManager_State)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorShiftManager_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorShiftManager_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorShiftManager_State, "", "GhostReactorShiftManager/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorShiftManager/State
struct CORDL_TYPE GhostReactorShiftManager_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactorShiftManager_State_Unwrapped
enum struct __GhostReactorShiftManager_State_Unwrapped : int32_t {
__E_WaitingForConnect = static_cast<int32_t>(0x0),
__E_WaitingForShiftStart = static_cast<int32_t>(0x1),
__E_WaitingForFirstShiftStart = static_cast<int32_t>(0x2),
__E_ReadyForShift = static_cast<int32_t>(0x3),
__E_ShiftActive = static_cast<int32_t>(0x4),
__E_PostShift = static_cast<int32_t>(0x5),
__E_PreparingToDrill = static_cast<int32_t>(0x6),
__E_Drilling = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactorShiftManager_State_Unwrapped () const noexcept {
return static_cast<__GhostReactorShiftManager_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorShiftManager_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorShiftManager_State(int32_t  value__) noexcept;

/// @brief Field Drilling value: I32(7)
static ::GlobalNamespace::GhostReactorShiftManager_State const Drilling;

/// @brief Field PostShift value: I32(5)
static ::GlobalNamespace::GhostReactorShiftManager_State const PostShift;

/// @brief Field PreparingToDrill value: I32(6)
static ::GlobalNamespace::GhostReactorShiftManager_State const PreparingToDrill;

/// @brief Field ReadyForShift value: I32(3)
static ::GlobalNamespace::GhostReactorShiftManager_State const ReadyForShift;

/// @brief Field ShiftActive value: I32(4)
static ::GlobalNamespace::GhostReactorShiftManager_State const ShiftActive;

/// @brief Field WaitingForConnect value: I32(0)
static ::GlobalNamespace::GhostReactorShiftManager_State const WaitingForConnect;

/// @brief Field WaitingForFirstShiftStart value: I32(2)
static ::GlobalNamespace::GhostReactorShiftManager_State const WaitingForFirstShiftStart;

/// @brief Field WaitingForShiftStart value: I32(1)
static ::GlobalNamespace::GhostReactorShiftManager_State const WaitingForShiftStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1830};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorShiftManager_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorShiftManager_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
