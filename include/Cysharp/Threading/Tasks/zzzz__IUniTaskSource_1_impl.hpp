#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskSource_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
template<typename T>
inline T Cysharp::Threading::Tasks::IUniTaskSource_1<T>::GetResult(int16_t  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, token);
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::IUniTaskSource_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::IUniTaskSource_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
