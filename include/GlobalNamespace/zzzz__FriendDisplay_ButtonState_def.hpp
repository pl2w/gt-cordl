#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendDisplay_ButtonState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendDisplay_ButtonState)
// Forward declare root types
namespace GlobalNamespace {
struct FriendDisplay_ButtonState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendDisplay_ButtonState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendDisplay_ButtonState, "", "FriendDisplay/ButtonState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendDisplay/ButtonState
struct CORDL_TYPE FriendDisplay_ButtonState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FriendDisplay_ButtonState_Unwrapped
enum struct __FriendDisplay_ButtonState_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Active = static_cast<int32_t>(0x1),
__E_Alert = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FriendDisplay_ButtonState_Unwrapped () const noexcept {
return static_cast<__FriendDisplay_ButtonState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FriendDisplay_ButtonState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FriendDisplay_ButtonState(int32_t  value__) noexcept;

/// @brief Field Active value: I32(1)
static ::GlobalNamespace::FriendDisplay_ButtonState const Active;

/// @brief Field Alert value: I32(2)
static ::GlobalNamespace::FriendDisplay_ButtonState const Alert;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::FriendDisplay_ButtonState const Default;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3262};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendDisplay_ButtonState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendDisplay_ButtonState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
