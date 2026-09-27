#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/FurthestTeleportationAnchorFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FurthestTeleportationAnchorFilter)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class ITeleportationVolumeAnchorFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportationMultiAnchorVolume;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class FurthestTeleportationAnchorFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "FurthestTeleportationAnchorFilter");
// [CreateAssetMenu(fileName = "FurthestTeleportationAnchorFilter", menuName = "XR/Locomotion/Furthest Teleportation Anchor Filter")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.FurthestTeleportationAnchorFilter.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.FurthestTeleportationAnchorFilter
class CORDL_TYPE FurthestTeleportationAnchorFilter : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*() noexcept;

/// @brief Method GetDestinationAnchorIndex, addr 0xb44d53c, size 0x11c, virtual true, abstract: false, final true
inline int32_t GetDestinationAnchorIndex(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  teleportationVolume) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter* New_ctor() ;

/// @brief Method .ctor, addr 0xb44d658, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Teleportation__ITeleportationVolumeAnchorFilter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FurthestTeleportationAnchorFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FurthestTeleportationAnchorFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FurthestTeleportationAnchorFilter(FurthestTeleportationAnchorFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FurthestTeleportationAnchorFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FurthestTeleportationAnchorFilter(FurthestTeleportationAnchorFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
