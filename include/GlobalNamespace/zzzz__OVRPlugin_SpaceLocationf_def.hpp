#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceLocationf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceLocationf)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceLocationf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceLocationf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceLocationf, "", "OVRPlugin/SpaceLocationf");
// Dependencies OVRPlugin::Posef, OVRPlugin::SpaceLocationFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceLocationf
struct CORDL_TYPE OVRPlugin_SpaceLocationf {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceLocationf() ;

// Ctor Parameters [CppParam { name: "locationFlags", ty: "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceLocationf(::GlobalNamespace::OVRPlugin_SpaceLocationFlags  locationFlags, ::GlobalNamespace::OVRPlugin_Posef  pose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field locationFlags, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  locationFlags;

/// @brief Field pose, offset: 0x8, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  pose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceLocationf, locationFlags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceLocationf, pose) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceLocationf) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
