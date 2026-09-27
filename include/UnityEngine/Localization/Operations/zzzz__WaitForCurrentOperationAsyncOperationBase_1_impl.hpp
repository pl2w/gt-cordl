#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/WaitForCurrentOperationAsyncOperationBase_1.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_get__CurrentOperation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentOperation_k__BackingField;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_get__CurrentOperation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentOperation_k__BackingField;
}
template<typename TObject>
constexpr void UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_set__CurrentOperation_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentOperation_k__BackingField = value;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_get__Dependency_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dependency_k__BackingField;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_get__Dependency_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dependency_k__BackingField;
}
template<typename TObject>
constexpr void UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_set__Dependency_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Dependency_k__BackingField = value;
}
template<typename TObject>
constexpr bool& UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_get_m_Waiting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Waiting;
}
template<typename TObject>
constexpr bool const& UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_get_m_Waiting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Waiting;
}
template<typename TObject>
constexpr void UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::__cordl_internal_set_m_Waiting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Waiting = value;
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::get_CurrentOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>*>(),
                        {"get_CurrentOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::set_CurrentOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>*>(),
                        {"set_CurrentOperation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::get_Dependency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>*>(),
                        {"get_Dependency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::set_Dependency(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>*>(),
                        {"set_Dependency", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject>
inline bool UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::InvokeWaitForCompletion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>* UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>*>());
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject>::WaitForCurrentOperationAsyncOperationBase_1()   {
}
