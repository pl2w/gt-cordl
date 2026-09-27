#pragma once
// IWYU pragma private; include "Fusion/Protocol/ProtocolMessageVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProtocolMessageVersion)
// Forward declare root types
namespace Fusion::Protocol {
struct ProtocolMessageVersion;
}
// Write type traits
MARK_VAL_T(::Fusion::Protocol::ProtocolMessageVersion);
DEFINE_IL2CPP_CLASS(::Fusion::Protocol::ProtocolMessageVersion, "Fusion.Protocol", "ProtocolMessageVersion");
// Dependencies 
namespace Fusion::Protocol {
// Is value type: true
// CS Name: Fusion.Protocol.ProtocolMessageVersion
struct CORDL_TYPE ProtocolMessageVersion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ProtocolMessageVersion_Unwrapped
enum struct __ProtocolMessageVersion_Unwrapped : uint8_t {
__E_Invalid = static_cast<uint8_t>(0x0u),
__E_V1_0_0 = static_cast<uint8_t>(0x1u),
__E_V1_1_0 = static_cast<uint8_t>(0x2u),
__E_V1_2_0 = static_cast<uint8_t>(0x3u),
__E_V1_2_1 = static_cast<uint8_t>(0x4u),
__E_V1_2_2 = static_cast<uint8_t>(0x5u),
__E_V1_2_3 = static_cast<uint8_t>(0x6u),
__E_V1_3_0 = static_cast<uint8_t>(0x7u),
__E_V1_4_0 = static_cast<uint8_t>(0x8u),
__E_V1_5_0 = static_cast<uint8_t>(0x9u),
__E_V1_6_0 = static_cast<uint8_t>(0xau),
__E_LATEST = static_cast<uint8_t>(0xau),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProtocolMessageVersion_Unwrapped () const noexcept {
return static_cast<__ProtocolMessageVersion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProtocolMessageVersion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ProtocolMessageVersion(uint8_t  value__) noexcept;

/// @brief Field Invalid value: U8(0)
static ::Fusion::Protocol::ProtocolMessageVersion const Invalid;

/// @brief Field LATEST value: U8(10)
static ::Fusion::Protocol::ProtocolMessageVersion const LATEST;

/// @brief Field V1_0_0 value: U8(1)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_0_0;

/// @brief Field V1_1_0 value: U8(2)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_1_0;

/// @brief Field V1_2_0 value: U8(3)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_2_0;

/// @brief Field V1_2_1 value: U8(4)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_2_1;

/// @brief Field V1_2_2 value: U8(5)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_2_2;

/// @brief Field V1_2_3 value: U8(6)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_2_3;

/// @brief Field V1_3_0 value: U8(7)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_3_0;

/// @brief Field V1_4_0 value: U8(8)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_4_0;

/// @brief Field V1_5_0 value: U8(9)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_5_0;

/// @brief Field V1_6_0 value: U8(10)
static ::Fusion::Protocol::ProtocolMessageVersion const V1_6_0;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29334};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Protocol::ProtocolMessageVersion, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Protocol::ProtocolMessageVersion) == 0x1, "Size mismatch!");

} // namespace end def Fusion::Protocol
