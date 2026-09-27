#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Result_1.hpp"
#include "Liv/Lck/Core/zzzz__CoreError_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "Liv/Lck/Core/zzzz__CoreError_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename T>
constexpr bool& Liv::Lck::Core::Result_1<T>::__cordl_internal_get__success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____success;
}
template<typename T>
constexpr bool const& Liv::Lck::Core::Result_1<T>::__cordl_internal_get__success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____success;
}
template<typename T>
constexpr void Liv::Lck::Core::Result_1<T>::__cordl_internal_set__success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____success = value;
}
template<typename T>
constexpr ::StringW& Liv::Lck::Core::Result_1<T>::__cordl_internal_get__message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
template<typename T>
constexpr ::StringW const& Liv::Lck::Core::Result_1<T>::__cordl_internal_get__message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
template<typename T>
constexpr void Liv::Lck::Core::Result_1<T>::__cordl_internal_set__message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____message = value;
}
template<typename T>
constexpr ::System::Nullable_1<::Liv::Lck::Core::CoreError>& Liv::Lck::Core::Result_1<T>::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename T>
constexpr ::System::Nullable_1<::Liv::Lck::Core::CoreError> const& Liv::Lck::Core::Result_1<T>::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename T>
constexpr void Liv::Lck::Core::Result_1<T>::__cordl_internal_set__error(::System::Nullable_1<::Liv::Lck::Core::CoreError>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
template<typename T>
constexpr T& Liv::Lck::Core::Result_1<T>::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
template<typename T>
constexpr T const& Liv::Lck::Core::Result_1<T>::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
template<typename T>
constexpr void Liv::Lck::Core::Result_1<T>::__cordl_internal_set__result(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
template<typename T>
inline bool Liv::Lck::Core::Result_1<T>::get_IsOk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Result_1<T>*>(),
                        {"get_IsOk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::StringW Liv::Lck::Core::Result_1<T>::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Result_1<T>*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline ::System::Nullable_1<::Liv::Lck::Core::CoreError> Liv::Lck::Core::Result_1<T>::get_Err()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Result_1<T>*>(),
                        {"get_Err", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Liv::Lck::Core::CoreError>>(this, ___internal_method);
}
template<typename T>
inline T Liv::Lck::Core::Result_1<T>::get_Ok()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Result_1<T>*>(),
                        {"get_Ok", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Liv::Lck::Core::Result_1<T>::_ctor(bool  success, ::StringW  message, ::System::Nullable_1<::Liv::Lck::Core::CoreError>  error, T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Result_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::Liv::Lck::Core::CoreError>>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, message, error, result);
}
template<typename T>
inline ::Liv::Lck::Core::Result_1<T>* Liv::Lck::Core::Result_1<T>::NewSuccess(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Result_1<T>*>(),
                        {"NewSuccess", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Result_1<T>*>(nullptr, ___internal_method, result);
}
template<typename T>
inline ::Liv::Lck::Core::Result_1<T>* Liv::Lck::Core::Result_1<T>::NewError(::Liv::Lck::Core::CoreError  error, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::Result_1<T>*>(),
                        {"NewError", {}, {::i2c::type_of<::Liv::Lck::Core::CoreError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Result_1<T>*>(nullptr, ___internal_method, error, message);
}
template<typename T>
inline ::Liv::Lck::Core::Result_1<T>* Liv::Lck::Core::Result_1<T>::New_ctor(bool  success, ::StringW  message, ::System::Nullable_1<::Liv::Lck::Core::CoreError>  error, T  result)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::Result_1<T>*>(success, message, error, result));
}
// Ctor Parameters []
template<typename T>
constexpr ::Liv::Lck::Core::Result_1<T>::Result_1()   {
}
