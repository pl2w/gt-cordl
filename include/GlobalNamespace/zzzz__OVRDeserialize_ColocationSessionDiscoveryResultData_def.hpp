#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_ColocationSessionDiscoveryResultData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRDeserialize_ColocationSessionDiscoveryResultData__AdvertisementMetadata_e__FixedBuffer_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_ColocationSessionDiscoveryResultData)
namespace GlobalNamespace {
struct ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_ColocationSessionDiscoveryResultData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, "", "OVRDeserialize/ColocationSessionDiscoveryResultData");
// Dependencies OVRDeserialize::ColocationSessionDiscoveryResultData::<AdvertisementMetadata>e__FixedBuffer, OVRPlugin::EventType, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/ColocationSessionDiscoveryResultData
struct CORDL_TYPE OVRDeserialize_ColocationSessionDiscoveryResultData {
public:
// Declarations
using _AdvertisementMetadata_e__FixedBuffer = ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer;

// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_ColocationSessionDiscoveryResultData() ;

// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AdvertisementUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "AdvertisementMetadataCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AdvertisementMetadata", ty: "::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_ColocationSessionDiscoveryResultData(::GlobalNamespace::OVRPlugin_EventType  EventType, uint64_t  RequestId, ::System::Guid  AdvertisementUuid, uint32_t  AdvertisementMetadataCount, ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer  AdvertisementMetadata) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x428};

/// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_EventType  EventType;

/// @brief Field RequestId, offset: 0x8, size: 0x8, def value: None
 uint64_t  RequestId;

/// @brief Field AdvertisementUuid, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  AdvertisementUuid;

/// @brief Field AdvertisementMetadataCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  AdvertisementMetadataCount;

/// [FixedBuffer(typeof(System.Byte), 1024)]
/// @brief Field AdvertisementMetadata, offset: 0x24, size: 0x400, def value: None
 ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer  AdvertisementMetadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, EventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, RequestId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, AdvertisementUuid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, AdvertisementMetadataCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData, AdvertisementMetadata) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData) == 0x428, "Size mismatch!");

} // namespace end def GlobalNamespace
