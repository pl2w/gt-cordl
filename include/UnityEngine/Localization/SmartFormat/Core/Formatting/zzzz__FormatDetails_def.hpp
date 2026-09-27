#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Formatting/FormatDetails.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FormatDetails)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatCache;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormattingException;
}
namespace UnityEngine::Localization::SmartFormat::Core::Output {
class IOutput;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
class SmartSettings;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatDetails;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*, "UnityEngine.Localization.SmartFormat.Core.Formatting", "FormatDetails");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Formatting.FormatDetails
class CORDL_TYPE FormatDetails : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FormatCache, put=set_FormatCache)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  FormatCache;

 __declspec(property(get=get_Formatter, put=set_Formatter)) ::UnityEngine::Localization::SmartFormat::SmartFormatter*  Formatter;

 __declspec(property(get=get_FormattingException, put=set_FormattingException)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*  FormattingException;

 __declspec(property(get=get_OriginalArgs, put=set_OriginalArgs)) ::System::Collections::Generic::IList_1<::System::Object*>*  OriginalArgs;

 __declspec(property(get=get_OriginalFormat, put=set_OriginalFormat)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  OriginalFormat;

 __declspec(property(get=get_Output, put=set_Output)) ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  Output;

 __declspec(property(get=get_Provider, put=set_Provider)) ::System::IFormatProvider*  Provider;

 __declspec(property(get=get_Settings)) ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  Settings;

/// @brief Field <FormatCache>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__FormatCache_k__BackingField, put=__cordl_internal_set__FormatCache_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  _FormatCache_k__BackingField;

/// @brief Field <Formatter>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Formatter_k__BackingField, put=__cordl_internal_set__Formatter_k__BackingField)) ::UnityEngine::Localization::SmartFormat::SmartFormatter*  _Formatter_k__BackingField;

/// @brief Field <FormattingException>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__FormattingException_k__BackingField, put=__cordl_internal_set__FormattingException_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*  _FormattingException_k__BackingField;

/// @brief Field <OriginalArgs>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__OriginalArgs_k__BackingField, put=__cordl_internal_set__OriginalArgs_k__BackingField)) ::System::Collections::Generic::IList_1<::System::Object*>*  _OriginalArgs_k__BackingField;

/// @brief Field <OriginalFormat>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__OriginalFormat_k__BackingField, put=__cordl_internal_set__OriginalFormat_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  _OriginalFormat_k__BackingField;

/// @brief Field <Output>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Output_k__BackingField, put=__cordl_internal_set__Output_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  _Output_k__BackingField;

/// @brief Field <Provider>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Provider_k__BackingField, put=__cordl_internal_set__Provider_k__BackingField)) ::System::IFormatProvider*  _Provider_k__BackingField;

/// @brief Method Clear, addr 0xb0486d4, size 0x78, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Init, addr 0xb048644, size 0x90, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  originalFormat, ::System::Collections::Generic::IList_1<::System::Object*>*  originalArgs, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  formatCache, ::System::IFormatProvider*  provider, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* New_ctor() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* const& __cordl_internal_get__FormatCache_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*& __cordl_internal_get__FormatCache_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter* const& __cordl_internal_get__Formatter_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter*& __cordl_internal_get__Formatter_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* const& __cordl_internal_get__FormattingException_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*& __cordl_internal_get__FormattingException_k__BackingField() ;

constexpr ::System::Collections::Generic::IList_1<::System::Object*>* const& __cordl_internal_get__OriginalArgs_k__BackingField() const;

constexpr ::System::Collections::Generic::IList_1<::System::Object*>*& __cordl_internal_get__OriginalArgs_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& __cordl_internal_get__OriginalFormat_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& __cordl_internal_get__OriginalFormat_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput* const& __cordl_internal_get__Output_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*& __cordl_internal_get__Output_k__BackingField() ;

constexpr ::System::IFormatProvider* const& __cordl_internal_get__Provider_k__BackingField() const;

constexpr ::System::IFormatProvider*& __cordl_internal_get__Provider_k__BackingField() ;

constexpr void __cordl_internal_set__FormatCache_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  value) ;

constexpr void __cordl_internal_set__Formatter_k__BackingField(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

constexpr void __cordl_internal_set__FormattingException_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*  value) ;

constexpr void __cordl_internal_set__OriginalArgs_k__BackingField(::System::Collections::Generic::IList_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__OriginalFormat_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

constexpr void __cordl_internal_set__Output_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  value) ;

constexpr void __cordl_internal_set__Provider_k__BackingField(::System::IFormatProvider*  value) ;

/// @brief Method .ctor, addr 0xb0487d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FormatCache, addr 0xb04877c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* get_FormatCache() ;

/// [CompilerGenerated]
/// @brief Method get_Formatter, addr 0xb04874c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* get_Formatter() ;

/// [CompilerGenerated]
/// @brief Method get_FormattingException, addr 0xb0487ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* get_FormattingException() ;

/// [CompilerGenerated]
/// @brief Method get_OriginalArgs, addr 0xb04876c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::System::Object*>* get_OriginalArgs() ;

/// [CompilerGenerated]
/// @brief Method get_OriginalFormat, addr 0xb04875c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* get_OriginalFormat() ;

/// [CompilerGenerated]
/// @brief Method get_Output, addr 0xb04879c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput* get_Output() ;

/// [CompilerGenerated]
/// @brief Method get_Provider, addr 0xb04878c, size 0x8, virtual false, abstract: false, final false
inline ::System::IFormatProvider* get_Provider() ;

/// @brief Method get_Settings, addr 0xb0487bc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* get_Settings() ;

/// [CompilerGenerated]
/// @brief Method set_FormatCache, addr 0xb048784, size 0x8, virtual false, abstract: false, final false
inline void set_FormatCache(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Formatter, addr 0xb048754, size 0x8, virtual false, abstract: false, final false
inline void set_Formatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

/// [CompilerGenerated]
/// @brief Method set_FormattingException, addr 0xb0487b4, size 0x8, virtual false, abstract: false, final false
inline void set_FormattingException(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OriginalArgs, addr 0xb048774, size 0x8, virtual false, abstract: false, final false
inline void set_OriginalArgs(::System::Collections::Generic::IList_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OriginalFormat, addr 0xb048764, size 0x8, virtual false, abstract: false, final false
inline void set_OriginalFormat(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Output, addr 0xb0487a4, size 0x8, virtual false, abstract: false, final false
inline void set_Output(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Provider, addr 0xb048794, size 0x8, virtual false, abstract: false, final false
inline void set_Provider(::System::IFormatProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatDetails() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatDetails", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatDetails(FormatDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatDetails", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatDetails(FormatDetails const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25236};

/// [CompilerGenerated]
/// @brief Field <Formatter>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::SmartFormatter*  ____Formatter_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OriginalFormat>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  ____OriginalFormat_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OriginalArgs>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::System::Object*>*  ____OriginalArgs_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FormatCache>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  ____FormatCache_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Provider>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::IFormatProvider*  ____Provider_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Output>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  ____Output_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FormattingException>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException*  ____FormattingException_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails, ____Formatter_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails, ____OriginalFormat_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails, ____OriginalArgs_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails, ____FormatCache_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails, ____Provider_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails, ____Output_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails, ____FormattingException_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Formatting
