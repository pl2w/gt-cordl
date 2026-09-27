#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_SpaceDiscoveryResultsData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDeserialize_SpaceDiscoveryResultsData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryResultsData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData, "", "OVRDeserialize/SpaceDiscoveryResultsData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/SpaceDiscoveryResultsData
struct CORDL_TYPE OVRDeserialize_SpaceDiscoveryResultsData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_SpaceDiscoveryResultsData() ;

// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_SpaceDiscoveryResultsData(uint64_t  RequestId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12627};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field RequestId, offset: 0x0, size: 0x8, def value: None
 uint64_t  RequestId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData, RequestId) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
