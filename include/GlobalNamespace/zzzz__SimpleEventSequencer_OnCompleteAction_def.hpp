#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleEventSequencer_OnCompleteAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleEventSequencer_OnCompleteAction)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleEventSequencer_OnCompleteAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleEventSequencer_OnCompleteAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleEventSequencer_OnCompleteAction, "", "SimpleEventSequencer/OnCompleteAction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SimpleEventSequencer/OnCompleteAction
struct CORDL_TYPE SimpleEventSequencer_OnCompleteAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimpleEventSequencer_OnCompleteAction_Unwrapped
enum struct __SimpleEventSequencer_OnCompleteAction_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Disable = static_cast<int32_t>(0x1),
__E_Repeat = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimpleEventSequencer_OnCompleteAction_Unwrapped () const noexcept {
return static_cast<__SimpleEventSequencer_OnCompleteAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimpleEventSequencer_OnCompleteAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimpleEventSequencer_OnCompleteAction(int32_t  value__) noexcept;

/// @brief Field Disable value: I32(1)
static ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction const Disable;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction const None;

/// @brief Field Repeat value: I32(2)
static ::GlobalNamespace::SimpleEventSequencer_OnCompleteAction const Repeat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleEventSequencer_OnCompleteAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleEventSequencer_OnCompleteAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
