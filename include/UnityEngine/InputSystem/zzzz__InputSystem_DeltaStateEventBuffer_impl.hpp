#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSystem_DeltaStateEventBuffer.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_DeltaStateEventBuffer__data_e__FixedBuffer_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_DeltaStateEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_DeltaStateEventBuffer__data_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::DeltaStateEvent", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputSystem_DeltaStateEventBuffer::InputSystem_DeltaStateEventBuffer(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent  stateEvent, ::GlobalNamespace::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer  data) noexcept  {
this->stateEvent = stateEvent;
this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputSystem_DeltaStateEventBuffer::InputSystem_DeltaStateEventBuffer()   {
}
