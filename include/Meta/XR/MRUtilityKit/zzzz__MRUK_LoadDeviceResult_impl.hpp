#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_LoadDeviceResult.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult::MRUK_LoadDeviceResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult::MRUK_LoadDeviceResult()   {
}
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::NoScenePermission{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::NoRoomsFound{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::DiscoveryOngoing{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::Failure{static_cast<int32_t>(0xfffffc18)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::StorageAtCapacity{static_cast<int32_t>(0xffffdcd7)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::NotInitialized{static_cast<int32_t>(0xfffffc16)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::FailureDataIsInvalid{static_cast<int32_t>(0xfffffc10)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::FailureInsufficientResources{static_cast<int32_t>(0xffffdcd8)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::FailureInsufficientView{static_cast<int32_t>(0xffffdcd6)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::FailurePermissionInsufficient{static_cast<int32_t>(0xffffdcd5)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::FailureRateLimited{static_cast<int32_t>(0xffffdcd4)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::FailureTooDark{static_cast<int32_t>(0xffffdcd3)};
constexpr ::GlobalNamespace::MRUK_LoadDeviceResult  GlobalNamespace::MRUK_LoadDeviceResult::FailureTooBright{static_cast<int32_t>(0xffffdcd2)};
