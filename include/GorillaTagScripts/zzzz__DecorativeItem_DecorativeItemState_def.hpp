#pragma once
// IWYU pragma private; include "GorillaTagScripts/DecorativeItem_DecorativeItemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecorativeItem_DecorativeItemState)
// Forward declare root types
namespace GlobalNamespace {
struct DecorativeItem_DecorativeItemState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecorativeItem_DecorativeItemState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecorativeItem_DecorativeItemState, "GorillaTagScripts", "DecorativeItem/DecorativeItemState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.DecorativeItem/DecorativeItemState
struct CORDL_TYPE DecorativeItem_DecorativeItemState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DecorativeItem_DecorativeItemState_Unwrapped
enum struct __DecorativeItem_DecorativeItemState_Unwrapped : int32_t {
__E_isHeld = static_cast<int32_t>(0x1),
__E_dropped = static_cast<int32_t>(0x2),
__E_snapped = static_cast<int32_t>(0x4),
__E_respawn = static_cast<int32_t>(0x8),
__E_none = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DecorativeItem_DecorativeItemState_Unwrapped () const noexcept {
return static_cast<__DecorativeItem_DecorativeItemState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DecorativeItem_DecorativeItemState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DecorativeItem_DecorativeItemState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3967};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field dropped value: I32(2)
static ::GlobalNamespace::DecorativeItem_DecorativeItemState const dropped;

/// @brief Field isHeld value: I32(1)
static ::GlobalNamespace::DecorativeItem_DecorativeItemState const isHeld;

/// @brief Field none value: I32(16)
static ::GlobalNamespace::DecorativeItem_DecorativeItemState const none;

/// @brief Field respawn value: I32(8)
static ::GlobalNamespace::DecorativeItem_DecorativeItemState const respawn;

/// @brief Field snapped value: I32(4)
static ::GlobalNamespace::DecorativeItem_DecorativeItemState const snapped;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DecorativeItem_DecorativeItemState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DecorativeItem_DecorativeItemState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
