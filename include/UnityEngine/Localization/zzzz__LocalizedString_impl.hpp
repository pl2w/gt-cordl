#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedString.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_impl.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedReference_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__ISelectorInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableValueChanged_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__VariableNameValuePair_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalVariable_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_ChainedLocalVariablesGroup_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_StringTableEntryVariable_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.add_ValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*)>(&::UnityEngine::Localization::LocalizedString::add_ValueChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb010420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"add_ValueChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.remove_ValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*)>(&::UnityEngine::Localization::LocalizedString::remove_ValueChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb0104d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"remove_ValueChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_ForceSynchronous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_ForceSynchronous)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb010580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_Arguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Object*>* (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_Arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01060c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Arguments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.set_Arguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::Localization::LocalizedString::set_Arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb010614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"set_Arguments", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_CurrentLoadingOperationHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>> (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_CurrentLoadingOperationHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb01061c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_CurrentLoadingOperationHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.set_CurrentLoadingOperationHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>)>(&::UnityEngine::Localization::LocalizedString::set_CurrentLoadingOperationHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb010630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"set_CurrentLoadingOperationHandle", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.add_StringChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::Localization::LocalizedString_ChangeHandler*)>(&::UnityEngine::Localization::LocalizedString::add_StringChanged)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb010654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"add_StringChanged", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.remove_StringChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::Localization::LocalizedString_ChangeHandler*)>(&::UnityEngine::Localization::LocalizedString::remove_StringChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb010860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"remove_StringChanged", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_HasChangeHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_HasChangeHandler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb010c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_HasChangeHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::_ctor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xb010c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference)>(&::UnityEngine::Localization::LocalizedString::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb010ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.RefreshString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::RefreshString)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xb010f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"RefreshString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.GetLocalizedStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::GetLocalizedStringAsync)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb01176c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedStringAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.GetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::GetLocalizedString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb0118a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.GetLocalizedStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> (::UnityEngine::Localization::LocalizedString::*)(::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::LocalizedString::GetLocalizedStringAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb011910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedStringAsync", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.GetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::LocalizedString::*)(::ArrayW<::System::Object*>)>(&::UnityEngine::Localization::LocalizedString::GetLocalizedString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb011940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.GetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::LocalizedString::*)(::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::Localization::LocalizedString::GetLocalizedString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb0119b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.GetLocalizedStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> (::UnityEngine::Localization::LocalizedString::*)(::System::Collections::Generic::IList_1<::System::Object*>*)>(&::UnityEngine::Localization::LocalizedString::GetLocalizedStringAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb0117a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedStringAsync", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb011a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_Keys)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb011a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_Values)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb011ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb011c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* (::UnityEngine::Localization::LocalizedString::*)(::StringW)>(&::UnityEngine::Localization::LocalizedString::get_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb011c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::StringW, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*)>(&::UnityEngine::Localization::LocalizedString::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb011c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.TryGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)(::StringW, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::LocalizedString::TryGetValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb011f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::StringW, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*)>(&::UnityEngine::Localization::LocalizedString::Add)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xb011c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::LocalizedString::Add)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb012034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)(::StringW)>(&::UnityEngine::Localization::LocalizedString::Remove)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb012094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::LocalizedString::Remove)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb01215c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)(::StringW)>(&::UnityEngine::Localization::LocalizedString::ContainsKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb0121a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>)>(&::UnityEngine::Localization::LocalizedString::Contains)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb0121f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>, int32_t)>(&::UnityEngine::Localization::LocalizedString::CopyTo)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb012270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb012478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb01250c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb0125a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.GetSourceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*)>(&::UnityEngine::Localization::LocalizedString::GetSourceValue)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0xb012634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetSourceValue", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.CompletedSourceValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>)>(&::UnityEngine::Localization::LocalizedString::CompletedSourceValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb013174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"CompletedSourceValue", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.ForceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::ForceUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb013194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.ClearVariableListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::ClearVariableListeners)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb010a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"ClearVariableListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.UpdateVariableListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*)>(&::UnityEngine::Localization::LocalizedString::UpdateVariableListeners)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb011350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"UpdateVariableListeners", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.OnVariableChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*)>(&::UnityEngine::Localization::LocalizedString::OnVariableChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb0133cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"OnVariableChanged", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.OnVariablesSourceUpdateCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::OnVariablesSourceUpdateCompleted)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb013498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"OnVariablesSourceUpdateCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.InvokeChangeHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::StringW)>(&::UnityEngine::Localization::LocalizedString::InvokeChangeHandler)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb011598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"InvokeChangeHandler", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.HandleLocaleChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::LocalizedString::HandleLocaleChange)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb013200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"HandleLocaleChange", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.AutomaticLoadingCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>)>(&::UnityEngine::Localization::LocalizedString::AutomaticLoadingCompleted)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb013550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"AutomaticLoadingCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.ClearLoadingOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::ClearLoadingOperation)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb010914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"ClearLoadingOperation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb0135d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb0135d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb013774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb0137f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.get_LocalVariablesUXML
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>* (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::get_LocalVariablesUXML)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb013890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_LocalVariablesUXML", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.set_LocalVariablesUXML
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*)>(&::UnityEngine::Localization::LocalizedString::set_LocalVariablesUXML)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb013898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"set_LocalVariablesUXML", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::Initialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb013a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)()>(&::UnityEngine::Localization::LocalizedString::Cleanup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb013b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingResult (::UnityEngine::Localization::LocalizedString::*)(::by_ref<::UnityEngine::UIElements::BindingContext>)>(&::UnityEngine::Localization::LocalizedString::Update)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb013bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString.UpdateBindingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString::*)(::StringW)>(&::UnityEngine::Localization::LocalizedString::UpdateBindingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb013db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"UpdateBindingValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_LocalVariables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalVariables;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_LocalVariables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalVariables;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_LocalVariables(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalVariables = value;
}
constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedString_ChangeHandler*>& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_ChangeHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangeHandler;
}
constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedString_ChangeHandler*> const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_ChangeHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangeHandler;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedString_ChangeHandler*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChangeHandler = value;
}
constexpr ::StringW& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_CurrentStringChangedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentStringChangedValue;
}
constexpr ::StringW const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_CurrentStringChangedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentStringChangedValue;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_CurrentStringChangedValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentStringChangedValue = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_VariableLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariableLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_VariableLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariableLookup;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_VariableLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VariableLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_UsedVariables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsedVariables;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_UsedVariables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsedVariables;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_UsedVariables(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UsedVariables = value;
}
constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_OnVariableChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnVariableChanged;
}
constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_OnVariableChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnVariableChanged;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_OnVariableChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnVariableChanged = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_SelectedLocaleChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleChanged;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_SelectedLocaleChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleChanged;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocaleChanged = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_AutomaticLoadingCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticLoadingCompleted;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_AutomaticLoadingCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticLoadingCompleted;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_AutomaticLoadingCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutomaticLoadingCompleted = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_CompletedSourceValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompletedSourceValue;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_CompletedSourceValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompletedSourceValue;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_CompletedSourceValue(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CompletedSourceValue = value;
}
constexpr bool& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_WaitingForVariablesEndUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitingForVariablesEndUpdate;
}
constexpr bool const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_WaitingForVariablesEndUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitingForVariablesEndUpdate;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_WaitingForVariablesEndUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WaitingForVariablesEndUpdate = value;
}
constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_ValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueChanged;
}
constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_ValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueChanged;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValueChanged = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Object*>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get__Arguments_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Arguments_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::System::Object*>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get__Arguments_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Arguments_k__BackingField;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set__Arguments_k__BackingField(::System::Collections::Generic::IList_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Arguments_k__BackingField = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>& UnityEngine::Localization::LocalizedString::__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentLoadingOperationHandle_k__BackingField;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>> const& UnityEngine::Localization::LocalizedString::__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentLoadingOperationHandle_k__BackingField;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentLoadingOperationHandle_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_UxmlLocalVariables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UxmlLocalVariables;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>* const& UnityEngine::Localization::LocalizedString::__cordl_internal_get_m_UxmlLocalVariables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UxmlLocalVariables;
}
constexpr void UnityEngine::Localization::LocalizedString::__cordl_internal_set_m_UxmlLocalVariables(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UxmlLocalVariables = value;
}
inline void UnityEngine::Localization::LocalizedString::add_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"add_ValueChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::LocalizedString::remove_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"remove_ValueChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::LocalizedString::get_ForceSynchronous()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Object*>* UnityEngine::Localization::LocalizedString::get_Arguments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Arguments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Object*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::set_Arguments(::System::Collections::Generic::IList_1<::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"set_Arguments", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>> UnityEngine::Localization::LocalizedString::get_CurrentLoadingOperationHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_CurrentLoadingOperationHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::set_CurrentLoadingOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"set_CurrentLoadingOperationHandle", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::LocalizedString::add_StringChanged(::UnityEngine::Localization::LocalizedString_ChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"add_StringChanged", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::LocalizedString::remove_StringChanged(::UnityEngine::Localization::LocalizedString_ChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"remove_StringChanged", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::LocalizedString::get_HasChangeHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_HasChangeHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::_ctor(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  entryReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableReference, entryReference);
}
inline bool UnityEngine::Localization::LocalizedString::RefreshString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"RefreshString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> UnityEngine::Localization::LocalizedString::GetLocalizedStringAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedStringAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::LocalizedString::GetLocalizedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> UnityEngine::Localization::LocalizedString::GetLocalizedStringAsync(/* [ParamArray] */ ::ArrayW<::System::Object*>  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedStringAsync", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>(this, ___internal_method, arguments);
}
inline ::StringW UnityEngine::Localization::LocalizedString::GetLocalizedString(/* [ParamArray] */ ::ArrayW<::System::Object*>  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, arguments);
}
inline ::StringW UnityEngine::Localization::LocalizedString::GetLocalizedString(::System::Collections::Generic::IList_1<::System::Object*>*  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedString", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, arguments);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> UnityEngine::Localization::LocalizedString::GetLocalizedStringAsync(::System::Collections::Generic::IList_1<::System::Object*>*  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetLocalizedStringAsync", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>(this, ___internal_method, arguments);
}
inline int32_t UnityEngine::Localization::LocalizedString::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* UnityEngine::Localization::LocalizedString::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* UnityEngine::Localization::LocalizedString::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::LocalizedString::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::LocalizedString::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(this, ___internal_method, name);
}
inline void UnityEngine::Localization::LocalizedString::set_Item(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline bool UnityEngine::Localization::LocalizedString::TryGetValue(::StringW  name, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"TryGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, value);
}
inline void UnityEngine::Localization::LocalizedString::Add(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  variable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, variable);
}
inline void UnityEngine::Localization::LocalizedString::Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool UnityEngine::Localization::LocalizedString::Remove(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Localization::LocalizedString::Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline bool UnityEngine::Localization::LocalizedString::ContainsKey(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Localization::LocalizedString::Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void UnityEngine::Localization::LocalizedString::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* UnityEngine::Localization::LocalizedString::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Localization::LocalizedString::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::LocalizedString::GetSourceValue(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"GetSourceValue", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, selector);
}
inline void UnityEngine::Localization::LocalizedString::CompletedSourceValue(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"CompletedSourceValue", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void UnityEngine::Localization::LocalizedString::ForceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::ClearVariableListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"ClearVariableListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::UpdateVariableListeners(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  variables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"UpdateVariableListeners", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variables);
}
inline void UnityEngine::Localization::LocalizedString::OnVariableChanged(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  globalVariable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"OnVariableChanged", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, globalVariable);
}
inline void UnityEngine::Localization::LocalizedString::OnVariablesSourceUpdateCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"OnVariablesSourceUpdateCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::InvokeChangeHandler(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"InvokeChangeHandler", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::LocalizedString::HandleLocaleChange(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"HandleLocaleChange", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline void UnityEngine::Localization::LocalizedString::AutomaticLoadingCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  loadOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"AutomaticLoadingCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadOperation);
}
inline void UnityEngine::Localization::LocalizedString::ClearLoadingOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"ClearLoadingOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::OnAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>* UnityEngine::Localization::LocalizedString::get_LocalVariablesUXML()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"get_LocalVariablesUXML", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::set_LocalVariablesUXML(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"set_LocalVariablesUXML", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::LocalizedString::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString::Cleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BindingResult UnityEngine::Localization::LocalizedString::Update(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context);
}
inline void UnityEngine::Localization::LocalizedString::UpdateBindingValue(::StringW  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString*>(),
                        {"UpdateBindingValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::UnityEngine::Localization::LocalizedString* UnityEngine::Localization::LocalizedString::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedString*>());
}
inline ::UnityEngine::Localization::LocalizedString* UnityEngine::Localization::LocalizedString::New_ctor(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  entryReference)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedString*>(tableReference, entryReference));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr  UnityEngine::Localization::LocalizedString::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* UnityEngine::Localization::LocalizedString::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>"
constexpr  UnityEngine::Localization::LocalizedString::operator ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* UnityEngine::Localization::LocalizedString::i___System__Collections__Generic__IDictionary_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable__() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr  UnityEngine::Localization::LocalizedString::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* UnityEngine::Localization::LocalizedString::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr  UnityEngine::Localization::LocalizedString::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* UnityEngine::Localization::LocalizedString::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Localization::LocalizedString::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Localization::LocalizedString::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
constexpr  UnityEngine::Localization::LocalizedString::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged* UnityEngine::Localization::LocalizedString::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableValueChanged() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr  UnityEngine::Localization::LocalizedString::operator ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::LocalizedString::i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::LocalizedString::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::LocalizedString::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedString::LocalizedString()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::*)(int32_t)>(&::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb0124e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::*)()>(&::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb014bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::*)()>(&::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb014be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::*)()>(&::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb014df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> (::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::*)()>(&::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb014e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::*)()>(&::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb014e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::*)()>(&::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb014e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>& UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> const& UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityEngine::Localization::LocalizedString*& UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_set___4__this(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>& UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*> const& UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57* UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr  UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::*)(int32_t)>(&::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb012578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::*)()>(&::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb0148e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::*)()>(&::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xb0148fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::*)()>(&::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb014b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::*)()>(&::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb014b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::*)()>(&::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb014b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::*)()>(&::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb014bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityEngine::Localization::LocalizedString*& UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_set___4__this(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>& UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*> const& UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58* UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58::LocalizedString__GetEnumerator_d__58()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString___c::*)()>(&::UnityEngine::Localization::LocalizedString___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0148c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString___c._get_Values_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* (::UnityEngine::Localization::LocalizedString___c::*)(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*)>(&::UnityEngine::Localization::LocalizedString___c::_get_Values_b__43_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb0148cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString___c*>(),
                        {"<get_Values>b__43_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::LocalizedString___c::setStaticF___9(::UnityEngine::Localization::LocalizedString___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::LocalizedString___c*, "<>9", ::UnityEngine::Localization::LocalizedString___c*>(std::forward<::UnityEngine::Localization::LocalizedString___c*>(value));
}
inline ::UnityEngine::Localization::LocalizedString___c* UnityEngine::Localization::LocalizedString___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::LocalizedString___c*, "<>9", ::UnityEngine::Localization::LocalizedString___c*>();
}
inline void UnityEngine::Localization::LocalizedString___c::setStaticF___9__43_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*, "<>9__43_0", ::UnityEngine::Localization::LocalizedString___c*>(std::forward<::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*>(value));
}
inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* UnityEngine::Localization::LocalizedString___c::getStaticF___9__43_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*, "<>9__43_0", ::UnityEngine::Localization::LocalizedString___c*>();
}
inline void UnityEngine::Localization::LocalizedString___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* UnityEngine::Localization::LocalizedString___c::_get_Values_b__43_0(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString___c*>(),
                        {"<get_Values>b__43_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>(this, ___internal_method, s);
}
inline ::UnityEngine::Localization::LocalizedString___c* UnityEngine::Localization::LocalizedString___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedString___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedString___c::LocalizedString___c()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString_UxmlSerializedData.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Localization::LocalizedString_UxmlSerializedData::Register)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb01432c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(),
                        {"Register", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString_UxmlSerializedData.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::LocalizedString_UxmlSerializedData::*)()>(&::UnityEngine::Localization::LocalizedString_UxmlSerializedData::CreateInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb0144dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString_UxmlSerializedData.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString_UxmlSerializedData::*)(::System::Object*)>(&::UnityEngine::Localization::LocalizedString_UxmlSerializedData::Deserialize)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xb01452c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString_UxmlSerializedData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString_UxmlSerializedData::*)()>(&::UnityEngine::Localization::LocalizedString_UxmlSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb014854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>*& UnityEngine::Localization::LocalizedString_UxmlSerializedData::__cordl_internal_get_LocalVariablesUXML()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalVariablesUXML;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>* const& UnityEngine::Localization::LocalizedString_UxmlSerializedData::__cordl_internal_get_LocalVariablesUXML() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalVariablesUXML;
}
constexpr void UnityEngine::Localization::LocalizedString_UxmlSerializedData::__cordl_internal_set_LocalVariablesUXML(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalVariablesUXML = value;
}
constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& UnityEngine::Localization::LocalizedString_UxmlSerializedData::__cordl_internal_get_LocalVariablesUXML_UxmlAttributeFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalVariablesUXML_UxmlAttributeFlags;
}
constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& UnityEngine::Localization::LocalizedString_UxmlSerializedData::__cordl_internal_get_LocalVariablesUXML_UxmlAttributeFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalVariablesUXML_UxmlAttributeFlags;
}
constexpr void UnityEngine::Localization::LocalizedString_UxmlSerializedData::__cordl_internal_set_LocalVariablesUXML_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalVariablesUXML_UxmlAttributeFlags = value;
}
inline void UnityEngine::Localization::LocalizedString_UxmlSerializedData::Register()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(),
                        {"Register", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::LocalizedString_UxmlSerializedData::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedString_UxmlSerializedData::Deserialize(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void UnityEngine::Localization::LocalizedString_UxmlSerializedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::LocalizedString_UxmlSerializedData* UnityEngine::Localization::LocalizedString_UxmlSerializedData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedString_UxmlSerializedData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedString_UxmlSerializedData::LocalizedString_UxmlSerializedData()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString_ChangeHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString_ChangeHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Localization::LocalizedString_ChangeHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb013ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString_ChangeHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString_ChangeHandler::*)(::StringW)>(&::UnityEngine::Localization::LocalizedString_ChangeHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb013dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString_ChangeHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::Localization::LocalizedString_ChangeHandler::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::Localization::LocalizedString_ChangeHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb013dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedString_ChangeHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedString_ChangeHandler::*)(::System::IAsyncResult*)>(&::UnityEngine::Localization::LocalizedString_ChangeHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb013df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::LocalizedString_ChangeHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Localization::LocalizedString_ChangeHandler::Invoke(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* UnityEngine::Localization::LocalizedString_ChangeHandler::BeginInvoke(::StringW  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, value, callback, object);
}
inline void UnityEngine::Localization::LocalizedString_ChangeHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Localization::LocalizedString_ChangeHandler* UnityEngine::Localization::LocalizedString_ChangeHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedString_ChangeHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedString_ChangeHandler::LocalizedString_ChangeHandler()   {
}
