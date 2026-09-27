#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_StartColocationSessionAdvertisementCompleteData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_StartColocationSessionAdvertisementCompleteData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_StartColocationSessionAdvertisementCompleteData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, "", "OVRDeserialize/StartColocationSessionAdvertisementCompleteData");
// Dependencies OVRPlugin::EventType, OVRPlugin::Result, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/StartColocationSessionAdvertisementCompleteData
struct CORDL_TYPE OVRDeserialize_StartColocationSessionAdvertisementCompleteData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_StartColocationSessionAdvertisementCompleteData() ;

// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: None, comment: None }, CppParam { name: "AdvertisementUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_StartColocationSessionAdvertisementCompleteData(::GlobalNamespace::OVRPlugin_EventType  EventType, uint64_t  RequestId, ::GlobalNamespace::OVRPlugin_Result  Result, ::System::Guid  AdvertisementUuid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EventType  EventType;

/// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field Result, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Result  Result;

/// @brief Field AdvertisementUuid, offset: 0x14, size: 0x10, def value: None
 ::System::Guid  AdvertisementUuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, Result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData, AdvertisementUuid) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
