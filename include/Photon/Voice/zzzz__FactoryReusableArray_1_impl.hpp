#pragma once
// IWYU pragma private; include "Photon/Voice/FactoryReusableArray_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__FactoryReusableArray_1_def.hpp"
#include "Photon/Voice/zzzz__ObjectFactory_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::FactoryReusableArray_1<T>::__cordl_internal_get_arr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arr;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::FactoryReusableArray_1<T>::__cordl_internal_get_arr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arr;
}
template<typename T>
constexpr void Photon::Voice::FactoryReusableArray_1<T>::__cordl_internal_set_arr(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arr = value;
}
template<typename T>
inline void Photon::Voice::FactoryReusableArray_1<T>::_ctor(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FactoryReusableArray_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template<typename T>
inline int32_t Photon::Voice::FactoryReusableArray_1<T>::get_Info()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FactoryReusableArray_1<T>*>(),
                        {"get_Info", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::FactoryReusableArray_1<T>::New()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FactoryReusableArray_1<T>*>(),
                        {"New", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::FactoryReusableArray_1<T>::New(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FactoryReusableArray_1<T>*>(),
                        {"New", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, size);
}
template<typename T>
inline void Photon::Voice::FactoryReusableArray_1<T>::Free(::ArrayW<T>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FactoryReusableArray_1<T>*>(),
                        {"Free", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename T>
inline void Photon::Voice::FactoryReusableArray_1<T>::Free(::ArrayW<T>  obj, int32_t  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FactoryReusableArray_1<T>*>(),
                        {"Free", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, info);
}
template<typename T>
inline void Photon::Voice::FactoryReusableArray_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FactoryReusableArray_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::FactoryReusableArray_1<T>* Photon::Voice::FactoryReusableArray_1<T>::New_ctor(int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::FactoryReusableArray_1<T>*>(size));
}
/// @brief Convert operator to "::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>"
template<typename T>
constexpr  Photon::Voice::FactoryReusableArray_1<T>::operator ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*() noexcept {
return static_cast<::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>"
template<typename T>
constexpr ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>* Photon::Voice::FactoryReusableArray_1<T>::i___Photon__Voice__ObjectFactory_2___ArrayW_T__int32_t_() noexcept {
return static_cast<::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::FactoryReusableArray_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::FactoryReusableArray_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::FactoryReusableArray_1<T>::FactoryReusableArray_1()   {
}
