#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedAsset_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAssetBase_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TObject>
constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_ChangeHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangeHandler;
}
template<typename TObject>
constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*> const& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_ChangeHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangeHandler;
}
template<typename TObject>
constexpr void UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChangeHandler = value;
}
template<typename TObject>
constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_SelectedLocaleChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleChanged;
}
template<typename TObject>
constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>* const& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_SelectedLocaleChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleChanged;
}
template<typename TObject>
constexpr void UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_set_m_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocaleChanged = value;
}
template<typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_AutomaticLoadingCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticLoadingCompleted;
}
template<typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* const& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_AutomaticLoadingCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticLoadingCompleted;
}
template<typename TObject>
constexpr void UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_set_m_AutomaticLoadingCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutomaticLoadingCompleted = value;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_PreviousLoadingOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousLoadingOperation;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_PreviousLoadingOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousLoadingOperation;
}
template<typename TObject>
constexpr void UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_set_m_PreviousLoadingOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousLoadingOperation = value;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentLoadingOperationHandle_k__BackingField;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentLoadingOperationHandle_k__BackingField;
}
template<typename TObject>
constexpr void UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentLoadingOperationHandle_k__BackingField = value;
}
template<typename TObject>
constexpr TObject& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_CurrentValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentValue;
}
template<typename TObject>
constexpr TObject const& UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_get_m_CurrentValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentValue;
}
template<typename TObject>
constexpr void UnityEngine::Localization::LocalizedAsset_1<TObject>::__cordl_internal_set_m_CurrentValue(TObject  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentValue = value;
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::set_WaitForCompletion(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline bool UnityEngine::Localization::LocalizedAsset_1<TObject>::get_ForceSynchronous()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::LocalizedAsset_1<TObject>::get_CurrentLoadingOperationHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"get_CurrentLoadingOperationHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::set_CurrentLoadingOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"set_CurrentLoadingOperationHandle", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::add_AssetChanged(::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"add_AssetChanged", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::remove_AssetChanged(::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"remove_AssetChanged", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline bool UnityEngine::Localization::LocalizedAsset_1<TObject>::get_HasChangeHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"get_HasChangeHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::LocalizedAsset_1<TObject>::LoadAssetAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"LoadAssetAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method);
}
template<typename TObject>
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> UnityEngine::Localization::LocalizedAsset_1<TObject>::LoadAssetAsync()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 20}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>> UnityEngine::Localization::LocalizedAsset_1<TObject>::LoadAssetAsObjectAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>>>(this, ___internal_method);
}
template<typename TObject>
inline TObject UnityEngine::Localization::LocalizedAsset_1<TObject>::LoadAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"LoadAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TObject>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::ForceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::HandleLocaleChange(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"HandleLocaleChange", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::AutomaticLoadingCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  loadOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"AutomaticLoadingCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadOperation);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::InvokeChangeHandler(TObject  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"InvokeChangeHandler", {}, {::i2c::type_of<TObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::ClearLoadingOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"ClearLoadingOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::ClearPreviousLoadingOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"ClearPreviousLoadingOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::ClearLoadingOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  operationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"ClearLoadingOperation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationHandle);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::Cleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::UIElements::BindingResult UnityEngine::Localization::LocalizedAsset_1<TObject>::Update(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context);
}
template<typename TObject>
inline ::UnityEngine::UIElements::BindingResult UnityEngine::Localization::LocalizedAsset_1<TObject>::ApplyDataBindingValue(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context, TObject  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context, value);
}
template<typename TObject>
template<typename T>
inline ::UnityEngine::UIElements::BindingResult UnityEngine::Localization::LocalizedAsset_1<TObject>::SetDataBindingValue(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                    {"SetDataBindingValue", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingContext>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context, value);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1<TObject>::UpdateBindingValue(TObject  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>(),
                        {"UpdateBindingValue", {}, {::i2c::type_of<TObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline ::UnityEngine::Localization::LocalizedAsset_1<TObject>* UnityEngine::Localization::LocalizedAsset_1<TObject>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedAsset_1<TObject>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TObject>
constexpr  UnityEngine::Localization::LocalizedAsset_1<TObject>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TObject>
constexpr ::System::IDisposable* UnityEngine::Localization::LocalizedAsset_1<TObject>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::Localization::LocalizedAsset_1<TObject>::LocalizedAsset_1()   {
}
template<typename TObject>
inline ::System::Object* UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>* UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>*>());
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>::LocalizedAsset_1_UxmlSerializedData()   {
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::__cordl_internal_get_m_Operation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Operation;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::__cordl_internal_get_m_Operation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Operation;
}
template<typename TObject>
constexpr void UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::__cordl_internal_set_m_Operation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Operation = value;
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>*, "Pool", ::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>*>(value));
}
template<typename TObject>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>* UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>*, "Pool", ::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>();
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::OnCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>* UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>());
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>::LocalizedAsset_1_ConvertToObjectOperation()   {
}
template<typename TObject>
inline void UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>::setStaticF___9(::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*, "<>9", ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*>(std::forward<::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*>(value));
}
template<typename TObject>
inline ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>* UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*, "<>9", ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*>();
}
template<typename TObject>
inline void UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>* UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>::__cctor_b__7_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*>(),
                        {"<.cctor>b__7_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>* UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*>());
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>::ConvertToObjectOperation_LocalizedAsset_1___c()   {
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>::Invoke(TObject  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline ::System::IAsyncResult* UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>::BeginInvoke(TObject  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, value, callback, object);
}
template<typename TObject>
inline void UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TObject>
inline ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>* UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>(object, method));
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>::LocalizedAsset_1_ChangeHandler()   {
}
