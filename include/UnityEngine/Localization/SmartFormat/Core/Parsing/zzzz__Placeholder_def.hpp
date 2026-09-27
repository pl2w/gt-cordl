#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Placeholder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Placeholder)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Selector;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Placeholder;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*, "UnityEngine.Localization.SmartFormat.Core.Parsing", "Placeholder");
// Dependencies UnityEngine.Localization.SmartFormat.Core.Parsing.FormatItem
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Parsing.Placeholder
class CORDL_TYPE Placeholder : public ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem {
public:
// Declarations
 __declspec(property(get=get_Alignment, put=set_Alignment)) int32_t  Alignment;

 __declspec(property(get=get_Format, put=set_Format)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  Format;

 __declspec(property(get=get_FormatterName, put=set_FormatterName)) ::StringW  FormatterName;

 __declspec(property(get=get_FormatterOptions, put=set_FormatterOptions)) ::StringW  FormatterOptions;

 __declspec(property(get=get_NestedDepth, put=set_NestedDepth)) int32_t  NestedDepth;

 __declspec(property(get=get_Selectors)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*  Selectors;

/// @brief Field <Alignment>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Alignment_k__BackingField, put=__cordl_internal_set__Alignment_k__BackingField)) int32_t  _Alignment_k__BackingField;

/// @brief Field <Format>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Format_k__BackingField, put=__cordl_internal_set__Format_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  _Format_k__BackingField;

/// @brief Field <FormatterName>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__FormatterName_k__BackingField, put=__cordl_internal_set__FormatterName_k__BackingField)) ::StringW  _FormatterName_k__BackingField;

/// @brief Field <FormatterOptions>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__FormatterOptions_k__BackingField, put=__cordl_internal_set__FormatterOptions_k__BackingField)) ::StringW  _FormatterOptions_k__BackingField;

/// @brief Field <NestedDepth>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__NestedDepth_k__BackingField, put=__cordl_internal_set__NestedDepth_k__BackingField)) int32_t  _NestedDepth_k__BackingField;

/// @brief Field <Selectors>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Selectors_k__BackingField, put=__cordl_internal_set__Selectors_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*  _Selectors_k__BackingField;

static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* New_ctor() ;

/// @brief Method ReleaseToPool, addr 0xb047a34, size 0x1dc, virtual false, abstract: false, final false
inline void ReleaseToPool() ;

/// @brief Method ToString, addr 0xb047c68, size 0x46c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__Alignment_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Alignment_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& __cordl_internal_get__Format_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& __cordl_internal_get__Format_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__FormatterName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__FormatterName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__FormatterOptions_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__FormatterOptions_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__NestedDepth_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NestedDepth_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>* const& __cordl_internal_get__Selectors_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*& __cordl_internal_get__Selectors_k__BackingField() ;

constexpr void __cordl_internal_set__Alignment_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Format_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

constexpr void __cordl_internal_set__FormatterName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__FormatterOptions_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__NestedDepth_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Selectors_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*  value) ;

/// @brief Method .ctor, addr 0xb0480d4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Alignment, addr 0xb047c28, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Alignment() ;

/// [CompilerGenerated]
/// @brief Method get_Format, addr 0xb047c58, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* get_Format() ;

/// [CompilerGenerated]
/// @brief Method get_FormatterName, addr 0xb047c38, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FormatterName() ;

/// [CompilerGenerated]
/// @brief Method get_FormatterOptions, addr 0xb047c48, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FormatterOptions() ;

/// [CompilerGenerated]
/// @brief Method get_NestedDepth, addr 0xb047c10, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NestedDepth() ;

/// [CompilerGenerated]
/// @brief Method get_Selectors, addr 0xb047c20, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>* get_Selectors() ;

/// [CompilerGenerated]
/// @brief Method set_Alignment, addr 0xb047c30, size 0x8, virtual false, abstract: false, final false
inline void set_Alignment(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Format, addr 0xb047c60, size 0x8, virtual false, abstract: false, final false
inline void set_Format(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

/// [CompilerGenerated]
/// @brief Method set_FormatterName, addr 0xb047c40, size 0x8, virtual false, abstract: false, final false
inline void set_FormatterName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_FormatterOptions, addr 0xb047c50, size 0x8, virtual false, abstract: false, final false
inline void set_FormatterOptions(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_NestedDepth, addr 0xb047c18, size 0x8, virtual false, abstract: false, final false
inline void set_NestedDepth(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Placeholder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Placeholder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Placeholder(Placeholder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Placeholder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Placeholder(Placeholder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25229};

/// [CompilerGenerated]
/// @brief Field <NestedDepth>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____NestedDepth_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Selectors>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*  ____Selectors_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Alignment>k__BackingField, offset: 0x50, size: 0x4, def value: None
 int32_t  ____Alignment_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FormatterName>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____FormatterName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FormatterOptions>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____FormatterOptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Format>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  ____Format_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder, ____NestedDepth_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder, ____Selectors_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder, ____Alignment_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder, ____FormatterName_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder, ____FormatterOptions_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder, ____Format_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Parsing
