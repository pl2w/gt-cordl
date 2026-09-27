#pragma once
// IWYU pragma private; include "System/Net/WebCompletionSource`1_Status.hpp"
#include "System/Net/zzzz__WebCompletionSource`1_Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1_Status<T>::WebCompletionSource_1_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1_Status<T>::WebCompletionSource_1_Status()   {
}
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1_Status<T>  GlobalNamespace::WebCompletionSource_1_Status<T>::Running{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1_Status<T>  GlobalNamespace::WebCompletionSource_1_Status<T>::Completed{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1_Status<T>  GlobalNamespace::WebCompletionSource_1_Status<T>::Canceled{static_cast<int32_t>(0x2)};
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1_Status<T>  GlobalNamespace::WebCompletionSource_1_Status<T>::Faulted{static_cast<int32_t>(0x3)};
