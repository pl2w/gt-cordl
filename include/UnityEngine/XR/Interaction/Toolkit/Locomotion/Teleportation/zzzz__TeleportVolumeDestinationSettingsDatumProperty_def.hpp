#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportVolumeDestinationSettingsDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(TeleportVolumeDestinationSettingsDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportVolumeDestinationSettingsDatum;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportVolumeDestinationSettings;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
class TeleportVolumeDestinationSettingsDatumProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "TeleportVolumeDestinationSettingsDatumProperty");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatumProperty
class CORDL_TYPE TeleportVolumeDestinationSettingsDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatum>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatum*  datum) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings*  value) ;

/// @brief Method .ctor, addr 0xb44fa1c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatum*  datum) ;

/// @brief Method .ctor, addr 0xb44f34c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportVolumeDestinationSettingsDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportVolumeDestinationSettingsDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportVolumeDestinationSettingsDatumProperty(TeleportVolumeDestinationSettingsDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportVolumeDestinationSettingsDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportVolumeDestinationSettingsDatumProperty(TeleportVolumeDestinationSettingsDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation
