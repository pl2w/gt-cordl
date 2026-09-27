#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/FollowPresetDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(FollowPresetDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class FollowPresetDatum;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class FollowPreset;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class FollowPresetDatumProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.UI.BodyUI", "FollowPresetDatumProperty");
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPresetDatumProperty
class CORDL_TYPE FollowPresetDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatum>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatum*  datum) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*  value) ;

/// @brief Method .ctor, addr 0xb444d18, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatum*  datum) ;

/// @brief Method .ctor, addr 0xb444cc0, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FollowPresetDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FollowPresetDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FollowPresetDatumProperty(FollowPresetDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FollowPresetDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FollowPresetDatumProperty(FollowPresetDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI::BodyUI
