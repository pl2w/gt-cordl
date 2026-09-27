#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderProjectileLauncher_FunctionalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderProjectileLauncher_FunctionalState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderProjectileLauncher_FunctionalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderProjectileLauncher_FunctionalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderProjectileLauncher_FunctionalState, "GorillaTagScripts.Builder", "BuilderProjectileLauncher/FunctionalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderProjectileLauncher/FunctionalState
struct CORDL_TYPE BuilderProjectileLauncher_FunctionalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderProjectileLauncher_FunctionalState_Unwrapped
enum struct __BuilderProjectileLauncher_FunctionalState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Fire = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderProjectileLauncher_FunctionalState_Unwrapped () const noexcept {
return static_cast<__BuilderProjectileLauncher_FunctionalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderProjectileLauncher_FunctionalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderProjectileLauncher_FunctionalState(int32_t  value__) noexcept;

/// @brief Field Fire value: I32(1)
static ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState const Fire;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState const Idle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4167};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderProjectileLauncher_FunctionalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderProjectileLauncher_FunctionalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
