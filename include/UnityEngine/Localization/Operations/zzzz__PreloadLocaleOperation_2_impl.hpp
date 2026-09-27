#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/PreloadLocaleOperation_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__PreloadLocaleOperation_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__PreloadLocaleOperation_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>* const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTablesAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTablesAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableContentsAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableContentsAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableContentsAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableContentsAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTableContentsAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTableContentsAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_FinishPreloadingAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinishPreloadingAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_FinishPreloadingAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinishPreloadingAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_FinishPreloadingAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FinishPreloadingAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_PreloadTablesCompletedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadTablesCompletedAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>* const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_PreloadTablesCompletedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadTablesCompletedAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_PreloadTablesCompletedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadTablesCompletedAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Database = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_Locale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Locale;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_Locale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Locale;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_Locale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Locale = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadResourcesOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadResourcesOperation;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadResourcesOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadResourcesOperation;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadResourcesOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadResourcesOperation = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesGroupOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesGroupOperation;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesGroupOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesGroupOperation;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTablesGroupOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTablesGroupOperation = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableContentsOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableContentsOperation;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableContentsOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableContentsOperation;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTableContentsOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTableContentsOperation = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesOperations;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesOperations;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTablesOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTablesOperations = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_PreloadTableContentsOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadTableContentsOperations;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_PreloadTableContentsOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadTableContentsOperations;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_PreloadTableContentsOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadTableContentsOperations = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_ResourceLabels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResourceLabels;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_ResourceLabels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResourceLabels;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_ResourceLabels(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResourceLabels = value;
}
template<typename TTable,typename TEntry>
constexpr float_t& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Progress;
}
template<typename TTable,typename TEntry>
constexpr float_t const& UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_get_m_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Progress;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::__cordl_internal_set_m_Progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Progress = value;
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>* UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline float_t UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::get_Progress()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::StringW UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::get_DebugName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, database, locale);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::BeginPreloading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(),
                        {"BeginPreloading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::LoadTables(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  loadResourcesOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(),
                        {"LoadTables", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadResourcesOperation);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::LoadTableContents(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(),
                        {"LoadTableContents", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::PreloadTablesCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(),
                        {"PreloadTablesCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::FinishPreloading(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(),
                        {"FinishPreloading", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::CompleteAndRelease(bool  success, ::StringW  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(),
                        {"CompleteAndRelease", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, errorMsg);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>::PreloadLocaleOperation_2()   {
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>::setStaticF___9(::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*>(std::forward<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>::__cctor_b__28_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*>(),
                        {"<.cctor>b__28_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>::PreloadLocaleOperation_2___c()   {
}
