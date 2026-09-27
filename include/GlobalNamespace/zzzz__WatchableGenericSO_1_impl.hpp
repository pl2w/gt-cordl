#pragma once
// IWYU pragma private; include "GlobalNamespace/WatchableGenericSO_1.hpp"
#include "GlobalNamespace/zzzz__EnterPlayID_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__WatchableGenericSO_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
constexpr T& GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_get_InitialValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialValue;
}
template<typename T>
constexpr T const& GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_get_InitialValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialValue;
}
template<typename T>
constexpr void GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_set_InitialValue(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialValue = value;
}
template<typename T>
constexpr T& GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_get___value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____value_k__BackingField;
}
template<typename T>
constexpr T const& GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_get___value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____value_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_set___value_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____value_k__BackingField = value;
}
template<typename T>
constexpr ::GlobalNamespace::EnterPlayID& GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_get_enterPlayID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPlayID;
}
template<typename T>
constexpr ::GlobalNamespace::EnterPlayID const& GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_get_enterPlayID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPlayID;
}
template<typename T>
constexpr void GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_set_enterPlayID(::GlobalNamespace::EnterPlayID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterPlayID = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::System::Action_1<T>*>*& GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_get_callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::System::Action_1<T>*>* const& GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_get_callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
template<typename T>
constexpr void GlobalNamespace::WatchableGenericSO_1<T>::__cordl_internal_set_callbacks(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbacks = value;
}
template<typename T>
inline T GlobalNamespace::WatchableGenericSO_1<T>::get__value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableGenericSO_1<T>*>(),
                        {"get__value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::WatchableGenericSO_1<T>::set__value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableGenericSO_1<T>*>(),
                        {"set__value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T GlobalNamespace::WatchableGenericSO_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableGenericSO_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::WatchableGenericSO_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableGenericSO_1<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void GlobalNamespace::WatchableGenericSO_1<T>::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableGenericSO_1<T>*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::WatchableGenericSO_1<T>::AddCallback(::System::Action_1<T>*  callback, bool  shouldCallbackNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableGenericSO_1<T>*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, shouldCallbackNow);
}
template<typename T>
inline void GlobalNamespace::WatchableGenericSO_1<T>::RemoveCallback(::System::Action_1<T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableGenericSO_1<T>*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename T>
inline void GlobalNamespace::WatchableGenericSO_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WatchableGenericSO_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::WatchableGenericSO_1<T>* GlobalNamespace::WatchableGenericSO_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WatchableGenericSO_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::WatchableGenericSO_1<T>::WatchableGenericSO_1()   {
}
