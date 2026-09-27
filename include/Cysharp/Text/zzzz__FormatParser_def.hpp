#pragma once
// IWYU pragma private; include "Cysharp/Text/FormatParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormatParser)
namespace Cysharp::Text {
struct ParserScanResult;
}
namespace GlobalNamespace {
struct FormatParser_ParseResult;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace Cysharp::Text {
class FormatParser;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::FormatParser*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::FormatParser*, "Cysharp.Text", "FormatParser");
// Dependencies System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.FormatParser
class CORDL_TYPE FormatParser : public ::System::Object {
public:
// Declarations
using ParseResult = ::GlobalNamespace::FormatParser_ParseResult;

/// @brief Method IsDigit, addr 0xb9aa780, size 0x14, virtual false, abstract: false, final false
static inline bool IsDigit(char16_t  c) ;

/// [NullableContext(1)]
/// @brief Method Parse, addr 0xb9aaa88, size 0x328, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FormatParser_ParseResult Parse(::StringW  format, int32_t  i) ;

/// @brief Method Parse, addr 0xb9aa794, size 0x2e4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::FormatParser_ParseResult Parse(::System::ReadOnlySpan_1<char16_t>  format, int32_t  i) ;

/// [NullableContext(1)]
/// @brief Method ScanFormatString, addr 0xb9aa5e4, size 0xcc, virtual false, abstract: false, final false
static inline ::Cysharp::Text::ParserScanResult ScanFormatString(::StringW  format, ::by_ref<int32_t>  i) ;

/// @brief Method ScanFormatString, addr 0xb9aa6b0, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Text::ParserScanResult ScanFormatString(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<int32_t>  i) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatParser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatParser(FormatParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatParser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatParser(FormatParser const& ) = delete;

/// @brief Field ArgLengthLimit offset 0xffffffff size 0x4
static constexpr int32_t  ArgLengthLimit{static_cast<int32_t>(0x10)};

/// @brief Field WidthLimit offset 0xffffffff size 0x4
static constexpr int32_t  WidthLimit{static_cast<int32_t>(0x3e8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26344};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::FormatParser) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
