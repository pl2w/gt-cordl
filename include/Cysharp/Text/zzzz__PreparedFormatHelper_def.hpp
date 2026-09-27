#pragma once
// IWYU pragma private; include "Cysharp/Text/PreparedFormatHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PreparedFormatHelper)
namespace Cysharp::Text {
struct Utf16FormatSegment;
}
namespace Cysharp::Text {
struct Utf8FormatSegment;
}
// Forward declare root types
namespace Cysharp::Text {
class PreparedFormatHelper;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::PreparedFormatHelper*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::PreparedFormatHelper*, "Cysharp.Text", "PreparedFormatHelper");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.PreparedFormatHelper
class CORDL_TYPE PreparedFormatHelper : public ::System::Object {
public:
// Declarations
/// @brief Method Utf16Parse, addr 0xb9aae48, size 0x300, virtual false, abstract: false, final false
static inline ::ArrayW<::Cysharp::Text::Utf16FormatSegment> Utf16Parse(::StringW  format) ;

/// @brief Method Utf8Parse, addr 0xb9ab154, size 0x3cc, virtual false, abstract: false, final false
static inline ::ArrayW<::Cysharp::Text::Utf8FormatSegment> Utf8Parse(::StringW  format, ::by_ref<::ArrayW<uint8_t>>  utf8buffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreparedFormatHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreparedFormatHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreparedFormatHelper(PreparedFormatHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreparedFormatHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreparedFormatHelper(PreparedFormatHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::PreparedFormatHelper) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
