#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol16_GpType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Protocol16_GpType)
// Forward declare root types
namespace GlobalNamespace {
struct Protocol16_GpType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Protocol16_GpType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Protocol16_GpType, "ExitGames.Client.Photon", "Protocol16/GpType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ExitGames.Client.Photon.Protocol16/GpType
struct CORDL_TYPE Protocol16_GpType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Protocol16_GpType_Unwrapped
enum struct __Protocol16_GpType_Unwrapped : uint8_t {
__E_Unknown = static_cast<uint8_t>(0x0u),
__E_Array = static_cast<uint8_t>(0x79u),
__E_Boolean = static_cast<uint8_t>(0x6fu),
__E_Byte = static_cast<uint8_t>(0x62u),
__E_ByteArray = static_cast<uint8_t>(0x78u),
__E_ObjectArray = static_cast<uint8_t>(0x7au),
__E_Short = static_cast<uint8_t>(0x6bu),
__E_Float = static_cast<uint8_t>(0x66u),
__E_Dictionary = static_cast<uint8_t>(0x44u),
__E_Double = static_cast<uint8_t>(0x64u),
__E_Hashtable = static_cast<uint8_t>(0x68u),
__E_Integer = static_cast<uint8_t>(0x69u),
__E_IntegerArray = static_cast<uint8_t>(0x6eu),
__E_Long = static_cast<uint8_t>(0x6cu),
__E_String = static_cast<uint8_t>(0x73u),
__E_StringArray = static_cast<uint8_t>(0x61u),
__E_Custom = static_cast<uint8_t>(0x63u),
__E_Null = static_cast<uint8_t>(0x2au),
__E_EventData = static_cast<uint8_t>(0x65u),
__E_OperationRequest = static_cast<uint8_t>(0x71u),
__E_OperationResponse = static_cast<uint8_t>(0x70u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Protocol16_GpType_Unwrapped () const noexcept {
return static_cast<__Protocol16_GpType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Protocol16_GpType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Protocol16_GpType(uint8_t  value__) noexcept;

/// @brief Field Array value: U8(121)
static ::GlobalNamespace::Protocol16_GpType const Array;

/// @brief Field Boolean value: U8(111)
static ::GlobalNamespace::Protocol16_GpType const Boolean;

/// @brief Field Byte value: U8(98)
static ::GlobalNamespace::Protocol16_GpType const Byte;

/// @brief Field ByteArray value: U8(120)
static ::GlobalNamespace::Protocol16_GpType const ByteArray;

/// @brief Field Custom value: U8(99)
static ::GlobalNamespace::Protocol16_GpType const Custom;

/// @brief Field Dictionary value: U8(68)
static ::GlobalNamespace::Protocol16_GpType const Dictionary;

/// @brief Field Double value: U8(100)
static ::GlobalNamespace::Protocol16_GpType const Double;

/// @brief Field EventData value: U8(101)
static ::GlobalNamespace::Protocol16_GpType const EventData;

/// @brief Field Float value: U8(102)
static ::GlobalNamespace::Protocol16_GpType const Float;

/// @brief Field Hashtable value: U8(104)
static ::GlobalNamespace::Protocol16_GpType const Hashtable;

/// @brief Field Integer value: U8(105)
static ::GlobalNamespace::Protocol16_GpType const Integer;

/// @brief Field IntegerArray value: U8(110)
static ::GlobalNamespace::Protocol16_GpType const IntegerArray;

/// @brief Field Long value: U8(108)
static ::GlobalNamespace::Protocol16_GpType const Long;

/// @brief Field Null value: U8(42)
static ::GlobalNamespace::Protocol16_GpType const Null;

/// @brief Field ObjectArray value: U8(122)
static ::GlobalNamespace::Protocol16_GpType const ObjectArray;

/// @brief Field OperationRequest value: U8(113)
static ::GlobalNamespace::Protocol16_GpType const OperationRequest;

/// @brief Field OperationResponse value: U8(112)
static ::GlobalNamespace::Protocol16_GpType const OperationResponse;

/// @brief Field Short value: U8(107)
static ::GlobalNamespace::Protocol16_GpType const Short;

/// @brief Field String value: U8(115)
static ::GlobalNamespace::Protocol16_GpType const String;

/// @brief Field StringArray value: U8(97)
static ::GlobalNamespace::Protocol16_GpType const StringArray;

/// @brief Field Unknown value: U8(0)
static ::GlobalNamespace::Protocol16_GpType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26464};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Protocol16_GpType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Protocol16_GpType) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
