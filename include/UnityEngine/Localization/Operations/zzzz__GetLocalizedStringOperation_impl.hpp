#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/GetLocalizedStringOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__GetLocalizedStringOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__GetLocalizedStringOperation_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedStringDatabase_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IVariableGroup_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Operations::GetLocalizedStringOperation.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::GetLocalizedStringOperation::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>, ::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Settings::LocalizedStringDatabase*, ::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*, bool)>(&::UnityEngine::Localization::Operations::GetLocalizedStringOperation::Init)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb04c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::GetLocalizedStringOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::GetLocalizedStringOperation::*)()>(&::UnityEngine::Localization::Operations::GetLocalizedStringOperation::Execute)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xb04c438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::GetLocalizedStringOperation.CompleteAndRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::GetLocalizedStringOperation::*)(::StringW, bool, ::StringW)>(&::UnityEngine::Localization::Operations::GetLocalizedStringOperation::CompleteAndRelease)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb04c76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                        {"CompleteAndRelease", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::GetLocalizedStringOperation.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::GetLocalizedStringOperation::*)()>(&::UnityEngine::Localization::Operations::GetLocalizedStringOperation::Destroy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb04c8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::GetLocalizedStringOperation.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Operations::GetLocalizedStringOperation::*)()>(&::UnityEngine::Localization::Operations::GetLocalizedStringOperation::ToString)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb04c978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::GetLocalizedStringOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::GetLocalizedStringOperation::*)()>(&::UnityEngine::Localization::Operations::GetLocalizedStringOperation::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb04cb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase*& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_Database()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase* const& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_Database() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
constexpr void UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedStringDatabase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Database = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_TableEntryOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntryOperation;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>> const& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_TableEntryOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntryOperation;
}
constexpr void UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_set_m_TableEntryOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableEntryOperation = value;
}
constexpr ::UnityEngine::Localization::Tables::TableReference& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_TableReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReference;
}
constexpr ::UnityEngine::Localization::Tables::TableReference const& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_TableReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReference;
}
constexpr void UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableReference = value;
}
constexpr ::UnityEngine::Localization::Tables::TableEntryReference& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_TableEntryReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntryReference;
}
constexpr ::UnityEngine::Localization::Tables::TableEntryReference const& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_TableEntryReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntryReference;
}
constexpr void UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_set_m_TableEntryReference(::UnityEngine::Localization::Tables::TableEntryReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableEntryReference = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_SelectedLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_SelectedLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
constexpr void UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocale = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Object*>*& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_Arguments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Arguments;
}
constexpr ::System::Collections::Generic::IList_1<::System::Object*>* const& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_Arguments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Arguments;
}
constexpr void UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_set_m_Arguments(::System::Collections::Generic::IList_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Arguments = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_LocalVariables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalVariables;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* const& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_LocalVariables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalVariables;
}
constexpr void UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_set_m_LocalVariables(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalVariables = value;
}
constexpr bool& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_AutoRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoRelease;
}
constexpr bool const& UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_get_m_AutoRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoRelease;
}
constexpr void UnityEngine::Localization::Operations::GetLocalizedStringOperation::__cordl_internal_set_m_AutoRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoRelease = value;
}
inline void UnityEngine::Localization::Operations::GetLocalizedStringOperation::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>*, "Pool", ::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>* UnityEngine::Localization::Operations::GetLocalizedStringOperation::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>*, "Pool", ::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>();
}
inline void UnityEngine::Localization::Operations::GetLocalizedStringOperation::Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  tableEntryOperation, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::LocalizedStringDatabase*  database, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  localVariables, bool  autoRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Object*>*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableEntryOperation, locale, database, tableReference, tableEntryReference, arguments, localVariables, autoRelease);
}
inline void UnityEngine::Localization::Operations::GetLocalizedStringOperation::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::GetLocalizedStringOperation::CompleteAndRelease(::StringW  result, bool  success, ::StringW  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                        {"CompleteAndRelease", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, success, errorMsg);
}
inline void UnityEngine::Localization::Operations::GetLocalizedStringOperation::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Operations::GetLocalizedStringOperation::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::GetLocalizedStringOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::GetLocalizedStringOperation* UnityEngine::Localization::Operations::GetLocalizedStringOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Operations::GetLocalizedStringOperation::GetLocalizedStringOperation()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::*)()>(&::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c.__cctor_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Operations::GetLocalizedStringOperation* (::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::*)()>(&::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::__cctor_b__15_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb04cd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*>(),
                        {"<.cctor>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::setStaticF___9(::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*, "<>9", ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*>(std::forward<::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*>(value));
}
inline ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c* UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*, "<>9", ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*>();
}
inline void UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::GetLocalizedStringOperation* UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::__cctor_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*>(),
                        {"<.cctor>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c* UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c::GetLocalizedStringOperation___c()   {
}
