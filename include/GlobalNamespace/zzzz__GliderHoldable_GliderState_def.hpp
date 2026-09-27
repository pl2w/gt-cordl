#pragma once
// IWYU pragma private; include "GlobalNamespace/GliderHoldable_GliderState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GliderHoldable_GliderState)
// Forward declare root types
namespace GlobalNamespace {
struct GliderHoldable_GliderState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GliderHoldable_GliderState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GliderHoldable_GliderState, "", "GliderHoldable/GliderState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GliderHoldable/GliderState
struct CORDL_TYPE GliderHoldable_GliderState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GliderHoldable_GliderState_Unwrapped
enum struct __GliderHoldable_GliderState_Unwrapped : int32_t {
__E_LocallyHeld = static_cast<int32_t>(0x0),
__E_LocallyDropped = static_cast<int32_t>(0x1),
__E_RemoteSyncing = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GliderHoldable_GliderState_Unwrapped () const noexcept {
return static_cast<__GliderHoldable_GliderState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GliderHoldable_GliderState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GliderHoldable_GliderState(int32_t  value__) noexcept;

/// @brief Field LocallyDropped value: I32(1)
static ::GlobalNamespace::GliderHoldable_GliderState const LocallyDropped;

/// @brief Field LocallyHeld value: I32(0)
static ::GlobalNamespace::GliderHoldable_GliderState const LocallyHeld;

/// @brief Field RemoteSyncing value: I32(2)
static ::GlobalNamespace::GliderHoldable_GliderState const RemoteSyncing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3301};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GliderHoldable_GliderState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GliderHoldable_GliderState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
