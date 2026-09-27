#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeAI_ReplState_EStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeyeAI_ReplState_EStates)
// Forward declare root types
namespace GlobalNamespace {
struct MonkeyeAI_ReplState_EStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeyeAI_ReplState_EStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeyeAI_ReplState_EStates, "", "MonkeyeAI_ReplState/EStates");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MonkeyeAI_ReplState/EStates
struct CORDL_TYPE MonkeyeAI_ReplState_EStates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonkeyeAI_ReplState_EStates_Unwrapped
enum struct __MonkeyeAI_ReplState_EStates_Unwrapped : int32_t {
__E_Sleeping = static_cast<int32_t>(0x0),
__E_Patrolling = static_cast<int32_t>(0x1),
__E_Chasing = static_cast<int32_t>(0x2),
__E_ReturnToSleepPt = static_cast<int32_t>(0x3),
__E_GoToSleep = static_cast<int32_t>(0x4),
__E_BeginAttack = static_cast<int32_t>(0x5),
__E_OpenFloor = static_cast<int32_t>(0x6),
__E_DropPlayer = static_cast<int32_t>(0x7),
__E_CloseFloor = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonkeyeAI_ReplState_EStates_Unwrapped () const noexcept {
return static_cast<__MonkeyeAI_ReplState_EStates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonkeyeAI_ReplState_EStates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MonkeyeAI_ReplState_EStates(int32_t  value__) noexcept;

/// @brief Field BeginAttack value: I32(5)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const BeginAttack;

/// @brief Field Chasing value: I32(2)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const Chasing;

/// @brief Field CloseFloor value: I32(8)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const CloseFloor;

/// @brief Field DropPlayer value: I32(7)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const DropPlayer;

/// @brief Field GoToSleep value: I32(4)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const GoToSleep;

/// @brief Field OpenFloor value: I32(6)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const OpenFloor;

/// @brief Field Patrolling value: I32(1)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const Patrolling;

/// @brief Field ReturnToSleepPt value: I32(3)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const ReturnToSleepPt;

/// @brief Field Sleeping value: I32(0)
static ::GlobalNamespace::MonkeyeAI_ReplState_EStates const Sleeping;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeyeAI_ReplState_EStates, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeyeAI_ReplState_EStates) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
