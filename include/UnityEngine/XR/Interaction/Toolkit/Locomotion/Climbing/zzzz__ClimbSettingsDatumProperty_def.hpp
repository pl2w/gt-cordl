#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbSettingsDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(ClimbSettingsDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbSettingsDatum;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbSettings;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
class ClimbSettingsDatumProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing", "ClimbSettingsDatumProperty");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbSettingsDatumProperty
class CORDL_TYPE ClimbSettingsDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum*  datum) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings*  value) ;

/// @brief Method .ctor, addr 0xb458460, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatum*  datum) ;

/// @brief Method .ctor, addr 0xb457938, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClimbSettingsDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClimbSettingsDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClimbSettingsDatumProperty(ClimbSettingsDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClimbSettingsDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClimbSettingsDatumProperty(ClimbSettingsDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing
