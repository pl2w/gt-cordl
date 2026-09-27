#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/FloatAffordanceThemeDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
CORDL_MODULE_EXPORT(FloatAffordanceThemeDatum)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceTheme;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceThemeDatum;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatum*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatum*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "FloatAffordanceThemeDatum");
// [CreateAssetMenu(fileName = "FloatAffordanceTheme", menuName = "Affordance Theme/Float Affordance Theme", order = 0)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum
class CORDL_TYPE FloatAffordanceThemeDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatum* New_ctor() ;

/// @brief Method .ctor, addr 0xb4d1244, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatAffordanceThemeDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceThemeDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatAffordanceThemeDatum(FloatAffordanceThemeDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceThemeDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatAffordanceThemeDatum(FloatAffordanceThemeDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11714};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatum) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
