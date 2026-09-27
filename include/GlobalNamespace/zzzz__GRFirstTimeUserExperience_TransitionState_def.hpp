#pragma once
// IWYU pragma private; include "GlobalNamespace/GRFirstTimeUserExperience_TransitionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRFirstTimeUserExperience_TransitionState)
// Forward declare root types
namespace GlobalNamespace {
struct GRFirstTimeUserExperience_TransitionState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRFirstTimeUserExperience_TransitionState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRFirstTimeUserExperience_TransitionState, "", "GRFirstTimeUserExperience/TransitionState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRFirstTimeUserExperience/TransitionState
struct CORDL_TYPE GRFirstTimeUserExperience_TransitionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRFirstTimeUserExperience_TransitionState_Unwrapped
enum struct __GRFirstTimeUserExperience_TransitionState_Unwrapped : int32_t {
__E_Waiting = static_cast<int32_t>(0x0),
__E_Flicker = static_cast<int32_t>(0x1),
__E_Logo = static_cast<int32_t>(0x2),
__E_ZoneLoad = static_cast<int32_t>(0x3),
__E_Teleport = static_cast<int32_t>(0x4),
__E_Exit = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRFirstTimeUserExperience_TransitionState_Unwrapped () const noexcept {
return static_cast<__GRFirstTimeUserExperience_TransitionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRFirstTimeUserExperience_TransitionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRFirstTimeUserExperience_TransitionState(int32_t  value__) noexcept;

/// @brief Field Exit value: I32(5)
static ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState const Exit;

/// @brief Field Flicker value: I32(1)
static ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState const Flicker;

/// @brief Field Logo value: I32(2)
static ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState const Logo;

/// @brief Field Teleport value: I32(4)
static ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState const Teleport;

/// @brief Field Waiting value: I32(0)
static ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState const Waiting;

/// @brief Field ZoneLoad value: I32(3)
static ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState const ZoneLoad;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1975};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRFirstTimeUserExperience_TransitionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRFirstTimeUserExperience_TransitionState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
