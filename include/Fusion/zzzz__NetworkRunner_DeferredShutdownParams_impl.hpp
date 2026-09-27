#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_DeferredShutdownParams.hpp"
#include "Fusion/zzzz__ShutdownReason_impl.hpp"
#include "Fusion/zzzz__NetworkRunner_DeferredShutdownParams_def.hpp"
// Ctor Parameters [CppParam { name: "ShutdownRequested", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShutdownReason", ty: "::Fusion::ShutdownReason", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DestroyGO", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkRunner_DeferredShutdownParams::NetworkRunner_DeferredShutdownParams(bool  ShutdownRequested, ::Fusion::ShutdownReason  ShutdownReason, bool  DestroyGO) noexcept  {
this->ShutdownRequested = ShutdownRequested;
this->ShutdownReason = ShutdownReason;
this->DestroyGO = DestroyGO;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRunner_DeferredShutdownParams::NetworkRunner_DeferredShutdownParams()   {
}
