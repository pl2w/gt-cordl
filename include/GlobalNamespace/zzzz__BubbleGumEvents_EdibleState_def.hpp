#pragma once
// IWYU pragma private; include "GlobalNamespace/BubbleGumEvents_EdibleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BubbleGumEvents_EdibleState)
// Forward declare root types
namespace GlobalNamespace {
struct BubbleGumEvents_EdibleState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BubbleGumEvents_EdibleState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BubbleGumEvents_EdibleState, "", "BubbleGumEvents/EdibleState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BubbleGumEvents/EdibleState
struct CORDL_TYPE BubbleGumEvents_EdibleState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BubbleGumEvents_EdibleState_Unwrapped
enum struct __BubbleGumEvents_EdibleState_Unwrapped : int32_t {
__E_A = static_cast<int32_t>(0x1),
__E_B = static_cast<int32_t>(0x2),
__E_C = static_cast<int32_t>(0x4),
__E_D = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BubbleGumEvents_EdibleState_Unwrapped () const noexcept {
return static_cast<__BubbleGumEvents_EdibleState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BubbleGumEvents_EdibleState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BubbleGumEvents_EdibleState(int32_t  value__) noexcept;

/// @brief Field A value: I32(1)
static ::GlobalNamespace::BubbleGumEvents_EdibleState const A;

/// @brief Field B value: I32(2)
static ::GlobalNamespace::BubbleGumEvents_EdibleState const B;

/// @brief Field C value: I32(4)
static ::GlobalNamespace::BubbleGumEvents_EdibleState const C;

/// @brief Field D value: I32(8)
static ::GlobalNamespace::BubbleGumEvents_EdibleState const D;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BubbleGumEvents_EdibleState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BubbleGumEvents_EdibleState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
