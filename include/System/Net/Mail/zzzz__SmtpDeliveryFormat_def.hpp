#pragma once
// IWYU pragma private; include "System/Net/Mail/SmtpDeliveryFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SmtpDeliveryFormat)
// Forward declare root types
namespace System::Net::Mail {
struct SmtpDeliveryFormat;
}
// Write type traits
MARK_VAL_T(::System::Net::Mail::SmtpDeliveryFormat);
DEFINE_IL2CPP_CLASS(::System::Net::Mail::SmtpDeliveryFormat, "System.Net.Mail", "SmtpDeliveryFormat");
// Dependencies 
namespace System::Net::Mail {
// Is value type: true
// CS Name: System.Net.Mail.SmtpDeliveryFormat
struct CORDL_TYPE SmtpDeliveryFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SmtpDeliveryFormat_Unwrapped
enum struct __SmtpDeliveryFormat_Unwrapped : int32_t {
__E_SevenBit = static_cast<int32_t>(0x0),
__E_International = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SmtpDeliveryFormat_Unwrapped () const noexcept {
return static_cast<__SmtpDeliveryFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SmtpDeliveryFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SmtpDeliveryFormat(int32_t  value__) noexcept;

/// @brief Field International value: I32(1)
static ::System::Net::Mail::SmtpDeliveryFormat const International;

/// @brief Field SevenBit value: I32(0)
static ::System::Net::Mail::SmtpDeliveryFormat const SevenBit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Mail::SmtpDeliveryFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::Mail::SmtpDeliveryFormat) == 0x4, "Size mismatch!");

} // namespace end def System::Net::Mail
