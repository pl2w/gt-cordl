#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/GorillaMaterialReaction_EMomentInState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaMaterialReaction_EMomentInState)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaMaterialReaction_EMomentInState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaMaterialReaction_EMomentInState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMaterialReaction_EMomentInState, "GorillaTag.Reactions", "GorillaMaterialReaction/EMomentInState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Reactions.GorillaMaterialReaction/EMomentInState
struct CORDL_TYPE GorillaMaterialReaction_EMomentInState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaMaterialReaction_EMomentInState_Unwrapped
enum struct __GorillaMaterialReaction_EMomentInState_Unwrapped : int32_t {
__E_OnEnter = static_cast<int32_t>(0x0),
__E_OnStay = static_cast<int32_t>(0x1),
__E_OnExit = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaMaterialReaction_EMomentInState_Unwrapped () const noexcept {
return static_cast<__GorillaMaterialReaction_EMomentInState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaMaterialReaction_EMomentInState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaMaterialReaction_EMomentInState(int32_t  value__) noexcept;

/// @brief Field OnEnter value: I32(0)
static ::GlobalNamespace::GorillaMaterialReaction_EMomentInState const OnEnter;

/// @brief Field OnExit value: I32(2)
static ::GlobalNamespace::GorillaMaterialReaction_EMomentInState const OnExit;

/// @brief Field OnStay value: I32(1)
static ::GlobalNamespace::GorillaMaterialReaction_EMomentInState const OnStay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4705};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaMaterialReaction_EMomentInState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaMaterialReaction_EMomentInState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
