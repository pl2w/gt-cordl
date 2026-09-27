#pragma once
// IWYU pragma private; include "System/Data/DataViewManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataViewManager)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class CollectionChangeEventArgs;
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
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManagerListItemTypeDescriptor;
}
namespace System::Data {
class DataViewSettingCollection;
}
namespace System::Data {
class DataView;
}
namespace System {
class Array;
}
namespace System {
class NotSupportedException;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataViewManager;
}
// Write type traits
MARK_REF_T(::System::Data::DataViewManager*);
DEFINE_IL2CPP_CLASS(::System::Data::DataViewManager*, "System.Data", "DataViewManager");
// Dependencies System.ComponentModel.MarshalByValueComponent
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataViewManager
class CORDL_TYPE DataViewManager : public ::System::ComponentModel::MarshalByValueComponent {
public:
// Declarations
/// @brief [DefaultValue(null)]
 __declspec(property(get=get_DataSet)) ::System::Data::DataSet*  DataSet;

/// @brief [DesignerSerializationVisibility((System.ComponentModel.DesignerSerializationVisibility)2)]
 __declspec(property(get=get_DataViewSettings)) ::System::Data::DataViewSettingCollection*  DataViewSettings;

/// @brief Field ListChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ListChanged, put=__cordl_internal_set_ListChanged)) ::System::ComponentModel::ListChangedEventHandler*  ListChanged;

 __declspec(property(get=System_Collections_ICollection_get_Count)) int32_t  System_Collections_ICollection_Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

 __declspec(property(get=System_ComponentModel_IBindingList_get_AllowEdit)) bool  System_ComponentModel_IBindingList_AllowEdit;

 __declspec(property(get=System_ComponentModel_IBindingList_get_AllowNew)) bool  System_ComponentModel_IBindingList_AllowNew;

 __declspec(property(get=System_ComponentModel_IBindingList_get_AllowRemove)) bool  System_ComponentModel_IBindingList_AllowRemove;

 __declspec(property(get=System_ComponentModel_IBindingList_get_IsSorted)) bool  System_ComponentModel_IBindingList_IsSorted;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SortDirection)) ::System::ComponentModel::ListSortDirection  System_ComponentModel_IBindingList_SortDirection;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SortProperty)) ::System::ComponentModel::PropertyDescriptor*  System_ComponentModel_IBindingList_SortProperty;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsChangeNotification)) bool  System_ComponentModel_IBindingList_SupportsChangeNotification;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsSearching)) bool  System_ComponentModel_IBindingList_SupportsSearching;

 __declspec(property(get=System_ComponentModel_IBindingList_get_SupportsSorting)) bool  System_ComponentModel_IBindingList_SupportsSorting;

/// @brief Field _dataSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataSet, put=__cordl_internal_set__dataSet)) ::System::Data::DataSet*  _dataSet;

/// @brief Field _dataViewSettingsCollection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataViewSettingsCollection, put=__cordl_internal_set__dataViewSettingsCollection)) ::System::Data::DataViewSettingCollection*  _dataViewSettingsCollection;

/// @brief Field _item, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__item, put=__cordl_internal_set__item)) ::System::Data::DataViewManagerListItemTypeDescriptor*  _item;

/// @brief Field _locked, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__locked, put=__cordl_internal_set__locked)) bool  _locked;

/// @brief Field _nViews, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__nViews, put=__cordl_internal_set__nViews)) int32_t  _nViews;

/// @brief Field s_notSupported, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_notSupported, put=setStaticF_s_notSupported)) ::System::NotSupportedException*  s_notSupported;

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

/// @brief Method CreateDataView, addr 0xa935894, size 0x9c, virtual false, abstract: false, final false
inline ::System::Data::DataView* CreateDataView(::System::Data::DataTable*  table) ;

static inline ::System::Data::DataViewManager* New_ctor(::System::Data::DataSet*  dataSet, bool  locked) ;

/// @brief Method OnListChanged, addr 0xa935930, size 0x12c, virtual true, abstract: false, final false
inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs*  e) ;

/// @brief Method RelationCollectionChanged, addr 0xa935c64, size 0x210, virtual true, abstract: false, final false
inline void RelationCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0xa9351d0, size 0x8c, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_Count, addr 0xa9351ac, size 0x8, virtual true, abstract: false, final true
inline int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0xa9351b8, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0xa9351b4, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa9350d0, size 0xdc, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IList.Add, addr 0xa93528c, size 0x28, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Clear, addr 0xa9352b4, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Contains, addr 0xa9352dc, size 0x10, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf, addr 0xa9352ec, size 0x14, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert, addr 0xa935300, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0xa935328, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.RemoveAt, addr 0xa935350, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0xa9351c8, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0xa9351c0, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_Item, addr 0xa93525c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0xa935264, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.ComponentModel.IBindingList.AddIndex, addr 0xa9355e0, size 0x4, virtual true, abstract: false, final true
inline void System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor*  property) ;

/// @brief Method System.ComponentModel.IBindingList.AddNew, addr 0xa935380, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_ComponentModel_IBindingList_AddNew() ;

/// @brief Method System.ComponentModel.IBindingList.ApplySort, addr 0xa9355e4, size 0x40, virtual true, abstract: false, final true
inline void System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor*  property, ::System::ComponentModel::ListSortDirection  direction) ;

/// @brief Method System.ComponentModel.IBindingList.Find, addr 0xa935624, size 0x40, virtual true, abstract: false, final true
inline int32_t System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor*  property, ::System::Object*  key) ;

/// @brief Method System.ComponentModel.IBindingList.RemoveIndex, addr 0xa935664, size 0x4, virtual true, abstract: false, final true
inline void System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor*  property) ;

/// @brief Method System.ComponentModel.IBindingList.RemoveSort, addr 0xa935668, size 0x40, virtual true, abstract: false, final true
inline void System_ComponentModel_IBindingList_RemoveSort() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowEdit, addr 0xa9353c0, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_AllowEdit() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowNew, addr 0xa935378, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_AllowNew() ;

/// @brief Method System.ComponentModel.IBindingList.get_AllowRemove, addr 0xa9353c8, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_AllowRemove() ;

/// @brief Method System.ComponentModel.IBindingList.get_IsSorted, addr 0xa9353e8, size 0x40, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_IsSorted() ;

/// @brief Method System.ComponentModel.IBindingList.get_SortDirection, addr 0xa935468, size 0x40, virtual true, abstract: false, final true
inline ::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection() ;

/// @brief Method System.ComponentModel.IBindingList.get_SortProperty, addr 0xa935428, size 0x40, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_get_SortProperty() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsChangeNotification, addr 0xa9353d0, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_SupportsChangeNotification() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsSearching, addr 0xa9353d8, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_SupportsSearching() ;

/// @brief Method System.ComponentModel.IBindingList.get_SupportsSorting, addr 0xa9353e0, size 0x8, virtual true, abstract: false, final true
inline bool System_ComponentModel_IBindingList_get_SupportsSorting() ;

/// @brief Method System.ComponentModel.ITypedList.GetItemProperties, addr 0xa935724, size 0x170, virtual true, abstract: false, final true
inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*>  listAccessors) ;

/// @brief Method System.ComponentModel.ITypedList.GetListName, addr 0xa9356a8, size 0x7c, virtual true, abstract: false, final true
inline ::StringW System_ComponentModel_ITypedList_GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*>  listAccessors) ;

/// @brief Method TableCollectionChanged, addr 0xa935a5c, size 0x208, virtual true, abstract: false, final false
inline void TableCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e) ;

constexpr ::System::ComponentModel::ListChangedEventHandler* const& __cordl_internal_get_ListChanged() const;

constexpr ::System::ComponentModel::ListChangedEventHandler*& __cordl_internal_get_ListChanged() ;

constexpr ::System::Data::DataSet* const& __cordl_internal_get__dataSet() const;

constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet() ;

constexpr ::System::Data::DataViewSettingCollection* const& __cordl_internal_get__dataViewSettingsCollection() const;

constexpr ::System::Data::DataViewSettingCollection*& __cordl_internal_get__dataViewSettingsCollection() ;

constexpr ::System::Data::DataViewManagerListItemTypeDescriptor* const& __cordl_internal_get__item() const;

constexpr ::System::Data::DataViewManagerListItemTypeDescriptor*& __cordl_internal_get__item() ;

constexpr bool const& __cordl_internal_get__locked() const;

constexpr bool& __cordl_internal_get__locked() ;

constexpr int32_t const& __cordl_internal_get__nViews() const;

constexpr int32_t& __cordl_internal_get__nViews() ;

constexpr void __cordl_internal_set_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet*  value) ;

constexpr void __cordl_internal_set__dataViewSettingsCollection(::System::Data::DataViewSettingCollection*  value) ;

constexpr void __cordl_internal_set__item(::System::Data::DataViewManagerListItemTypeDescriptor*  value) ;

constexpr void __cordl_internal_set__locked(bool  value) ;

constexpr void __cordl_internal_set__nViews(int32_t  value) ;

/// @brief Method .ctor, addr 0xa934e00, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataSet*  dataSet, bool  locked) ;

/// [CompilerGenerated]
/// @brief Method add_ListChanged, addr 0xa9354a8, size 0x9c, virtual true, abstract: false, final true
inline void add_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value) ;

static inline ::System::NotSupportedException* getStaticF_s_notSupported() ;

/// @brief Method get_DataSet, addr 0xa9350c0, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataSet* get_DataSet() ;

/// @brief Method get_DataViewSettings, addr 0xa9350c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataViewSettingCollection* get_DataViewSettings() ;

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

/// [CompilerGenerated]
/// @brief Method remove_ListChanged, addr 0xa935544, size 0x9c, virtual true, abstract: false, final true
inline void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value) ;

static inline void setStaticF_s_notSupported(::System::NotSupportedException*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataViewManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataViewManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataViewManager(DataViewManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataViewManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataViewManager(DataViewManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21000};

/// @brief Field _dataViewSettingsCollection, offset: 0x20, size: 0x8, def value: None
 ::System::Data::DataViewSettingCollection*  ____dataViewSettingsCollection;

/// @brief Field _dataSet, offset: 0x28, size: 0x8, def value: None
 ::System::Data::DataSet*  ____dataSet;

/// @brief Field _item, offset: 0x30, size: 0x8, def value: None
 ::System::Data::DataViewManagerListItemTypeDescriptor*  ____item;

/// @brief Field _locked, offset: 0x38, size: 0x1, def value: None
 bool  ____locked;

/// @brief Field _nViews, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____nViews;

/// [CompilerGenerated]
/// @brief Field ListChanged, offset: 0x40, size: 0x8, def value: None
 ::System::ComponentModel::ListChangedEventHandler*  ___ListChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataViewManager, ____dataViewSettingsCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____dataSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____item) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____locked) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____nViews) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ___ListChanged) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Data::DataViewManager) == 0x48, "Size mismatch!");

} // namespace end def System::Data
