#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizedDatabase_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__AsynchronousBehaviour_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LoadTableOperation_2_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__PreloadTablesOperation_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__AsynchronousBehaviour_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__FallbackBehavior_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IReset_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ITablePostprocessor_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ITableProvider_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__SharedTableData_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__IPreloadRequired_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableReference& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_DefaultTableReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultTableReference;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableReference const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_DefaultTableReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultTableReference;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_DefaultTableReference(::UnityEngine::Localization::Tables::TableReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultTableReference = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::ITableProvider*& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_CustomTableProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomTableProvider;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::ITableProvider* const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_CustomTableProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomTableProvider;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_CustomTableProvider(::UnityEngine::Localization::Settings::ITableProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CustomTableProvider = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::ITablePostprocessor*& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_CustomTablePostprocessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomTablePostprocessor;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::ITablePostprocessor* const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_CustomTablePostprocessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomTablePostprocessor;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_CustomTablePostprocessor(::UnityEngine::Localization::Settings::ITablePostprocessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CustomTablePostprocessor = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::AsynchronousBehaviour& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_AsynchronousBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AsynchronousBehaviour;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::AsynchronousBehaviour const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_AsynchronousBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AsynchronousBehaviour;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_AsynchronousBehaviour(::UnityEngine::Localization::Settings::AsynchronousBehaviour  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AsynchronousBehaviour = value;
}
template<typename TTable,typename TEntry>
constexpr bool& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_UseFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseFallback;
}
template<typename TTable,typename TEntry>
constexpr bool const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_UseFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseFallback;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_UseFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseFallback = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_PreloadOperationHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadOperationHandle;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_PreloadOperationHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadOperationHandle;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_PreloadOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadOperationHandle = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_ReleaseNextFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseNextFrame;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_ReleaseNextFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseNextFrame;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_ReleaseNextFrame(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReleaseNextFrame = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_PatchTableContentsAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PatchTableContentsAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_PatchTableContentsAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PatchTableContentsAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_PatchTableContentsAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PatchTableContentsAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_RegisterSharedTableAndGuidOperationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisterSharedTableAndGuidOperationAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_RegisterSharedTableAndGuidOperationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisterSharedTableAndGuidOperationAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_RegisterSharedTableAndGuidOperationAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisterSharedTableAndGuidOperationAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_RegisterCompletedTableOperationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisterCompletedTableOperationAction;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get_m_RegisterCompletedTableOperationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisterCompletedTableOperationAction;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set_m_RegisterCompletedTableOperationAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisterCompletedTableOperationAction = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get__TableOperations_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TableOperations_k__BackingField;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get__TableOperations_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TableOperations_k__BackingField;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set__TableOperations_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TableOperations_k__BackingField = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get__SharedTableDataOperations_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SharedTableDataOperations_k__BackingField;
}
template<typename TTable,typename TEntry>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>* const& UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_get__SharedTableDataOperations_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SharedTableDataOperations_k__BackingField;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::__cordl_internal_set__SharedTableDataOperations_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SharedTableDataOperations_k__BackingField = value;
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::setStaticF_k_SelectedLocaleId(::UnityEngine::Localization::LocaleIdentifier  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::LocaleIdentifier, "k_SelectedLocaleId", ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(std::forward<::UnityEngine::Localization::LocaleIdentifier>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::LocaleIdentifier UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::getStaticF_k_SelectedLocaleId()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::LocaleIdentifier, "k_SelectedLocaleId", ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_PreloadOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"get_PreloadOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_ReleaseNextFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"get_ReleaseNextFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_TableOperations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"get_TableOperations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_SharedTableDataOperations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"get_SharedTableDataOperations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Tables::TableReference UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_DefaultTable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::TableReference>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::set_DefaultTable(::UnityEngine::Localization::Tables::TableReference  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Settings::ITableProvider* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_TableProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"get_TableProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::ITableProvider*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::set_TableProvider(::UnityEngine::Localization::Settings::ITableProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"set_TableProvider", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ITableProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Settings::ITablePostprocessor* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_TablePostprocessor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"get_TablePostprocessor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::ITablePostprocessor*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::set_TablePostprocessor(::UnityEngine::Localization::Settings::ITablePostprocessor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"set_TablePostprocessor", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ITablePostprocessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline bool UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_UseFallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"get_UseFallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::set_UseFallback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"set_UseFallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Settings::AsynchronousBehaviour UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::get_AsynchronousBehaviour()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"get_AsynchronousBehaviour", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::AsynchronousBehaviour>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::set_AsynchronousBehaviour(::UnityEngine::Localization::Settings::AsynchronousBehaviour  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"set_AsynchronousBehaviour", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::AsynchronousBehaviour>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Tables::TableReference UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::GetDefaultTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"GetDefaultTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::TableReference>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::RegisterCompletedTableOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  tableOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"RegisterCompletedTableOperation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableOperation);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::RegisterTableNameOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  tableOperation, ::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::StringW  tableName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"RegisterTableNameOperation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableOperation, localeIdentifier, tableName);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::RegisterSharedTableAndGuidOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  tableOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"RegisterSharedTableAndGuidOperation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableOperation);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::GetDefaultTableAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"GetDefaultTableAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::GetTableAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(this, ___internal_method, tableReference, locale);
}
template<typename TTable,typename TEntry>
inline TTable UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::GetTable(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<TTable>(this, ___internal_method, tableReference, locale);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::PreloadTables(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"PreloadTables", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, tableReference, locale);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::PreloadTables(::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*  tableReferences, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"PreloadTables", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, tableReferences, locale);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::ReleaseAllTables(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"ReleaseAllTables", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::ReleaseTable(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"ReleaseTable", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableReference, locale);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*> UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::GetAllTables(::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>(this, ___internal_method, locale);
}
template<typename TTable,typename TEntry>
inline bool UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::IsTableLoaded(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tableReference, locale);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::CreateLoadTableOperation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::CreatePreloadTablesOperation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>> UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::GetTableEntryAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>>>(this, ___internal_method, tableReference, tableEntryReference, locale, fallbackBehavior);
}
template<typename TTable,typename TEntry>
inline ::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry> UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::GetTableEntry(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>>(this, ___internal_method, tableReference, tableEntryReference, locale, fallbackBehavior);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>> UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::GetSharedTableData(::System::Guid  tableNameGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"GetSharedTableData", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>(this, ___internal_method, tableNameGuid);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::ReleaseTableContents(TTable  table)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::OnLocaleChanged(::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::PatchTableContents(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  tableOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"PatchTableContents", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableOperation);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::IPreloadRequired"
template<typename TTable,typename TEntry>
constexpr  UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::operator ::UnityEngine::Localization::IPreloadRequired*() noexcept {
return static_cast<::UnityEngine::Localization::IPreloadRequired*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::IPreloadRequired"
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::IPreloadRequired* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::i___UnityEngine__Localization__IPreloadRequired() noexcept {
return static_cast<::UnityEngine::Localization::IPreloadRequired*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IReset"
template<typename TTable,typename TEntry>
constexpr  UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::operator ::UnityEngine::Localization::Settings::IReset*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IReset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::IReset"
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::IReset* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::i___UnityEngine__Localization__Settings__IReset() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IReset*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TTable,typename TEntry>
constexpr  UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TTable,typename TEntry>
constexpr ::System::IDisposable* UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>::LocalizedDatabase_2()   {
}
