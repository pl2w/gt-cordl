#pragma once
// IWYU pragma private; include "GlobalNamespace/WanderingGhost_ghostState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WanderingGhost_ghostState)
// Forward declare root types
namespace GlobalNamespace {
struct WanderingGhost_ghostState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WanderingGhost_ghostState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WanderingGhost_ghostState, "", "WanderingGhost/ghostState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: WanderingGhost/ghostState
struct CORDL_TYPE WanderingGhost_ghostState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WanderingGhost_ghostState_Unwrapped
enum struct __WanderingGhost_ghostState_Unwrapped : int32_t {
__E_patrol = static_cast<int32_t>(0x0),
__E_idle = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WanderingGhost_ghostState_Unwrapped () const noexcept {
return static_cast<__WanderingGhost_ghostState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WanderingGhost_ghostState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WanderingGhost_ghostState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field idle value: I32(1)
static ::GlobalNamespace::WanderingGhost_ghostState const idle;

/// @brief Field patrol value: I32(0)
static ::GlobalNamespace::WanderingGhost_ghostState const patrol;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WanderingGhost_ghostState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WanderingGhost_ghostState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
