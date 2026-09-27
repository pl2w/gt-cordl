#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIORequestResultAnd_1.hpp"
#include "GlobalNamespace/zzzz__ModIORequestResult_impl.hpp"
#include "GlobalNamespace/zzzz__ModIORequestResultAnd_1_def.hpp"
template<typename T>
inline ::GlobalNamespace::ModIORequestResultAnd_1<T> GlobalNamespace::ModIORequestResultAnd_1<T>::CreateFailureResult(::StringW  inMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIORequestResultAnd_1<T>>(),
                        {"CreateFailureResult", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModIORequestResultAnd_1<T>>(nullptr, ___internal_method, inMessage);
}
template<typename T>
inline ::GlobalNamespace::ModIORequestResultAnd_1<T> GlobalNamespace::ModIORequestResultAnd_1<T>::CreateSuccessResult(T  payload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModIORequestResultAnd_1<T>>(),
                        {"CreateSuccessResult", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModIORequestResultAnd_1<T>>(nullptr, ___internal_method, payload);
}
// Ctor Parameters [CppParam { name: "result", ty: "::GlobalNamespace::ModIORequestResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ModIORequestResultAnd_1<T>::ModIORequestResultAnd_1(::GlobalNamespace::ModIORequestResult  result, T  data) noexcept  {
this->result = result;
this->data = data;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ModIORequestResultAnd_1<T>::ModIORequestResultAnd_1()   {
}
