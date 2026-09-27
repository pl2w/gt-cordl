#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSystem_StateEventBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_StateEventBuffer__data_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystem_StateEventBuffer)
namespace GlobalNamespace {
struct StateEventBuffer_InputSystem__data_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputSystem_StateEventBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputSystem_StateEventBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputSystem_StateEventBuffer, "UnityEngine.InputSystem", "InputSystem/StateEventBuffer");
// Dependencies UnityEngine.InputSystem.InputSystem::StateEventBuffer::<data>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.StateEvent
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSystem/StateEventBuffer
struct CORDL_TYPE InputSystem_StateEventBuffer {
public:
// Declarations
using _data_e__FixedBuffer = ::GlobalNamespace::StateEventBuffer_InputSystem__data_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr InputSystem_StateEventBuffer() ;

// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::StateEvent", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::StateEventBuffer_InputSystem__data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr InputSystem_StateEventBuffer(::UnityEngine::InputSystem::LowLevel::StateEvent  stateEvent, ::GlobalNamespace::StateEventBuffer_InputSystem__data_e__FixedBuffer  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x218};

/// @brief Field kMaxSize offset 0xffffffff size 0x4
static constexpr int32_t  kMaxSize{static_cast<int32_t>(0x200)};

/// @brief Field stateEvent, offset: 0x0, size: 0x19, def value: None
 ::UnityEngine::InputSystem::LowLevel::StateEvent  stateEvent;

/// [FixedBuffer(typeof(System.Byte), 511)]
/// @brief Field data, offset: 0x19, size: 0x1ff, def value: None
 ::GlobalNamespace::StateEventBuffer_InputSystem__data_e__FixedBuffer  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputSystem_StateEventBuffer, stateEvent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputSystem_StateEventBuffer, data) == 0x19, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputSystem_StateEventBuffer) == 0x218, "Size mismatch!");

} // namespace end def GlobalNamespace
