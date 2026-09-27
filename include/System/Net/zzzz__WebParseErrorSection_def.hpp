#pragma once
// IWYU pragma private; include "System/Net/WebParseErrorSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebParseErrorSection)
// Forward declare root types
namespace System::Net {
struct WebParseErrorSection;
}
// Write type traits
MARK_VAL_T(::System::Net::WebParseErrorSection);
DEFINE_IL2CPP_CLASS(::System::Net::WebParseErrorSection, "System.Net", "WebParseErrorSection");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebParseErrorSection
struct CORDL_TYPE WebParseErrorSection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebParseErrorSection_Unwrapped
enum struct __WebParseErrorSection_Unwrapped : int32_t {
__E_Generic = static_cast<int32_t>(0x0),
__E_ResponseHeader = static_cast<int32_t>(0x1),
__E_ResponseStatusLine = static_cast<int32_t>(0x2),
__E_ResponseBody = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebParseErrorSection_Unwrapped () const noexcept {
return static_cast<__WebParseErrorSection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebParseErrorSection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WebParseErrorSection(int32_t  value__) noexcept;

/// @brief Field Generic value: I32(0)
static ::System::Net::WebParseErrorSection const Generic;

/// @brief Field ResponseBody value: I32(3)
static ::System::Net::WebParseErrorSection const ResponseBody;

/// @brief Field ResponseHeader value: I32(1)
static ::System::Net::WebParseErrorSection const ResponseHeader;

/// @brief Field ResponseStatusLine value: I32(2)
static ::System::Net::WebParseErrorSection const ResponseStatusLine;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10580};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebParseErrorSection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebParseErrorSection) == 0x4, "Size mismatch!");

} // namespace end def System::Net
