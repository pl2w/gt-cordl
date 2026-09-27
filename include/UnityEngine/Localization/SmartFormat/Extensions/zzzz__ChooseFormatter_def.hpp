#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ChooseFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ChooseFormatter)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
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
class ChooseFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "ChooseFormatter");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.ChooseFormatter
class CORDL_TYPE ChooseFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

 __declspec(property(get=get_SplitChar, put=set_SplitChar)) char16_t  SplitChar;

/// @brief Field m_SplitChar, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_SplitChar, put=__cordl_internal_set_m_SplitChar)) char16_t  m_SplitChar;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor*() noexcept;

/// @brief Method DetermineChosenFormat, addr 0xb038f64, size 0x42c, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* DetermineChosenFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo, ::System::Collections::Generic::IList_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  choiceFormats, ::ArrayW<::StringW>  chooseOptions) ;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter* New_ctor() ;

/// @brief Method TryEvaluateFormat, addr 0xb038c04, size 0x30c, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method WriteAllLiterals, addr 0xb039390, size 0x304, virtual true, abstract: false, final true
inline void WriteAllLiterals(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr char16_t const& __cordl_internal_get_m_SplitChar() const;

constexpr char16_t& __cordl_internal_get_m_SplitChar() ;

constexpr void __cordl_internal_set_m_SplitChar(char16_t  value) ;

/// @brief Method .ctor, addr 0xb028474, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultNames, addr 0xb038b48, size 0xbc, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// @brief Method get_SplitChar, addr 0xb038b38, size 0x8, virtual false, abstract: false, final false
inline char16_t get_SplitChar() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatterLiteralExtractor* i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormatterLiteralExtractor() noexcept;

/// @brief Method set_SplitChar, addr 0xb038b40, size 0x8, virtual false, abstract: false, final false
inline void set_SplitChar(char16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChooseFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChooseFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChooseFormatter(ChooseFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChooseFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChooseFormatter(ChooseFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25182};

/// [SerializeField]
/// @brief Field m_SplitChar, offset: 0x18, size: 0x2, def value: None
 char16_t  ___m_SplitChar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter, ___m_SplitChar) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::ChooseFormatter) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
