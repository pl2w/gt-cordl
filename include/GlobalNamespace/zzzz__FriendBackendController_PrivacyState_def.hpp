#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendBackendController_PrivacyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendBackendController_PrivacyState)
// Forward declare root types
namespace GlobalNamespace {
struct FriendBackendController_PrivacyState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendBackendController_PrivacyState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendBackendController_PrivacyState, "", "FriendBackendController/PrivacyState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendBackendController/PrivacyState
struct CORDL_TYPE FriendBackendController_PrivacyState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FriendBackendController_PrivacyState_Unwrapped
enum struct __FriendBackendController_PrivacyState_Unwrapped : int32_t {
__E_VISIBLE = static_cast<int32_t>(0x0),
__E_PUBLIC_ONLY = static_cast<int32_t>(0x1),
__E_HIDDEN = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FriendBackendController_PrivacyState_Unwrapped () const noexcept {
return static_cast<__FriendBackendController_PrivacyState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FriendBackendController_PrivacyState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FriendBackendController_PrivacyState(int32_t  value__) noexcept;

/// @brief Field HIDDEN value: I32(2)
static ::GlobalNamespace::FriendBackendController_PrivacyState const HIDDEN;

/// @brief Field PUBLIC_ONLY value: I32(1)
static ::GlobalNamespace::FriendBackendController_PrivacyState const PUBLIC_ONLY;

/// @brief Field VISIBLE value: I32(0)
static ::GlobalNamespace::FriendBackendController_PrivacyState const VISIBLE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendBackendController_PrivacyState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendBackendController_PrivacyState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
