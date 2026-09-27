#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderItem_BuilderItemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderItem_BuilderItemState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderItem_BuilderItemState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderItem_BuilderItemState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderItem_BuilderItemState, "GorillaTagScripts", "BuilderItem/BuilderItemState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderItem/BuilderItemState
struct CORDL_TYPE BuilderItem_BuilderItemState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderItem_BuilderItemState_Unwrapped
enum struct __BuilderItem_BuilderItemState_Unwrapped : int32_t {
__E_isHeld = static_cast<int32_t>(0x1),
__E_dropped = static_cast<int32_t>(0x2),
__E_placed = static_cast<int32_t>(0x4),
__E_unused0 = static_cast<int32_t>(0x8),
__E_none = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderItem_BuilderItemState_Unwrapped () const noexcept {
return static_cast<__BuilderItem_BuilderItemState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderItem_BuilderItemState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderItem_BuilderItemState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3929};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field dropped value: I32(2)
static ::GlobalNamespace::BuilderItem_BuilderItemState const dropped;

/// @brief Field isHeld value: I32(1)
static ::GlobalNamespace::BuilderItem_BuilderItemState const isHeld;

/// @brief Field none value: I32(16)
static ::GlobalNamespace::BuilderItem_BuilderItemState const none;

/// @brief Field placed value: I32(4)
static ::GlobalNamespace::BuilderItem_BuilderItemState const placed;

/// @brief Field unused0 value: I32(8)
static ::GlobalNamespace::BuilderItem_BuilderItemState const unused0;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderItem_BuilderItemState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderItem_BuilderItemState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
