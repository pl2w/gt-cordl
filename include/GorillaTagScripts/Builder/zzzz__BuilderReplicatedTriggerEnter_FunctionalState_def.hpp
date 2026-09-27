#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderReplicatedTriggerEnter_FunctionalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderReplicatedTriggerEnter_FunctionalState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderReplicatedTriggerEnter_FunctionalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState, "GorillaTagScripts.Builder", "BuilderReplicatedTriggerEnter/FunctionalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderReplicatedTriggerEnter/FunctionalState
struct CORDL_TYPE BuilderReplicatedTriggerEnter_FunctionalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderReplicatedTriggerEnter_FunctionalState_Unwrapped
enum struct __BuilderReplicatedTriggerEnter_FunctionalState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_TriggerEntered = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderReplicatedTriggerEnter_FunctionalState_Unwrapped () const noexcept {
return static_cast<__BuilderReplicatedTriggerEnter_FunctionalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderReplicatedTriggerEnter_FunctionalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderReplicatedTriggerEnter_FunctionalState(int32_t  value__) noexcept;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState const Idle;

/// @brief Field TriggerEntered value: I32(1)
static ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState const TriggerEntered;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4170};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
