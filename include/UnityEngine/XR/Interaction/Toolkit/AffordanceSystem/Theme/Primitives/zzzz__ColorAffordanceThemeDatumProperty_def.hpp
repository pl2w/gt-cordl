#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/ColorAffordanceThemeDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(ColorAffordanceThemeDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceThemeDatum;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceTheme;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceThemeDatumProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "ColorAffordanceThemeDatumProperty");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatumProperty
class CORDL_TYPE ColorAffordanceThemeDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum*  datum) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*  value) ;

/// @brief Method .ctor, addr 0xb4d10ac, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatum*  datum) ;

/// @brief Method .ctor, addr 0xb4d1054, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceTheme*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorAffordanceThemeDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceThemeDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorAffordanceThemeDatumProperty(ColorAffordanceThemeDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceThemeDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorAffordanceThemeDatumProperty(ColorAffordanceThemeDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11710};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
