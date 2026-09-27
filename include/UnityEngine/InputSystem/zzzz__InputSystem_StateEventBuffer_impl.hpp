#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSystem_StateEventBuffer.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_StateEventBuffer__data_e__FixedBuffer_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_StateEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_StateEventBuffer__data_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::StateEvent", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::StateEventBuffer_InputSystem__data_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputSystem_StateEventBuffer::InputSystem_StateEventBuffer(::UnityEngine::InputSystem::LowLevel::StateEvent  stateEvent, ::GlobalNamespace::StateEventBuffer_InputSystem__data_e__FixedBuffer  data) noexcept  {
this->stateEvent = stateEvent;
this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputSystem_StateEventBuffer::InputSystem_StateEventBuffer()   {
}
