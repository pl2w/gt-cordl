#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequest_Result.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityWebRequest_Result::UnityWebRequest_Result(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityWebRequest_Result::UnityWebRequest_Result()   {
}
constexpr ::GlobalNamespace::UnityWebRequest_Result  GlobalNamespace::UnityWebRequest_Result::InProgress{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UnityWebRequest_Result  GlobalNamespace::UnityWebRequest_Result::Success{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UnityWebRequest_Result  GlobalNamespace::UnityWebRequest_Result::ConnectionError{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::UnityWebRequest_Result  GlobalNamespace::UnityWebRequest_Result::ProtocolError{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::UnityWebRequest_Result  GlobalNamespace::UnityWebRequest_Result::DataProcessingError{static_cast<int32_t>(0x4)};
