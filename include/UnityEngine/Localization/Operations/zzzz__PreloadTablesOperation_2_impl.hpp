#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/PreloadTablesOperation_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__PreloadTablesOperation_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__PreloadTablesOperation_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Database = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTables;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTables;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTables(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTables = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesOperation;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesOperation;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTablesOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTablesOperation = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_PreloadTablesOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadTablesOperations;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_PreloadTablesOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadTablesOperations;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_PreloadTablesOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadTablesOperations = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableContentsAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableContentsAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>* const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableContentsAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableContentsAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTableContentsAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTableContentsAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_FinishPreloadingAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinishPreloadingAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_FinishPreloadingAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinishPreloadingAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_FinishPreloadingAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FinishPreloadingAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesOperationHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesOperationHandle;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTablesOperationHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTablesOperationHandle;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTablesOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTablesOperationHandle = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_PreloadTablesContentsHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadTablesContentsHandle;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_PreloadTablesContentsHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadTablesContentsHandle;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_PreloadTablesContentsHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadTablesContentsHandle = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReferences;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>* const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReferences;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_TableReferences(::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableReferences = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocale = value;
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>* UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*  tableReference, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, database, tableReference, locale);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::BeginPreloadingTables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(),
                        {"BeginPreloadingTables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::LoadTableContents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(),
                        {"LoadTableContents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::FinishPreloading(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(),
                        {"FinishPreloading", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::__ctor_b__11_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(),
                        {"<.ctor>b__11_0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>::PreloadTablesOperation_2()   {
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>::setStaticF___9(::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*>(std::forward<::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>::__cctor_b__18_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*>(),
                        {"<.cctor>b__18_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>::PreloadTablesOperation_2___c()   {
}
