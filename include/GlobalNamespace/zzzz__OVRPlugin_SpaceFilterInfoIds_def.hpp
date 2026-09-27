#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceFilterInfoIds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceFilterInfoIds)
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceFilterInfoIds;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds, "", "OVRPlugin/SpaceFilterInfoIds");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceFilterInfoIds
struct CORDL_TYPE OVRPlugin_SpaceFilterInfoIds {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceFilterInfoIds() ;

// Ctor Parameters [CppParam { name: "Ids", ty: "::ArrayW<::System::Guid>", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumIds", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceFilterInfoIds(::ArrayW<::System::Guid>  Ids, int32_t  NumIds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Ids, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::System::Guid>  Ids;

/// @brief Field NumIds, offset: 0x8, size: 0x4, def value: None
 int32_t  NumIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds, Ids) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds, NumIds) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
