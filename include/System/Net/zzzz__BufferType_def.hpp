#pragma once
// IWYU pragma private; include "System/Net/BufferType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferType)
// Forward declare root types
namespace System::Net {
struct BufferType;
}
// Write type traits
MARK_VAL_T(::System::Net::BufferType);
DEFINE_IL2CPP_CLASS(::System::Net::BufferType, "System.Net", "BufferType");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.BufferType
struct CORDL_TYPE BufferType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BufferType_Unwrapped
enum struct __BufferType_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Data = static_cast<int32_t>(0x1),
__E_Token = static_cast<int32_t>(0x2),
__E_Parameters = static_cast<int32_t>(0x3),
__E_Missing = static_cast<int32_t>(0x4),
__E_Extra = static_cast<int32_t>(0x5),
__E_Trailer = static_cast<int32_t>(0x6),
__E_Header = static_cast<int32_t>(0x7),
__E_Padding = static_cast<int32_t>(0x9),
__E_Stream = static_cast<int32_t>(0xa),
__E_ChannelBindings = static_cast<int32_t>(0xe),
__E_TargetHost = static_cast<int32_t>(0x10),
__E_ReadOnlyFlag = static_cast<int32_t>(0x80000000),
__E_ReadOnlyWithChecksum = static_cast<int32_t>(0x10000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BufferType_Unwrapped () const noexcept {
return static_cast<__BufferType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BufferType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BufferType(int32_t  value__) noexcept;

/// @brief Field ChannelBindings value: I32(14)
static ::System::Net::BufferType const ChannelBindings;

/// @brief Field Data value: I32(1)
static ::System::Net::BufferType const Data;

/// @brief Field Empty value: I32(0)
static ::System::Net::BufferType const Empty;

/// @brief Field Extra value: I32(5)
static ::System::Net::BufferType const Extra;

/// @brief Field Header value: I32(7)
static ::System::Net::BufferType const Header;

/// @brief Field Missing value: I32(4)
static ::System::Net::BufferType const Missing;

/// @brief Field Padding value: I32(9)
static ::System::Net::BufferType const Padding;

/// @brief Field Parameters value: I32(3)
static ::System::Net::BufferType const Parameters;

/// @brief Field ReadOnlyFlag value: I32(-2147483648)
static ::System::Net::BufferType const ReadOnlyFlag;

/// @brief Field ReadOnlyWithChecksum value: I32(268435456)
static ::System::Net::BufferType const ReadOnlyWithChecksum;

/// @brief Field Stream value: I32(10)
static ::System::Net::BufferType const Stream;

/// @brief Field TargetHost value: I32(16)
static ::System::Net::BufferType const TargetHost;

/// @brief Field Token value: I32(2)
static ::System::Net::BufferType const Token;

/// @brief Field Trailer value: I32(6)
static ::System::Net::BufferType const Trailer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::BufferType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::BufferType) == 0x4, "Size mismatch!");

} // namespace end def System::Net
