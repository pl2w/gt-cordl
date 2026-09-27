#pragma once
// IWYU pragma private; include "GorillaTagScripts/LurkerGhost_ghostState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LurkerGhost_ghostState)
// Forward declare root types
namespace GlobalNamespace {
struct LurkerGhost_ghostState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LurkerGhost_ghostState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LurkerGhost_ghostState, "GorillaTagScripts", "LurkerGhost/ghostState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.LurkerGhost/ghostState
struct CORDL_TYPE LurkerGhost_ghostState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LurkerGhost_ghostState_Unwrapped
enum struct __LurkerGhost_ghostState_Unwrapped : int32_t {
__E_patrol = static_cast<int32_t>(0x0),
__E_seek = static_cast<int32_t>(0x1),
__E_charge = static_cast<int32_t>(0x2),
__E_possess = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LurkerGhost_ghostState_Unwrapped () const noexcept {
return static_cast<__LurkerGhost_ghostState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LurkerGhost_ghostState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LurkerGhost_ghostState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3997};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field charge value: I32(2)
static ::GlobalNamespace::LurkerGhost_ghostState const charge;

/// @brief Field patrol value: I32(0)
static ::GlobalNamespace::LurkerGhost_ghostState const patrol;

/// @brief Field possess value: I32(3)
static ::GlobalNamespace::LurkerGhost_ghostState const possess;

/// @brief Field seek value: I32(1)
static ::GlobalNamespace::LurkerGhost_ghostState const seek;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LurkerGhost_ghostState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LurkerGhost_ghostState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
