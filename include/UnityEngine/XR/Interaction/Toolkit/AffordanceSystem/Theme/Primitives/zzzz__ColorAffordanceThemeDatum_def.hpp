#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/ColorAffordanceThemeDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
CORDL_MODULE_EXPORT(ColorAffordanceThemeDatum)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceTheme;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceThemeDatum;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "ColorAffordanceThemeDatum");
// [CreateAssetMenu(fileName = "ColorAffordanceTheme", menuName = "Affordance Theme/Color Affordance Theme", order = 0)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatum.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatum
class CORDL_TYPE ColorAffordanceThemeDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum* New_ctor() ;

/// @brief Method .ctor, addr 0xb4d1104, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorAffordanceThemeDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceThemeDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorAffordanceThemeDatum(ColorAffordanceThemeDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceThemeDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorAffordanceThemeDatum(ColorAffordanceThemeDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11711};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
