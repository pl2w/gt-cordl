#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunMessage_AttributeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StunMessage_AttributeType)
// Forward declare root types
namespace GlobalNamespace {
struct StunMessage_AttributeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StunMessage_AttributeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StunMessage_AttributeType, "Fusion.Sockets.Stun", "StunMessage/AttributeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.Stun.StunMessage/AttributeType
struct CORDL_TYPE StunMessage_AttributeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StunMessage_AttributeType_Unwrapped
enum struct __StunMessage_AttributeType_Unwrapped : int32_t {
__E_MappedAddress = static_cast<int32_t>(0x1),
__E_Username = static_cast<int32_t>(0x6),
__E_MessageIntegrity = static_cast<int32_t>(0x8),
__E_ErrorCode = static_cast<int32_t>(0x9),
__E_UnknownAttribute = static_cast<int32_t>(0xa),
__E_Realm = static_cast<int32_t>(0x14),
__E_Nonce = static_cast<int32_t>(0x15),
__E_XorMappedAddress = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StunMessage_AttributeType_Unwrapped () const noexcept {
return static_cast<__StunMessage_AttributeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StunMessage_AttributeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StunMessage_AttributeType(int32_t  value__) noexcept;

/// @brief Field ErrorCode value: I32(9)
static ::GlobalNamespace::StunMessage_AttributeType const ErrorCode;

/// @brief Field MappedAddress value: I32(1)
static ::GlobalNamespace::StunMessage_AttributeType const MappedAddress;

/// @brief Field MessageIntegrity value: I32(8)
static ::GlobalNamespace::StunMessage_AttributeType const MessageIntegrity;

/// @brief Field Nonce value: I32(21)
static ::GlobalNamespace::StunMessage_AttributeType const Nonce;

/// @brief Field Realm value: I32(20)
static ::GlobalNamespace::StunMessage_AttributeType const Realm;

/// @brief Field UnknownAttribute value: I32(10)
static ::GlobalNamespace::StunMessage_AttributeType const UnknownAttribute;

/// @brief Field Username value: I32(6)
static ::GlobalNamespace::StunMessage_AttributeType const Username;

/// @brief Field XorMappedAddress value: I32(32)
static ::GlobalNamespace::StunMessage_AttributeType const XorMappedAddress;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29404};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StunMessage_AttributeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StunMessage_AttributeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
