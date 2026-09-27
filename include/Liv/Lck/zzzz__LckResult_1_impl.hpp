#pragma once
// IWYU pragma private; include "Liv/Lck/LckResult_1.hpp"
#include "Liv/Lck/zzzz__LckError_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__ILckResult_def.hpp"
#include "Liv/Lck/zzzz__LckError_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename T>
constexpr bool& Liv::Lck::LckResult_1<T>::__cordl_internal_get__success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____success;
}
template<typename T>
constexpr bool const& Liv::Lck::LckResult_1<T>::__cordl_internal_get__success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____success;
}
template<typename T>
constexpr void Liv::Lck::LckResult_1<T>::__cordl_internal_set__success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____success = value;
}
template<typename T>
constexpr ::StringW& Liv::Lck::LckResult_1<T>::__cordl_internal_get__message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
template<typename T>
constexpr ::StringW const& Liv::Lck::LckResult_1<T>::__cordl_internal_get__message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
template<typename T>
constexpr void Liv::Lck::LckResult_1<T>::__cordl_internal_set__message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____message = value;
}
template<typename T>
constexpr ::System::Nullable_1<::Liv::Lck::LckError>& Liv::Lck::LckResult_1<T>::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename T>
constexpr ::System::Nullable_1<::Liv::Lck::LckError> const& Liv::Lck::LckResult_1<T>::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename T>
constexpr void Liv::Lck::LckResult_1<T>::__cordl_internal_set__error(::System::Nullable_1<::Liv::Lck::LckError>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
template<typename T>
constexpr T& Liv::Lck::LckResult_1<T>::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
template<typename T>
constexpr T const& Liv::Lck::LckResult_1<T>::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
template<typename T>
constexpr void Liv::Lck::LckResult_1<T>::__cordl_internal_set__result(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
template<typename T>
inline bool Liv::Lck::LckResult_1<T>::get_Success()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult_1<T>*>(),
                        {"get_Success", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::StringW Liv::Lck::LckResult_1<T>::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult_1<T>*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline ::System::Nullable_1<::Liv::Lck::LckError> Liv::Lck::LckResult_1<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult_1<T>*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Liv::Lck::LckError>>(this, ___internal_method);
}
template<typename T>
inline T Liv::Lck::LckResult_1<T>::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult_1<T>*>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Liv::Lck::LckResult_1<T>::_ctor(bool  success, ::StringW  message, ::System::Nullable_1<::Liv::Lck::LckError>  error, T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::Liv::Lck::LckError>>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, message, error, result);
}
template<typename T>
inline ::Liv::Lck::LckResult_1<T>* Liv::Lck::LckResult_1<T>::NewSuccess(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult_1<T>*>(),
                        {"NewSuccess", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<T>*>(nullptr, ___internal_method, result);
}
template<typename T>
inline ::Liv::Lck::LckResult_1<T>* Liv::Lck::LckResult_1<T>::NewError(::Liv::Lck::LckError  error, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult_1<T>*>(),
                        {"NewError", {}, {::i2c::type_of<::Liv::Lck::LckError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<T>*>(nullptr, ___internal_method, error, message);
}
template<typename T>
inline ::Liv::Lck::LckResult_1<T>* Liv::Lck::LckResult_1<T>::New_ctor(bool  success, ::StringW  message, ::System::Nullable_1<::Liv::Lck::LckError>  error, T  result)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckResult_1<T>*>(success, message, error, result));
}
/// @brief Convert operator to "::Liv::Lck::ILckResult"
template<typename T>
constexpr  Liv::Lck::LckResult_1<T>::operator ::Liv::Lck::ILckResult*() noexcept {
return static_cast<::Liv::Lck::ILckResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckResult"
template<typename T>
constexpr ::Liv::Lck::ILckResult* Liv::Lck::LckResult_1<T>::i___Liv__Lck__ILckResult() noexcept {
return static_cast<::Liv::Lck::ILckResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Liv::Lck::LckResult_1<T>::LckResult_1()   {
}
