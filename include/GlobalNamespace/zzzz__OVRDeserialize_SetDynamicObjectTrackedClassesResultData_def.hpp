#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SetDynamicObjectTrackedClassesResultData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SetDynamicObjectTrackedClassesResultData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SetDynamicObjectTrackedClassesResultData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, "", "OVRDeserialize/SetDynamicObjectTrackedClassesResultData");
// Dependencies OVRPlugin::EventType, OVRPlugin::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SetDynamicObjectTrackedClassesResultData
struct CORDL_TYPE OVRDeserialize_SetDynamicObjectTrackedClassesResultData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SetDynamicObjectTrackedClassesResultData() ;

// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tracker", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SetDynamicObjectTrackedClassesResultData(::GlobalNamespace::OVRPlugin_EventType  EventType, uint64_t  Tracker, ::GlobalNamespace::OVRPlugin_Result  Result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12633};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EventType  EventType;

/// @brief Field Tracker, offset: 0x8, size: 0x8, def value: None
 uint64_t  Tracker;

/// @brief Field Result, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Result  Result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, Tracker) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData, Result) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
