#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportVolumeDestinationSettingsDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
CORDL_MODULE_EXPORT(TeleportVolumeDestinationSettingsDatum)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportVolumeDestinationSettings;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportVolumeDestinationSettingsDatum;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatum*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatum*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportVolumeDestinationSettingsDatum");
// [CreateAssetMenu(fileName = "TeleportVolumeDestinationSettings", menuName = "XR/Locomotion/Teleport Volume Destination Settings")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatum.html")]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatum
class CORDL_TYPE TeleportVolumeDestinationSettingsDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatum* New_ctor() ;

/// @brief Method .ctor, addr 0xb44f9d4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportVolumeDestinationSettingsDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportVolumeDestinationSettingsDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportVolumeDestinationSettingsDatum(TeleportVolumeDestinationSettingsDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportVolumeDestinationSettingsDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportVolumeDestinationSettingsDatum(TeleportVolumeDestinationSettingsDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11368};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatum) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
