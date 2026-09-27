#pragma once
// IWYU pragma private; include "Meta/WitAi/ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
constexpr ::System::Func_1<T>*& Meta::WitAi::ObjectPool_1<T>::__cordl_internal_get__generator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generator;
}
template<typename T>
constexpr ::System::Func_1<T>* const& Meta::WitAi::ObjectPool_1<T>::__cordl_internal_get__generator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____generator;
}
template<typename T>
constexpr void Meta::WitAi::ObjectPool_1<T>::__cordl_internal_set__generator(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____generator = value;
}
template<typename T>
constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>*& Meta::WitAi::ObjectPool_1<T>::__cordl_internal_get__available()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____available;
}
template<typename T>
constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>* const& Meta::WitAi::ObjectPool_1<T>::__cordl_internal_get__available() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____available;
}
template<typename T>
constexpr void Meta::WitAi::ObjectPool_1<T>::__cordl_internal_set__available(::System::Collections::Concurrent::ConcurrentBag_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____available = value;
}
template<typename T>
inline void Meta::WitAi::ObjectPool_1<T>::_ctor(::System::Func_1<T>*  generator, int32_t  preload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ObjectPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, generator, preload);
}
template<typename T>
inline void Meta::WitAi::ObjectPool_1<T>::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ObjectPool_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Meta::WitAi::ObjectPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ObjectPool_1<T>*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Meta::WitAi::ObjectPool_1<T>::Return(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ObjectPool_1<T>*>(),
                        {"Return", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void Meta::WitAi::ObjectPool_1<T>::Preload(int32_t  total)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ObjectPool_1<T>*>(),
                        {"Preload", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, total);
}
template<typename T>
inline void Meta::WitAi::ObjectPool_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ObjectPool_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Meta::WitAi::ObjectPool_1<T>* Meta::WitAi::ObjectPool_1<T>::New_ctor(::System::Func_1<T>*  generator, int32_t  preload)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ObjectPool_1<T>*>(generator, preload));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Meta::WitAi::ObjectPool_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Meta::WitAi::ObjectPool_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::ObjectPool_1<T>::ObjectPool_1()   {
}
