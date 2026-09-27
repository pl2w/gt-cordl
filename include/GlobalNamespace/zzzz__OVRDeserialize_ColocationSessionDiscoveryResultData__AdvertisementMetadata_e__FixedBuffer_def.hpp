#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_ColocationSessionDiscoveryResultData__AdvertisementMetadata_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_ColocationSessionDiscoveryResultData__AdvertisementMetadata_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer, "", "OVRDeserialize/ColocationSessionDiscoveryResultData/<AdvertisementMetadata>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/ColocationSessionDiscoveryResultData/<AdvertisementMetadata>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x400};

/// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
 uint8_t  FixedElementField;

/// @brief Size padding 0x400 - 0x1 = 0x3ff, packed as 0x3ff
 uint8_t  _cordl_size_padding[0x3ff];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer) == 0x400, "Size mismatch!");

} // namespace end def GlobalNamespace
