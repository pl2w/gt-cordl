#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_OnlineFunctions_BackendCallState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Bindings_OnlineFunctions_BackendCallState)
// Forward declare root types
namespace GlobalNamespace {
struct OnlineFunctions_Bindings_BackendCallState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState, "", "Bindings/OnlineFunctions/BackendCallState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/OnlineFunctions/BackendCallState
struct CORDL_TYPE OnlineFunctions_Bindings_BackendCallState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings_BackendCallState() ;

// Ctor Parameters [CppParam { name: "InFlight", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LastCallTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OnlineFunctions_Bindings_BackendCallState(bool  InFlight, float_t  LastCallTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field InFlight, offset: 0x0, size: 0x1, def value: None
 bool  InFlight;

/// @brief Field LastCallTime, offset: 0x4, size: 0x4, def value: None
 float_t  LastCallTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState, InFlight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState, LastCallTime) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings_BackendCallState) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
