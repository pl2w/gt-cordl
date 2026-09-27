#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentScreen_PopupState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsentScreen_PopupState)
// Forward declare root types
namespace GlobalNamespace {
struct ConsentScreen_PopupState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConsentScreen_PopupState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsentScreen_PopupState, "", "ConsentScreen/PopupState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConsentScreen/PopupState
struct CORDL_TYPE ConsentScreen_PopupState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConsentScreen_PopupState_Unwrapped
enum struct __ConsentScreen_PopupState_Unwrapped : int32_t {
__E_Hidden = static_cast<int32_t>(0x0),
__E_Prompt = static_cast<int32_t>(0x1),
__E_Processing = static_cast<int32_t>(0x2),
__E_Result = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsentScreen_PopupState_Unwrapped () const noexcept {
return static_cast<__ConsentScreen_PopupState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConsentScreen_PopupState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConsentScreen_PopupState(int32_t  value__) noexcept;

/// @brief Field Hidden value: I32(0)
static ::GlobalNamespace::ConsentScreen_PopupState const Hidden;

/// @brief Field Processing value: I32(2)
static ::GlobalNamespace::ConsentScreen_PopupState const Processing;

/// @brief Field Prompt value: I32(1)
static ::GlobalNamespace::ConsentScreen_PopupState const Prompt;

/// @brief Field Result value: I32(3)
static ::GlobalNamespace::ConsentScreen_PopupState const Result;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsentScreen_PopupState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsentScreen_PopupState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
