#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_Flags_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout_ControlItem)
namespace GlobalNamespace {
struct ControlItem_InputControlLayout_Flags;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlLayout_ControlItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlLayout_ControlItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlLayout_ControlItem, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem");
// Dependencies UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItem::Flags, UnityEngine.InputSystem.Utilities.FourCC, UnityEngine.InputSystem.Utilities.InternedString, UnityEngine.InputSystem.Utilities.NameAndParameters, UnityEngine.InputSystem.Utilities.NamedValue, UnityEngine.InputSystem.Utilities.PrimitiveValue, UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct CORDL_TYPE InputControlLayout_ControlItem {
public:
// Declarations
using Flags = ::GlobalNamespace::ControlItem_InputControlLayout_Flags;

 __declspec(property(get=get_aliases, put=set_aliases)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  aliases;

 __declspec(property(get=get_arraySize, put=set_arraySize)) int32_t  arraySize;

 __declspec(property(get=get_bit, put=set_bit)) uint32_t  bit;

 __declspec(property(get=get_defaultState, put=set_defaultState)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  defaultState;

 __declspec(property(get=get_displayName, put=set_displayName)) ::StringW  displayName;

 __declspec(property(get=get_dontReset, put=set_dontReset)) bool  dontReset;

 __declspec(property(get=get_flags, put=set_flags)) ::GlobalNamespace::ControlItem_InputControlLayout_Flags  flags;

 __declspec(property(get=get_format, put=set_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

 __declspec(property(get=get_isArray)) bool  isArray;

 __declspec(property(get=get_isFirstDefinedInThisLayout, put=set_isFirstDefinedInThisLayout)) bool  isFirstDefinedInThisLayout;

 __declspec(property(get=get_isModifyingExistingControl, put=set_isModifyingExistingControl)) bool  isModifyingExistingControl;

 __declspec(property(get=get_isNoisy, put=set_isNoisy)) bool  isNoisy;

 __declspec(property(get=get_isSynthetic, put=set_isSynthetic)) bool  isSynthetic;

 __declspec(property(get=get_layout, put=set_layout)) ::UnityEngine::InputSystem::Utilities::InternedString  layout;

 __declspec(property(get=get_maxValue, put=set_maxValue)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  maxValue;

 __declspec(property(get=get_minValue, put=set_minValue)) ::UnityEngine::InputSystem::Utilities::PrimitiveValue  minValue;

 __declspec(property(get=get_name, put=set_name)) ::UnityEngine::InputSystem::Utilities::InternedString  name;

 __declspec(property(get=get_offset, put=set_offset)) uint32_t  offset;

 __declspec(property(get=get_parameters, put=set_parameters)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  parameters;

 __declspec(property(get=get_processors, put=set_processors)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  processors;

 __declspec(property(get=get_shortDisplayName, put=set_shortDisplayName)) ::StringW  shortDisplayName;

 __declspec(property(get=get_sizeInBits, put=set_sizeInBits)) uint32_t  sizeInBits;

 __declspec(property(get=get_usages, put=set_usages)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  usages;

 __declspec(property(get=get_useStateFrom, put=set_useStateFrom)) ::StringW  useStateFrom;

 __declspec(property(get=get_variants, put=set_variants)) ::UnityEngine::InputSystem::Utilities::InternedString  variants;

/// @brief Method Merge, addr 0xb003e68, size 0x390, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlLayout_ControlItem Merge(::GlobalNamespace::InputControlLayout_ControlItem  other) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_aliases, addr 0xb004784, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_arraySize, addr 0xb00481c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_arraySize() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_bit, addr 0xb0047dc, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_bit() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_defaultState, addr 0xb00482c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_defaultState() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_displayName, addr 0xb00474c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_displayName() ;

/// @brief Method get_dontReset, addr 0xb00488c, size 0xc, virtual false, abstract: false, final false
inline bool get_dontReset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_flags, addr 0xb00480c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ControlItem_InputControlLayout_Flags get_flags() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_format, addr 0xb0047fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method get_isArray, addr 0xafffdb8, size 0x10, virtual false, abstract: false, final false
inline bool get_isArray() ;

/// @brief Method get_isFirstDefinedInThisLayout, addr 0xb004898, size 0xc, virtual false, abstract: false, final false
inline bool get_isFirstDefinedInThisLayout() ;

/// @brief Method get_isModifyingExistingControl, addr 0xb004868, size 0xc, virtual false, abstract: false, final false
inline bool get_isModifyingExistingControl() ;

/// @brief Method get_isNoisy, addr 0xb004874, size 0xc, virtual false, abstract: false, final false
inline bool get_isNoisy() ;

/// @brief Method get_isSynthetic, addr 0xb004880, size 0xc, virtual false, abstract: false, final false
inline bool get_isSynthetic() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_layout, addr 0xb00470c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_layout() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_maxValue, addr 0xb004854, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_maxValue() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_minValue, addr 0xb004840, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_minValue() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_name, addr 0xb0046f0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_name() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_offset, addr 0xb0047cc, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_offset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_parameters, addr 0xb00479c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> get_parameters() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_processors, addr 0xb0047b4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> get_processors() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_shortDisplayName, addr 0xb00475c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_shortDisplayName() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_sizeInBits, addr 0xb0047ec, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_sizeInBits() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_usages, addr 0xb00476c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_useStateFrom, addr 0xb00473c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_useStateFrom() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_variants, addr 0xb004724, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_variants() ;

/// [CompilerGenerated]
/// @brief Method set_aliases, addr 0xb004790, size 0xc, virtual false, abstract: false, final false
inline void set_aliases(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

/// [CompilerGenerated]
/// @brief Method set_arraySize, addr 0xb004824, size 0x8, virtual false, abstract: false, final false
inline void set_arraySize(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_bit, addr 0xb0047e4, size 0x8, virtual false, abstract: false, final false
inline void set_bit(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_defaultState, addr 0xb004838, size 0x8, virtual false, abstract: false, final false
inline void set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// [CompilerGenerated]
/// @brief Method set_displayName, addr 0xb004754, size 0x8, virtual false, abstract: false, final false
inline void set_displayName(::StringW  value) ;

/// @brief Method set_dontReset, addr 0xb0024f4, size 0x20, virtual false, abstract: false, final false
inline void set_dontReset(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_flags, addr 0xb004814, size 0x8, virtual false, abstract: false, final false
inline void set_flags(::GlobalNamespace::ControlItem_InputControlLayout_Flags  value) ;

/// [CompilerGenerated]
/// @brief Method set_format, addr 0xb004804, size 0x8, virtual false, abstract: false, final false
inline void set_format(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

/// @brief Method set_isFirstDefinedInThisLayout, addr 0xb0024b4, size 0x20, virtual false, abstract: false, final false
inline void set_isFirstDefinedInThisLayout(bool  value) ;

/// @brief Method set_isModifyingExistingControl, addr 0xb0024a4, size 0x10, virtual false, abstract: false, final false
inline void set_isModifyingExistingControl(bool  value) ;

/// @brief Method set_isNoisy, addr 0xb0024d4, size 0x20, virtual false, abstract: false, final false
inline void set_isNoisy(bool  value) ;

/// @brief Method set_isSynthetic, addr 0xb002514, size 0x20, virtual false, abstract: false, final false
inline void set_isSynthetic(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_layout, addr 0xb004718, size 0xc, virtual false, abstract: false, final false
inline void set_layout(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// [CompilerGenerated]
/// @brief Method set_maxValue, addr 0xb004860, size 0x8, virtual false, abstract: false, final false
inline void set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// [CompilerGenerated]
/// @brief Method set_minValue, addr 0xb00484c, size 0x8, virtual false, abstract: false, final false
inline void set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// [CompilerGenerated]
/// @brief Method set_name, addr 0xb0046fc, size 0x10, virtual false, abstract: false, final false
inline void set_name(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// [CompilerGenerated]
/// @brief Method set_offset, addr 0xb0047d4, size 0x8, virtual false, abstract: false, final false
inline void set_offset(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_parameters, addr 0xb0047a8, size 0xc, virtual false, abstract: false, final false
inline void set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  value) ;

/// [CompilerGenerated]
/// @brief Method set_processors, addr 0xb0047c0, size 0xc, virtual false, abstract: false, final false
inline void set_processors(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  value) ;

/// [CompilerGenerated]
/// @brief Method set_shortDisplayName, addr 0xb004764, size 0x8, virtual false, abstract: false, final false
inline void set_shortDisplayName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_sizeInBits, addr 0xb0047f4, size 0x8, virtual false, abstract: false, final false
inline void set_sizeInBits(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_usages, addr 0xb004778, size 0xc, virtual false, abstract: false, final false
inline void set_usages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

/// [CompilerGenerated]
/// @brief Method set_useStateFrom, addr 0xb004744, size 0x8, virtual false, abstract: false, final false
inline void set_useStateFrom(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_variants, addr 0xb004730, size 0xc, virtual false, abstract: false, final false
inline void set_variants(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_ControlItem() ;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None, comment: None }, CppParam { name: "_layout_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None, comment: None }, CppParam { name: "_variants_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None, comment: None }, CppParam { name: "_useStateFrom_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_shortDisplayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_usages_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_aliases_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_parameters_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_processors_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_offset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bit_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_format_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None, comment: None }, CppParam { name: "_flags_k__BackingField", ty: "::GlobalNamespace::ControlItem_InputControlLayout_Flags", modifiers: "", def_value: None, comment: None }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_defaultState_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None, comment: None }, CppParam { name: "_minValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None, comment: None }, CppParam { name: "_maxValue_k__BackingField", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None, comment: None }]
constexpr InputControlLayout_ControlItem(::UnityEngine::InputSystem::Utilities::InternedString  _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString  _layout_k__BackingField, ::UnityEngine::InputSystem::Utilities::InternedString  _variants_k__BackingField, ::StringW  _useStateFrom_k__BackingField, ::StringW  _displayName_k__BackingField, ::StringW  _shortDisplayName_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _usages_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _aliases_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  _parameters_k__BackingField, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  _processors_k__BackingField, uint32_t  _offset_k__BackingField, uint32_t  _bit_k__BackingField, uint32_t  _sizeInBits_k__BackingField, ::UnityEngine::InputSystem::Utilities::FourCC  _format_k__BackingField, ::GlobalNamespace::ControlItem_InputControlLayout_Flags  _flags_k__BackingField, int32_t  _arraySize_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _defaultState_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _minValue_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _maxValue_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// [CompilerGenerated]
/// @brief Field <name>k__BackingField, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  _name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <layout>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  _layout_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <variants>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  _variants_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <useStateFrom>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  _useStateFrom_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <displayName>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  _displayName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <shortDisplayName>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  _shortDisplayName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <usages>k__BackingField, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _usages_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <aliases>k__BackingField, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  _aliases_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <parameters>k__BackingField, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>  _parameters_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <processors>k__BackingField, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>  _processors_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <offset>k__BackingField, offset: 0x88, size: 0x4, def value: None
 uint32_t  _offset_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <bit>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 uint32_t  _bit_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <sizeInBits>k__BackingField, offset: 0x90, size: 0x4, def value: None
 uint32_t  _sizeInBits_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <format>k__BackingField, offset: 0x94, size: 0x4, def value: None
 ::UnityEngine::InputSystem::Utilities::FourCC  _format_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <flags>k__BackingField, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::ControlItem_InputControlLayout_Flags  _flags_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <arraySize>k__BackingField, offset: 0x9c, size: 0x4, def value: None
 int32_t  _arraySize_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <defaultState>k__BackingField, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _defaultState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <minValue>k__BackingField, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _minValue_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <maxValue>k__BackingField, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::PrimitiveValue  _maxValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _layout_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _variants_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _useStateFrom_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _displayName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _shortDisplayName_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _usages_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _aliases_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _parameters_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _processors_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _offset_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _bit_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _sizeInBits_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _format_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _flags_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _arraySize_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _defaultState_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _minValue_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlLayout_ControlItem, _maxValue_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlLayout_ControlItem) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
