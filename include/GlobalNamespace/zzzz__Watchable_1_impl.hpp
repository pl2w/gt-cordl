#pragma once
// IWYU pragma private; include "GlobalNamespace/Watchable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Watchable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
constexpr T& GlobalNamespace::Watchable_1<T>::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
template<typename T>
constexpr T const& GlobalNamespace::Watchable_1<T>::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
template<typename T>
constexpr void GlobalNamespace::Watchable_1<T>::__cordl_internal_set__value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::System::Action_1<T>*>*& GlobalNamespace::Watchable_1<T>::__cordl_internal_get_callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::System::Action_1<T>*>* const& GlobalNamespace::Watchable_1<T>::__cordl_internal_get_callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
template<typename T>
constexpr void GlobalNamespace::Watchable_1<T>::__cordl_internal_set_callbacks(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbacks = value;
}
template<typename T>
inline T GlobalNamespace::Watchable_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Watchable_1<T>*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Watchable_1<T>::set_value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Watchable_1<T>*>(),
                        {"set_value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void GlobalNamespace::Watchable_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Watchable_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::Watchable_1<T>::_ctor(T  initial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Watchable_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initial);
}
template<typename T>
inline void GlobalNamespace::Watchable_1<T>::AddCallback(::System::Action_1<T>*  callback, bool  shouldCallbackNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Watchable_1<T>*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, shouldCallbackNow);
}
template<typename T>
inline void GlobalNamespace::Watchable_1<T>::RemoveCallback(::System::Action_1<T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Watchable_1<T>*>(),
                        {"RemoveCallback", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename T>
inline ::GlobalNamespace::Watchable_1<T>* GlobalNamespace::Watchable_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Watchable_1<T>*>());
}
template<typename T>
inline ::GlobalNamespace::Watchable_1<T>* GlobalNamespace::Watchable_1<T>::New_ctor(T  initial)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Watchable_1<T>*>(initial));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Watchable_1<T>::Watchable_1()   {
}
