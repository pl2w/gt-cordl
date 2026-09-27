#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/IsMatchFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IsMatchFormatter)
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormatterLiteralExtractor;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class IsMatchFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "IsMatchFormatter");
// Dependencies System.Text.RegularExpressions.RegexOptions, UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.IsMatchFormatter
class CORDL_TYPE IsMatchFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

 __declspec(property(get=get_RegexOptions, put=set_RegexOptions)) ::System::Text::RegularExpressions::RegexOptions  RegexOptions;

/// @brief Field <RegexOptions>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__RegexOptions_k__BackingField, put=__cordl_internal_set__RegexOptions_k__BackingField)) ::System::Text::RegularExpressions::RegexOptions  _RegexOptions_k__BackingField;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter* New_ctor() ;

/// @brief Method TryEvaluateFormat, addr 0xb03c664, size 0x580, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method WriteAllLiterals, addr 0xb03cbe4, size 0x3fc, virtual true, abstract: false, final true
inline void WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::System::Text::RegularExpressions::RegexOptions const& __cordl_internal_get__RegexOptions_k__BackingField() const;

constexpr ::System::Text::RegularExpressions::RegexOptions& __cordl_internal_get__RegexOptions_k__BackingField() ;

constexpr void __cordl_internal_set__RegexOptions_k__BackingField(::System::Text::RegularExpressions::RegexOptions  value) ;

/// @brief Method .ctor, addr 0xb028530, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultNames, addr 0xb03c5dc, size 0x88, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// [CompilerGenerated]
/// @brief Method get_RegexOptions, addr 0xb03cfe0, size 0x8, virtual false, abstract: false, final false
inline ::System::Text::RegularExpressions::RegexOptions get_RegexOptions() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept;

/// [CompilerGenerated]
/// @brief Method set_RegexOptions, addr 0xb03cfe8, size 0x8, virtual false, abstract: false, final false
inline void set_RegexOptions(::System::Text::RegularExpressions::RegexOptions  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IsMatchFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IsMatchFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IsMatchFormatter(IsMatchFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IsMatchFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IsMatchFormatter(IsMatchFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25189};

/// [CompilerGenerated]
/// @brief Field <RegexOptions>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::System::Text::RegularExpressions::RegexOptions  ____RegexOptions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter, ____RegexOptions_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::IsMatchFormatter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
