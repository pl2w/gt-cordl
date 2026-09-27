#pragma once
// IWYU pragma private; include "System/Net/WebParseError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebParseErrorCode_def.hpp"
#include "System/Net/zzzz__WebParseErrorSection_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WebParseError)
// Forward declare root types
namespace System::Net {
struct WebParseError;
}
// Write type traits
MARK_VAL_T(::System::Net::WebParseError);
DEFINE_IL2CPP_CLASS(::System::Net::WebParseError, "System.Net", "WebParseError");
// Dependencies System.Net.WebParseErrorCode, System.Net.WebParseErrorSection
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebParseError
struct CORDL_TYPE WebParseError {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WebParseError() ;

// Ctor Parameters [CppParam { name: "Section", ty: "::System::Net::WebParseErrorSection", modifiers: "", def_value: None, comment: None }, CppParam { name: "Code", ty: "::System::Net::WebParseErrorCode", modifiers: "", def_value: None, comment: None }]
constexpr WebParseError(::System::Net::WebParseErrorSection  Section, ::System::Net::WebParseErrorCode  Code) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10582};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Section, offset: 0x0, size: 0x4, def value: None
 ::System::Net::WebParseErrorSection  Section;

/// @brief Field Code, offset: 0x4, size: 0x4, def value: None
 ::System::Net::WebParseErrorCode  Code;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebParseError, Section) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebParseError, Code) == 0x4, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebParseError) == 0x8, "Size mismatch!");

} // namespace end def System::Net
