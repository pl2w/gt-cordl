#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JContainer)
namespace GlobalNamespace {
struct JContainer__ReadContentFromAsync_d__1;
}
namespace GlobalNamespace {
struct JContainer__ReadTokenFromAsync_d__0;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventArgs;
}
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventHandler;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class AddingNewEventArgs;
}
namespace System::ComponentModel {
class AddingNewEventHandler;
}
namespace System::ComponentModel {
class IBindingList;
}
namespace System::ComponentModel {
class ITypedList;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
class ListChangedEventHandler;
}
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JContainer;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Linq::JContainer*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JContainer*, "Newtonsoft.Json.Linq", "JContainer");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.Linq.JToken
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JContainer
class CORDL_TYPE JContainer : public ::Newtonsoft::Json::Linq::JToken {
public:
// Declarations
using _ReadContentFromAsync_d__1 = ::GlobalNamespace::JContainer__ReadContentFromAsync_d__1;

using _ReadTokenFromAsync_d__0 = ::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0;

 __declspec(property(get=get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*  ChildrenTokens;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief [Nullable(2)]
 __declspec(property(get=get_First)) ::Newtonsoft::Json::Linq::JToken*  First;

 __declspec(property(get=get_HasValues)) bool  HasValues;

/// @brief [Nullable(2)]
 __declspec(property(get=get_Last)) ::Newtonsoft::Json::Linq::JToken*  Last;

 __declspec(property(get=System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__IsReadOnly;

 __declspec(property(get=System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item, put=System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item)) ::Newtonsoft::Json::Linq::JToken*  System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Item[];

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

/// @brief [Nullable(2)]
 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

 __declspec(property(get=System_ComponentModel_IBindingList_get_AllowEdit)) bool  System_ComponentModel_IBindingList_AllowEdit;

 __declspec(property(get=System_ComponentModel_IBindingList_get_AllowNew)) bool  System_ComponentModel_IBindingList_AllowNew;

 __declspec(property(get=System_ComponentModel_IBindingList_get_AllowRemove)) bool  System_ComponentModel_IBindingList_AllowRemove;

 __declspec(property(get=System_ComponentModel_IBindingList_get_IsSorted)) bool  System_ComponentModel_IBindingList_IsSorted;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SortDirection)) ::System::ComponentModel::ListSortDirection  System_ComponentModel_IBindingList_SortDirection;

/// @brief [Nullable(2)]
 __declspec(property(get=System_ComponentModel_IBindingList_get_SortProperty)) ::System::ComponentModel::PropertyDescriptor*  System_ComponentModel_IBindingList_SortProperty;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsChangeNotification)) bool  System_ComponentModel_IBindingList_SupportsChangeNotification;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsSearching)) bool  System_ComponentModel_IBindingList_SupportsSearching;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsSorting)) bool  System_ComponentModel_IBindingList_SupportsSorting;

/// @brief Field _addingNew, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__addingNew, put=__cordl_internal_set__addingNew)) ::System::ComponentModel::AddingNewEventHandler*  _addingNew;

/// @brief Field _busy, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__busy, put=__cordl_internal_set__busy)) bool  _busy;

/// @brief Field _collectionChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__collectionChanged, put=__cordl_internal_set__collectionChanged)) ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*  _collectionChanged;

/// @brief Field _listChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__listChanged, put=__cordl_internal_set__listChanged)) ::System::ComponentModel::ListChangedEventHandler*  _listChanged;

/// @brief Field _syncRoot, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncRoot, put=__cordl_internal_set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Convert operator to "::System::ComponentModel::IBindingList"
constexpr operator  ::System::ComponentModel::IBindingList*() noexcept;

/// @brief Convert operator to "::System::ComponentModel::ITypedList"
constexpr operator  ::System::ComponentModel::ITypedList*() noexcept;

/// [NullableContext(2)]
/// @brief Method Add, addr 0xa3d3b5c, size 0xd0, virtual true, abstract: false, final false
inline void Add(::System::Object*  content) ;

/// @brief Method AddAndSkipParentCheck, addr 0xa3d3cfc, size 0xd0, virtual false, abstract: false, final false
inline void AddAndSkipParentCheck(::Newtonsoft::Json::Linq::JToken*  token) ;

/// @brief Method CheckReentrancy, addr 0xa3d19e8, size 0xa0, virtual false, abstract: false, final false
inline void CheckReentrancy() ;

/// @brief Method Children, addr 0xa3d1ef8, size 0x74, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children() ;

/// @brief Method ClearItems, addr 0xa3d30f4, size 0x410, virtual true, abstract: false, final false
inline void ClearItems() ;

/// [NullableContext(2)]
/// @brief Method ContainsItem, addr 0xa3d3568, size 0x24, virtual true, abstract: false, final false
inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method CopyItemsTo, addr 0xa3d358c, size 0x400, virtual true, abstract: false, final false
inline void CopyItemsTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method CreateFromContent, addr 0xa3d3dcc, size 0xa4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JToken* CreateFromContent(/* [Nullable(2)] */ ::System::Object*  content) ;

/// @brief Method EnsureParentToken, addr 0xa3d2044, size 0xfc, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* EnsureParentToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations) ;

/// [NullableContext(2)]
/// @brief Method EnsureValue, addr 0xa3d499c, size 0xbc, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* EnsureValue(::System::Object*  value) ;

/// @brief Method GetItem, addr 0xa3d2a70, size 0xbc, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t  index) ;

/// [NullableContext(2)]
/// @brief Method IndexOfItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// [NullableContext(2)]
/// @brief Method InsertItem, addr 0xa3d2158, size 0x434, virtual true, abstract: false, final false
inline bool InsertItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations) ;

/// [NullableContext(2)]
/// @brief Method IsMultiContent, addr 0xa3d1f6c, size 0xd8, virtual false, abstract: false, final false
inline bool IsMultiContent(/* [NotNullWhen(true)] */ ::System::Object*  content) ;

/// @brief Method IsTokenUnchanged, addr 0xa3d3044, size 0xb0, virtual false, abstract: false, final false
static inline bool IsTokenUnchanged(::Newtonsoft::Json::Linq::JToken*  currentValue, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  newValue) ;

static inline ::Newtonsoft::Json::Linq::JContainer* New_ctor() ;

static inline ::Newtonsoft::Json::Linq::JContainer* New_ctor(::Newtonsoft::Json::Linq::JContainer*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method OnAddingNew, addr 0xa3d1a88, size 0x28, virtual true, abstract: false, final false
inline void OnAddingNew(::System::ComponentModel::AddingNewEventArgs*  e) ;

/// @brief Method OnCollectionChanged, addr 0xa3d1b38, size 0x88, virtual true, abstract: false, final false
inline void OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventArgs*  e) ;

/// @brief Method OnListChanged, addr 0xa3d1ab0, size 0x88, virtual true, abstract: false, final false
inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs*  e) ;

/// @brief Method ReadContentFrom, addr 0xa3d3e80, size 0x400, virtual false, abstract: false, final false
inline void ReadContentFrom(::Newtonsoft::Json::JsonReader*  r, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.Linq.JContainer::<ReadContentFromAsync>d__1))]
/// @brief Method ReadContentFromAsync, addr 0xa3d1398, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReadContentFromAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken) ;

/// [NullableContext(2)]
/// @brief Method ReadProperty, addr 0xa3d42fc, size 0x1d4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JProperty* ReadProperty(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  r, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::Newtonsoft::Json::IJsonLineInfo*  lineInfo, /* [Nullable(1)] */ ::Newtonsoft::Json::Linq::JContainer*  parent) ;

/// @brief Method ReadTokenFrom, addr 0xa3cf554, size 0x15c, virtual false, abstract: false, final false
inline void ReadTokenFrom(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  options) ;

/// [AsyncStateMachine(typeof(Newtonsoft.Json.Linq.JContainer::<ReadTokenFromAsync>d__0))]
/// @brief Method ReadTokenFromAsync, addr 0xa3d01c0, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReadTokenFromAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  options, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method RemoveAll, addr 0xa3d3e70, size 0x10, virtual false, abstract: false, final false
inline void RemoveAll() ;

/// [NullableContext(2)]
/// @brief Method RemoveItem, addr 0xa3d2a1c, size 0x54, virtual true, abstract: false, final false
inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method RemoveItemAt, addr 0xa3d258c, size 0x490, virtual true, abstract: false, final false
inline void RemoveItemAt(int32_t  index) ;

/// @brief Method ReplaceItem, addr 0xa3d3504, size 0x64, virtual true, abstract: false, final false
inline void ReplaceItem(::Newtonsoft::Json::Linq::JToken*  existing, ::Newtonsoft::Json::Linq::JToken*  replacement) ;

/// [NullableContext(2)]
/// @brief Method SetItem, addr 0xa3d2b2c, size 0x518, virtual true, abstract: false, final false
inline void SetItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add, addr 0xa3d4944, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear, addr 0xa3d4954, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains, addr 0xa3d4964, size 0x10, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo, addr 0xa3d4974, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*>  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove, addr 0xa3d498c, size 0x10, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly, addr 0xa3d4984, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf, addr 0xa3d48ec, size 0x10, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert, addr 0xa3d48fc, size 0x18, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt, addr 0xa3d4914, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item, addr 0xa3d4924, size 0x10, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item(int32_t  index) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item, addr 0xa3d4934, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0xa3d4c00, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0xa3d4c10, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0xa3d4c18, size 0x74, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// [NullableContext(2)]
/// @brief Method System.Collections.IList.Add, addr 0xa3d4a58, size 0x44, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Clear, addr 0xa3d4a9c, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IList_Clear() ;

/// [NullableContext(2)]
/// @brief Method System.Collections.IList.Contains, addr 0xa3d4aac, size 0x34, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// [NullableContext(2)]
/// @brief Method System.Collections.IList.IndexOf, addr 0xa3d4ae0, size 0x34, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// [NullableContext(2)]
/// @brief Method System.Collections.IList.Insert, addr 0xa3d4b14, size 0x48, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// [NullableContext(2)]
/// @brief Method System.Collections.IList.Remove, addr 0xa3d4b6c, size 0x34, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.RemoveAt, addr 0xa3d4ba0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IList_RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0xa3d4b5c, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0xa3d4b64, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// [NullableContext(2)]
/// @brief Method System.Collections.IList.get_Item, addr 0xa3d4bb0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// [NullableContext(2)]
/// @brief Method System.Collections.IList.set_Item, addr 0xa3d4bc0, size 0x40, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.ComponentModel.IBindingList.AddIndex, addr 0xa3d4c8c, size 0x4, virtual true, abstract: false, final true
inline void System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor*  property) ;

/// @brief Method System.ComponentModel.IBindingList.AddNew, addr 0xa3d4c90, size 0x1c4, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_IBindingList_AddNew() ;

/// @brief Method System.ComponentModel.IBindingList.ApplySort, addr 0xa3d4e6c, size 0x38, virtual true, abstract: false, final true
inline void System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor*  property, ::System::ComponentModel::ListSortDirection  direction) ;

/// @brief Method System.ComponentModel.IBindingList.Find, addr 0xa3d4ea4, size 0x38, virtual true, abstract: false, final true
inline int32_t System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor*  property, ::System::Object*  key) ;

/// @brief Method System.ComponentModel.IBindingList.RemoveIndex, addr 0xa3d4ee4, size 0x4, virtual true, abstract: false, final true
inline void System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor*  property) ;

/// @brief Method System.ComponentModel.IBindingList.RemoveSort, addr 0xa3d4ee8, size 0x38, virtual true, abstract: false, final true
inline void System_ComponentModel_IBindingList_RemoveSort() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowEdit, addr 0xa3d4e54, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_AllowEdit() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowNew, addr 0xa3d4e5c, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_AllowNew() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowRemove, addr 0xa3d4e64, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_AllowRemove() ;

/// @brief Method System.ComponentModel.IBindingList.get_IsSorted, addr 0xa3d4edc, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_IsSorted() ;

/// @brief Method System.ComponentModel.IBindingList.get_SortDirection, addr 0xa3d4f20, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection() ;

/// [NullableContext(2)]
/// @brief Method System.ComponentModel.IBindingList.get_SortProperty, addr 0xa3d4f28, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_get_SortProperty() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsChangeNotification, addr 0xa3d4f30, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_SupportsChangeNotification() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsSearching, addr 0xa3d4f38, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_SupportsSearching() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsSorting, addr 0xa3d4f40, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_SupportsSorting() ;

/// @brief Method System.ComponentModel.ITypedList.GetItemProperties, addr 0xa3d4788, size 0x164, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*>  listAccessors) ;

/// @brief Method System.ComponentModel.ITypedList.GetListName, addr 0xa3d4770, size 0x18, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ITypedList_GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*>  listAccessors) ;

/// [NullableContext(2)]
/// @brief Method TryAdd, addr 0xa3d3c2c, size 0xd0, virtual false, abstract: false, final false
inline bool TryAdd(::System::Object*  content) ;

/// [NullableContext(2)]
/// @brief Method TryAddInternal, addr 0xa3d1680, size 0x368, virtual false, abstract: false, final false
inline bool TryAddInternal(int32_t  index, ::System::Object*  content, bool  skipParentCheck, bool  copyAnnotations) ;

/// @brief Method ValidateToken, addr 0xa3d3a40, size 0x11c, virtual true, abstract: false, final false
inline void ValidateToken(::Newtonsoft::Json::Linq::JToken*  o, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  existing) ;

constexpr ::System::ComponentModel::AddingNewEventHandler* const& __cordl_internal_get__addingNew() const;

constexpr ::System::ComponentModel::AddingNewEventHandler*& __cordl_internal_get__addingNew() ;

constexpr bool const& __cordl_internal_get__busy() const;

constexpr bool& __cordl_internal_get__busy() ;

constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler* const& __cordl_internal_get__collectionChanged() const;

constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*& __cordl_internal_get__collectionChanged() ;

constexpr ::System::ComponentModel::ListChangedEventHandler* const& __cordl_internal_get__listChanged() const;

constexpr ::System::ComponentModel::ListChangedEventHandler*& __cordl_internal_get__listChanged() ;

constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

constexpr ::System::Object*& __cordl_internal_get__syncRoot() ;

constexpr void __cordl_internal_set__addingNew(::System::ComponentModel::AddingNewEventHandler*  value) ;

constexpr void __cordl_internal_set__busy(bool  value) ;

constexpr void __cordl_internal_set__collectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__listChanged(::System::ComponentModel::ListChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__syncRoot(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa3cece0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa3cedd4, size 0x338, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JContainer*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method add_ListChanged, addr 0xa3d14c4, size 0x90, virtual true, abstract: false, final true
inline void add_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value) ;

/// @brief Method get_ChildrenTokens, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens() ;

/// @brief Method get_Count, addr 0xa3d398c, size 0xb4, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// [NullableContext(2)]
/// @brief Method get_First, addr 0xa3d1c80, size 0x13c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_First() ;

/// @brief Method get_HasValues, addr 0xa3d1bc0, size 0xc0, virtual true, abstract: false, final false
inline bool get_HasValues() ;

/// [NullableContext(2)]
/// @brief Method get_Last, addr 0xa3d1dbc, size 0x13c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Last() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

/// @brief Convert to "::System::ComponentModel::IBindingList"
constexpr ::System::ComponentModel::IBindingList* i___System__ComponentModel__IBindingList() noexcept;

/// @brief Convert to "::System::ComponentModel::ITypedList"
constexpr ::System::ComponentModel::ITypedList* i___System__ComponentModel__ITypedList() noexcept;

/// @brief Method remove_ListChanged, addr 0xa3d1554, size 0x90, virtual true, abstract: false, final true
inline void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JContainer(JContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JContainer(JContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23323};

/// [Nullable(2)]
/// @brief Field _listChanged, offset: 0x30, size: 0x8, def value: None
 ::System::ComponentModel::ListChangedEventHandler*  ____listChanged;

/// [Nullable(2)]
/// @brief Field _addingNew, offset: 0x38, size: 0x8, def value: None
 ::System::ComponentModel::AddingNewEventHandler*  ____addingNew;

/// [Nullable(2)]
/// @brief Field _collectionChanged, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*  ____collectionChanged;

/// [Nullable(2)]
/// @brief Field _syncRoot, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ____syncRoot;

/// @brief Field _busy, offset: 0x50, size: 0x1, def value: None
 bool  ____busy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____listChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____addingNew) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____collectionChanged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____syncRoot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____busy) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Linq::JContainer) == 0x58, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
