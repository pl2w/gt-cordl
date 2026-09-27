#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem_PlayerPrivacy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendSystem_PlayerPrivacy)
// Forward declare root types
namespace GlobalNamespace {
struct FriendSystem_PlayerPrivacy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendSystem_PlayerPrivacy);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendSystem_PlayerPrivacy, "", "FriendSystem/PlayerPrivacy");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendSystem/PlayerPrivacy
struct CORDL_TYPE FriendSystem_PlayerPrivacy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FriendSystem_PlayerPrivacy_Unwrapped
enum struct __FriendSystem_PlayerPrivacy_Unwrapped : int32_t {
__E_Visible = static_cast<int32_t>(0x0),
__E_PublicOnly = static_cast<int32_t>(0x1),
__E_Hidden = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FriendSystem_PlayerPrivacy_Unwrapped () const noexcept {
return static_cast<__FriendSystem_PlayerPrivacy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FriendSystem_PlayerPrivacy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FriendSystem_PlayerPrivacy(int32_t  value__) noexcept;

/// @brief Field Hidden value: I32(2)
static ::GlobalNamespace::FriendSystem_PlayerPrivacy const Hidden;

/// @brief Field PublicOnly value: I32(1)
static ::GlobalNamespace::FriendSystem_PlayerPrivacy const PublicOnly;

/// @brief Field Visible value: I32(0)
static ::GlobalNamespace::FriendSystem_PlayerPrivacy const Visible;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3273};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendSystem_PlayerPrivacy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendSystem_PlayerPrivacy) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
