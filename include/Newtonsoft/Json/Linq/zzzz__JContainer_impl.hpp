#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JContainer.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer__ReadContentFromAsync_d__1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer__ReadTokenFromAsync_d__0_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JProperty_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonCloneSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Specialized/zzzz__NotifyCollectionChangedEventArgs_def.hpp"
#include "System/Collections/Specialized/zzzz__NotifyCollectionChangedEventHandler_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__AddingNewEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__AddingNewEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__IBindingList_def.hpp"
#include "System/ComponentModel/zzzz__ITypedList_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ListSortDirection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ReadTokenFromAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JContainer::ReadTokenFromAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa3d01c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadTokenFromAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ReadContentFromAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JContainer::ReadContentFromAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa3d1398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadContentFromAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.add_ListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::ComponentModel::ListChangedEventHandler*)>(&::Newtonsoft::Json::Linq::JContainer::add_ListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3d14c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"add_ListChanged", {}, {::i2c::type_of<::System::ComponentModel::ListChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.remove_ListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::ComponentModel::ListChangedEventHandler*)>(&::Newtonsoft::Json::Linq::JContainer::remove_ListChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3d1554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"remove_ListChanged", {}, {::i2c::type_of<::System::ComponentModel::ListChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.get_ChildrenTokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::get_ChildrenTokens)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa3cece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JContainer*, ::Newtonsoft::Json::Linq::JsonCloneSettings*)>(&::Newtonsoft::Json::Linq::JContainer::_ctor)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xa3cedd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.CheckReentrancy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::CheckReentrancy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa3d19e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"CheckReentrancy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.OnAddingNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::ComponentModel::AddingNewEventArgs*)>(&::Newtonsoft::Json::Linq::JContainer::OnAddingNew)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa3d1a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.OnListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::ComponentModel::ListChangedEventArgs*)>(&::Newtonsoft::Json::Linq::JContainer::OnListChanged)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa3d1ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.OnCollectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::Collections::Specialized::NotifyCollectionChangedEventArgs*)>(&::Newtonsoft::Json::Linq::JContainer::OnCollectionChanged)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa3d1b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.get_HasValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::get_HasValues)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa3d1bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.get_First
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::get_First)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa3d1c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.get_Last
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::get_Last)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa3d1dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.Children
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::Children)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa3d1ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.IsMultiContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::IsMultiContent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa3d1f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"IsMultiContent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.EnsureParentToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*, bool, bool)>(&::Newtonsoft::Json::Linq::JContainer::EnsureParentToken)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa3d2044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"EnsureParentToken", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.IndexOfItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::IndexOfItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.InsertItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*, bool, bool)>(&::Newtonsoft::Json::Linq::JContainer::InsertItem)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xa3d2158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.RemoveItemAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(int32_t)>(&::Newtonsoft::Json::Linq::JContainer::RemoveItemAt)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xa3d258c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.RemoveItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::RemoveItem)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa3d2a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.GetItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JContainer::*)(int32_t)>(&::Newtonsoft::Json::Linq::JContainer::GetItem)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa3d2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.SetItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::SetItem)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0xa3d2b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ClearItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::ClearItems)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0xa3d30f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ReplaceItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::ReplaceItem)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa3d3504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ContainsItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::ContainsItem)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa3d3568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.CopyItemsTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::Array*, int32_t)>(&::Newtonsoft::Json::Linq::JContainer::CopyItemsTo)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xa3d358c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.IsTokenUnchanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::IsTokenUnchanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa3d3044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"IsTokenUnchanged", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ValidateToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::ValidateToken)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa3d3a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::Add)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa3d3b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.TryAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::TryAdd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa3d3c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"TryAdd", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.AddAndSkipParentCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::AddAndSkipParentCheck)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa3d3cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"AddAndSkipParentCheck", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.TryAddInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(int32_t, ::System::Object*, bool, bool)>(&::Newtonsoft::Json::Linq::JContainer::TryAddInternal)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xa3d1680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"TryAddInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.CreateFromContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::CreateFromContent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa3d3dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"CreateFromContent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.RemoveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::RemoveAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d3e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"RemoveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ReadTokenFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JContainer::ReadTokenFrom)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa3cf554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadTokenFrom", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ReadContentFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&::Newtonsoft::Json::Linq::JContainer::ReadContentFrom)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xa3d3e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadContentFrom", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.ReadProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JProperty* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JContainer*)>(&::Newtonsoft::Json::Linq::JContainer::ReadProperty)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa3d42fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadProperty", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::Newtonsoft::Json::IJsonLineInfo*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_ITypedList_GetListName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Linq::JContainer::*)(::ArrayW<::System::ComponentModel::PropertyDescriptor*>)>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_ITypedList_GetListName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa3d4770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.ITypedList.GetListName", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_ITypedList_GetItemProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::Newtonsoft::Json::Linq::JContainer::*)(::ArrayW<::System::ComponentModel::PropertyDescriptor*>)>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_ITypedList_GetItemProperties)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa3d4788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.ITypedList.GetItemProperties", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d48ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa3d48fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(int32_t)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JContainer::*)(int32_t)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(int32_t, ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::ArrayW<::Newtonsoft::Json::Linq::JToken*>, int32_t)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo", {}, {::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JToken*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d498c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.EnsureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JContainer::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::EnsureValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa3d499c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"EnsureValue", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JContainer::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3d4a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa3d4aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JContainer::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa3d4ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(int32_t, ::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa3d4b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa3d4b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(int32_t)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JContainer::*)(int32_t)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_IList_set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(int32_t, ::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa3d4bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_ICollection_CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::Array*, int32_t)>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3d4c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::get_Count)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa3d398c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa3d4c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_AddIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::ComponentModel::PropertyDescriptor*)>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_AddIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa3d4c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.AddIndex", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_AddNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_AddNew)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa3d4c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.AddNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_AllowEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_AllowEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_AllowEdit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_AllowNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_AllowNew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_AllowNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_AllowRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_AllowRemove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_AllowRemove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_ApplySort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection)>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_ApplySort)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa3d4e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.ApplySort", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Linq::JContainer::*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*)>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_Find)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa3d4ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.Find", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_IsSorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_IsSorted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_IsSorted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_RemoveIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)(::System::ComponentModel::PropertyDescriptor*)>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_RemoveIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa3d4ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.RemoveIndex", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_RemoveSort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_RemoveSort)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa3d4ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.RemoveSort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_SortDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ListSortDirection (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SortDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SortDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_SortProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SortProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SortProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_SupportsChangeNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SupportsChangeNotification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsChangeNotification", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_SupportsSearching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SupportsSearching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsSearching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JContainer.System_ComponentModel_IBindingList_get_SupportsSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Linq::JContainer::*)()>(&::Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SupportsSorting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3d4f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsSorting", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ListChangedEventHandler*& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__listChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listChanged;
}
constexpr ::System::ComponentModel::ListChangedEventHandler* const& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__listChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listChanged;
}
constexpr void Newtonsoft::Json::Linq::JContainer::__cordl_internal_set__listChanged(::System::ComponentModel::ListChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____listChanged = value;
}
constexpr ::System::ComponentModel::AddingNewEventHandler*& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__addingNew()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addingNew;
}
constexpr ::System::ComponentModel::AddingNewEventHandler* const& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__addingNew() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addingNew;
}
constexpr void Newtonsoft::Json::Linq::JContainer::__cordl_internal_set__addingNew(::System::ComponentModel::AddingNewEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addingNew = value;
}
constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__collectionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectionChanged;
}
constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler* const& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__collectionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collectionChanged;
}
constexpr void Newtonsoft::Json::Linq::JContainer::__cordl_internal_set__collectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collectionChanged = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__syncRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncRoot;
}
constexpr ::System::Object* const& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__syncRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncRoot;
}
constexpr void Newtonsoft::Json::Linq::JContainer::__cordl_internal_set__syncRoot(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncRoot = value;
}
constexpr bool& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__busy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____busy;
}
constexpr bool const& Newtonsoft::Json::Linq::JContainer::__cordl_internal_get__busy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____busy;
}
constexpr void Newtonsoft::Json::Linq::JContainer::__cordl_internal_set__busy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____busy = value;
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Linq::JContainer::ReadTokenFromAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  options, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadTokenFromAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reader, options, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Linq::JContainer::ReadContentFromAsync(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadContentFromAsync", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, reader, settings, cancellationToken);
}
inline void Newtonsoft::Json::Linq::JContainer::add_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"add_ListChanged", {}, {::i2c::type_of<::System::ComponentModel::ListChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JContainer::remove_ListChanged(::System::ComponentModel::ListChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"remove_ListChanged", {}, {::i2c::type_of<::System::ComponentModel::ListChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JContainer::get_ChildrenTokens()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::_ctor(::Newtonsoft::Json::Linq::JContainer*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonCloneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, settings);
}
inline void Newtonsoft::Json::Linq::JContainer::CheckReentrancy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"CheckReentrancy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::OnAddingNew(::System::ComponentModel::AddingNewEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Newtonsoft::Json::Linq::JContainer::OnListChanged(::System::ComponentModel::ListChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Newtonsoft::Json::Linq::JContainer::OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline bool Newtonsoft::Json::Linq::JContainer::get_HasValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JContainer::get_First()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JContainer::get_Last()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Newtonsoft::Json::Linq::JContainer::Children()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*>>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::IsMultiContent(/* [NotNullWhen(true)] */ ::System::Object*  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"IsMultiContent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, content);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JContainer::EnsureParentToken(/* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"EnsureParentToken", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, item, skipParentCheck, copyAnnotations);
}
inline int32_t Newtonsoft::Json::Linq::JContainer::IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline bool Newtonsoft::Json::Linq::JContainer::InsertItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, item, skipParentCheck, copyAnnotations);
}
inline void Newtonsoft::Json::Linq::JContainer::RemoveItemAt(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline bool Newtonsoft::Json::Linq::JContainer::RemoveItem(::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JContainer::GetItem(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, index);
}
inline void Newtonsoft::Json::Linq::JContainer::SetItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline void Newtonsoft::Json::Linq::JContainer::ClearItems()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::ReplaceItem(::Newtonsoft::Json::Linq::JToken*  existing, ::Newtonsoft::Json::Linq::JToken*  replacement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existing, replacement);
}
inline bool Newtonsoft::Json::Linq::JContainer::ContainsItem(::Newtonsoft::Json::Linq::JToken*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JContainer::CopyItemsTo(::System::Array*  array, int32_t  arrayIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline bool Newtonsoft::Json::Linq::JContainer::IsTokenUnchanged(::Newtonsoft::Json::Linq::JToken*  currentValue, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"IsTokenUnchanged", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentValue, newValue);
}
inline void Newtonsoft::Json::Linq::JContainer::ValidateToken(::Newtonsoft::Json::Linq::JToken*  o, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JToken*  existing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, existing);
}
inline void Newtonsoft::Json::Linq::JContainer::Add(::System::Object*  content)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline bool Newtonsoft::Json::Linq::JContainer::TryAdd(::System::Object*  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"TryAdd", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, content);
}
inline void Newtonsoft::Json::Linq::JContainer::AddAndSkipParentCheck(::Newtonsoft::Json::Linq::JToken*  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"AddAndSkipParentCheck", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline bool Newtonsoft::Json::Linq::JContainer::TryAddInternal(int32_t  index, ::System::Object*  content, bool  skipParentCheck, bool  copyAnnotations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"TryAddInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, content, skipParentCheck, copyAnnotations);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JContainer::CreateFromContent(/* [Nullable(2)] */ ::System::Object*  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"CreateFromContent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, content);
}
inline void Newtonsoft::Json::Linq::JContainer::RemoveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"RemoveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::ReadTokenFrom(::Newtonsoft::Json::JsonReader*  reader, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadTokenFrom", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, options);
}
inline void Newtonsoft::Json::Linq::JContainer::ReadContentFrom(::Newtonsoft::Json::JsonReader*  r, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadContentFrom", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, settings);
}
inline ::Newtonsoft::Json::Linq::JProperty* Newtonsoft::Json::Linq::JContainer::ReadProperty(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  r, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::Newtonsoft::Json::IJsonLineInfo*  lineInfo, /* [Nullable(1)] */ ::Newtonsoft::Json::Linq::JContainer*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"ReadProperty", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JsonLoadSettings*>(), ::i2c::type_of<::Newtonsoft::Json::IJsonLineInfo*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JProperty*>(nullptr, ___internal_method, r, settings, lineInfo, parent);
}
inline ::StringW Newtonsoft::Json::Linq::JContainer::System_ComponentModel_ITypedList_GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*>  listAccessors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.ITypedList.GetListName", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, listAccessors);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* Newtonsoft::Json::Linq::JContainer::System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*>  listAccessors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.ITypedList.GetItemProperties", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::PropertyDescriptor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, listAccessors);
}
inline int32_t Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, index);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo", {}, {::i2c::type_of<::ArrayW<::Newtonsoft::Json::Linq::JToken*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove(::Newtonsoft::Json::Linq::JToken*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JContainer::EnsureValue(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"EnsureValue", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::Linq::JContainer::System_Collections_IList_IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_Collections_IList_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_IList_Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_IList_RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Object* Newtonsoft::Json::Linq::JContainer::System_Collections_IList_get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.IList.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Newtonsoft::Json::Linq::JContainer::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline int32_t Newtonsoft::Json::Linq::JContainer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Linq::JContainer::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.AddIndex", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline ::System::Object* Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_AddNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.AddNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_AllowEdit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_AllowEdit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_AllowNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_AllowNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_AllowRemove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_AllowRemove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor*  property, ::System::ComponentModel::ListSortDirection  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.ApplySort", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ListSortDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, direction);
}
inline int32_t Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor*  property, ::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.Find", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, property, key);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_IsSorted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_IsSorted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.RemoveIndex", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_RemoveSort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.RemoveSort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::ListSortDirection Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SortDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SortDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDirection>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SortProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SortProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SupportsChangeNotification()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsChangeNotification", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SupportsSearching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsSearching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Linq::JContainer::System_ComponentModel_IBindingList_get_SupportsSorting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Linq::JContainer*>(),
                        {"System.ComponentModel.IBindingList.get_SupportsSorting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JContainer* Newtonsoft::Json::Linq::JContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JContainer*>());
}
inline ::Newtonsoft::Json::Linq::JContainer* Newtonsoft::Json::Linq::JContainer::New_ctor(::Newtonsoft::Json::Linq::JContainer*  other, /* [Nullable(2)] */ ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Linq::JContainer*>(other, settings));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JContainer::operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JContainer::i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JContainer::operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JContainer::i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr  Newtonsoft::Json::Linq::JContainer::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JContainer::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Newtonsoft::Json::Linq::JContainer::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JContainer::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::ITypedList"
constexpr  Newtonsoft::Json::Linq::JContainer::operator ::System::ComponentModel::ITypedList*() noexcept {
return static_cast<::System::ComponentModel::ITypedList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ITypedList"
constexpr ::System::ComponentModel::ITypedList* Newtonsoft::Json::Linq::JContainer::i___System__ComponentModel__ITypedList() noexcept {
return static_cast<::System::ComponentModel::ITypedList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::IBindingList"
constexpr  Newtonsoft::Json::Linq::JContainer::operator ::System::ComponentModel::IBindingList*() noexcept {
return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IBindingList"
constexpr ::System::ComponentModel::IBindingList* Newtonsoft::Json::Linq::JContainer::i___System__ComponentModel__IBindingList() noexcept {
return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  Newtonsoft::Json::Linq::JContainer::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* Newtonsoft::Json::Linq::JContainer::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  Newtonsoft::Json::Linq::JContainer::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* Newtonsoft::Json::Linq::JContainer::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JContainer::JContainer()   {
}
