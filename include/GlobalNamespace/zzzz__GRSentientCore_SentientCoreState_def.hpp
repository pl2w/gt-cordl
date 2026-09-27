#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSentientCore_SentientCoreState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSentientCore_SentientCoreState)
// Forward declare root types
namespace GlobalNamespace {
struct GRSentientCore_SentientCoreState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRSentientCore_SentientCoreState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSentientCore_SentientCoreState, "", "GRSentientCore/SentientCoreState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRSentientCore/SentientCoreState
struct CORDL_TYPE GRSentientCore_SentientCoreState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRSentientCore_SentientCoreState_Unwrapped
enum struct __GRSentientCore_SentientCoreState_Unwrapped : int32_t {
__E_Asleep = static_cast<int32_t>(0x0),
__E_Awake = static_cast<int32_t>(0x1),
__E_JumpInitiated = static_cast<int32_t>(0x2),
__E_JumpAnticipation = static_cast<int32_t>(0x3),
__E_Jumping = static_cast<int32_t>(0x4),
__E_Held = static_cast<int32_t>(0x5),
__E_HeldAlert = static_cast<int32_t>(0x6),
__E_AttachedToPlayer = static_cast<int32_t>(0x7),
__E_Dropped = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRSentientCore_SentientCoreState_Unwrapped () const noexcept {
return static_cast<__GRSentientCore_SentientCoreState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRSentientCore_SentientCoreState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRSentientCore_SentientCoreState(int32_t  value__) noexcept;

/// @brief Field Asleep value: I32(0)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const Asleep;

/// @brief Field AttachedToPlayer value: I32(7)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const AttachedToPlayer;

/// @brief Field Awake value: I32(1)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const Awake;

/// @brief Field Dropped value: I32(8)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const Dropped;

/// @brief Field Held value: I32(5)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const Held;

/// @brief Field HeldAlert value: I32(6)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const HeldAlert;

/// @brief Field JumpAnticipation value: I32(3)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const JumpAnticipation;

/// @brief Field JumpInitiated value: I32(2)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const JumpInitiated;

/// @brief Field Jumping value: I32(4)
static ::GlobalNamespace::GRSentientCore_SentientCoreState const Jumping;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSentientCore_SentientCoreState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSentientCore_SentientCoreState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
