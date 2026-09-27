#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/PreloadDatabaseOperation_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__PreloadDatabaseOperation_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__PreloadDatabaseOperation_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_get_m_CompleteOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompleteOperation;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_get_m_CompleteOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompleteOperation;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_set_m_CompleteOperation(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CompleteOperation = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*& UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_get_m_CompleteGenericGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompleteGenericGroup;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>* const& UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_get_m_CompleteGenericGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompleteGenericGroup;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_set_m_CompleteGenericGroup(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CompleteGenericGroup = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_get_m_Database() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Database;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::__cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Database = value;
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>* UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>*, "Pool", ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline float_t UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::get_Progress()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::StringW UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::get_DebugName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, database);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::GetAllFallbackLocales(::UnityEngine::Localization::Locale*  current, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  locales)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(),
                        {"GetAllFallbackLocales", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, current, locales);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::PreloadLocale(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(),
                        {"PreloadLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, locale);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::PreloadLocales(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::Localization::Locale>>*  locales)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(),
                        {"PreloadLocales", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locales);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::CompleteOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  operationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(),
                        {"CompleteOperation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationHandle);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::CompleteGenericGroup(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  operationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(),
                        {"CompleteGenericGroup", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationHandle);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>::PreloadDatabaseOperation_2()   {
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>::setStaticF___9(::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*>(std::forward<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*>(value));
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*, "<>9", ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*>();
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>::__cctor_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*>(),
                        {"<.cctor>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>* UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>::PreloadDatabaseOperation_2___c()   {
}
