#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceTappable_FunctionalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceTappable_FunctionalState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceTappable_FunctionalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceTappable_FunctionalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceTappable_FunctionalState, "GorillaTagScripts.Builder", "BuilderPieceTappable/FunctionalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.BuilderPieceTappable/FunctionalState
struct CORDL_TYPE BuilderPieceTappable_FunctionalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceTappable_FunctionalState_Unwrapped
enum struct __BuilderPieceTappable_FunctionalState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Tap = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceTappable_FunctionalState_Unwrapped () const noexcept {
return static_cast<__BuilderPieceTappable_FunctionalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceTappable_FunctionalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceTappable_FunctionalState(int32_t  value__) noexcept;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::BuilderPieceTappable_FunctionalState const Idle;

/// @brief Field Tap value: I32(1)
static ::GlobalNamespace::BuilderPieceTappable_FunctionalState const Tap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4159};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceTappable_FunctionalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceTappable_FunctionalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
