#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceMarkerPayload.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceMarkerPayloadType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceMarkerPayload)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceMarkerPayload;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceMarkerPayload);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceMarkerPayload, "", "OVRPlugin/SpaceMarkerPayload");
// Dependencies OVRPlugin::SpaceMarkerPayloadType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceMarkerPayload
struct CORDL_TYPE OVRPlugin_SpaceMarkerPayload {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceMarkerPayload() ;

// Ctor Parameters [CppParam { name: "BufferCapacityInput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BufferCountOutput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buffer", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PayloadType", ty: "::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceMarkerPayload(uint32_t  BufferCapacityInput, uint32_t  BufferCountOutput, uint8_t*  Buffer, ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType  PayloadType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12262};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field BufferCapacityInput, offset: 0x0, size: 0x4, def value: None
 uint32_t  BufferCapacityInput;

/// @brief Field BufferCountOutput, offset: 0x4, size: 0x4, def value: None
 uint32_t  BufferCountOutput;

/// @brief Field Buffer, offset: 0x8, size: 0x8, def value: None
 uint8_t*  Buffer;

/// @brief Field PayloadType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType  PayloadType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceMarkerPayload, BufferCapacityInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceMarkerPayload, BufferCountOutput) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceMarkerPayload, Buffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceMarkerPayload, PayloadType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceMarkerPayload) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
