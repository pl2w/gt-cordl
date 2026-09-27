#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LoadAllTablesOperation_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LoadAllTablesOperation_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LoadAllTablesOperation_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>*& UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadingCompletedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadingCompletedAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>* const& UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadingCompletedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadingCompletedAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadingCompletedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadingCompletedAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>& UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_AllTablesOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllTablesOperation;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*> const& UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_AllTablesOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllTablesOperation;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_AllTablesOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllTablesOperation = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Database = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::__cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocale = value;
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>* UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, database, locale);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::LoadingCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>(),
                        {"LoadingCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>::LoadAllTablesOperation_2()   {
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>::setStaticF___9(::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*>(std::forward<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>::__cctor_b__10_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*>(),
                        {"<.cctor>b__10_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>::LoadAllTablesOperation_2___c()   {
}
