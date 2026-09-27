#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LoadAssetOperation_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LoadAssetOperation_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__LoadAssetOperation_1_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__AssetTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__AssetTable_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
template<typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_get_m_AssetLoadedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetLoadedAction;
}
template<typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* const& UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_get_m_AssetLoadedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetLoadedAction;
}
template<typename TObject>
constexpr void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_set_m_AssetLoadedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AssetLoadedAction = value;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>& UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_get_m_TableEntryOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntryOperation;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>> const& UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_get_m_TableEntryOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableEntryOperation;
}
template<typename TObject>
constexpr void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_set_m_TableEntryOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableEntryOperation = value;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_get_m_LoadAssetOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadAssetOperation;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_get_m_LoadAssetOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadAssetOperation;
}
template<typename TObject>
constexpr void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_set_m_LoadAssetOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadAssetOperation = value;
}
template<typename TObject>
constexpr bool& UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_get_m_AutoRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoRelease;
}
template<typename TObject>
constexpr bool const& UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_get_m_AutoRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoRelease;
}
template<typename TObject>
constexpr void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::__cordl_internal_set_m_AutoRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoRelease = value;
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>*, "Pool", ::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>*>(value));
}
template<typename TObject>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>* UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>*, "Pool", ::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>();
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>  loadTableEntryOperation, bool  autoRelease)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadTableEntryOperation, autoRelease);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::AssetLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>(),
                        {"AssetLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::CompleteAndRelease(TObject  result, bool  success, ::StringW  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>(),
                        {"CompleteAndRelease", {}, {::i2c::type_of<TObject>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, success, errorMsg);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>* UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>());
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>::LoadAssetOperation_1()   {
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>::setStaticF___9(::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*, "<>9", ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*>(std::forward<::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*>(value));
}
template<typename TObject>
inline ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>* UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*, "<>9", ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*>();
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>* UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>::__cctor_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*>(),
                        {"<.cctor>b__11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>* UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*>());
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>::LoadAssetOperation_1___c()   {
}
