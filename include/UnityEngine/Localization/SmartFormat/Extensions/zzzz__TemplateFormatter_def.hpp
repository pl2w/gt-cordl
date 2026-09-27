#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/TemplateFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TemplateFormatter)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class TemplateFormatter_Template;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class TemplateFormatter;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class TemplateFormatter_Template;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter*, "UnityEngine.Localization.SmartFormat.Extensions", "TemplateFormatter");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*, "UnityEngine.Localization.SmartFormat.Extensions", "TemplateFormatter/Template");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Extensions.FormatterBase
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.TemplateFormatter
class CORDL_TYPE TemplateFormatter : public ::UnityEngine::Localization::SmartFormat::Core::Extensions::FormatterBase {
public:
// Declarations
using Template = ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template;

 __declspec(property(get=get_DefaultNames)) ::ArrayW<::StringW>  DefaultNames;

 __declspec(property(get=get_Formatter, put=set_Formatter)) ::UnityEngine::Localization::SmartFormat::SmartFormatter*  Formatter;

 __declspec(property(get=get_Templates)) ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  Templates;

/// @brief Field m_Formatter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Formatter, put=__cordl_internal_set_m_Formatter)) ::UnityEngine::Localization::SmartFormat::SmartFormatter*  m_Formatter;

/// @brief Field m_Templates, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Templates, put=__cordl_internal_set_m_Templates)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>*  m_Templates;

/// @brief Field m_TemplatesDict, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TemplatesDict, put=__cordl_internal_set_m_TemplatesDict)) ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  m_TemplatesDict;

/// @brief Method Clear, addr 0xb04347c, size 0xac, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb043458, size 0x24, virtual true, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method Register, addr 0xb0432a8, size 0xfc, virtual false, abstract: false, final false
inline void Register(::StringW  templateName, ::StringW  _cordl_template) ;

/// @brief Method Remove, addr 0xb0433a4, size 0xb4, virtual false, abstract: false, final false
inline bool Remove(::StringW  templateName) ;

/// @brief Method TryEvaluateFormat, addr 0xb042e0c, size 0x49c, virtual true, abstract: false, final false
inline bool TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter* const& __cordl_internal_get_m_Formatter() const;

constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter*& __cordl_internal_get_m_Formatter() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>* const& __cordl_internal_get_m_Templates() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>*& __cordl_internal_get_m_Templates() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* const& __cordl_internal_get_m_TemplatesDict() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*& __cordl_internal_get_m_TemplatesDict() ;

constexpr void __cordl_internal_set_m_Formatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

constexpr void __cordl_internal_set_m_Templates(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>*  value) ;

constexpr void __cordl_internal_set_m_TemplatesDict(::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  value) ;

/// @brief Method .ctor, addr 0xb042ca8, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultNames, addr 0xb042d50, size 0xbc, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> get_DefaultNames() ;

/// @brief Method get_Formatter, addr 0xb042b14, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* get_Formatter() ;

/// @brief Method get_Templates, addr 0xb042778, size 0x39c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* get_Templates() ;

/// @brief Method set_Formatter, addr 0xb042ca0, size 0x8, virtual false, abstract: false, final false
inline void set_Formatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemplateFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemplateFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemplateFormatter(TemplateFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemplateFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemplateFormatter(TemplateFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25204};

/// [SerializeField]
/// @brief Field m_Templates, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template*>*  ___m_Templates;

/// @brief Field m_TemplatesDict, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  ___m_TemplatesDict;

/// @brief Field m_Formatter, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::SmartFormatter*  ___m_Formatter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter, ___m_Templates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter, ___m_TemplatesDict) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter, ___m_Formatter) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.TemplateFormatter/Template
class CORDL_TYPE TemplateFormatter_Template : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Format, put=set_Format)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  Format;

/// @brief Field <Format>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Format_k__BackingField, put=__cordl_internal_set__Format_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  _Format_k__BackingField;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field text, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template* New_ctor() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& __cordl_internal_get__Format_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& __cordl_internal_get__Format_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set__Format_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

/// @brief Method .ctor, addr 0xb043538, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Format, addr 0xb043528, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* get_Format() ;

/// [CompilerGenerated]
/// @brief Method set_Format, addr 0xb043530, size 0x8, virtual false, abstract: false, final false
inline void set_Format(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemplateFormatter_Template() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemplateFormatter_Template", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemplateFormatter_Template(TemplateFormatter_Template && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemplateFormatter_Template", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemplateFormatter_Template(TemplateFormatter_Template const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25203};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field text, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___text;

/// [CompilerGenerated]
/// @brief Field <Format>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  ____Format_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template, ___text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template, ____Format_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::TemplateFormatter_Template) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
