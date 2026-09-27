#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteMachine_VotingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeVoteMachine_VotingState)
// Forward declare root types
namespace GlobalNamespace {
struct MonkeVoteMachine_VotingState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeVoteMachine_VotingState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteMachine_VotingState, "", "MonkeVoteMachine/VotingState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MonkeVoteMachine/VotingState
struct CORDL_TYPE MonkeVoteMachine_VotingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonkeVoteMachine_VotingState_Unwrapped
enum struct __MonkeVoteMachine_VotingState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Voting = static_cast<int32_t>(0x1),
__E_Predicting = static_cast<int32_t>(0x2),
__E_Complete = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonkeVoteMachine_VotingState_Unwrapped () const noexcept {
return static_cast<__MonkeVoteMachine_VotingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteMachine_VotingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MonkeVoteMachine_VotingState(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(3)
static ::GlobalNamespace::MonkeVoteMachine_VotingState const Complete;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MonkeVoteMachine_VotingState const None;

/// @brief Field Predicting value: I32(2)
static ::GlobalNamespace::MonkeVoteMachine_VotingState const Predicting;

/// @brief Field Voting value: I32(1)
static ::GlobalNamespace::MonkeVoteMachine_VotingState const Voting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{579};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine_VotingState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteMachine_VotingState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
