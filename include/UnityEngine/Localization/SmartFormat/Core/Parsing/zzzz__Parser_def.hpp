#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Parser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Parser)
namespace GlobalNamespace {
struct Parser_ParsingError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser_ParsingErrorText;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser___c__DisplayClass24_0;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser___c__DisplayClass24_1;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser___c__DisplayClass24_2;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrorEventArgs;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors_ParsingIssue;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors;
}
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
class SmartSettings;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser_ParsingErrorText;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser___c__DisplayClass24_0;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser___c__DisplayClass24_1;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser___c__DisplayClass24_2;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Parser");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Parser/ParsingErrorText");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Parser/<>c__DisplayClass24_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Parser/<>c__DisplayClass24_1");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Parser/<>c__DisplayClass24_2");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Parser
class CORDL_TYPE Parser : public ::System::Object {
public:
// Declarations
using ParsingError = ::GlobalNamespace::Parser_ParsingError;

using ParsingErrorText = ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText;

using __c__DisplayClass24_0 = ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0;

using __c__DisplayClass24_1 = ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1;

using __c__DisplayClass24_2 = ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2;

/// @brief Field OnParsingFailure, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnParsingFailure, put=__cordl_internal_set_OnParsingFailure)) ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*  OnParsingFailure;

 __declspec(property(get=get_Settings, put=set_Settings)) ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  Settings;

/// @brief Field m_AllowedSelectorChars, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AllowedSelectorChars, put=__cordl_internal_set_m_AllowedSelectorChars)) ::StringW  m_AllowedSelectorChars;

/// @brief Field m_AlphanumericSelectors, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AlphanumericSelectors, put=__cordl_internal_set_m_AlphanumericSelectors)) bool  m_AlphanumericSelectors;

/// @brief Field m_AlternativeEscapeChar, offset 0x3a, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_AlternativeEscapeChar, put=__cordl_internal_set_m_AlternativeEscapeChar)) char16_t  m_AlternativeEscapeChar;

/// @brief Field m_AlternativeEscaping, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AlternativeEscaping, put=__cordl_internal_set_m_AlternativeEscaping)) bool  m_AlternativeEscaping;

/// @brief Field m_ClosingBrace, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_ClosingBrace, put=__cordl_internal_set_m_ClosingBrace)) char16_t  m_ClosingBrace;

/// @brief Field m_OpeningBrace, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_OpeningBrace, put=__cordl_internal_set_m_OpeningBrace)) char16_t  m_OpeningBrace;

/// @brief Field m_Operators, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Operators, put=__cordl_internal_set_m_Operators)) ::StringW  m_Operators;

/// @brief Field m_Settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  m_Settings;

/// @brief Field s_ParsingErrorText, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ParsingErrorText, put=setStaticF_s_ParsingErrorText)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*  s_ParsingErrorText;

/// @brief Method AddAdditionalSelectorChars, addr 0xb03b6fc, size 0xd4, virtual false, abstract: false, final false
inline void AddAdditionalSelectorChars(::StringW  chars) ;

/// @brief Method AddAlphanumericSelectors, addr 0xb03bd28, size 0xc, virtual false, abstract: false, final false
inline void AddAlphanumericSelectors() ;

/// @brief Method AddOperators, addr 0xb03b628, size 0xd4, virtual false, abstract: false, final false
inline void AddOperators(::StringW  chars) ;

/// @brief Method FormatterNameExists, addr 0xb046160, size 0x2c0, virtual false, abstract: false, final false
static inline bool FormatterNameExists(::StringW  name, ::System::Collections::Generic::IList_1<::StringW>*  formatterExtensionNames) ;

/// @brief Method HandleParsingErrors, addr 0xb046420, size 0x72c, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* HandleParsingErrors(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  parsingErrors, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  currentResult) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser* New_ctor(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  settings) ;

/// @brief Method ParseFormat, addr 0xb0294f0, size 0x1190, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* ParseFormat(::StringW  format, ::System::Collections::Generic::IList_1<::StringW>*  formatterExtensionNames) ;

/// @brief Method UseAlternativeBraces, addr 0xb046154, size 0xc, virtual false, abstract: false, final false
inline void UseAlternativeBraces(char16_t  opening, char16_t  closing) ;

/// @brief Method UseAlternativeEscapeChar, addr 0xb04613c, size 0x10, virtual false, abstract: false, final false
inline void UseAlternativeEscapeChar(char16_t  alternativeEscapeChar) ;

/// @brief Method UseBraceEscaping, addr 0xb04614c, size 0x8, virtual false, abstract: false, final false
inline void UseBraceEscaping() ;

constexpr ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>* const& __cordl_internal_get_OnParsingFailure() const;

constexpr ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*& __cordl_internal_get_OnParsingFailure() ;

constexpr ::StringW const& __cordl_internal_get_m_AllowedSelectorChars() const;

constexpr ::StringW& __cordl_internal_get_m_AllowedSelectorChars() ;

constexpr bool const& __cordl_internal_get_m_AlphanumericSelectors() const;

constexpr bool& __cordl_internal_get_m_AlphanumericSelectors() ;

constexpr char16_t const& __cordl_internal_get_m_AlternativeEscapeChar() const;

constexpr char16_t& __cordl_internal_get_m_AlternativeEscapeChar() ;

constexpr bool const& __cordl_internal_get_m_AlternativeEscaping() const;

constexpr bool& __cordl_internal_get_m_AlternativeEscaping() ;

constexpr char16_t const& __cordl_internal_get_m_ClosingBrace() const;

constexpr char16_t& __cordl_internal_get_m_ClosingBrace() ;

constexpr char16_t const& __cordl_internal_get_m_OpeningBrace() const;

constexpr char16_t& __cordl_internal_get_m_OpeningBrace() ;

constexpr ::StringW const& __cordl_internal_get_m_Operators() const;

constexpr ::StringW& __cordl_internal_get_m_Operators() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*& __cordl_internal_get_m_Settings() ;

constexpr void __cordl_internal_set_OnParsingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_AllowedSelectorChars(::StringW  value) ;

constexpr void __cordl_internal_set_m_AlphanumericSelectors(bool  value) ;

constexpr void __cordl_internal_set_m_AlternativeEscapeChar(char16_t  value) ;

constexpr void __cordl_internal_set_m_AlternativeEscaping(bool  value) ;

constexpr void __cordl_internal_set_m_ClosingBrace(char16_t  value) ;

constexpr void __cordl_internal_set_m_OpeningBrace(char16_t  value) ;

constexpr void __cordl_internal_set_m_Operators(::StringW  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value) ;

/// @brief Method .ctor, addr 0xb028c84, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  settings) ;

/// [CompilerGenerated]
/// @brief Method add_OnParsingFailure, addr 0xb045fdc, size 0xb0, virtual false, abstract: false, final false
inline void add_OnParsingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*  value) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText* getStaticF_s_ParsingErrorText() ;

/// @brief Method get_Settings, addr 0xb045fcc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* get_Settings() ;

/// [CompilerGenerated]
/// @brief Method remove_OnParsingFailure, addr 0xb04608c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnParsingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*  value) ;

static inline void setStaticF_s_ParsingErrorText(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*  value) ;

/// @brief Method set_Settings, addr 0xb045fd4, size 0x8, virtual false, abstract: false, final false
inline void set_Settings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Parser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Parser(Parser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Parser(Parser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25224};

/// @brief Field m_CharLiteralEscapeChar offset 0xffffffff size 0x2
static constexpr char16_t  m_CharLiteralEscapeChar{u'\\'};

/// [SerializeField]
/// @brief Field m_OpeningBrace, offset: 0x10, size: 0x2, def value: None
 char16_t  ___m_OpeningBrace;

/// [SerializeField]
/// @brief Field m_ClosingBrace, offset: 0x12, size: 0x2, def value: None
 char16_t  ___m_ClosingBrace;

/// [SerializeReference]
/// [HideInInspector]
/// @brief Field m_Settings, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  ___m_Settings;

/// [Tooltip("If false, only digits are allowed as selectors. If true, selectors can be alpha-numeric. This allows optimized alpha-character detection. Specify any additional selector chars in AllowedSelectorChars.")]
/// [SerializeField]
/// @brief Field m_AlphanumericSelectors, offset: 0x20, size: 0x1, def value: None
 bool  ___m_AlphanumericSelectors;

/// [Tooltip("A list of allowable selector characters, to support additional selector syntaxes such as math. Digits are always included, and letters can be included with AlphanumericSelectors.")]
/// [SerializeField]
/// @brief Field m_AllowedSelectorChars, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_AllowedSelectorChars;

/// [Tooltip("A list of characters that come between selectors. This can be \".\" for dot-notation, \"[]\" for arrays, or even math symbols. By default, there are no operators.")]
/// [SerializeField]
/// @brief Field m_Operators, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_Operators;

/// [Tooltip("If false, double-curly braces are escaped. If true, the AlternativeEscapeChar is used for escaping braces.")]
/// [SerializeField]
/// @brief Field m_AlternativeEscaping, offset: 0x38, size: 0x1, def value: None
 bool  ___m_AlternativeEscaping;

/// [Tooltip("If AlternativeEscaping is true, then this character is used to escape curly braces.")]
/// [SerializeField]
/// @brief Field m_AlternativeEscapeChar, offset: 0x3a, size: 0x2, def value: None
 char16_t  ___m_AlternativeEscapeChar;

/// [CompilerGenerated]
/// @brief Field OnParsingFailure, offset: 0x40, size: 0x8, def value: None
 ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*  ___OnParsingFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___m_OpeningBrace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___m_ClosingBrace) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___m_Settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___m_AlphanumericSelectors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___m_AllowedSelectorChars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___m_Operators) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___m_AlternativeEscaping) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___m_AlternativeEscapeChar) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser, ___OnParsingFailure) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Parser/<>c__DisplayClass24_2
class CORDL_TYPE Parser___c__DisplayClass24_2 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals2, put=__cordl_internal_set_CS$__8__locals2)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*  CS$__8__locals2;

/// @brief Field i, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2* New_ctor() ;

/// @brief Method <HandleParsingErrors>b__1, addr 0xb046dd4, size 0xcc, virtual false, abstract: false, final false
inline bool _HandleParsingErrors_b__1(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*  errItem) ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0* const& __cordl_internal_get_CS$__8__locals2() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*& __cordl_internal_get_CS$__8__locals2() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr void __cordl_internal_set_CS$__8__locals2(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*  value) ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

/// @brief Method .ctor, addr 0xb046dcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Parser___c__DisplayClass24_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Parser___c__DisplayClass24_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Parser___c__DisplayClass24_2(Parser___c__DisplayClass24_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Parser___c__DisplayClass24_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Parser___c__DisplayClass24_2(Parser___c__DisplayClass24_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25223};

/// @brief Field i, offset: 0x10, size: 0x4, def value: None
 int32_t  ___i;

/// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*  ___CS$__8__locals2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2, ___i) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Parser/<>c__DisplayClass24_1
class CORDL_TYPE Parser___c__DisplayClass24_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*  CS$__8__locals1;

/// @brief Field i, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1* New_ctor() ;

/// @brief Method <HandleParsingErrors>b__0, addr 0xb046d00, size 0xcc, virtual false, abstract: false, final false
inline bool _HandleParsingErrors_b__0(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*  errItem) ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*  value) ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

/// @brief Method .ctor, addr 0xb046cf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Parser___c__DisplayClass24_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Parser___c__DisplayClass24_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Parser___c__DisplayClass24_1(Parser___c__DisplayClass24_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Parser___c__DisplayClass24_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Parser___c__DisplayClass24_1(Parser___c__DisplayClass24_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25222};

/// @brief Field i, offset: 0x10, size: 0x4, def value: None
 int32_t  ___i;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1, ___i) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Parser/<>c__DisplayClass24_0
class CORDL_TYPE Parser___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field currentResult, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentResult, put=__cordl_internal_set_currentResult)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  currentResult;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0* New_ctor() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& __cordl_internal_get_currentResult() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& __cordl_internal_get_currentResult() ;

constexpr void __cordl_internal_set_currentResult(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

/// @brief Method .ctor, addr 0xb046cf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Parser___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Parser___c__DisplayClass24_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Parser___c__DisplayClass24_0(Parser___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Parser___c__DisplayClass24_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Parser___c__DisplayClass24_0(Parser___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25221};

/// @brief Field currentResult, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  ___currentResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0, ___currentResult) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Parser/ParsingErrorText
class CORDL_TYPE Parser_ParsingErrorText : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) ::StringW  Item[];

/// @brief Field _errors, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__errors, put=__cordl_internal_set__errors)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Parser_ParsingError,::StringW>*  _errors;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Parser_ParsingError,::StringW>* const& __cordl_internal_get__errors() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Parser_ParsingError,::StringW>*& __cordl_internal_get__errors() ;

constexpr void __cordl_internal_set__errors(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Parser_ParsingError,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb046b4c, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xb046c98, size 0x58, virtual false, abstract: false, final false
inline ::StringW get_Item(::GlobalNamespace::Parser_ParsingError  parsingErrorKey) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Parser_ParsingErrorText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Parser_ParsingErrorText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Parser_ParsingErrorText(Parser_ParsingErrorText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Parser_ParsingErrorText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Parser_ParsingErrorText(Parser_ParsingErrorText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25220};

/// @brief Field _errors, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Parser_ParsingError,::StringW>*  ____errors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText, ____errors) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
