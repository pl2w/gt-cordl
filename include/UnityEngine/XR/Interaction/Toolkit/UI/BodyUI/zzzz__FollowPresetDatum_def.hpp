#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/FollowPresetDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
CORDL_MODULE_EXPORT(FollowPresetDatum)
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class FollowPreset;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
class FollowPresetDatum;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatum*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatum*, "UnityEngine.XR.Interaction.Toolkit.UI.BodyUI", "FollowPresetDatum");
// [CreateAssetMenu(fileName = "Follow Preset Datum", menuName = "XR/Value Datums/Body UI Follow Preset Datum", order = 0)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPresetDatum.html")]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::UI::BodyUI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPresetDatum
class CORDL_TYPE FollowPresetDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPreset*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatum* New_ctor() ;

/// @brief Method .ctor, addr 0xb444d70, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FollowPresetDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FollowPresetDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FollowPresetDatum(FollowPresetDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FollowPresetDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FollowPresetDatum(FollowPresetDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::BodyUI::FollowPresetDatum) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI::BodyUI
