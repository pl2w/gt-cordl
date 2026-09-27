#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedTable_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_impl.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedTable_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedTable_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableReference& UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_get_m_TableReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReference;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::Tables::TableReference const& UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_get_m_TableReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableReference;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableReference = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>& UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_get_m_ChangeHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangeHandler;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*> const& UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_get_m_ChangeHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangeHandler;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChangeHandler = value;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*& UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocaleChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleChanged;
}
template<typename TTable,typename TEntry>
constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>* const& UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_get_m_SelectedLocaleChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleChanged;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_set_m_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocaleChanged = value;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>& UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentLoadingOperationHandle_k__BackingField;
}
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> const& UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentLoadingOperationHandle_k__BackingField;
}
template<typename TTable,typename TEntry>
constexpr void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::__cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentLoadingOperationHandle_k__BackingField = value;
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::get_Database()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::get_CurrentLoadingOperationHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"get_CurrentLoadingOperationHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::set_CurrentLoadingOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"set_CurrentLoadingOperationHandle", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::Tables::TableReference UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::get_TableReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"get_TableReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::TableReference>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::set_TableReference(::UnityEngine::Localization::Tables::TableReference  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"set_TableReference", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline bool UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::add_TableChanged(::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"add_TableChanged", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::remove_TableChanged(::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"remove_TableChanged", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::GetTableAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"GetTableAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline TTable UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::GetTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"GetTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TTable>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::ForceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"ForceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::InvokeChangeHandler(TTable  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"InvokeChangeHandler", {}, {::i2c::type_of<TTable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::HandleLocaleChange(::UnityEngine::Localization::Locale*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"HandleLocaleChange", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::AutomaticLoadingCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  loadOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"AutomaticLoadingCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadOperation);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::ClearLoadingOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"ClearLoadingOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::StringW UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>> UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::get_CurrentLoadingOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>(),
                        {"get_CurrentLoadingOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>>(this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>* UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>*>());
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>::LocalizedTable_2()   {
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>::Invoke(TTable  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTable,typename TEntry>
inline ::System::IAsyncResult* UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>::BeginInvoke(TTable  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, value, callback, object);
}
template<typename TTable,typename TEntry>
inline void UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TTable,typename TEntry>
inline ::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>* UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>(object, method));
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>::LocalizedTable_2_ChangeHandler()   {
}
