#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Formatting/FormattingInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormattingInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatDetails;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormattingException;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class FormatItem;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Placeholder;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Selector;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormattingInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*, "UnityEngine.Localization.SmartFormat.Core.Formatting", "FormattingInfo");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Formatting.FormattingInfo
class CORDL_TYPE FormattingInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Alignment)) int32_t  Alignment;

 __declspec(property(get=get_Children)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*  Children;

 __declspec(property(get=get_CurrentValue, put=set_CurrentValue)) ::System::Object*  CurrentValue;

 __declspec(property(get=get_Format, put=set_Format)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  Format;

 __declspec(property(get=get_FormatDetails, put=set_FormatDetails)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  FormatDetails;

 __declspec(property(get=get_FormatterOptions)) ::StringW  FormatterOptions;

 __declspec(property(get=get_Parent, put=set_Parent)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  Parent;

 __declspec(property(get=get_Placeholder, put=set_Placeholder)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  Placeholder;

 __declspec(property(get=get_Result, put=set_Result)) ::System::Object*  Result;

 __declspec(property(get=get_Selector, put=set_Selector)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  Selector;

 __declspec(property(get=get_SelectorIndex)) int32_t  SelectorIndex;

 __declspec(property(get=get_SelectorOperator)) ::StringW  SelectorOperator;

 __declspec(property(get=get_SelectorText)) ::StringW  SelectorText;

/// @brief Field <Children>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Children_k__BackingField, put=__cordl_internal_set__Children_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*  _Children_k__BackingField;

/// @brief Field <CurrentValue>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentValue_k__BackingField, put=__cordl_internal_set__CurrentValue_k__BackingField)) ::System::Object*  _CurrentValue_k__BackingField;

/// @brief Field <FormatDetails>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__FormatDetails_k__BackingField, put=__cordl_internal_set__FormatDetails_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  _FormatDetails_k__BackingField;

/// @brief Field <Format>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Format_k__BackingField, put=__cordl_internal_set__Format_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  _Format_k__BackingField;

/// @brief Field <Parent>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parent_k__BackingField, put=__cordl_internal_set__Parent_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  _Parent_k__BackingField;

/// @brief Field <Placeholder>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Placeholder_k__BackingField, put=__cordl_internal_set__Placeholder_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  _Placeholder_k__BackingField;

/// @brief Field <Result>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Result_k__BackingField, put=__cordl_internal_set__Result_k__BackingField)) ::System::Object*  _Result_k__BackingField;

/// @brief Field <Selector>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Selector_k__BackingField, put=__cordl_internal_set__Selector_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  _Selector_k__BackingField;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*() noexcept;

/// @brief Method CreateChild, addr 0xb049054, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* CreateChild(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  currentValue) ;

/// @brief Method CreateChild, addr 0xb049238, size 0xfc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* CreateChild(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  placeholder) ;

/// @brief Method FormattingException, addr 0xb049154, size 0x90, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingException* FormattingException(::StringW  issue, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  problemItem, int32_t  startIndex) ;

/// @brief Method Init, addr 0xb048b38, size 0x14, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  currentValue) ;

/// @brief Method Init, addr 0xb048b4c, size 0x60, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  parent, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  currentValue) ;

/// @brief Method Init, addr 0xb048bac, size 0x78, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  parent, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  placeholder, ::System::Object*  currentValue) ;

static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* New_ctor() ;

/// @brief Method ReleaseToPool, addr 0xb048c24, size 0x1e0, virtual false, abstract: false, final false
inline void ReleaseToPool() ;

/// @brief Method Write, addr 0xb049020, size 0x34, virtual true, abstract: false, final true
inline void Write(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  value) ;

/// @brief Method Write, addr 0xb048e9c, size 0xb4, virtual true, abstract: false, final true
inline void Write(::StringW  text) ;

/// @brief Method Write, addr 0xb048f50, size 0xd0, virtual true, abstract: false, final true
inline void Write(::StringW  text, int32_t  startIndex, int32_t  length) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>* const& __cordl_internal_get__Children_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*& __cordl_internal_get__Children_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__CurrentValue_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__CurrentValue_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* const& __cordl_internal_get__FormatDetails_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*& __cordl_internal_get__FormatDetails_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& __cordl_internal_get__Format_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& __cordl_internal_get__Format_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* const& __cordl_internal_get__Parent_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*& __cordl_internal_get__Parent_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* const& __cordl_internal_get__Placeholder_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*& __cordl_internal_get__Placeholder_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__Result_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Result_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* const& __cordl_internal_get__Selector_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*& __cordl_internal_get__Selector_k__BackingField() ;

constexpr void __cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*  value) ;

constexpr void __cordl_internal_set__CurrentValue_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__FormatDetails_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  value) ;

constexpr void __cordl_internal_set__Format_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

constexpr void __cordl_internal_set__Parent_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  value) ;

constexpr void __cordl_internal_set__Placeholder_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  value) ;

constexpr void __cordl_internal_set__Result_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__Selector_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  value) ;

/// @brief Method .ctor, addr 0xb049334, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Alignment, addr 0xb048e54, size 0x18, virtual true, abstract: false, final true
inline int32_t get_Alignment() ;

/// [CompilerGenerated]
/// @brief Method get_Children, addr 0xb048e94, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>* get_Children() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentValue, addr 0xb048e34, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* get_CurrentValue() ;

/// [CompilerGenerated]
/// @brief Method get_Format, addr 0xb048e84, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* get_Format() ;

/// [CompilerGenerated]
/// @brief Method get_FormatDetails, addr 0xb048e24, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* get_FormatDetails() ;

/// @brief Method get_FormatterOptions, addr 0xb048e6c, size 0x18, virtual true, abstract: false, final true
inline ::StringW get_FormatterOptions() ;

/// [CompilerGenerated]
/// @brief Method get_Parent, addr 0xb048e04, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* get_Parent() ;

/// [CompilerGenerated]
/// @brief Method get_Placeholder, addr 0xb048e44, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* get_Placeholder() ;

/// [CompilerGenerated]
/// @brief Method get_Result, addr 0xb049228, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* get_Result() ;

/// [CompilerGenerated]
/// @brief Method get_Selector, addr 0xb048e14, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* get_Selector() ;

/// @brief Method get_SelectorIndex, addr 0xb0491fc, size 0x18, virtual true, abstract: false, final true
inline int32_t get_SelectorIndex() ;

/// @brief Method get_SelectorOperator, addr 0xb049214, size 0x14, virtual true, abstract: false, final true
inline ::StringW get_SelectorOperator() ;

/// @brief Method get_SelectorText, addr 0xb0491e4, size 0x18, virtual true, abstract: false, final true
inline ::StringW get_SelectorText() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo* i___UnityEngine__Localization__SmartFormat__Core__Extensions__IFormattingInfo() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo* i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISelectorInfo() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CurrentValue, addr 0xb048e3c, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentValue(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Format, addr 0xb048e8c, size 0x8, virtual false, abstract: false, final false
inline void set_Format(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

/// [CompilerGenerated]
/// @brief Method set_FormatDetails, addr 0xb048e2c, size 0x8, virtual false, abstract: false, final false
inline void set_FormatDetails(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Parent, addr 0xb048e0c, size 0x8, virtual false, abstract: false, final false
inline void set_Parent(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Placeholder, addr 0xb048e4c, size 0x8, virtual false, abstract: false, final false
inline void set_Placeholder(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Result, addr 0xb049230, size 0x8, virtual true, abstract: false, final true
inline void set_Result(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Selector, addr 0xb048e1c, size 0x8, virtual false, abstract: false, final false
inline void set_Selector(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormattingInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormattingInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormattingInfo(FormattingInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormattingInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormattingInfo(FormattingInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25238};

/// [CompilerGenerated]
/// @brief Field <Parent>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  ____Parent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Selector>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  ____Selector_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FormatDetails>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  ____FormatDetails_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CurrentValue>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____CurrentValue_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Placeholder>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  ____Placeholder_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Format>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  ____Format_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Children>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*  ____Children_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ____Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo, ____Parent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo, ____Selector_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo, ____FormatDetails_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo, ____CurrentValue_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo, ____Placeholder_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo, ____Format_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo, ____Children_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo, ____Result_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Formatting
