#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StickyCosmetic_ObjectState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StickyCosmetic_ObjectState)
// Forward declare root types
namespace GlobalNamespace {
struct StickyCosmetic_ObjectState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StickyCosmetic_ObjectState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickyCosmetic_ObjectState, "GorillaTag.Cosmetics", "StickyCosmetic/ObjectState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.StickyCosmetic/ObjectState
struct CORDL_TYPE StickyCosmetic_ObjectState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StickyCosmetic_ObjectState_Unwrapped
enum struct __StickyCosmetic_ObjectState_Unwrapped : int32_t {
__E_Extending = static_cast<int32_t>(0x0),
__E_Retracting = static_cast<int32_t>(0x1),
__E_Stuck = static_cast<int32_t>(0x2),
__E_JustRetracted = static_cast<int32_t>(0x3),
__E_Idle = static_cast<int32_t>(0x4),
__E_AutoUnstuck = static_cast<int32_t>(0x5),
__E_AutoRetract = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StickyCosmetic_ObjectState_Unwrapped () const noexcept {
return static_cast<__StickyCosmetic_ObjectState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StickyCosmetic_ObjectState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StickyCosmetic_ObjectState(int32_t  value__) noexcept;

/// @brief Field AutoRetract value: I32(6)
static ::GlobalNamespace::StickyCosmetic_ObjectState const AutoRetract;

/// @brief Field AutoUnstuck value: I32(5)
static ::GlobalNamespace::StickyCosmetic_ObjectState const AutoUnstuck;

/// @brief Field Extending value: I32(0)
static ::GlobalNamespace::StickyCosmetic_ObjectState const Extending;

/// @brief Field Idle value: I32(4)
static ::GlobalNamespace::StickyCosmetic_ObjectState const Idle;

/// @brief Field JustRetracted value: I32(3)
static ::GlobalNamespace::StickyCosmetic_ObjectState const JustRetracted;

/// @brief Field Retracting value: I32(1)
static ::GlobalNamespace::StickyCosmetic_ObjectState const Retracting;

/// @brief Field Stuck value: I32(2)
static ::GlobalNamespace::StickyCosmetic_ObjectState const Stuck;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickyCosmetic_ObjectState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickyCosmetic_ObjectState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
