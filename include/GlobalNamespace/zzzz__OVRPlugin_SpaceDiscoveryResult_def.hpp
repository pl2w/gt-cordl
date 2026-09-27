#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceDiscoveryResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceDiscoveryResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult, "", "OVRPlugin/SpaceDiscoveryResult");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceDiscoveryResult
struct CORDL_TYPE OVRPlugin_SpaceDiscoveryResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceDiscoveryResult() ;

// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceDiscoveryResult(uint64_t  Space, ::System::Guid  Uuid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12242};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Space, offset: 0x0, size: 0x8, def value: None
 uint64_t  Space;

/// @brief Field Uuid, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  Uuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult, Uuid) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
