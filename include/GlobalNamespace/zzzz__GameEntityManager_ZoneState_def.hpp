#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_ZoneState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityManager_ZoneState)
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityManager_ZoneState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityManager_ZoneState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_ZoneState, "", "GameEntityManager/ZoneState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityManager/ZoneState
struct CORDL_TYPE GameEntityManager_ZoneState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameEntityManager_ZoneState_Unwrapped
enum struct __GameEntityManager_ZoneState_Unwrapped : int32_t {
__E_WaitingToEnterZone = static_cast<int32_t>(0x0),
__E_WaitingToRequestState = static_cast<int32_t>(0x1),
__E_WaitingForState = static_cast<int32_t>(0x2),
__E_Active = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameEntityManager_ZoneState_Unwrapped () const noexcept {
return static_cast<__GameEntityManager_ZoneState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_ZoneState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityManager_ZoneState(int32_t  value__) noexcept;

/// @brief Field Active value: I32(3)
static ::GlobalNamespace::GameEntityManager_ZoneState const Active;

/// @brief Field WaitingForState value: I32(2)
static ::GlobalNamespace::GameEntityManager_ZoneState const WaitingForState;

/// @brief Field WaitingToEnterZone value: I32(0)
static ::GlobalNamespace::GameEntityManager_ZoneState const WaitingToEnterZone;

/// @brief Field WaitingToRequestState value: I32(1)
static ::GlobalNamespace::GameEntityManager_ZoneState const WaitingToRequestState;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityManager_ZoneState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
