#pragma once
// IWYU pragma private; include "System/Data/DataViewManager.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_impl.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__IBindingList_def.hpp"
#include "System/ComponentModel/zzzz__ITypedList_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ListSortDirection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewManagerListItemTypeDescriptor_def.hpp"
#include "System/Data/zzzz__DataViewSettingCollection_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__NotSupportedException_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::Data::DataSet*, bool)>(&::System::Data::DataViewManager::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa934e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.get_DataSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataSet* (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::get_DataSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9350c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"get_DataSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.get_DataViewSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataViewSettingCollection* (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::get_DataViewSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9350c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"get_DataViewSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa9350d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_ICollection_get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9351ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.ICollection.get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa9351b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9351b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9351c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9351c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_ICollection_CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::Array*, int32_t)>(&::System::Data::DataViewManager::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa9351d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataViewManager::*)(int32_t)>(&::System::Data::DataViewManager::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa93525c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(int32_t, ::System::Object*)>(&::System::Data::DataViewManager::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa935264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataViewManager::*)(::System::Object*)>(&::System::Data::DataViewManager::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa93528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa9352b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)(::System::Object*)>(&::System::Data::DataViewManager::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa9352dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataViewManager::*)(::System::Object*)>(&::System::Data::DataViewManager::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa9352ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(int32_t, ::System::Object*)>(&::System::Data::DataViewManager::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa935300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::Object*)>(&::System::Data::DataViewManager::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa935328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_Collections_IList_RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(int32_t)>(&::System::Data::DataViewManager::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa935350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_AllowNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_AllowNew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa935378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_AllowNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_AddNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_AddNew)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa935380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.AddNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_AllowEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_AllowEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9353c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_AllowEdit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_AllowRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_AllowRemove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9353c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_AllowRemove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_SupportsChangeNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SupportsChangeNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9353d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsChangeNotification", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_SupportsSearching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SupportsSearching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9353d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsSearching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_SupportsSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SupportsSorting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9353e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsSorting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_IsSorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_IsSorted)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa9353e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_IsSorted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_SortProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SortProperty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa935428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SortProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_get_SortDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ListSortDirection (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SortDirection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa935468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SortDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.add_ListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::ComponentModel::ListChangedEventHandler*)>(&::System::Data::DataViewManager::add_ListChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa9354a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"add_ListChanged", {}, {::i2c::type_of<::System::ComponentModel::ListChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.remove_ListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::ComponentModel::ListChangedEventHandler*)>(&::System::Data::DataViewManager::remove_ListChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa935544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"remove_ListChanged", {}, {::i2c::type_of<::System::ComponentModel::ListChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_AddIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::ComponentModel::PropertyDescriptor*)>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_AddIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa9355e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.AddIndex", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_ApplySort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection)>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_ApplySort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa9355e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.ApplySort", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataViewManager::*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*)>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_Find)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa935624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.Find", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_RemoveIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::ComponentModel::PropertyDescriptor*)>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_RemoveIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa935664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.RemoveIndex", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_IBindingList_RemoveSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)()>(&::System::Data::DataViewManager::System_ComponentModel_IBindingList_RemoveSort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa935668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.RemoveSort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_ITypedList_GetListName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataViewManager::*)(::ArrayW<::System::ComponentModel::PropertyDescriptor*>)>(&::System::Data::DataViewManager::System_ComponentModel_ITypedList_GetListName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa9356a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.ITypedList.GetListName", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.System_ComponentModel_ITypedList_GetItemProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::Data::DataViewManager::*)(::ArrayW<::System::ComponentModel::PropertyDescriptor*>)>(&::System::Data::DataViewManager::System_ComponentModel_ITypedList_GetItemProperties)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa935724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.ITypedList.GetItemProperties", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.CreateDataView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataView* (::System::Data::DataViewManager::*)(::System::Data::DataTable*)>(&::System::Data::DataViewManager::CreateDataView)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa935894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"CreateDataView", {}, {::i2c::type_of<::System::Data::DataTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.OnListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::ComponentModel::ListChangedEventArgs*)>(&::System::Data::DataViewManager::OnListChanged)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa935930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataViewManager*>(),
                    {::i2c::class_of<::System::Data::DataViewManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.TableCollectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&::System::Data::DataViewManager::TableCollectionChanged)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa935a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataViewManager*>(),
                    {::i2c::class_of<::System::Data::DataViewManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManager.RelationCollectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManager::*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*)>(&::System::Data::DataViewManager::RelationCollectionChanged)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa935c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataViewManager*>(),
                    {::i2c::class_of<::System::Data::DataViewManager*>(), 53}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewSettingCollection*& System::Data::DataViewManager::__cordl_internal_get__dataViewSettingsCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewSettingsCollection;
}
constexpr ::System::Data::DataViewSettingCollection* const& System::Data::DataViewManager::__cordl_internal_get__dataViewSettingsCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewSettingsCollection;
}
constexpr void System::Data::DataViewManager::__cordl_internal_set__dataViewSettingsCollection(::System::Data::DataViewSettingCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataViewSettingsCollection = value;
}
constexpr ::System::Data::DataSet*& System::Data::DataViewManager::__cordl_internal_get__dataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& System::Data::DataViewManager::__cordl_internal_get__dataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSet;
}
constexpr void System::Data::DataViewManager::__cordl_internal_set__dataSet(::System::Data::DataSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataSet = value;
}
constexpr ::System::Data::DataViewManagerListItemTypeDescriptor*& System::Data::DataViewManager::__cordl_internal_get__item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____item;
}
constexpr ::System::Data::DataViewManagerListItemTypeDescriptor* const& System::Data::DataViewManager::__cordl_internal_get__item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____item;
}
constexpr void System::Data::DataViewManager::__cordl_internal_set__item(::System::Data::DataViewManagerListItemTypeDescriptor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____item = value;
}
constexpr bool& System::Data::DataViewManager::__cordl_internal_get__locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locked;
}
constexpr bool const& System::Data::DataViewManager::__cordl_internal_get__locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locked;
}
constexpr void System::Data::DataViewManager::__cordl_internal_set__locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locked = value;
}
constexpr int32_t& System::Data::DataViewManager::__cordl_internal_get__nViews()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nViews;
}
constexpr int32_t const& System::Data::DataViewManager::__cordl_internal_get__nViews() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nViews;
}
constexpr void System::Data::DataViewManager::__cordl_internal_set__nViews(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nViews = value;
}
constexpr ::System::ComponentModel::ListChangedEventHandler*& System::Data::DataViewManager::__cordl_internal_get_ListChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ListChanged;
}
constexpr ::System::ComponentModel::ListChangedEventHandler* const& System::Data::DataViewManager::__cordl_internal_get_ListChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ListChanged;
}
constexpr void System::Data::DataViewManager::__cordl_internal_set_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ListChanged = value;
}
inline void System::Data::DataViewManager::setStaticF_s_notSupported(::System::NotSupportedException*  value)  {
::cordl_internals::setStaticField<::System::NotSupportedException*, "s_notSupported", ::System::Data::DataViewManager*>(std::forward<::System::NotSupportedException*>(value));
}
inline ::System::NotSupportedException* System::Data::DataViewManager::getStaticF_s_notSupported()  {
return ::cordl_internals::getStaticField<::System::NotSupportedException*, "s_notSupported", ::System::Data::DataViewManager*>();
}
inline void System::Data::DataViewManager::_ctor(::System::Data::DataSet*  dataSet, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet, locked);
}
inline ::System::Data::DataSet* System::Data::DataViewManager::get_DataSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"get_DataSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*>(this, ___internal_method);
}
inline ::System::Data::DataViewSettingCollection* System::Data::DataViewManager::get_DataViewSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"get_DataViewSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewSettingCollection*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Data::DataViewManager::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t System::Data::DataViewManager::System_Collections_ICollection_get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.ICollection.get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataViewManager::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_Collections_IList_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataViewManager::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Object* System::Data::DataViewManager::System_Collections_IList_get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Data::DataViewManager::System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline int32_t System::Data::DataViewManager::System_Collections_IList_Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Data::DataViewManager::System_Collections_IList_Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_Collections_IList_Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Data::DataViewManager::System_Collections_IList_IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::Data::DataViewManager::System_Collections_IList_Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Data::DataViewManager::System_Collections_IList_Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataViewManager::System_Collections_IList_RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.Collections.IList.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline bool System::Data::DataViewManager::System_ComponentModel_IBindingList_get_AllowNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_AllowNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataViewManager::System_ComponentModel_IBindingList_AddNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.AddNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_ComponentModel_IBindingList_get_AllowEdit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_AllowEdit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_ComponentModel_IBindingList_get_AllowRemove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_AllowRemove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SupportsChangeNotification()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsChangeNotification", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SupportsSearching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsSearching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SupportsSorting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsSorting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::DataViewManager::System_ComponentModel_IBindingList_get_IsSorted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_IsSorted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SortProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SortProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::ListSortDirection System::Data::DataViewManager::System_ComponentModel_IBindingList_get_SortDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.get_SortDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDirection>(this, ___internal_method);
}
inline void System::Data::DataViewManager::add_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"add_ListChanged", {}, {::i2c::type_of<::System::ComponentModel::ListChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataViewManager::remove_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"remove_ListChanged", {}, {::i2c::type_of<::System::ComponentModel::ListChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataViewManager::System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.AddIndex", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Data::DataViewManager::System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor*  property, ::System::ComponentModel::ListSortDirection  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.ApplySort", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, direction);
}
inline int32_t System::Data::DataViewManager::System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor*  property, ::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.Find", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, property, key);
}
inline void System::Data::DataViewManager::System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.RemoveIndex", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Data::DataViewManager::System_ComponentModel_IBindingList_RemoveSort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.IBindingList.RemoveSort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Data::DataViewManager::System_ComponentModel_ITypedList_GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*>  listAccessors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.ITypedList.GetListName", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, listAccessors);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::Data::DataViewManager::System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*>  listAccessors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"System.ComponentModel.ITypedList.GetItemProperties", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, listAccessors);
}
inline ::System::Data::DataView* System::Data::DataViewManager::CreateDataView(::System::Data::DataTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManager*>(),
                        {"CreateDataView", {}, {::i2c::type_of<::System::Data::DataTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataView*>(this, ___internal_method, table);
}
inline void System::Data::DataViewManager::OnListChanged(::System::ComponentModel::ListChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataViewManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Data::DataViewManager::TableCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataViewManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Data::DataViewManager::RelationCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataViewManager*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Data::DataViewManager* System::Data::DataViewManager::New_ctor(::System::Data::DataSet*  dataSet, bool  locked)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataViewManager*>(dataSet, locked));
}
/// @brief Convert operator to "::System::ComponentModel::IBindingList"
constexpr  System::Data::DataViewManager::operator ::System::ComponentModel::IBindingList*() noexcept {
return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IBindingList"
constexpr ::System::ComponentModel::IBindingList* System::Data::DataViewManager::i___System__ComponentModel__IBindingList() noexcept {
return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  System::Data::DataViewManager::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::Data::DataViewManager::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Data::DataViewManager::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Data::DataViewManager::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Data::DataViewManager::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Data::DataViewManager::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::ITypedList"
constexpr  System::Data::DataViewManager::operator ::System::ComponentModel::ITypedList*() noexcept {
return static_cast<::System::ComponentModel::ITypedList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ITypedList"
constexpr ::System::ComponentModel::ITypedList* System::Data::DataViewManager::i___System__ComponentModel__ITypedList() noexcept {
return static_cast<::System::ComponentModel::ITypedList*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataViewManager::DataViewManager()   {
}
