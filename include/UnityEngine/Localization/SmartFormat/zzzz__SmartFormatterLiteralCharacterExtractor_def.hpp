#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/SmartFormatterLiteralCharacterExtractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/zzzz__SmartFormatter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SmartFormatterLiteralCharacterExtractor)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatterLiteralCharacterExtractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor*, "UnityEngine.Localization.SmartFormat", "SmartFormatterLiteralCharacterExtractor");
// Dependencies UnityEngine.Localization.SmartFormat.SmartFormatter
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.SmartFormatterLiteralCharacterExtractor
class CORDL_TYPE SmartFormatterLiteralCharacterExtractor : public ::UnityEngine::Localization::SmartFormat::SmartFormatter {
public:
// Declarations
/// @brief Field m_Characters, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Characters, put=__cordl_internal_set_m_Characters)) ::System::Collections::Generic::IEnumerable_1<char16_t>*  m_Characters;

/// @brief Method ExtractLiteralsCharacters, addr 0xb02c144, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<char16_t>* ExtractLiteralsCharacters(::StringW  value) ;

/// @brief Method Format, addr 0xb02c1bc, size 0x49c, virtual true, abstract: false, final false
inline void Format(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo) ;

static inline ::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor* New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  parent) ;

constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* const& __cordl_internal_get_m_Characters() const;

constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>*& __cordl_internal_get_m_Characters() ;

constexpr void __cordl_internal_set_m_Characters(::System::Collections::Generic::IEnumerable_1<char16_t>*  value) ;

/// @brief Method .ctor, addr 0xb02c068, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  parent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFormatterLiteralCharacterExtractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFormatterLiteralCharacterExtractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFormatterLiteralCharacterExtractor(SmartFormatterLiteralCharacterExtractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFormatterLiteralCharacterExtractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFormatterLiteralCharacterExtractor(SmartFormatterLiteralCharacterExtractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25138};

/// @brief Field m_Characters, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<char16_t>*  ___m_Characters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor, ___m_Characters) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::SmartFormatterLiteralCharacterExtractor) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
