#pragma once
// IWYU pragma private; include "System/Net/HttpWriteMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWriteMode)
// Forward declare root types
namespace System::Net {
struct HttpWriteMode;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpWriteMode);
DEFINE_IL2CPP_CLASS(::System::Net::HttpWriteMode, "System.Net", "HttpWriteMode");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpWriteMode
struct CORDL_TYPE HttpWriteMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpWriteMode_Unwrapped
enum struct __HttpWriteMode_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_ContentLength = static_cast<int32_t>(0x1),
__E_Chunked = static_cast<int32_t>(0x2),
__E_Buffer = static_cast<int32_t>(0x3),
__E_None = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpWriteMode_Unwrapped () const noexcept {
return static_cast<__HttpWriteMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpWriteMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpWriteMode(int32_t  value__) noexcept;

/// @brief Field Buffer value: I32(3)
static ::System::Net::HttpWriteMode const Buffer;

/// @brief Field Chunked value: I32(2)
static ::System::Net::HttpWriteMode const Chunked;

/// @brief Field ContentLength value: I32(1)
static ::System::Net::HttpWriteMode const ContentLength;

/// @brief Field None value: I32(4)
static ::System::Net::HttpWriteMode const None;

/// @brief Field Unknown value: I32(0)
static ::System::Net::HttpWriteMode const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpWriteMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpWriteMode) == 0x4, "Size mismatch!");

} // namespace end def System::Net
