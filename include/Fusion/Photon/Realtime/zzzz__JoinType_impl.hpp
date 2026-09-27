#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/JoinType.hpp"
#include "Fusion/Photon/Realtime/zzzz__JoinType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::JoinType::JoinType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::JoinType::JoinType()   {
}
constexpr ::Fusion::Photon::Realtime::JoinType  Fusion::Photon::Realtime::JoinType::CreateRoom{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Photon::Realtime::JoinType  Fusion::Photon::Realtime::JoinType::JoinRoom{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Photon::Realtime::JoinType  Fusion::Photon::Realtime::JoinType::JoinRandomRoom{static_cast<int32_t>(0x2)};
constexpr ::Fusion::Photon::Realtime::JoinType  Fusion::Photon::Realtime::JoinType::JoinRandomOrCreateRoom{static_cast<int32_t>(0x3)};
constexpr ::Fusion::Photon::Realtime::JoinType  Fusion::Photon::Realtime::JoinType::JoinOrCreateRoom{static_cast<int32_t>(0x4)};
