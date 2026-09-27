#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/LinkedPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__PooledObject_1_def.hpp"
template<typename T>
constexpr ::System::Func_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_CreateFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CreateFunc;
}
template<typename T>
constexpr ::System::Func_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_CreateFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CreateFunc;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_CreateFunc(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CreateFunc = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnGet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnGet;
}
template<typename T>
constexpr ::System::Action_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnGet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnGet;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_ActionOnGet(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionOnGet = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnRelease;
}
template<typename T>
constexpr ::System::Action_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnRelease;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_ActionOnRelease(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionOnRelease = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnDestroy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnDestroy;
}
template<typename T>
constexpr ::System::Action_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnDestroy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionOnDestroy;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_ActionOnDestroy(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionOnDestroy = value;
}
template<typename T>
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_Limit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Limit;
}
template<typename T>
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_Limit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Limit;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_Limit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Limit = value;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_PoolFirst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PoolFirst;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_PoolFirst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PoolFirst;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_PoolFirst(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PoolFirst = value;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_NextAvailableListItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextAvailableListItem;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_NextAvailableListItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextAvailableListItem;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_NextAvailableListItem(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextAvailableListItem = value;
}
template<typename T>
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_CollectionCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectionCheck;
}
template<typename T>
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_CollectionCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectionCheck;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_CollectionCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CollectionCheck = value;
}
template<typename T>
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get__countInactive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countInactive_k__BackingField;
}
template<typename T>
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get__countInactive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countInactive_k__BackingField;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set__countInactive_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countInactive_k__BackingField = value;
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::_ctor(::System::Func_1<T>*  createFunc, ::System::Action_1<T>*  actionOnGet, ::System::Action_1<T>*  actionOnRelease, ::System::Action_1<T>*  actionOnDestroy, bool  collectionCheck, int32_t  maxSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, maxSize);
}
template<typename T>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::get_countInactive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(),
                        {"get_countInactive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::set_countInactive(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(),
                        {"set_countInactive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T> UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Get(::by_ref<T>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>>(this, ___internal_method, v);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Release(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::New_ctor(::System::Func_1<T>*  createFunc, ::System::Action_1<T>*  actionOnGet, ::System::Action_1<T>*  actionOnRelease, ::System::Action_1<T>*  actionOnDestroy, bool  collectionCheck, int32_t  maxSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, maxSize));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::LinkedPool_1()   {
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::__cordl_internal_get_poolNext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolNext;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::__cordl_internal_get_poolNext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolNext;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::__cordl_internal_set_poolNext(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolNext = value;
}
template<typename T>
constexpr T& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1_LinkedPoolItem<T>::LinkedPool_1_LinkedPoolItem()   {
}
