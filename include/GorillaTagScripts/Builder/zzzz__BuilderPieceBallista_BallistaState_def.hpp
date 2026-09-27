#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceBallista_BallistaState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceBallista_BallistaState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceBallista_BallistaState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceBallista_BallistaState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceBallista_BallistaState, "GorillaTagScripts.Builder", "BuilderPieceBallista/BallistaState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderPieceBallista/BallistaState
struct CORDL_TYPE BuilderPieceBallista_BallistaState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceBallista_BallistaState_Unwrapped
enum struct __BuilderPieceBallista_BallistaState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Loading = static_cast<int32_t>(0x1),
__E_WaitingForTrigger = static_cast<int32_t>(0x2),
__E_PlayerInTrigger = static_cast<int32_t>(0x3),
__E_PrepareForLaunch = static_cast<int32_t>(0x4),
__E_PrepareForLaunchLocal = static_cast<int32_t>(0x5),
__E_Launching = static_cast<int32_t>(0x6),
__E_LaunchingLocal = static_cast<int32_t>(0x7),
__E_Count = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceBallista_BallistaState_Unwrapped () const noexcept {
return static_cast<__BuilderPieceBallista_BallistaState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceBallista_BallistaState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceBallista_BallistaState(int32_t  value__) noexcept;

/// @brief Field Count value: I32(8)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const Count;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const Idle;

/// @brief Field Launching value: I32(6)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const Launching;

/// @brief Field LaunchingLocal value: I32(7)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const LaunchingLocal;

/// @brief Field Loading value: I32(1)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const Loading;

/// @brief Field PlayerInTrigger value: I32(3)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const PlayerInTrigger;

/// @brief Field PrepareForLaunch value: I32(4)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const PrepareForLaunch;

/// @brief Field PrepareForLaunchLocal value: I32(5)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const PrepareForLaunchLocal;

/// @brief Field WaitingForTrigger value: I32(2)
static ::GlobalNamespace::BuilderPieceBallista_BallistaState const WaitingForTrigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceBallista_BallistaState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceBallista_BallistaState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
