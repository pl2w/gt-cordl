#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceDiscoveryResults)
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryResults;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults, "", "OVRPlugin/SpaceDiscoveryResults");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceDiscoveryResults
struct CORDL_TYPE OVRPlugin_SpaceDiscoveryResults {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceDiscoveryResults() ;

// Ctor Parameters [CppParam { name: "ResultCapacityInput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResultCountOutput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Results", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult*", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceDiscoveryResults(uint32_t  ResultCapacityInput, uint32_t  ResultCountOutput, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult*  Results) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12243};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ResultCapacityInput, offset: 0x0, size: 0x4, def value: None
 uint32_t  ResultCapacityInput;

/// @brief Field ResultCountOutput, offset: 0x4, size: 0x4, def value: None
 uint32_t  ResultCountOutput;

/// @brief Field Results, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult*  Results;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults, ResultCapacityInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults, ResultCountOutput) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults, Results) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
