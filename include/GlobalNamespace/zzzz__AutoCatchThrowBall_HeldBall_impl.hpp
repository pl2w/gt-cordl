#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoCatchThrowBall_HeldBall.hpp"
#include "GlobalNamespace/zzzz__AutoCatchThrowBall_HeldBall_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
// Ctor Parameters [CppParam { name: "held", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "catchTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "throwTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transferrable", ty: "::UnityW<::GlobalNamespace::TransferrableObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AutoCatchThrowBall_HeldBall::AutoCatchThrowBall_HeldBall(bool  held, float_t  catchTime, float_t  throwTime, ::UnityW<::GlobalNamespace::TransferrableObject>  transferrable) noexcept  {
this->held = held;
this->catchTime = catchTime;
this->throwTime = throwTime;
this->transferrable = transferrable;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoCatchThrowBall_HeldBall::AutoCatchThrowBall_HeldBall()   {
}
