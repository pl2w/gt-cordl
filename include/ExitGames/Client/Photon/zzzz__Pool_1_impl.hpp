#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Pool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Pool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
constexpr ::System::Func_1<T>*& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_createFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createFunction;
}
template<typename T>
constexpr ::System::Func_1<T>* const& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_createFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createFunction;
}
template<typename T>
constexpr void ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_set_createFunction(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createFunction = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>*& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>* const& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
template<typename T>
constexpr void ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_set_pool(::System::Collections::Generic::Queue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_resetFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetFunction;
}
template<typename T>
constexpr ::System::Action_1<T>* const& ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_get_resetFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetFunction;
}
template<typename T>
constexpr void ExitGames::Client::Photon::Pool_1<T>::__cordl_internal_set_resetFunction(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetFunction = value;
}
template<typename T>
inline void ExitGames::Client::Photon::Pool_1<T>::_ctor(::System::Func_1<T>*  createFunction, ::System::Action_1<T>*  resetFunction, int32_t  poolCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Pool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createFunction, resetFunction, poolCapacity);
}
template<typename T>
inline void ExitGames::Client::Photon::Pool_1<T>::_ctor(::System::Func_1<T>*  createFunction, int32_t  poolCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Pool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createFunction, poolCapacity);
}
template<typename T>
inline int32_t ExitGames::Client::Photon::Pool_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Pool_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void ExitGames::Client::Photon::Pool_1<T>::CreatePoolItems(int32_t  numItems)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Pool_1<T>*>(),
                        {"CreatePoolItems", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numItems);
}
template<typename T>
inline void ExitGames::Client::Photon::Pool_1<T>::Push(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Pool_1<T>*>(),
                        {"Push", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void ExitGames::Client::Photon::Pool_1<T>::Release(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Pool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline T ExitGames::Client::Photon::Pool_1<T>::Pop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Pool_1<T>*>(),
                        {"Pop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline T ExitGames::Client::Photon::Pool_1<T>::Acquire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Pool_1<T>*>(),
                        {"Acquire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::ExitGames::Client::Photon::Pool_1<T>* ExitGames::Client::Photon::Pool_1<T>::New_ctor(::System::Func_1<T>*  createFunction, ::System::Action_1<T>*  resetFunction, int32_t  poolCapacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::Pool_1<T>*>(createFunction, resetFunction, poolCapacity));
}
template<typename T>
inline ::ExitGames::Client::Photon::Pool_1<T>* ExitGames::Client::Photon::Pool_1<T>::New_ctor(::System::Func_1<T>*  createFunction, int32_t  poolCapacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::Pool_1<T>*>(createFunction, poolCapacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::ExitGames::Client::Photon::Pool_1<T>::Pool_1()   {
}
