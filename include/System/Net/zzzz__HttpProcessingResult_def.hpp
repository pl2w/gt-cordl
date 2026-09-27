#pragma once
// IWYU pragma private; include "System/Net/HttpProcessingResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpProcessingResult)
// Forward declare root types
namespace System::Net {
struct HttpProcessingResult;
}
// Write type traits
MARK_VAL_T(::System::Net::HttpProcessingResult);
DEFINE_IL2CPP_CLASS(::System::Net::HttpProcessingResult, "System.Net", "HttpProcessingResult");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.HttpProcessingResult
struct CORDL_TYPE HttpProcessingResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpProcessingResult_Unwrapped
enum struct __HttpProcessingResult_Unwrapped : int32_t {
__E_Continue = static_cast<int32_t>(0x0),
__E_ReadWait = static_cast<int32_t>(0x1),
__E_WriteWait = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpProcessingResult_Unwrapped () const noexcept {
return static_cast<__HttpProcessingResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpProcessingResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpProcessingResult(int32_t  value__) noexcept;

/// @brief Field Continue value: I32(0)
static ::System::Net::HttpProcessingResult const Continue;

/// @brief Field ReadWait value: I32(1)
static ::System::Net::HttpProcessingResult const ReadWait;

/// @brief Field WriteWait value: I32(2)
static ::System::Net::HttpProcessingResult const WriteWait;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10535};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HttpProcessingResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::HttpProcessingResult) == 0x4, "Size mismatch!");

} // namespace end def System::Net
