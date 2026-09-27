#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunMessage_StunMessageType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StunMessage_StunMessageType)
// Forward declare root types
namespace GlobalNamespace {
struct StunMessage_StunMessageType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StunMessage_StunMessageType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StunMessage_StunMessageType, "Fusion.Sockets.Stun", "StunMessage/StunMessageType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.Stun.StunMessage/StunMessageType
struct CORDL_TYPE StunMessage_StunMessageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StunMessage_StunMessageType_Unwrapped
enum struct __StunMessage_StunMessageType_Unwrapped : int32_t {
__E_BindingRequest = static_cast<int32_t>(0x1),
__E_BindingResponse = static_cast<int32_t>(0x101),
__E_BindingErrorResponse = static_cast<int32_t>(0x111),
__E_SharedSecretRequest = static_cast<int32_t>(0x2),
__E_SharedSecretResponse = static_cast<int32_t>(0x102),
__E_SharedSecretErrorResponse = static_cast<int32_t>(0x112),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StunMessage_StunMessageType_Unwrapped () const noexcept {
return static_cast<__StunMessage_StunMessageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StunMessage_StunMessageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StunMessage_StunMessageType(int32_t  value__) noexcept;

/// @brief Field BindingErrorResponse value: I32(273)
static ::GlobalNamespace::StunMessage_StunMessageType const BindingErrorResponse;

/// @brief Field BindingRequest value: I32(1)
static ::GlobalNamespace::StunMessage_StunMessageType const BindingRequest;

/// @brief Field BindingResponse value: I32(257)
static ::GlobalNamespace::StunMessage_StunMessageType const BindingResponse;

/// @brief Field SharedSecretErrorResponse value: I32(274)
static ::GlobalNamespace::StunMessage_StunMessageType const SharedSecretErrorResponse;

/// @brief Field SharedSecretRequest value: I32(2)
static ::GlobalNamespace::StunMessage_StunMessageType const SharedSecretRequest;

/// @brief Field SharedSecretResponse value: I32(258)
static ::GlobalNamespace::StunMessage_StunMessageType const SharedSecretResponse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29403};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StunMessage_StunMessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StunMessage_StunMessageType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
