#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolStatusWatch_WatchState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolStatusWatch_WatchState)
// Forward declare root types
namespace GlobalNamespace {
struct GRToolStatusWatch_WatchState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRToolStatusWatch_WatchState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolStatusWatch_WatchState, "", "GRToolStatusWatch/WatchState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRToolStatusWatch/WatchState
struct CORDL_TYPE GRToolStatusWatch_WatchState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRToolStatusWatch_WatchState_Unwrapped
enum struct __GRToolStatusWatch_WatchState_Unwrapped : int32_t {
__E_Dropped = static_cast<int32_t>(0x0),
__E_SnappedLocal = static_cast<int32_t>(0x1),
__E_SnappedRemote = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRToolStatusWatch_WatchState_Unwrapped () const noexcept {
return static_cast<__GRToolStatusWatch_WatchState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRToolStatusWatch_WatchState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRToolStatusWatch_WatchState(int32_t  value__) noexcept;

/// @brief Field Dropped value: I32(0)
static ::GlobalNamespace::GRToolStatusWatch_WatchState const Dropped;

/// @brief Field SnappedLocal value: I32(1)
static ::GlobalNamespace::GRToolStatusWatch_WatchState const SnappedLocal;

/// @brief Field SnappedRemote value: I32(2)
static ::GlobalNamespace::GRToolStatusWatch_WatchState const SnappedRemote;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolStatusWatch_WatchState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolStatusWatch_WatchState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
