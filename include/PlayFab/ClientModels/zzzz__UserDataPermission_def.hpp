#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserDataPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataPermission)
// Forward declare root types
namespace PlayFab::ClientModels {
struct UserDataPermission;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::UserDataPermission);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UserDataPermission, "PlayFab.ClientModels", "UserDataPermission");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.UserDataPermission
struct CORDL_TYPE UserDataPermission {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserDataPermission_Unwrapped
enum struct __UserDataPermission_Unwrapped : int32_t {
__E_Private = static_cast<int32_t>(0x0),
__E_Public = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserDataPermission_Unwrapped () const noexcept {
return static_cast<__UserDataPermission_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserDataPermission() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UserDataPermission(int32_t  value__) noexcept;

/// @brief Field Private value: I32(0)
static ::PlayFab::ClientModels::UserDataPermission const Private;

/// @brief Field Public value: I32(1)
static ::PlayFab::ClientModels::UserDataPermission const Public;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20295};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UserDataPermission, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UserDataPermission) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
