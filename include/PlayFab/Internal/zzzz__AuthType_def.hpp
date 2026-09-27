#pragma once
// IWYU pragma private; include "PlayFab/Internal/AuthType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthType)
// Forward declare root types
namespace PlayFab::Internal {
struct AuthType;
}
// Write type traits
MARK_VAL_T(::PlayFab::Internal::AuthType);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::AuthType, "PlayFab.Internal", "AuthType");
// Dependencies 
namespace PlayFab::Internal {
// Is value type: true
// CS Name: PlayFab.Internal.AuthType
struct CORDL_TYPE AuthType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AuthType_Unwrapped
enum struct __AuthType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PreLoginSession = static_cast<int32_t>(0x1),
__E_LoginSession = static_cast<int32_t>(0x2),
__E_DevSecretKey = static_cast<int32_t>(0x3),
__E_EntityToken = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthType_Unwrapped () const noexcept {
return static_cast<__AuthType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AuthType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AuthType(int32_t  value__) noexcept;

/// @brief Field DevSecretKey value: I32(3)
static ::PlayFab::Internal::AuthType const DevSecretKey;

/// @brief Field EntityToken value: I32(4)
static ::PlayFab::Internal::AuthType const EntityToken;

/// @brief Field LoginSession value: I32(2)
static ::PlayFab::Internal::AuthType const LoginSession;

/// @brief Field None value: I32(0)
static ::PlayFab::Internal::AuthType const None;

/// @brief Field PreLoginSession value: I32(1)
static ::PlayFab::Internal::AuthType const PreLoginSession;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19916};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::AuthType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::AuthType) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::Internal
