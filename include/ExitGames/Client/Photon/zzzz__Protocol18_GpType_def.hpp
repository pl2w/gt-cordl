#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol18_GpType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Protocol18_GpType)
// Forward declare root types
namespace GlobalNamespace {
struct Protocol18_GpType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Protocol18_GpType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Protocol18_GpType, "ExitGames.Client.Photon", "Protocol18/GpType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ExitGames.Client.Photon.Protocol18/GpType
struct CORDL_TYPE Protocol18_GpType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __Protocol18_GpType_Unwrapped
enum struct __Protocol18_GpType_Unwrapped : uint8_t {
__E_Unknown = static_cast<uint8_t>(0x0u),
__E_Boolean = static_cast<uint8_t>(0x2u),
__E_Byte = static_cast<uint8_t>(0x3u),
__E_Short = static_cast<uint8_t>(0x4u),
__E_Float = static_cast<uint8_t>(0x5u),
__E_Double = static_cast<uint8_t>(0x6u),
__E_String = static_cast<uint8_t>(0x7u),
__E_Null = static_cast<uint8_t>(0x8u),
__E_CompressedInt = static_cast<uint8_t>(0x9u),
__E_CompressedLong = static_cast<uint8_t>(0xau),
__E_Int1 = static_cast<uint8_t>(0xbu),
__E_Int1_ = static_cast<uint8_t>(0xcu),
__E_Int2 = static_cast<uint8_t>(0xdu),
__E_Int2_ = static_cast<uint8_t>(0xeu),
__E_L1 = static_cast<uint8_t>(0xfu),
__E_L1_ = static_cast<uint8_t>(0x10u),
__E_L2 = static_cast<uint8_t>(0x11u),
__E_L2_ = static_cast<uint8_t>(0x12u),
__E_Custom = static_cast<uint8_t>(0x13u),
__E_CustomTypeSlim = static_cast<uint8_t>(0x80u),
__E_Dictionary = static_cast<uint8_t>(0x14u),
__E_Hashtable = static_cast<uint8_t>(0x15u),
__E_ObjectArray = static_cast<uint8_t>(0x17u),
__E_OperationRequest = static_cast<uint8_t>(0x18u),
__E_OperationResponse = static_cast<uint8_t>(0x19u),
__E_EventData = static_cast<uint8_t>(0x1au),
__E_BooleanFalse = static_cast<uint8_t>(0x1bu),
__E_BooleanTrue = static_cast<uint8_t>(0x1cu),
__E_ShortZero = static_cast<uint8_t>(0x1du),
__E_IntZero = static_cast<uint8_t>(0x1eu),
__E_LongZero = static_cast<uint8_t>(0x1fu),
__E_FloatZero = static_cast<uint8_t>(0x20u),
__E_DoubleZero = static_cast<uint8_t>(0x21u),
__E_ByteZero = static_cast<uint8_t>(0x22u),
__E_Array = static_cast<uint8_t>(0x40u),
__E_BooleanArray = static_cast<uint8_t>(0x42u),
__E_ByteArray = static_cast<uint8_t>(0x43u),
__E_ShortArray = static_cast<uint8_t>(0x44u),
__E_DoubleArray = static_cast<uint8_t>(0x46u),
__E_FloatArray = static_cast<uint8_t>(0x45u),
__E_StringArray = static_cast<uint8_t>(0x47u),
__E_HashtableArray = static_cast<uint8_t>(0x55u),
__E_DictionaryArray = static_cast<uint8_t>(0x54u),
__E_CustomTypeArray = static_cast<uint8_t>(0x53u),
__E_CompressedIntArray = static_cast<uint8_t>(0x49u),
__E_CompressedLongArray = static_cast<uint8_t>(0x4au),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Protocol18_GpType_Unwrapped () const noexcept {
return static_cast<__Protocol18_GpType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Protocol18_GpType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Protocol18_GpType(uint8_t  value__) noexcept;

/// @brief Field Array value: U8(64)
static ::GlobalNamespace::Protocol18_GpType const Array;

/// @brief Field Boolean value: U8(2)
static ::GlobalNamespace::Protocol18_GpType const Boolean;

/// @brief Field BooleanArray value: U8(66)
static ::GlobalNamespace::Protocol18_GpType const BooleanArray;

/// @brief Field BooleanFalse value: U8(27)
static ::GlobalNamespace::Protocol18_GpType const BooleanFalse;

/// @brief Field BooleanTrue value: U8(28)
static ::GlobalNamespace::Protocol18_GpType const BooleanTrue;

/// @brief Field Byte value: U8(3)
static ::GlobalNamespace::Protocol18_GpType const Byte;

/// @brief Field ByteArray value: U8(67)
static ::GlobalNamespace::Protocol18_GpType const ByteArray;

/// @brief Field ByteZero value: U8(34)
static ::GlobalNamespace::Protocol18_GpType const ByteZero;

/// @brief Field CompressedInt value: U8(9)
static ::GlobalNamespace::Protocol18_GpType const CompressedInt;

/// @brief Field CompressedIntArray value: U8(73)
static ::GlobalNamespace::Protocol18_GpType const CompressedIntArray;

/// @brief Field CompressedLong value: U8(10)
static ::GlobalNamespace::Protocol18_GpType const CompressedLong;

/// @brief Field CompressedLongArray value: U8(74)
static ::GlobalNamespace::Protocol18_GpType const CompressedLongArray;

/// @brief Field Custom value: U8(19)
static ::GlobalNamespace::Protocol18_GpType const Custom;

/// @brief Field CustomTypeArray value: U8(83)
static ::GlobalNamespace::Protocol18_GpType const CustomTypeArray;

/// @brief Field CustomTypeSlim value: U8(128)
static ::GlobalNamespace::Protocol18_GpType const CustomTypeSlim;

/// @brief Field Dictionary value: U8(20)
static ::GlobalNamespace::Protocol18_GpType const Dictionary;

/// @brief Field DictionaryArray value: U8(84)
static ::GlobalNamespace::Protocol18_GpType const DictionaryArray;

/// @brief Field Double value: U8(6)
static ::GlobalNamespace::Protocol18_GpType const Double;

/// @brief Field DoubleArray value: U8(70)
static ::GlobalNamespace::Protocol18_GpType const DoubleArray;

/// @brief Field DoubleZero value: U8(33)
static ::GlobalNamespace::Protocol18_GpType const DoubleZero;

/// @brief Field EventData value: U8(26)
static ::GlobalNamespace::Protocol18_GpType const EventData;

/// @brief Field Float value: U8(5)
static ::GlobalNamespace::Protocol18_GpType const Float;

/// @brief Field FloatArray value: U8(69)
static ::GlobalNamespace::Protocol18_GpType const FloatArray;

/// @brief Field FloatZero value: U8(32)
static ::GlobalNamespace::Protocol18_GpType const FloatZero;

/// @brief Field Hashtable value: U8(21)
static ::GlobalNamespace::Protocol18_GpType const Hashtable;

/// @brief Field HashtableArray value: U8(85)
static ::GlobalNamespace::Protocol18_GpType const HashtableArray;

/// @brief Field Int1 value: U8(11)
static ::GlobalNamespace::Protocol18_GpType const Int1;

/// @brief Field Int1_ value: U8(12)
static ::GlobalNamespace::Protocol18_GpType const Int1_;

/// @brief Field Int2 value: U8(13)
static ::GlobalNamespace::Protocol18_GpType const Int2;

/// @brief Field Int2_ value: U8(14)
static ::GlobalNamespace::Protocol18_GpType const Int2_;

/// @brief Field IntZero value: U8(30)
static ::GlobalNamespace::Protocol18_GpType const IntZero;

/// @brief Field L1 value: U8(15)
static ::GlobalNamespace::Protocol18_GpType const L1;

/// @brief Field L1_ value: U8(16)
static ::GlobalNamespace::Protocol18_GpType const L1_;

/// @brief Field L2 value: U8(17)
static ::GlobalNamespace::Protocol18_GpType const L2;

/// @brief Field L2_ value: U8(18)
static ::GlobalNamespace::Protocol18_GpType const L2_;

/// @brief Field LongZero value: U8(31)
static ::GlobalNamespace::Protocol18_GpType const LongZero;

/// @brief Field Null value: U8(8)
static ::GlobalNamespace::Protocol18_GpType const Null;

/// @brief Field ObjectArray value: U8(23)
static ::GlobalNamespace::Protocol18_GpType const ObjectArray;

/// @brief Field OperationRequest value: U8(24)
static ::GlobalNamespace::Protocol18_GpType const OperationRequest;

/// @brief Field OperationResponse value: U8(25)
static ::GlobalNamespace::Protocol18_GpType const OperationResponse;

/// @brief Field Short value: U8(4)
static ::GlobalNamespace::Protocol18_GpType const Short;

/// @brief Field ShortArray value: U8(68)
static ::GlobalNamespace::Protocol18_GpType const ShortArray;

/// @brief Field ShortZero value: U8(29)
static ::GlobalNamespace::Protocol18_GpType const ShortZero;

/// @brief Field String value: U8(7)
static ::GlobalNamespace::Protocol18_GpType const String;

/// @brief Field StringArray value: U8(71)
static ::GlobalNamespace::Protocol18_GpType const StringArray;

/// @brief Field Unknown value: U8(0)
static ::GlobalNamespace::Protocol18_GpType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Protocol18_GpType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Protocol18_GpType) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
