#pragma once
// IWYU pragma private; include "System/Net/DataParseStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataParseStatus)
// Forward declare root types
namespace System::Net {
struct DataParseStatus;
}
// Write type traits
MARK_VAL_T(::System::Net::DataParseStatus);
DEFINE_IL2CPP_CLASS(::System::Net::DataParseStatus, "System.Net", "DataParseStatus");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.DataParseStatus
struct CORDL_TYPE DataParseStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DataParseStatus_Unwrapped
enum struct __DataParseStatus_Unwrapped : int32_t {
__E_NeedMoreData = static_cast<int32_t>(0x0),
__E_ContinueParsing = static_cast<int32_t>(0x1),
__E_Done = static_cast<int32_t>(0x2),
__E_Invalid = static_cast<int32_t>(0x3),
__E_DataTooBig = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DataParseStatus_Unwrapped () const noexcept {
return static_cast<__DataParseStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DataParseStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DataParseStatus(int32_t  value__) noexcept;

/// @brief Field ContinueParsing value: I32(1)
static ::System::Net::DataParseStatus const ContinueParsing;

/// @brief Field DataTooBig value: I32(4)
static ::System::Net::DataParseStatus const DataTooBig;

/// @brief Field Done value: I32(2)
static ::System::Net::DataParseStatus const Done;

/// @brief Field Invalid value: I32(3)
static ::System::Net::DataParseStatus const Invalid;

/// @brief Field NeedMoreData value: I32(0)
static ::System::Net::DataParseStatus const NeedMoreData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DataParseStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::DataParseStatus) == 0x4, "Size mismatch!");

} // namespace end def System::Net
