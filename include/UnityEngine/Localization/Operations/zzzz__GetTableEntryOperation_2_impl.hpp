#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/GetTableEntryOperation_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__GetTableEntryOperation_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IEntryOverride_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__GetTableEntryOperation_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_ExtractEntryFromTableAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtractEntryFromTableAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_ExtractEntryFromTableAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtractEntryFromTableAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_ExtractEntryFromTableAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtractEntryFromTableAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableOperation;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableOperation;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTableOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTableOperation = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableReference& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReference;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableReference const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReference;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableReference = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableEntryReference& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableEntryReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntryReference;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableEntryReference const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableEntryReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntryReference;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_TableEntryReference(::UnityEngine::Localization::Tables::TableEntryReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableEntryReference = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Database = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocale = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_CurrentLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentLocale;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_CurrentLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentLocale;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_CurrentLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentLocale = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_HandledFallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandledFallbacks;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>* const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_HandledFallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandledFallbacks;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_HandledFallbacks(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandledFallbacks = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_FallbackQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackQueue;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_FallbackQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackQueue;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_FallbackQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FallbackQueue = value;
}
template<typename TTable,typename TEntry>
constexpr bool& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_UseFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseFallback;
}
template<typename TTable,typename TEntry>
constexpr bool const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_UseFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseFallback;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_UseFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseFallback = value;
}
template<typename TTable,typename TEntry>
constexpr bool& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_AutoRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoRelease;
}
template<typename TTable,typename TEntry>
constexpr bool const& UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_get_m_AutoRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoRelease;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::__cordl_internal_set_m_AutoRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoRelease = value;
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>* UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  loadTableOperation, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  selectedLoale, bool  UseFallBack, bool  autoRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, database, loadTableOperation, tableReference, tableEntryReference, selectedLoale, UseFallBack, autoRelease);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::ExtractEntryFromTable(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(),
                        {"ExtractEntryFromTable", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOperation);
}
template<typename TTable,typename TEntry>
inline bool UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::HandleEntryOverride(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  asyncOperation, TEntry  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(),
                        {"HandleEntryOverride", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(), ::i2c::type_of<TEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asyncOperation, entry);
}
template<typename TTable,typename TEntry>
inline bool UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::ApplyEntryOverride(::UnityEngine::Localization::Metadata::IEntryOverride*  entryOverride, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  asyncOperation, TEntry  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(),
                        {"ApplyEntryOverride", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IEntryOverride*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(), ::i2c::type_of<TEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entryOverride, asyncOperation, entry);
}
template<typename TTable,typename TEntry>
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::GetNextFallback(::UnityEngine::Localization::Locale*  currentLocale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(),
                        {"GetNextFallback", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, currentLocale);
}
template<typename TTable,typename TEntry>
inline bool UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::HandleFallback(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  asyncOperation, TEntry  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(),
                        {"HandleFallback", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(), ::i2c::type_of<TEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asyncOperation, entry);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::CompleteAndRelease(::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>  result, bool  success, ::StringW  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(),
                        {"CompleteAndRelease", {}, {::i2c::type_of<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, success, errorMsg);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::StringW UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>::GetTableEntryOperation_2()   {
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>::setStaticF___9(::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*>(std::forward<::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>::__cctor_b__23_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*>(),
                        {"<.cctor>b__23_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>::GetTableEntryOperation_2___c()   {
}
