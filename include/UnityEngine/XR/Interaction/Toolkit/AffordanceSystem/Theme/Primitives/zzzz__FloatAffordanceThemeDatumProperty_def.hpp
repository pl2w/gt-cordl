#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/FloatAffordanceThemeDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(FloatAffordanceThemeDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceThemeDatum;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceTheme;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceThemeDatumProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "FloatAffordanceThemeDatumProperty");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatumProperty
class CORDL_TYPE FloatAffordanceThemeDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatum>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatum*  datum) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme*  value) ;

/// @brief Method .ctor, addr 0xb4d11ec, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatum*  datum) ;

/// @brief Method .ctor, addr 0xb4d1194, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatAffordanceThemeDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceThemeDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatAffordanceThemeDatumProperty(FloatAffordanceThemeDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceThemeDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatAffordanceThemeDatumProperty(FloatAffordanceThemeDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11713};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
