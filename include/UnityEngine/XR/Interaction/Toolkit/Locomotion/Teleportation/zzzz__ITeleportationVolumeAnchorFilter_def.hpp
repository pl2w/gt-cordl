#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/ITeleportationVolumeAnchorFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITeleportationVolumeAnchorFilter)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationMultiAnchorVolume;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class ITeleportationVolumeAnchorFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "ITeleportationVolumeAnchorFilter");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.ITeleportationVolumeAnchorFilter
class CORDL_TYPE ITeleportationVolumeAnchorFilter {
public:
// Declarations
/// @brief Method GetDestinationAnchorIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetDestinationAnchorIndex(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  teleportationVolume) ;

// Ctor Parameters [CppParam { name: "", ty: "ITeleportationVolumeAnchorFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITeleportationVolumeAnchorFilter(ITeleportationVolumeAnchorFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11359};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
