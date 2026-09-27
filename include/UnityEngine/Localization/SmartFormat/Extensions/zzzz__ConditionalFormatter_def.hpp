#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ConditionalFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConditionalFormatter)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
struct Decimal;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormatterLiteralExtractor;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class ConditionalFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "ConditionalFormatter");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.ConditionalFormatter
class CORDL_TYPE ConditionalFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

/// @brief Field _complexConditionPattern, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__complexConditionPattern, put=setStaticF__complexConditionPattern)) ::System::Text::RegularExpressions::Regex*  _complexConditionPattern;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter* New_ctor() ;

/// @brief Method TryEvaluateCondition, addr 0xb03a204, size 0x5b8, virtual false, abstract: false, final false
static inline bool TryEvaluateCondition(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  parameter, ::System::Decimal  value, ::by_ref<bool>  conditionResult, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>  outputItem) ;

/// @brief Method TryEvaluateFormat, addr 0xb039784, size 0xa6c, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method WriteAllLiterals, addr 0xb03a7bc, size 0x360, virtual true, abstract: false, final true
inline void WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method .ctor, addr 0xb028330, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF__complexConditionPattern() ;

/// @brief Method get_DefaultNames, addr 0xb039694, size 0xf0, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept;

static inline void setStaticF__complexConditionPattern(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConditionalFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConditionalFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConditionalFormatter(ConditionalFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConditionalFormatter(ConditionalFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::ConditionalFormatter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
