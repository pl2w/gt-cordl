#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LoadTableOperation_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LoadTableOperation_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LoadTableOperation_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__SharedTableData_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableByGuidAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableByGuidAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>* const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableByGuidAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableByGuidAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTableByGuidAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTableByGuidAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableResourceAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableResourceAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>* const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableResourceAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableResourceAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTableResourceAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTableResourceAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableLoadedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableLoadedAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableLoadedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableLoadedAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_TableLoadedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableLoadedAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_CustomTableLoadedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomTableLoadedAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_CustomTableLoadedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomTableLoadedAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_CustomTableLoadedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CustomTableLoadedAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Database = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableReference& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReference;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableReference const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_TableReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReference;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableReference = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableOperation;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_LoadTableOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadTableOperation;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_LoadTableOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadTableOperation = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
template<typename TTable,typename TEntry>
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocale;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocale = value;
}
template<typename TTable,typename TEntry>
constexpr ::StringW& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_CollectionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectionName;
}
template<typename TTable,typename TEntry>
constexpr ::StringW const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get_m_CollectionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectionName;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set_m_CollectionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CollectionName = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get__RegisterTableOperation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RegisterTableOperation_k__BackingField;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_get__RegisterTableOperation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RegisterTableOperation_k__BackingField;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::__cordl_internal_set__RegisterTableOperation_k__BackingField(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RegisterTableOperation_k__BackingField = value;
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>* UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::get_RegisterTableOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"get_RegisterTableOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::set_RegisterTableOperation(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"set_RegisterTableOperation", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, database, tableReference, locale);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::LoadTableByGuid(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>  operationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"LoadTableByGuid", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationHandle);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::FindTableByName(::StringW  collectionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"FindTableByName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionName);
}
template<typename TTable,typename TEntry>
inline bool UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::TryLoadWithTableProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"TryLoadWithTableProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::DefaultLoadTableByName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"DefaultLoadTableByName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::LoadTableResource(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  operationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"LoadTableResource", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationHandle);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::CustomTableLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  operationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"CustomTableLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationHandle);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::TableLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  operationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(),
                        {"TableLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationHandle);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::StringW UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>::LoadTableOperation_2()   {
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>::setStaticF___9(::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*>(std::forward<::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>::__cctor_b__26_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*>(),
                        {"<.cctor>b__26_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>::LoadTableOperation_2___c()   {
}
