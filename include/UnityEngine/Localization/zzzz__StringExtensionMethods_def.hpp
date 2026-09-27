#pragma once
// IWYU pragma private; include "UnityEngine/Localization/StringExtensionMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringExtensionMethods)
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace UnityEngine::Localization {
class StringExtensionMethods;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::StringExtensionMethods*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::StringExtensionMethods*, "UnityEngine.Localization", "StringExtensionMethods");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.StringExtensionMethods
class CORDL_TYPE StringExtensionMethods : public ::System::Object {
public:
// Declarations
/// @brief Field s_WhitespaceRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_WhitespaceRegex, put=setStaticF_s_WhitespaceRegex)) ::System::Text::RegularExpressions::Regex*  s_WhitespaceRegex;

/// [Extension]
/// @brief Method ReplaceWhiteSpaces, addr 0xb011fb8, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW ReplaceWhiteSpaces(::StringW  str, ::StringW  replacement) ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_WhitespaceRegex() ;

static inline void setStaticF_s_WhitespaceRegex(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringExtensionMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringExtensionMethods", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringExtensionMethods(StringExtensionMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringExtensionMethods", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringExtensionMethods(StringExtensionMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25069};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::StringExtensionMethods) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
