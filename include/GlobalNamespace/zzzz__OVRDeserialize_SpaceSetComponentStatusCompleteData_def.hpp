#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpaceSetComponentStatusCompleteData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SpaceSetComponentStatusCompleteData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSetComponentStatusCompleteData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, "", "OVRDeserialize/SpaceSetComponentStatusCompleteData");
// Dependencies OVRPlugin::SpaceComponentType, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceSetComponentStatusCompleteData
struct CORDL_TYPE OVRDeserialize_SpaceSetComponentStatusCompleteData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SpaceSetComponentStatusCompleteData() ;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SpaceSetComponentStatusCompleteData(uint64_t  RequestId, int32_t  Result, uint64_t  Space, ::System::Guid  Uuid, ::GlobalNamespace::OVRPlugin_SpaceComponentType  ComponentType, int32_t  Enabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Result, offset: 0x8, size: 0x4, def value: None
 int32_t  Result;

/// @brief Field Space, offset: 0x10, size: 0x8, def value: None
 uint64_t  Space;

/// @brief Field Uuid, offset: 0x18, size: 0x10, def value: None
 ::System::Guid  Uuid;

/// @brief Field ComponentType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceComponentType  ComponentType;

/// @brief Field Enabled, offset: 0x2c, size: 0x4, def value: None
 int32_t  Enabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, RequestId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, Result) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, Space) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, Uuid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, ComponentType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData, Enabled) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
