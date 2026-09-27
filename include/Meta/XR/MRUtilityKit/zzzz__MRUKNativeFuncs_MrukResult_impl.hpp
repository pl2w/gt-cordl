#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukResult.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult::MRUKNativeFuncs_MrukResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult::MRUKNativeFuncs_MrukResult()   {
}
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorInvalidArgs{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorUnknown{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorInternal{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorDiscoveryOngoing{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorInvalidJson{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorNoRoomsFound{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorInsufficientResources{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorStorageAtCapacity{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorInsufficientView{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorPermissionInsufficient{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorRateLimited{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorTooDark{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukResult  GlobalNamespace::MRUKNativeFuncs_MrukResult::ErrorTooBright{static_cast<int32_t>(0xd)};
