#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_GRPlayerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRPlayer_GRPlayerState)
// Forward declare root types
namespace GlobalNamespace {
struct GRPlayer_GRPlayerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRPlayer_GRPlayerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer_GRPlayerState, "", "GRPlayer/GRPlayerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRPlayer/GRPlayerState
struct CORDL_TYPE GRPlayer_GRPlayerState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRPlayer_GRPlayerState_Unwrapped
enum struct __GRPlayer_GRPlayerState_Unwrapped : int32_t {
__E_Alive = static_cast<int32_t>(0x0),
__E_Ghost = static_cast<int32_t>(0x1),
__E_Shielded = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRPlayer_GRPlayerState_Unwrapped () const noexcept {
return static_cast<__GRPlayer_GRPlayerState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer_GRPlayerState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRPlayer_GRPlayerState(int32_t  value__) noexcept;

/// @brief Field Alive value: I32(0)
static ::GlobalNamespace::GRPlayer_GRPlayerState const Alive;

/// @brief Field Ghost value: I32(1)
static ::GlobalNamespace::GRPlayer_GRPlayerState const Ghost;

/// @brief Field Shielded value: I32(2)
static ::GlobalNamespace::GRPlayer_GRPlayerState const Shielded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1999};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer_GRPlayerState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer_GRPlayerState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
