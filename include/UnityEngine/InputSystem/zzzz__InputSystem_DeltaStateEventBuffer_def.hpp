#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSystem_DeltaStateEventBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_DeltaStateEventBuffer__data_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystem_DeltaStateEventBuffer)
namespace GlobalNamespace {
struct DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputSystem_DeltaStateEventBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputSystem_DeltaStateEventBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputSystem_DeltaStateEventBuffer, "UnityEngine.InputSystem", "InputSystem/DeltaStateEventBuffer");
// Dependencies UnityEngine.InputSystem.InputSystem::DeltaStateEventBuffer::<data>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.DeltaStateEvent
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSystem/DeltaStateEventBuffer
struct CORDL_TYPE InputSystem_DeltaStateEventBuffer {
public:
// Declarations
using _data_e__FixedBuffer = ::GlobalNamespace::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr InputSystem_DeltaStateEventBuffer() ;

// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::DeltaStateEvent", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr InputSystem_DeltaStateEventBuffer(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent  stateEvent, ::GlobalNamespace::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13420};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x21c};

/// @brief Field kMaxSize offset 0xffffffff size 0x4
static constexpr int32_t  kMaxSize{static_cast<int32_t>(0x200)};

/// @brief Field stateEvent, offset: 0x0, size: 0x1d, def value: None
 ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent  stateEvent;

/// [FixedBuffer(typeof(System.Byte), 511)]
/// @brief Field data, offset: 0x1d, size: 0x1ff, def value: None
 ::GlobalNamespace::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputSystem_DeltaStateEventBuffer, stateEvent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputSystem_DeltaStateEventBuffer, data) == 0x1d, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputSystem_DeltaStateEventBuffer) == 0x21c, "Size mismatch!");

} // namespace end def GlobalNamespace
