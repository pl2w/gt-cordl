#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven_BakingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfinerOven_BakingState)
// Forward declare root types
namespace GlobalNamespace {
struct ConfinerOven_BakingState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConfinerOven_BakingState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConfinerOven_BakingState, "Unity.Cinemachine", "ConfinerOven/BakingState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.ConfinerOven/BakingState
struct CORDL_TYPE ConfinerOven_BakingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConfinerOven_BakingState_Unwrapped
enum struct __ConfinerOven_BakingState_Unwrapped : int32_t {
__E_BAKING = static_cast<int32_t>(0x0),
__E_BAKED = static_cast<int32_t>(0x1),
__E_TIMEOUT = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfinerOven_BakingState_Unwrapped () const noexcept {
return static_cast<__ConfinerOven_BakingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConfinerOven_BakingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConfinerOven_BakingState(int32_t  value__) noexcept;

/// @brief Field BAKED value: I32(1)
static ::GlobalNamespace::ConfinerOven_BakingState const BAKED;

/// @brief Field BAKING value: I32(0)
static ::GlobalNamespace::ConfinerOven_BakingState const BAKING;

/// @brief Field TIMEOUT value: I32(2)
static ::GlobalNamespace::ConfinerOven_BakingState const TIMEOUT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConfinerOven_BakingState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConfinerOven_BakingState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
