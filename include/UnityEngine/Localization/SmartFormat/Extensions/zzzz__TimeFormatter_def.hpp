#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/TimeFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TimeFormatter)
namespace System {
class IFormatProvider;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
struct TimeSpanFormatOptions;
}
namespace UnityEngine::Localization::SmartFormat::Utilities {
class TimeTextInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class TimeFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "TimeFormatter");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase, UnityEngine.Localization.SmartFormat.Utilities.TimeSpanFormatOptions
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.TimeFormatter
class CORDL_TYPE TimeFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
 __declspec(property(get=get_DefaultFormatOptions, put=set_DefaultFormatOptions)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  DefaultFormatOptions;

 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

 __declspec(property(get=get_DefaultTwoLetterISOLanguageName, put=set_DefaultTwoLetterISOLanguageName)) ::StringW  DefaultTwoLetterISOLanguageName;

/// @brief Field m_DefaultFormatOptions, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DefaultFormatOptions, put=__cordl_internal_set_m_DefaultFormatOptions)) ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  m_DefaultFormatOptions;

/// @brief Field m_DefaultTwoLetterIsoLanguageName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultTwoLetterIsoLanguageName, put=__cordl_internal_set_m_DefaultTwoLetterIsoLanguageName)) ::StringW  m_DefaultTwoLetterIsoLanguageName;

/// @brief Method GetTimeTextInfo, addr 0xb043d44, size 0x194, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* GetTimeTextInfo(::System::IFormatProvider*  provider) ;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter* New_ctor() ;

/// @brief Method TryEvaluateFormat, addr 0xb04371c, size 0x628, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const& __cordl_internal_get_m_DefaultFormatOptions() const;

constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions& __cordl_internal_get_m_DefaultFormatOptions() ;

constexpr ::StringW const& __cordl_internal_get_m_DefaultTwoLetterIsoLanguageName() const;

constexpr ::StringW& __cordl_internal_get_m_DefaultTwoLetterIsoLanguageName() ;

constexpr void __cordl_internal_set_m_DefaultFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value) ;

constexpr void __cordl_internal_set_m_DefaultTwoLetterIsoLanguageName(::StringW  value) ;

/// @brief Method .ctor, addr 0xb028364, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultFormatOptions, addr 0xb043664, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions get_DefaultFormatOptions() ;

/// @brief Method get_DefaultNames, addr 0xb043540, size 0x124, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// @brief Method get_DefaultTwoLetterISOLanguageName, addr 0xb043674, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DefaultTwoLetterISOLanguageName() ;

/// @brief Method set_DefaultFormatOptions, addr 0xb04366c, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value) ;

/// @brief Method set_DefaultTwoLetterISOLanguageName, addr 0xb04367c, size 0xa0, virtual false, abstract: false, final false
inline void set_DefaultTwoLetterISOLanguageName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeFormatter(TimeFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeFormatter(TimeFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25205};

/// [SerializeField]
/// @brief Field m_DefaultFormatOptions, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  ___m_DefaultFormatOptions;

/// @brief Field m_DefaultTwoLetterIsoLanguageName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_DefaultTwoLetterIsoLanguageName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter, ___m_DefaultFormatOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter, ___m_DefaultTwoLetterIsoLanguageName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
