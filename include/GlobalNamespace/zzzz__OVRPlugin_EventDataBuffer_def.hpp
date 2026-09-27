#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_EventDataBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_EventDataBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_EventDataBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_EventDataBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_EventDataBuffer, "", "OVRPlugin/EventDataBuffer");
// Dependencies OVRPlugin::EventType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/EventDataBuffer
struct CORDL_TYPE OVRPlugin_EventDataBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_EventDataBuffer() ;

// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "EventData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_EventDataBuffer(::GlobalNamespace::OVRPlugin_EventType  EventType, ::ArrayW<uint8_t>  EventData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EventType  EventType;

/// @brief Field EventData, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  EventData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_EventDataBuffer, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_EventDataBuffer, EventData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_EventDataBuffer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
