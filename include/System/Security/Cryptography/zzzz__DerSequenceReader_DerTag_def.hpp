#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DerSequenceReader_DerTag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DerSequenceReader_DerTag)
// Forward declare root types
namespace GlobalNamespace {
struct DerSequenceReader_DerTag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DerSequenceReader_DerTag);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DerSequenceReader_DerTag, "System.Security.Cryptography", "DerSequenceReader/DerTag");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Security.Cryptography.DerSequenceReader/DerTag
struct CORDL_TYPE DerSequenceReader_DerTag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DerSequenceReader_DerTag_Unwrapped
enum struct __DerSequenceReader_DerTag_Unwrapped : uint8_t {
__E_Boolean = static_cast<uint8_t>(0x1u),
__E_Integer = static_cast<uint8_t>(0x2u),
__E_BitString = static_cast<uint8_t>(0x3u),
__E_OctetString = static_cast<uint8_t>(0x4u),
__E_Null = static_cast<uint8_t>(0x5u),
__E_ObjectIdentifier = static_cast<uint8_t>(0x6u),
__E_UTF8String = static_cast<uint8_t>(0xcu),
__E_Sequence = static_cast<uint8_t>(0x10u),
__E_Set = static_cast<uint8_t>(0x11u),
__E_PrintableString = static_cast<uint8_t>(0x13u),
__E_T61String = static_cast<uint8_t>(0x14u),
__E_IA5String = static_cast<uint8_t>(0x16u),
__E_UTCTime = static_cast<uint8_t>(0x17u),
__E_GeneralizedTime = static_cast<uint8_t>(0x18u),
__E_BMPString = static_cast<uint8_t>(0x1eu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DerSequenceReader_DerTag_Unwrapped () const noexcept {
return static_cast<__DerSequenceReader_DerTag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DerSequenceReader_DerTag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr DerSequenceReader_DerTag(uint8_t  value__) noexcept;

/// @brief Field BMPString value: U8(30)
static ::GlobalNamespace::DerSequenceReader_DerTag const BMPString;

/// @brief Field BitString value: U8(3)
static ::GlobalNamespace::DerSequenceReader_DerTag const BitString;

/// @brief Field Boolean value: U8(1)
static ::GlobalNamespace::DerSequenceReader_DerTag const Boolean;

/// @brief Field GeneralizedTime value: U8(24)
static ::GlobalNamespace::DerSequenceReader_DerTag const GeneralizedTime;

/// @brief Field IA5String value: U8(22)
static ::GlobalNamespace::DerSequenceReader_DerTag const IA5String;

/// @brief Field Integer value: U8(2)
static ::GlobalNamespace::DerSequenceReader_DerTag const Integer;

/// @brief Field Null value: U8(5)
static ::GlobalNamespace::DerSequenceReader_DerTag const Null;

/// @brief Field ObjectIdentifier value: U8(6)
static ::GlobalNamespace::DerSequenceReader_DerTag const ObjectIdentifier;

/// @brief Field OctetString value: U8(4)
static ::GlobalNamespace::DerSequenceReader_DerTag const OctetString;

/// @brief Field PrintableString value: U8(19)
static ::GlobalNamespace::DerSequenceReader_DerTag const PrintableString;

/// @brief Field Sequence value: U8(16)
static ::GlobalNamespace::DerSequenceReader_DerTag const Sequence;

/// @brief Field Set value: U8(17)
static ::GlobalNamespace::DerSequenceReader_DerTag const Set;

/// @brief Field T61String value: U8(20)
static ::GlobalNamespace::DerSequenceReader_DerTag const T61String;

/// @brief Field UTCTime value: U8(23)
static ::GlobalNamespace::DerSequenceReader_DerTag const UTCTime;

/// @brief Field UTF8String value: U8(12)
static ::GlobalNamespace::DerSequenceReader_DerTag const UTF8String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DerSequenceReader_DerTag, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DerSequenceReader_DerTag) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
