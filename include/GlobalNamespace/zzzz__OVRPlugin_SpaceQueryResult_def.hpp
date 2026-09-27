#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceQueryResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceQueryResult)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceQueryResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceQueryResult, "", "OVRPlugin/SpaceQueryResult");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceQueryResult
struct CORDL_TYPE OVRPlugin_SpaceQueryResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceQueryResult() ;

// Ctor Parameters [CppParam { name: "space", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceQueryResult(uint64_t  space, ::System::Guid  uuid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field space, offset: 0x0, size: 0x8, def value: None
 uint64_t  space;

/// @brief Field uuid, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  uuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryResult, space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceQueryResult, uuid) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceQueryResult) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
