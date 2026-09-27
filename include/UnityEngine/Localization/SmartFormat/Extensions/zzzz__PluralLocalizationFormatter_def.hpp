#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/PluralLocalizationFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PluralLocalizationFormatter)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormatterLiteralExtractor;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class PluralRules_PluralRuleDelegate;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class PluralLocalizationFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "PluralLocalizationFormatter");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.PluralLocalizationFormatter
class CORDL_TYPE PluralLocalizationFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

 __declspec(property(get=get_DefaultTwoLetterISOLanguageName, put=set_DefaultTwoLetterISOLanguageName)) ::StringW  DefaultTwoLetterISOLanguageName;

/// @brief Field m_DefaultPluralRule, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultPluralRule, put=__cordl_internal_set_m_DefaultPluralRule)) ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  m_DefaultPluralRule;

/// @brief Field m_DefaultTwoLetterISOLanguageName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultTwoLetterISOLanguageName, put=__cordl_internal_set_m_DefaultTwoLetterISOLanguageName)) ::StringW  m_DefaultTwoLetterISOLanguageName;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept;

/// @brief Method GetPluralRule, addr 0xb040e88, size 0x4c4, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* GetPluralRule(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter* New_ctor() ;

/// @brief Method TryEvaluateFormat, addr 0xb040a60, size 0x428, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method WriteAllLiterals, addr 0xb04134c, size 0x2a8, virtual true, abstract: false, final true
inline void WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate* const& __cordl_internal_get_m_DefaultPluralRule() const;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*& __cordl_internal_get_m_DefaultPluralRule() ;

constexpr ::StringW const& __cordl_internal_get_m_DefaultTwoLetterISOLanguageName() const;

constexpr ::StringW& __cordl_internal_get_m_DefaultTwoLetterISOLanguageName() ;

constexpr void __cordl_internal_set_m_DefaultPluralRule(::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  value) ;

constexpr void __cordl_internal_set_m_DefaultTwoLetterISOLanguageName(::StringW  value) ;

/// @brief Method .ctor, addr 0xb0282b8, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultNames, addr 0xb040970, size 0xf0, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// @brief Method get_DefaultTwoLetterISOLanguageName, addr 0xb0408e8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DefaultTwoLetterISOLanguageName() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept;

/// @brief Method set_DefaultTwoLetterISOLanguageName, addr 0xb0408f0, size 0x80, virtual false, abstract: false, final false
inline void set_DefaultTwoLetterISOLanguageName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PluralLocalizationFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PluralLocalizationFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PluralLocalizationFormatter(PluralLocalizationFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PluralLocalizationFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PluralLocalizationFormatter(PluralLocalizationFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25197};

/// [SerializeField]
/// @brief Field m_DefaultTwoLetterISOLanguageName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_DefaultTwoLetterISOLanguageName;

/// @brief Field m_DefaultPluralRule, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Utilities::PluralRules_PluralRuleDelegate*  ___m_DefaultPluralRule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter, ___m_DefaultTwoLetterISOLanguageName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter, ___m_DefaultPluralRule) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::PluralLocalizationFormatter) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
