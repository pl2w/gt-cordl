#pragma once
// IWYU pragma private; include "GorillaNetworking/PlayFabAuthenticator_SafetyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabAuthenticator_SafetyType)
// Forward declare root types
namespace GlobalNamespace {
struct PlayFabAuthenticator_SafetyType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayFabAuthenticator_SafetyType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayFabAuthenticator_SafetyType, "GorillaNetworking", "PlayFabAuthenticator/SafetyType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.PlayFabAuthenticator/SafetyType
struct CORDL_TYPE PlayFabAuthenticator_SafetyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayFabAuthenticator_SafetyType_Unwrapped
enum struct __PlayFabAuthenticator_SafetyType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Auto = static_cast<int32_t>(0x1),
__E_OptIn = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayFabAuthenticator_SafetyType_Unwrapped () const noexcept {
return static_cast<__PlayFabAuthenticator_SafetyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayFabAuthenticator_SafetyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayFabAuthenticator_SafetyType(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(1)
static ::GlobalNamespace::PlayFabAuthenticator_SafetyType const Auto;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::PlayFabAuthenticator_SafetyType const None;

/// @brief Field OptIn value: I32(2)
static ::GlobalNamespace::PlayFabAuthenticator_SafetyType const OptIn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayFabAuthenticator_SafetyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayFabAuthenticator_SafetyType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
