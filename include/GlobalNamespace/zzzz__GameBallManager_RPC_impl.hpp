#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallManager_RPC.hpp"
#include "GlobalNamespace/zzzz__GameBallManager_RPC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameBallManager_RPC::GameBallManager_RPC(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBallManager_RPC::GameBallManager_RPC()   {
}
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::RequestGrabBall{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::GrabBall{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::RequestThrowBall{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::ThrowBall{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::RequestLaunchBall{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::LaunchBall{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::TeleportBall{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::RequestSetBallPosition{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GameBallManager_RPC  GlobalNamespace::GameBallManager_RPC::Count{static_cast<int32_t>(0x8)};
