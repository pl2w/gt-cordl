#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Cache_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Collection_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Flags_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlLayout)
namespace GlobalNamespace {
struct Builder_InputControlLayout_ControlBuilder;
}
namespace GlobalNamespace {
struct InputControlLayout_CacheRefInstance;
}
namespace GlobalNamespace {
struct InputControlLayout_Cache;
}
namespace GlobalNamespace {
struct InputControlLayout_Collection;
}
namespace GlobalNamespace {
struct InputControlLayout_ControlItem;
}
namespace GlobalNamespace {
struct InputControlLayout_Flags;
}
namespace GlobalNamespace {
struct InputControlLayout_LayoutJsonNameAndDescriptorOnly;
}
namespace GlobalNamespace {
struct InputControlLayout_LayoutJson;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Layouts {
class ControlItemJson_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlAttribute;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_Builder;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
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
template<typename TValue>
struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class Collection_InputControlLayout__GetBaseLayouts_d__24;
}
namespace UnityEngine::InputSystem::Layouts {
class ControlBuilder_Builder_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class ControlItemJson_InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_Builder;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout___c;
}
namespace UnityEngine::InputSystem::Layouts {
class LayoutJson_InputControlLayout___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*);
MARK_REF_T(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*);
MARK_REF_T(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*);
MARK_REF_T(::UnityEngine::InputSystem::Layouts::InputControlLayout*);
MARK_REF_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*);
MARK_REF_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*);
MARK_REF_T(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*);
MARK_REF_T(::UnityEngine::InputSystem::Layouts::InputControlLayout___c*);
MARK_REF_T(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/<GetBaseLayouts>d__24");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::InputControlLayout*, "UnityEngine.InputSystem.Layouts", "InputControlLayout");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutNotFoundException");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::InputControlLayout___c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson/<>c");
// [DefaultMember("Item")]
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.InputSystem.Layouts.InputControlLayout::Cache, UnityEngine.InputSystem.Layouts.InputControlLayout::Collection, UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItem, UnityEngine.InputSystem.Layouts.InputControlLayout::Flags, UnityEngine.InputSystem.Utilities.FourCC, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout
class CORDL_TYPE InputControlLayout : public ::System::Object {
public:
// Declarations
using Cache = ::GlobalNamespace::InputControlLayout_Cache;

using CacheRefInstance = ::GlobalNamespace::InputControlLayout_CacheRefInstance;

using Collection = ::GlobalNamespace::InputControlLayout_Collection;

using ControlItem = ::GlobalNamespace::InputControlLayout_ControlItem;

using Flags = ::GlobalNamespace::InputControlLayout_Flags;

using LayoutJson = ::GlobalNamespace::InputControlLayout_LayoutJson;

using LayoutJsonNameAndDescriptorOnly = ::GlobalNamespace::InputControlLayout_LayoutJsonNameAndDescriptorOnly;

using Builder = ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder;

using ControlItemJson = ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson;

using LayoutNotFoundException = ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException;

using __c = ::UnityEngine::InputSystem::Layouts::InputControlLayout___c;

 __declspec(property(get=get_Item)) ::GlobalNamespace::InputControlLayout_ControlItem  Item[];

 __declspec(property(get=get_appliedOverrides)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  appliedOverrides;

 __declspec(property(get=get_baseLayouts)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  baseLayouts;

 __declspec(property(get=get_canRunInBackground, put=set_canRunInBackground)) ::System::Nullable_1<bool>  canRunInBackground;

 __declspec(property(get=get_commonUsages)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  commonUsages;

 __declspec(property(get=get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem>  controls;

 __declspec(property(get=get_displayName)) ::StringW  displayName;

 __declspec(property(get=get_hideInUI, put=set_hideInUI)) bool  hideInUI;

 __declspec(property(get=get_isControlLayout)) bool  isControlLayout;

 __declspec(property(get=get_isDeviceLayout)) bool  isDeviceLayout;

 __declspec(property(get=get_isGenericTypeOfDevice, put=set_isGenericTypeOfDevice)) bool  isGenericTypeOfDevice;

 __declspec(property(get=get_isNoisy, put=set_isNoisy)) bool  isNoisy;

 __declspec(property(get=get_isOverride, put=set_isOverride)) bool  isOverride;

/// @brief Field m_AppliedOverrides, offset 0x68, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_AppliedOverrides, put=__cordl_internal_set_m_AppliedOverrides)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  m_AppliedOverrides;

/// @brief Field m_BaseLayouts, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_BaseLayouts, put=__cordl_internal_set_m_BaseLayouts)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  m_BaseLayouts;

/// @brief Field m_CommonUsages, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommonUsages, put=__cordl_internal_set_m_CommonUsages)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  m_CommonUsages;

/// @brief Field m_Controls, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controls, put=__cordl_internal_set_m_Controls)) ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  m_Controls;

/// @brief Field m_Description, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Description, put=__cordl_internal_set_m_Description)) ::StringW  m_Description;

/// @brief Field m_DisplayName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DisplayName, put=__cordl_internal_set_m_DisplayName)) ::StringW  m_DisplayName;

/// @brief Field m_Flags, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) ::GlobalNamespace::InputControlLayout_Flags  m_Flags;

/// @brief Field m_Name, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::UnityEngine::InputSystem::Utilities::InternedString  m_Name;

/// @brief Field m_StateFormat, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StateFormat, put=__cordl_internal_set_m_StateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  m_StateFormat;

/// @brief Field m_StateSizeInBytes, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StateSizeInBytes, put=__cordl_internal_set_m_StateSizeInBytes)) int32_t  m_StateSizeInBytes;

/// @brief Field m_Type, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Type, put=__cordl_internal_set_m_Type)) ::System::Type*  m_Type;

/// @brief Field m_UpdateBeforeRender, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_UpdateBeforeRender, put=__cordl_internal_set_m_UpdateBeforeRender)) ::System::Nullable_1<bool>  m_UpdateBeforeRender;

/// @brief Field m_Variants, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Variants, put=__cordl_internal_set_m_Variants)) ::UnityEngine::InputSystem::Utilities::InternedString  m_Variants;

 __declspec(property(get=get_name)) ::UnityEngine::InputSystem::Utilities::InternedString  name;

/// @brief Field s_CacheInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CacheInstance, put=setStaticF_s_CacheInstance)) ::GlobalNamespace::InputControlLayout_Cache  s_CacheInstance;

/// @brief Field s_CacheInstanceRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CacheInstanceRef, put=setStaticF_s_CacheInstanceRef)) int32_t  s_CacheInstanceRef;

/// @brief Field s_DefaultVariant, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_DefaultVariant, put=setStaticF_s_DefaultVariant)) ::UnityEngine::InputSystem::Utilities::InternedString  s_DefaultVariant;

/// @brief Field s_Layouts, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_s_Layouts, put=setStaticF_s_Layouts)) ::GlobalNamespace::InputControlLayout_Collection  s_Layouts;

 __declspec(property(get=get_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat;

 __declspec(property(get=get_stateSizeInBytes)) int32_t  stateSizeInBytes;

 __declspec(property(get=get_type)) ::System::Type*  type;

 __declspec(property(get=get_updateBeforeRender)) bool  updateBeforeRender;

 __declspec(property(get=get_variants)) ::UnityEngine::InputSystem::Utilities::InternedString  variants;

/// @brief Method AddControlItems, addr 0xb0002f4, size 0x7c, virtual false, abstract: false, final false
static inline void AddControlItems(::System::Type*  type, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlLayouts, ::StringW  layoutName) ;

/// @brief Method AddControlItemsFromFields, addr 0xb0011c8, size 0x94, virtual false, abstract: false, final false
static inline void AddControlItemsFromFields(::System::Type*  type, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlLayouts, ::StringW  layoutName) ;

/// @brief Method AddControlItemsFromMember, addr 0xb001828, size 0x260, virtual false, abstract: false, final false
static inline void AddControlItemsFromMember(::System::Reflection::MemberInfo*  member, ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlAttribute*>  attributes, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlItems) ;

/// @brief Method AddControlItemsFromMembers, addr 0xb0012f0, size 0x538, virtual false, abstract: false, final false
static inline void AddControlItemsFromMembers(::ArrayW<::System::Reflection::MemberInfo*>  members, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlItems, ::StringW  layoutName) ;

/// @brief Method AddControlItemsFromProperties, addr 0xb00125c, size 0x94, virtual false, abstract: false, final false
static inline void AddControlItemsFromProperties(::System::Type*  type, ::System::Collections::Generic::List_1<::GlobalNamespace::InputControlLayout_ControlItem>*  controlLayouts, ::StringW  layoutName) ;

/// @brief Method CacheRef, addr 0xb00458c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputControlLayout_CacheRefInstance CacheRef() ;

/// @brief Method CreateControlItemFromMember, addr 0xb001a88, size 0x864, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputControlLayout_ControlItem CreateControlItemFromMember(::System::Reflection::MemberInfo*  member, ::UnityEngine::InputSystem::Layouts::InputControlAttribute*  attribute) ;

/// @brief Method CreateLookupTableForControls, addr 0xb003a64, size 0x404, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::InputControlLayout_ControlItem>* CreateLookupTableForControls(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  controlItems, ::System::Collections::Generic::List_1<::StringW>*  variants) ;

/// @brief Method FindControl, addr 0xafff91c, size 0x1a0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::InputControlLayout_ControlItem> FindControl(::UnityEngine::InputSystem::Utilities::InternedString  path) ;

/// @brief Method FindControlIncludingArrayElements, addr 0xafffabc, size 0x2fc, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::InputControlLayout_ControlItem> FindControlIncludingArrayElements(::StringW  path, ::by_ref<int32_t>  arrayIndex) ;

/// @brief Method FromJson, addr 0xb000820, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromJson(::StringW  json) ;

/// @brief Method FromType, addr 0xafffe44, size 0x4b0, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FromType(::StringW  name, ::System::Type*  type) ;

/// @brief Method GetValueType, addr 0xafffdc8, size 0x7c, virtual false, abstract: false, final false
inline ::System::Type* GetValueType() ;

/// @brief Method InferLayoutFromValueType, addr 0xb0022ec, size 0x1b8, virtual false, abstract: false, final false
static inline ::StringW InferLayoutFromValueType(::System::Type*  type) ;

/// @brief Method MergeLayout, addr 0xb0027ac, size 0x12b8, virtual false, abstract: false, final false
inline void MergeLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout*  other) ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* New_ctor(::StringW  name, ::System::Type*  type) ;

/// @brief Method ParseHeaderFieldsFromJson, addr 0xb004388, size 0x1ac, virtual false, abstract: false, final false
static inline void ParseHeaderFieldsFromJson(::StringW  json, ::by_ref<::UnityEngine::InputSystem::Utilities::InternedString>  name, ::by_ref<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>>  baseLayouts, ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>  deviceMatcher) ;

/// @brief Method ToJson, addr 0xb0003d8, size 0x6c, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method VariantsMatch, addr 0xb0041f8, size 0x12c, virtual false, abstract: false, final false
static inline bool VariantsMatch(::StringW  expected, ::StringW  actual) ;

/// @brief Method VariantsMatch, addr 0xb004324, size 0x64, virtual false, abstract: false, final false
static inline bool VariantsMatch(::UnityEngine::InputSystem::Utilities::InternedString  expected, ::UnityEngine::InputSystem::Utilities::InternedString  actual) ;

/// [CompilerGenerated]
/// @brief Method <MergeLayout>b__77_0, addr 0xb00467c, size 0x74, virtual false, abstract: false, final false
inline bool _MergeLayout_b__77_0(::GlobalNamespace::InputControlLayout_ControlItem  x) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_AppliedOverrides() const;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_AppliedOverrides() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_BaseLayouts() const;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_BaseLayouts() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> const& __cordl_internal_get_m_CommonUsages() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>& __cordl_internal_get_m_CommonUsages() ;

constexpr ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem> const& __cordl_internal_get_m_Controls() const;

constexpr ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>& __cordl_internal_get_m_Controls() ;

constexpr ::StringW const& __cordl_internal_get_m_Description() const;

constexpr ::StringW& __cordl_internal_get_m_Description() ;

constexpr ::StringW const& __cordl_internal_get_m_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_m_DisplayName() ;

constexpr ::GlobalNamespace::InputControlLayout_Flags const& __cordl_internal_get_m_Flags() const;

constexpr ::GlobalNamespace::InputControlLayout_Flags& __cordl_internal_get_m_Flags() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Name() const;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Name() ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get_m_StateFormat() const;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get_m_StateFormat() ;

constexpr int32_t const& __cordl_internal_get_m_StateSizeInBytes() const;

constexpr int32_t& __cordl_internal_get_m_StateSizeInBytes() ;

constexpr ::System::Type* const& __cordl_internal_get_m_Type() const;

constexpr ::System::Type*& __cordl_internal_get_m_Type() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_m_UpdateBeforeRender() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_m_UpdateBeforeRender() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Variants() const;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Variants() ;

constexpr void __cordl_internal_set_m_AppliedOverrides(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr void __cordl_internal_set_m_BaseLayouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr void __cordl_internal_set_m_CommonUsages(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  value) ;

constexpr void __cordl_internal_set_m_Controls(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  value) ;

constexpr void __cordl_internal_set_m_Description(::StringW  value) ;

constexpr void __cordl_internal_set_m_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_m_Flags(::GlobalNamespace::InputControlLayout_Flags  value) ;

constexpr void __cordl_internal_set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr void __cordl_internal_set_m_StateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

constexpr void __cordl_internal_set_m_StateSizeInBytes(int32_t  value) ;

constexpr void __cordl_internal_set_m_Type(::System::Type*  value) ;

constexpr void __cordl_internal_set_m_UpdateBeforeRender(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// @brief Method .ctor, addr 0xb000370, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Type*  type) ;

static inline ::GlobalNamespace::InputControlLayout_Cache getStaticF_s_CacheInstance() ;

static inline int32_t getStaticF_s_CacheInstanceRef() ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_s_DefaultVariant() ;

static inline ::GlobalNamespace::InputControlLayout_Collection getStaticF_s_Layouts() ;

/// @brief Method get_DefaultVariant, addr 0xafff308, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::InternedString get_DefaultVariant() ;

/// @brief Method get_Item, addr 0xafff7a4, size 0x178, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlLayout_ControlItem get_Item(::StringW  path) ;

/// @brief Method get_appliedOverrides, addr 0xafff410, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_appliedOverrides() ;

/// @brief Method get_baseLayouts, addr 0xafff3b0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* get_baseLayouts() ;

/// @brief Method get_cache, addr 0xb004534, size 0x58, virtual false, abstract: false, final false
static inline ::by_ref<::GlobalNamespace::InputControlLayout_Cache> get_cache() ;

/// @brief Method get_canRunInBackground, addr 0xafff6a4, size 0x64, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_canRunInBackground() ;

/// @brief Method get_commonUsages, addr 0xafff470, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_commonUsages() ;

/// @brief Method get_controls, addr 0xafff4d0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem> get_controls() ;

/// @brief Method get_displayName, addr 0xafff36c, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_displayName() ;

/// @brief Method get_hideInUI, addr 0xafff64c, size 0xc, virtual false, abstract: false, final false
inline bool get_hideInUI() ;

/// @brief Method get_isControlLayout, addr 0xafff5ec, size 0x18, virtual false, abstract: false, final false
inline bool get_isControlLayout() ;

/// @brief Method get_isDeviceLayout, addr 0xafff56c, size 0x80, virtual false, abstract: false, final false
inline bool get_isDeviceLayout() ;

/// @brief Method get_isGenericTypeOfDevice, addr 0xafff630, size 0xc, virtual false, abstract: false, final false
inline bool get_isGenericTypeOfDevice() ;

/// @brief Method get_isNoisy, addr 0xafff678, size 0xc, virtual false, abstract: false, final false
inline bool get_isNoisy() ;

/// @brief Method get_isOverride, addr 0xafff604, size 0xc, virtual false, abstract: false, final false
inline bool get_isOverride() ;

/// @brief Method get_name, addr 0xafff360, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_name() ;

/// @brief Method get_stateFormat, addr 0xafff3a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// @brief Method get_stateSizeInBytes, addr 0xafff3a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_stateSizeInBytes() ;

/// @brief Method get_type, addr 0xafff38c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_type() ;

/// @brief Method get_updateBeforeRender, addr 0xafff530, size 0x3c, virtual false, abstract: false, final false
inline bool get_updateBeforeRender() ;

/// @brief Method get_variants, addr 0xafff394, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString get_variants() ;

static inline void setStaticF_s_CacheInstance(::GlobalNamespace::InputControlLayout_Cache  value) ;

static inline void setStaticF_s_CacheInstanceRef(int32_t  value) ;

static inline void setStaticF_s_DefaultVariant(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline void setStaticF_s_Layouts(::GlobalNamespace::InputControlLayout_Collection  value) ;

/// @brief Method set_canRunInBackground, addr 0xafff708, size 0x9c, virtual false, abstract: false, final false
inline void set_canRunInBackground(::System::Nullable_1<bool>  value) ;

/// @brief Method set_hideInUI, addr 0xafff658, size 0x20, virtual false, abstract: false, final false
inline void set_hideInUI(bool  value) ;

/// @brief Method set_isGenericTypeOfDevice, addr 0xafff63c, size 0x10, virtual false, abstract: false, final false
inline void set_isGenericTypeOfDevice(bool  value) ;

/// @brief Method set_isNoisy, addr 0xafff684, size 0x20, virtual false, abstract: false, final false
inline void set_isNoisy(bool  value) ;

/// @brief Method set_isOverride, addr 0xafff610, size 0x20, virtual false, abstract: false, final false
inline void set_isOverride(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlLayout(InputControlLayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlLayout(InputControlLayout const& ) = delete;

/// @brief Field VariantSeparator offset 0xffffffff size 0x8
static constexpr ::ConstString  VariantSeparator{u";"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13839};

/// @brief Field m_Name, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  ___m_Name;

/// @brief Field m_Type, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ___m_Type;

/// @brief Field m_Variants, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  ___m_Variants;

/// @brief Field m_StateFormat, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::InputSystem::Utilities::FourCC  ___m_StateFormat;

/// @brief Field m_StateSizeInBytes, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___m_StateSizeInBytes;

/// @brief Field m_UpdateBeforeRender, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___m_UpdateBeforeRender;

/// @brief Field m_BaseLayouts, offset: 0x50, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  ___m_BaseLayouts;

/// @brief Field m_AppliedOverrides, offset: 0x68, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>  ___m_AppliedOverrides;

/// @brief Field m_CommonUsages, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>  ___m_CommonUsages;

/// @brief Field m_Controls, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  ___m_Controls;

/// @brief Field m_DisplayName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___m_DisplayName;

/// @brief Field m_Description, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___m_Description;

/// @brief Field m_Flags, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::InputControlLayout_Flags  ___m_Flags;

/// @brief Size padding 0xb0 - 0xa8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Variants) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_StateFormat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_StateSizeInBytes) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_UpdateBeforeRender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_BaseLayouts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_AppliedOverrides) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_CommonUsages) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Controls) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_DisplayName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Description) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout, ___m_Flags) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputControlLayout) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/<>c
class CORDL_TYPE InputControlLayout___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::Layouts::InputControlLayout___c*  __9;

/// @brief Field <>9__52_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_0, put=setStaticF___9__52_0)) ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  __9__52_0;

/// @brief Field <>9__75_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__75_0, put=setStaticF___9__75_0)) ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  __9__75_0;

/// @brief Field <>9__75_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__75_1, put=setStaticF___9__75_1)) ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  __9__75_1;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* New_ctor() ;

/// @brief Method <CreateControlItemFromMember>b__75_0, addr 0xb008350, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_0(::StringW  x) ;

/// @brief Method <CreateControlItemFromMember>b__75_1, addr 0xb008378, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_1(::StringW  x) ;

/// @brief Method <FromType>b__52_0, addr 0xb008328, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _FromType_b__52_0(::StringW  x) ;

/// @brief Method .ctor, addr 0xb008320, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__52_0() ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__75_0() ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__75_1() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::InputControlLayout___c*  value) ;

static inline void setStaticF___9__52_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline void setStaticF___9__75_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline void setStaticF___9__75_1(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlLayout___c(InputControlLayout___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlLayout___c(InputControlLayout___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13838};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputControlLayout___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Dependencies System.Exception
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/LayoutNotFoundException
class CORDL_TYPE InputControlLayout_LayoutNotFoundException : public ::System::Exception {
public:
// Declarations
/// @brief Field <layout>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__layout_k__BackingField, put=__cordl_internal_set__layout_k__BackingField)) ::StringW  _layout_k__BackingField;

 __declspec(property(get=get_layout)) ::StringW  layout;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor() ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor(::StringW  name) ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException* New_ctor(::StringW  name, ::StringW  message) ;

constexpr ::StringW const& __cordl_internal_get__layout_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__layout_k__BackingField() ;

constexpr void __cordl_internal_set__layout_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb008050, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb008194, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xb008124, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xb0072c4, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0xb0080a8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  message) ;

/// [CompilerGenerated]
/// @brief Method get_layout, addr 0xb008048, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_layout() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_LayoutNotFoundException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_LayoutNotFoundException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlLayout_LayoutNotFoundException(InputControlLayout_LayoutNotFoundException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_LayoutNotFoundException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlLayout_LayoutNotFoundException(InputControlLayout_LayoutNotFoundException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13835};

/// [CompilerGenerated]
/// @brief Field <layout>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____layout_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException, ____layout_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutNotFoundException) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.Layouts.InputControlLayout::Collection, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/<GetBaseLayouts>d__24
class CORDL_TYPE Collection_InputControlLayout__GetBaseLayouts_d__24 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current)) ::UnityEngine::InputSystem::Utilities::InternedString  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::InputSystem::Utilities::InternedString  __2__current;

/// @brief Field <>3__<>4__this, offset 0x90, size 0x40 
 __declspec(property(get=__cordl_internal_get___3____4__this, put=__cordl_internal_set___3____4__this)) ::GlobalNamespace::InputControlLayout_Collection  __3____4__this;

/// @brief Field <>3__includeSelf, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get___3__includeSelf, put=__cordl_internal_set___3__includeSelf)) bool  __3__includeSelf;

/// @brief Field <>3__layout, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get___3__layout, put=__cordl_internal_set___3__layout)) ::UnityEngine::InputSystem::Utilities::InternedString  __3__layout;

/// @brief Field <>4__this, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::InputControlLayout_Collection  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field includeSelf, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeSelf, put=__cordl_internal_set_includeSelf)) bool  includeSelf;

/// @brief Field layout, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_layout, put=__cordl_internal_set_layout)) ::UnityEngine::InputSystem::Utilities::InternedString  layout;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb007e14, size 0xc4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator, addr 0xb007f78, size 0xcc, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current, addr 0xb007ed8, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::InternedString System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb008044, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb007ee4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb007f1c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb007e10, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get___2__current() const;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::InputControlLayout_Collection const& __cordl_internal_get___3____4__this() const;

constexpr ::GlobalNamespace::InputControlLayout_Collection& __cordl_internal_get___3____4__this() ;

constexpr bool const& __cordl_internal_get___3__includeSelf() const;

constexpr bool& __cordl_internal_get___3__includeSelf() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get___3__layout() const;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get___3__layout() ;

constexpr ::GlobalNamespace::InputControlLayout_Collection const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::InputControlLayout_Collection& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr bool const& __cordl_internal_get_includeSelf() const;

constexpr bool& __cordl_internal_get_includeSelf() ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_layout() const;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_layout() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr void __cordl_internal_set___3____4__this(::GlobalNamespace::InputControlLayout_Collection  value) ;

constexpr void __cordl_internal_set___3__includeSelf(bool  value) ;

constexpr void __cordl_internal_set___3__layout(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::InputControlLayout_Collection  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_includeSelf(bool  value) ;

constexpr void __cordl_internal_set_layout(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb007b70, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__Utilities__InternedString_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__Utilities__InternedString_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collection_InputControlLayout__GetBaseLayouts_d__24() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collection_InputControlLayout__GetBaseLayouts_d__24", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Collection_InputControlLayout__GetBaseLayouts_d__24(Collection_InputControlLayout__GetBaseLayouts_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collection_InputControlLayout__GetBaseLayouts_d__24", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collection_InputControlLayout__GetBaseLayouts_d__24(Collection_InputControlLayout__GetBaseLayouts_d__24 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13833};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field includeSelf, offset: 0x2c, size: 0x1, def value: None
 bool  ___includeSelf;

/// @brief Field <>3__includeSelf, offset: 0x2d, size: 0x1, def value: None
 bool  _____3__includeSelf;

/// @brief Field layout, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  ___layout;

/// @brief Field <>3__layout, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::InputSystem::Utilities::InternedString  _____3__layout;

/// @brief Field <>4__this, offset: 0x50, size: 0x40, def value: None
 ::GlobalNamespace::InputControlLayout_Collection  _____4__this;

/// @brief Field <>3__<>4__this, offset: 0x90, size: 0x40, def value: None
 ::GlobalNamespace::InputControlLayout_Collection  _____3____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, ___includeSelf) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____3__includeSelf) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, ___layout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____3__layout) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____4__this) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24, _____3____4__this) == 0x90, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Layouts::Collection_InputControlLayout__GetBaseLayouts_d__24) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItemJson
class CORDL_TYPE InputControlLayout_ControlItemJson : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c;

/// @brief Field alias, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_alias, put=__cordl_internal_set_alias)) ::StringW  alias;

/// @brief Field aliases, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_aliases, put=__cordl_internal_set_aliases)) ::ArrayW<::StringW>  aliases;

/// @brief Field arraySize, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_arraySize, put=__cordl_internal_set_arraySize)) int32_t  arraySize;

/// @brief Field bit, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_bit, put=__cordl_internal_set_bit)) uint32_t  bit;

/// @brief Field defaultState, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultState, put=__cordl_internal_set_defaultState)) ::StringW  defaultState;

/// @brief Field displayName, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field dontReset, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontReset, put=__cordl_internal_set_dontReset)) bool  dontReset;

/// @brief Field format, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_format, put=__cordl_internal_set_format)) ::StringW  format;

/// @brief Field layout, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_layout, put=__cordl_internal_set_layout)) ::StringW  layout;

/// @brief Field maxValue, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) ::StringW  maxValue;

/// @brief Field minValue, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_minValue, put=__cordl_internal_set_minValue)) ::StringW  minValue;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field noisy, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_noisy, put=__cordl_internal_set_noisy)) bool  noisy;

/// @brief Field offset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) uint32_t  offset;

/// @brief Field parameters, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameters, put=__cordl_internal_set_parameters)) ::StringW  parameters;

/// @brief Field processors, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_processors, put=__cordl_internal_set_processors)) ::StringW  processors;

/// @brief Field shortDisplayName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_shortDisplayName, put=__cordl_internal_set_shortDisplayName)) ::StringW  shortDisplayName;

/// @brief Field sizeInBits, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeInBits, put=__cordl_internal_set_sizeInBits)) uint32_t  sizeInBits;

/// @brief Field synthetic, offset 0x92, size 0x1 
 __declspec(property(get=__cordl_internal_get_synthetic, put=__cordl_internal_set_synthetic)) bool  synthetic;

/// @brief Field usage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_usage, put=__cordl_internal_set_usage)) ::StringW  usage;

/// @brief Field usages, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_usages, put=__cordl_internal_set_usages)) ::ArrayW<::StringW>  usages;

/// @brief Field useStateFrom, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_useStateFrom, put=__cordl_internal_set_useStateFrom)) ::StringW  useStateFrom;

/// @brief Field variants, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_variants, put=__cordl_internal_set_variants)) ::StringW  variants;

/// @brief Method FromControlItems, addr 0xb005f34, size 0x750, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*> FromControlItems(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  items) ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson* New_ctor() ;

/// @brief Method ToLayout, addr 0xb00588c, size 0x6a8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlLayout_ControlItem ToLayout() ;

constexpr ::StringW const& __cordl_internal_get_alias() const;

constexpr ::StringW& __cordl_internal_get_alias() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_aliases() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_aliases() ;

constexpr int32_t const& __cordl_internal_get_arraySize() const;

constexpr int32_t& __cordl_internal_get_arraySize() ;

constexpr uint32_t const& __cordl_internal_get_bit() const;

constexpr uint32_t& __cordl_internal_get_bit() ;

constexpr ::StringW const& __cordl_internal_get_defaultState() const;

constexpr ::StringW& __cordl_internal_get_defaultState() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr bool const& __cordl_internal_get_dontReset() const;

constexpr bool& __cordl_internal_get_dontReset() ;

constexpr ::StringW const& __cordl_internal_get_format() const;

constexpr ::StringW& __cordl_internal_get_format() ;

constexpr ::StringW const& __cordl_internal_get_layout() const;

constexpr ::StringW& __cordl_internal_get_layout() ;

constexpr ::StringW const& __cordl_internal_get_maxValue() const;

constexpr ::StringW& __cordl_internal_get_maxValue() ;

constexpr ::StringW const& __cordl_internal_get_minValue() const;

constexpr ::StringW& __cordl_internal_get_minValue() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr bool const& __cordl_internal_get_noisy() const;

constexpr bool& __cordl_internal_get_noisy() ;

constexpr uint32_t const& __cordl_internal_get_offset() const;

constexpr uint32_t& __cordl_internal_get_offset() ;

constexpr ::StringW const& __cordl_internal_get_parameters() const;

constexpr ::StringW& __cordl_internal_get_parameters() ;

constexpr ::StringW const& __cordl_internal_get_processors() const;

constexpr ::StringW& __cordl_internal_get_processors() ;

constexpr ::StringW const& __cordl_internal_get_shortDisplayName() const;

constexpr ::StringW& __cordl_internal_get_shortDisplayName() ;

constexpr uint32_t const& __cordl_internal_get_sizeInBits() const;

constexpr uint32_t& __cordl_internal_get_sizeInBits() ;

constexpr bool const& __cordl_internal_get_synthetic() const;

constexpr bool& __cordl_internal_get_synthetic() ;

constexpr ::StringW const& __cordl_internal_get_usage() const;

constexpr ::StringW& __cordl_internal_get_usage() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_usages() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_usages() ;

constexpr ::StringW const& __cordl_internal_get_useStateFrom() const;

constexpr ::StringW& __cordl_internal_get_useStateFrom() ;

constexpr ::StringW const& __cordl_internal_get_variants() const;

constexpr ::StringW& __cordl_internal_get_variants() ;

constexpr void __cordl_internal_set_alias(::StringW  value) ;

constexpr void __cordl_internal_set_aliases(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_arraySize(int32_t  value) ;

constexpr void __cordl_internal_set_bit(uint32_t  value) ;

constexpr void __cordl_internal_set_defaultState(::StringW  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_dontReset(bool  value) ;

constexpr void __cordl_internal_set_format(::StringW  value) ;

constexpr void __cordl_internal_set_layout(::StringW  value) ;

constexpr void __cordl_internal_set_maxValue(::StringW  value) ;

constexpr void __cordl_internal_set_minValue(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_noisy(bool  value) ;

constexpr void __cordl_internal_set_offset(uint32_t  value) ;

constexpr void __cordl_internal_set_parameters(::StringW  value) ;

constexpr void __cordl_internal_set_processors(::StringW  value) ;

constexpr void __cordl_internal_set_shortDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_sizeInBits(uint32_t  value) ;

constexpr void __cordl_internal_set_synthetic(bool  value) ;

constexpr void __cordl_internal_set_usage(::StringW  value) ;

constexpr void __cordl_internal_set_usages(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_useStateFrom(::StringW  value) ;

constexpr void __cordl_internal_set_variants(::StringW  value) ;

/// @brief Method .ctor, addr 0xb006764, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_ControlItemJson() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_ControlItemJson", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlLayout_ControlItemJson(InputControlLayout_ControlItemJson && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_ControlItemJson", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlLayout_ControlItemJson(InputControlLayout_ControlItemJson const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13830};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field layout, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___layout;

/// @brief Field variants, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___variants;

/// @brief Field usage, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___usage;

/// @brief Field alias, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___alias;

/// @brief Field useStateFrom, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___useStateFrom;

/// @brief Field offset, offset: 0x40, size: 0x4, def value: None
 uint32_t  ___offset;

/// @brief Field bit, offset: 0x44, size: 0x4, def value: None
 uint32_t  ___bit;

/// @brief Field sizeInBits, offset: 0x48, size: 0x4, def value: None
 uint32_t  ___sizeInBits;

/// @brief Field format, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___format;

/// @brief Field arraySize, offset: 0x58, size: 0x4, def value: None
 int32_t  ___arraySize;

/// @brief Field usages, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___usages;

/// @brief Field aliases, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___aliases;

/// @brief Field parameters, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___parameters;

/// @brief Field processors, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___processors;

/// @brief Field displayName, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field shortDisplayName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___shortDisplayName;

/// @brief Field noisy, offset: 0x90, size: 0x1, def value: None
 bool  ___noisy;

/// @brief Field dontReset, offset: 0x91, size: 0x1, def value: None
 bool  ___dontReset;

/// @brief Field synthetic, offset: 0x92, size: 0x1, def value: None
 bool  ___synthetic;

/// @brief Field defaultState, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___defaultState;

/// @brief Field minValue, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___minValue;

/// @brief Field maxValue, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___maxValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___layout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___variants) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___usage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___alias) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___useStateFrom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___bit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___sizeInBits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___format) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___arraySize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___usages) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___aliases) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___parameters) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___processors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___displayName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___shortDisplayName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___noisy) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___dontReset) == 0x91, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___synthetic) == 0x92, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___defaultState) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___minValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson, ___maxValue) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItemJson/<>c
class CORDL_TYPE ControlItemJson_InputControlLayout___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  __9__24_0;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  __9__24_1;

/// @brief Field <>9__25_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_0, put=setStaticF___9__25_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  __9__25_0;

/// @brief Field <>9__25_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_1, put=setStaticF___9__25_1)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>*  __9__25_1;

/// @brief Field <>9__25_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_2, put=setStaticF___9__25_2)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  __9__25_2;

/// @brief Field <>9__25_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__25_3, put=setStaticF___9__25_3)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  __9__25_3;

static inline ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* New_ctor() ;

/// @brief Method <FromControlItems>b__25_0, addr 0xb006844, size 0xc, virtual false, abstract: false, final false
inline ::StringW _FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue  x) ;

/// @brief Method <FromControlItems>b__25_1, addr 0xb006850, size 0xc, virtual false, abstract: false, final false
inline ::StringW _FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters  x) ;

/// @brief Method <FromControlItems>b__25_2, addr 0xb00685c, size 0x24, virtual false, abstract: false, final false
inline ::StringW _FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

/// @brief Method <FromControlItems>b__25_3, addr 0xb006880, size 0x24, virtual false, abstract: false, final false
inline ::StringW _FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

/// @brief Method <ToLayout>b__24_0, addr 0xb0067f4, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_0(::StringW  x) ;

/// @brief Method <ToLayout>b__24_1, addr 0xb00681c, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_1(::StringW  x) ;

/// @brief Method .ctor, addr 0xb0067ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__24_0() ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__24_1() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>* getStaticF___9__25_0() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>* getStaticF___9__25_1() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__25_2() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__25_3() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c*  value) ;

static inline void setStaticF___9__24_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline void setStaticF___9__24_1(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline void setStaticF___9__25_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue,::StringW>*  value) ;

static inline void setStaticF___9__25_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>*  value) ;

static inline void setStaticF___9__25_2(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

static inline void setStaticF___9__25_3(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControlItemJson_InputControlLayout___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlItemJson_InputControlLayout___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlItemJson_InputControlLayout___c(ControlItemJson_InputControlLayout___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlItemJson_InputControlLayout___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlItemJson_InputControlLayout___c(ControlItemJson_InputControlLayout___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Layouts::ControlItemJson_InputControlLayout___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/LayoutJson/<>c
class CORDL_TYPE LayoutJson_InputControlLayout___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  __9__14_0;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  __9__15_0;

/// @brief Field <>9__15_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_1, put=setStaticF___9__15_1)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  __9__15_1;

static inline ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* New_ctor() ;

/// @brief Method <FromLayout>b__15_0, addr 0xb00671c, size 0x24, virtual false, abstract: false, final false
inline ::StringW _FromLayout_b__15_0(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

/// @brief Method <FromLayout>b__15_1, addr 0xb006740, size 0x24, virtual false, abstract: false, final false
inline ::StringW _FromLayout_b__15_1(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

/// @brief Method <ToLayout>b__14_0, addr 0xb0066f4, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__14_0(::StringW  x) ;

/// @brief Method .ctor, addr 0xb0066ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__14_0() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__15_0() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__15_1() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

static inline void setStaticF___9__15_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

static inline void setStaticF___9__15_1(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayoutJson_InputControlLayout___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayoutJson_InputControlLayout___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayoutJson_InputControlLayout___c(LayoutJson_InputControlLayout___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayoutJson_InputControlLayout___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayoutJson_InputControlLayout___c(LayoutJson_InputControlLayout___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Layouts::LayoutJson_InputControlLayout___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItem, UnityEngine.InputSystem.Utilities.FourCC
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
class CORDL_TYPE InputControlLayout_Builder : public ::System::Object {
public:
// Declarations
using ControlBuilder = ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder;

/// @brief Field <displayName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName_k__BackingField, put=__cordl_internal_set__displayName_k__BackingField)) ::StringW  _displayName_k__BackingField;

/// @brief Field <name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name_k__BackingField, put=__cordl_internal_set__name_k__BackingField)) ::StringW  _name_k__BackingField;

/// @brief Field <stateFormat>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__stateFormat_k__BackingField, put=__cordl_internal_set__stateFormat_k__BackingField)) ::UnityEngine::InputSystem::Utilities::FourCC  _stateFormat_k__BackingField;

/// @brief Field <stateSizeInBytes>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__stateSizeInBytes_k__BackingField, put=__cordl_internal_set__stateSizeInBytes_k__BackingField)) int32_t  _stateSizeInBytes_k__BackingField;

/// @brief Field <type>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__type_k__BackingField, put=__cordl_internal_set__type_k__BackingField)) ::System::Type*  _type_k__BackingField;

/// @brief Field <updateBeforeRender>k__BackingField, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__updateBeforeRender_k__BackingField, put=__cordl_internal_set__updateBeforeRender_k__BackingField)) ::System::Nullable_1<bool>  _updateBeforeRender_k__BackingField;

 __declspec(property(get=get_controls)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem>  controls;

 __declspec(property(get=get_displayName, put=set_displayName)) ::StringW  displayName;

 __declspec(property(get=get_extendsLayout, put=set_extendsLayout)) ::StringW  extendsLayout;

/// @brief Field m_ControlCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ControlCount, put=__cordl_internal_set_m_ControlCount)) int32_t  m_ControlCount;

/// @brief Field m_Controls, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controls, put=__cordl_internal_set_m_Controls)) ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  m_Controls;

/// @brief Field m_ExtendsLayout, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExtendsLayout, put=__cordl_internal_set_m_ExtendsLayout)) ::StringW  m_ExtendsLayout;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_stateFormat, put=set_stateFormat)) ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat;

 __declspec(property(get=get_stateSizeInBytes, put=set_stateSizeInBytes)) int32_t  stateSizeInBytes;

 __declspec(property(get=get_type, put=set_type)) ::System::Type*  type;

 __declspec(property(get=get_updateBeforeRender, put=set_updateBeforeRender)) ::System::Nullable_1<bool>  updateBeforeRender;

/// @brief Method AddControl, addr 0xb0049ac, size 0x164, virtual false, abstract: false, final false
inline ::GlobalNamespace::Builder_InputControlLayout_ControlBuilder AddControl(::StringW  name) ;

/// @brief Method Build, addr 0xb004bd0, size 0x230, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build() ;

/// @brief Method Extend, addr 0xb004b8c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* Extend(::StringW  baseLayoutName) ;

static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* New_ctor() ;

/// @brief Method WithDisplayName, addr 0xb004b2c, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithDisplayName(::StringW  displayName) ;

/// @brief Method WithFormat, addr 0xb004b50, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithFormat(::StringW  format) ;

/// @brief Method WithFormat, addr 0xb004b48, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithFormat(::UnityEngine::InputSystem::Utilities::FourCC  format) ;

/// @brief Method WithName, addr 0xb004b10, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithName(::StringW  name) ;

/// @brief Method WithSizeInBytes, addr 0xb004b84, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithSizeInBytes(int32_t  sizeInBytes) ;

/// @brief Method WithType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::InputSystem::InputControl*>)
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* WithType() ;

constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__name_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get__stateFormat_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get__stateFormat_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__stateSizeInBytes_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__stateSizeInBytes_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__type_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__type_k__BackingField() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__updateBeforeRender_k__BackingField() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__updateBeforeRender_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_ControlCount() const;

constexpr int32_t& __cordl_internal_get_m_ControlCount() ;

constexpr ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem> const& __cordl_internal_get_m_Controls() const;

constexpr ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>& __cordl_internal_get_m_Controls() ;

constexpr ::StringW const& __cordl_internal_get_m_ExtendsLayout() const;

constexpr ::StringW& __cordl_internal_get_m_ExtendsLayout() ;

constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__stateFormat_k__BackingField(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

constexpr void __cordl_internal_set__stateSizeInBytes_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__type_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__updateBeforeRender_k__BackingField(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_m_ControlCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_Controls(::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  value) ;

constexpr void __cordl_internal_set_m_ExtendsLayout(::StringW  value) ;

/// @brief Method .ctor, addr 0xb004e00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_controls, addr 0xb004944, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlLayout_ControlItem> get_controls() ;

/// [CompilerGenerated]
/// @brief Method get_displayName, addr 0xb0048b4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_displayName() ;

/// @brief Method get_extendsLayout, addr 0xb0048f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_extendsLayout() ;

/// [CompilerGenerated]
/// @brief Method get_name, addr 0xb0048a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// [CompilerGenerated]
/// @brief Method get_stateFormat, addr 0xb0048d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// [CompilerGenerated]
/// @brief Method get_stateSizeInBytes, addr 0xb0048e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_stateSizeInBytes() ;

/// [CompilerGenerated]
/// @brief Method get_type, addr 0xb0048c4, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_type() ;

/// [CompilerGenerated]
/// @brief Method get_updateBeforeRender, addr 0xb004934, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_updateBeforeRender() ;

/// [CompilerGenerated]
/// @brief Method set_displayName, addr 0xb0048bc, size 0x8, virtual false, abstract: false, final false
inline void set_displayName(::StringW  value) ;

/// @brief Method set_extendsLayout, addr 0xb0048fc, size 0x38, virtual false, abstract: false, final false
inline void set_extendsLayout(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_name, addr 0xb0048ac, size 0x8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_stateFormat, addr 0xb0048dc, size 0x8, virtual false, abstract: false, final false
inline void set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

/// [CompilerGenerated]
/// @brief Method set_stateSizeInBytes, addr 0xb0048ec, size 0x8, virtual false, abstract: false, final false
inline void set_stateSizeInBytes(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_type, addr 0xb0048cc, size 0x8, virtual false, abstract: false, final false
inline void set_type(::System::Type*  value) ;

/// [CompilerGenerated]
/// @brief Method set_updateBeforeRender, addr 0xb00493c, size 0x8, virtual false, abstract: false, final false
inline void set_updateBeforeRender(::System::Nullable_1<bool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlLayout_Builder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_Builder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlLayout_Builder(InputControlLayout_Builder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout_Builder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlLayout_Builder(InputControlLayout_Builder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13824};

/// [CompilerGenerated]
/// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <displayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____displayName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <type>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ____type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <stateFormat>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::InputSystem::Utilities::FourCC  ____stateFormat_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <stateSizeInBytes>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____stateSizeInBytes_k__BackingField;

/// @brief Field m_ExtendsLayout, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_ExtendsLayout;

/// [CompilerGenerated]
/// @brief Field <updateBeforeRender>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____updateBeforeRender_k__BackingField;

/// @brief Field m_ControlCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_ControlCount;

/// @brief Size padding 0x48 - 0x58 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field m_Controls, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputControlLayout_ControlItem>  ___m_Controls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____displayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____type_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____stateFormat_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____stateSizeInBytes_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ___m_ExtendsLayout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ____updateBeforeRender_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ___m_ControlCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder, ___m_Controls) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout/Builder/ControlBuilder/<>c
class CORDL_TYPE ControlBuilder_Builder_InputControlLayout___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  __9__14_0;

static inline ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* New_ctor() ;

/// @brief Method <WithUsages>b__14_0, addr 0xb005864, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::InternedString _WithUsages_b__14_0(::StringW  x) ;

/// @brief Method .ctor, addr 0xb00585c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::StringW,::UnityEngine::InputSystem::Utilities::InternedString>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControlBuilder_Builder_InputControlLayout___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlBuilder_Builder_InputControlLayout___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlBuilder_Builder_InputControlLayout___c(ControlBuilder_Builder_InputControlLayout___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlBuilder_Builder_InputControlLayout___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlBuilder_Builder_InputControlLayout___c(ControlBuilder_Builder_InputControlLayout___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Layouts::ControlBuilder_Builder_InputControlLayout___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
