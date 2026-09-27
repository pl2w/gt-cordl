#pragma once
// IWYU pragma private; include "GorillaExtensions/StringExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringExtensions)
// Forward declare root types
namespace GorillaExtensions {
class StringExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::StringExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::StringExtensions*, "GorillaExtensions", "StringExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.StringExtensions
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method UnicodeStrikethrough, addr 0x5cf74fc, size 0xc0, virtual false, abstract: false, final false
static inline ::StringW UnicodeStrikethrough(::StringW  str) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringExtensions(StringExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringExtensions(StringExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4562};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::StringExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
