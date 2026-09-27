#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/SmartFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormatter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmartFormatter)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class Exception;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormatter;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISource;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatCache;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatDetails;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Output {
class IOutput;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class FormatItem;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Parser;
}
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
class SmartSettings;
}
namespace UnityEngine::Localization::SmartFormat {
class FormattingErrorEventArgs;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::SmartFormatter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::SmartFormatter*, "UnityEngine.Localization.SmartFormat", "SmartFormatter");
// Dependencies System.Object, UnityEngine.Localization.SmartFormat.Core.Extensions.IFormatter, UnityEngine.Localization.SmartFormat.Core.Extensions.ISource
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.SmartFormatter
class CORDL_TYPE SmartFormatter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FormatterExtensions)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>*  FormatterExtensions;

/// @brief Field OnFormattingFailure, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFormattingFailure, put=__cordl_internal_set_OnFormattingFailure)) ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*  OnFormattingFailure;

 __declspec(property(get=get_Parser, put=set_Parser)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*  Parser;

 __declspec(property(get=get_Settings, put=set_Settings)) ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  Settings;

 __declspec(property(get=get_SourceExtensions)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>*  SourceExtensions;

/// @brief Field k_Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Empty, put=setStaticF_k_Empty)) ::ArrayW<::System::Object*>  k_Empty;

/// @brief Field m_Formatters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Formatters, put=__cordl_internal_set_m_Formatters)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>*  m_Formatters;

/// @brief Field m_NotEmptyFormatterExtensionNames, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NotEmptyFormatterExtensionNames, put=__cordl_internal_set_m_NotEmptyFormatterExtensionNames)) ::System::Collections::Generic::List_1<::StringW>*  m_NotEmptyFormatterExtensionNames;

/// @brief Field m_Parser, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Parser, put=__cordl_internal_set_m_Parser)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*  m_Parser;

/// @brief Field m_Settings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  m_Settings;

/// @brief Field m_Sources, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Sources, put=__cordl_internal_set_m_Sources)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>*  m_Sources;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddExtensions, addr 0xb028598, size 0x6c, virtual false, abstract: false, final false
inline void AddExtensions(/* [ParamArray] */ ::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>  formatterExtensions) ;

/// @brief Method AddExtensions, addr 0xb02825c, size 0x5c, virtual false, abstract: false, final false
inline void AddExtensions(/* [ParamArray] */ ::ArrayW<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>  sourceExtensions) ;

/// @brief Method CheckForExtensions, addr 0xb02b4e8, size 0xd0, virtual false, abstract: false, final false
inline void CheckForExtensions() ;

/// @brief Method EvaluateFormatters, addr 0xb02bae8, size 0x74, virtual false, abstract: false, final false
inline void EvaluateFormatters(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo) ;

/// @brief Method EvaluateSelectors, addr 0xb02b5b8, size 0x2b4, virtual false, abstract: false, final false
inline void EvaluateSelectors(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo) ;

/// @brief Method Format, addr 0xb02942c, size 0x10, virtual false, abstract: false, final false
inline ::StringW Format(::System::Collections::Generic::IList_1<::System::Object*>*  args, ::StringW  format) ;

/// @brief Method Format, addr 0xb02719c, size 0xc, virtual false, abstract: false, final false
inline ::StringW Format(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Format, addr 0xb029098, size 0x394, virtual false, abstract: false, final false
inline ::StringW Format(::System::IFormatProvider*  provider, ::System::Collections::Generic::IList_1<::System::Object*>*  args, ::StringW  format) ;

/// @brief Method Format, addr 0xb027258, size 0x10, virtual false, abstract: false, final false
inline ::StringW Format(::System::IFormatProvider*  provider, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Format, addr 0xb02a758, size 0x98, virtual false, abstract: false, final false
inline void Format(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  current) ;

/// @brief Method Format, addr 0xb02b010, size 0x4d8, virtual true, abstract: false, final false
inline void Format(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo) ;

/// @brief Method FormatError, addr 0xb02b86c, size 0x27c, virtual false, abstract: false, final false
inline void FormatError(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  errorItem, ::System::Exception*  innerException, int32_t  startIndex, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo) ;

/// @brief Method FormatInto, addr 0xb028740, size 0x148, virtual false, abstract: false, final false
inline void FormatInto(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method FormatWithCache, addr 0xb028ad4, size 0xc, virtual false, abstract: false, final false
inline ::StringW FormatWithCache(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  cache, ::StringW  format, ::System::Collections::Generic::IList_1<::System::Object*>*  args) ;

/// @brief Method FormatWithCache, addr 0xb02a8f0, size 0x3dc, virtual false, abstract: false, final false
inline ::StringW FormatWithCache(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  cache, ::StringW  format, ::System::IFormatProvider*  formatProvider, ::System::Collections::Generic::IList_1<::System::Object*>*  args) ;

/// @brief Method FormatWithCacheInto, addr 0xb02ad64, size 0x17c, virtual false, abstract: false, final false
inline void FormatWithCacheInto(::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  cache, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method GetFormatterExtension, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*> && ::cordl_internals::reference_type_constraint<T>)
inline T GetFormatterExtension() ;

/// @brief Method GetNotEmptyFormatterExtensionNames, addr 0xb028d1c, size 0x35c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetNotEmptyFormatterExtensionNames() ;

/// @brief Method GetSourceExtension, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*> && ::cordl_internals::reference_type_constraint<T>)
inline T GetSourceExtension() ;

/// @brief Method InvokeFormatterExtensions, addr 0xb02bd70, size 0x26c, virtual false, abstract: false, final false
inline bool InvokeFormatterExtensions(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo) ;

/// @brief Method InvokeSourceExtensions, addr 0xb02bbb4, size 0x1bc, virtual false, abstract: false, final false
inline bool InvokeSourceExtensions(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  formattingInfo) ;

static inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb02bfe8, size 0xc, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb02bfdc, size 0xc, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

constexpr ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>* const& __cordl_internal_get_OnFormattingFailure() const;

constexpr ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*& __cordl_internal_get_OnFormattingFailure() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>* const& __cordl_internal_get_m_Formatters() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>*& __cordl_internal_get_m_Formatters() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_NotEmptyFormatterExtensionNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_NotEmptyFormatterExtensionNames() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser* const& __cordl_internal_get_m_Parser() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*& __cordl_internal_get_m_Parser() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*& __cordl_internal_get_m_Settings() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>* const& __cordl_internal_get_m_Sources() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>*& __cordl_internal_get_m_Sources() ;

constexpr void __cordl_internal_set_OnFormattingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_Formatters(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>*  value) ;

constexpr void __cordl_internal_set_m_NotEmptyFormatterExtensionNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_m_Parser(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value) ;

constexpr void __cordl_internal_set_m_Sources(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>*  value) ;

/// @brief Method .ctor, addr 0xb027ce4, size 0x170, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnFormattingFailure, addr 0xb028ae0, size 0xb0, virtual false, abstract: false, final false
inline void add_OnFormattingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*  value) ;

static inline ::ArrayW<::System::Object*> getStaticF_k_Empty() ;

/// @brief Method get_FormatterExtensions, addr 0xb028c48, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>* get_FormatterExtensions() ;

/// @brief Method get_Parser, addr 0xb029078, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser* get_Parser() ;

/// @brief Method get_Settings, addr 0xb029088, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* get_Settings() ;

/// @brief Method get_SourceExtensions, addr 0xb028c40, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>* get_SourceExtensions() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnFormattingFailure, addr 0xb028b90, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnFormattingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*  value) ;

static inline void setStaticF_k_Empty(::ArrayW<::System::Object*>  value) ;

/// @brief Method set_Parser, addr 0xb029080, size 0x8, virtual false, abstract: false, final false
inline void set_Parser(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*  value) ;

/// @brief Method set_Settings, addr 0xb029090, size 0x8, virtual false, abstract: false, final false
inline void set_Settings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFormatter(SmartFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFormatter(SmartFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25137};

/// [SerializeReference]
/// @brief Field m_Settings, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  ___m_Settings;

/// [SerializeReference]
/// @brief Field m_Parser, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*  ___m_Parser;

/// [SerializeReference]
/// @brief Field m_Sources, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*>*  ___m_Sources;

/// [SerializeReference]
/// @brief Field m_Formatters, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormatter*>*  ___m_Formatters;

/// @brief Field m_NotEmptyFormatterExtensionNames, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___m_NotEmptyFormatterExtensionNames;

/// [CompilerGenerated]
/// @brief Field OnFormattingFailure, offset: 0x38, size: 0x8, def value: None
 ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::FormattingErrorEventArgs*>*  ___OnFormattingFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::SmartFormatter, ___m_Settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::SmartFormatter, ___m_Parser) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::SmartFormatter, ___m_Sources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::SmartFormatter, ___m_Formatters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::SmartFormatter, ___m_NotEmptyFormatterExtensionNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::SmartFormatter, ___OnFormattingFailure) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::SmartFormatter) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
