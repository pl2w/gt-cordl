#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/Vector3AffordanceThemeDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(Vector3AffordanceThemeDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class Vector3AffordanceThemeDatum;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class Vector3AffordanceTheme;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class Vector3AffordanceThemeDatumProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "Vector3AffordanceThemeDatumProperty");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatumProperty
class CORDL_TYPE Vector3AffordanceThemeDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceTheme*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatum>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatum*  datum) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceTheme*  value) ;

/// @brief Method .ctor, addr 0xb4d146c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatum*  datum) ;

/// @brief Method .ctor, addr 0xb4d1414, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceTheme*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector3AffordanceThemeDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector3AffordanceThemeDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3AffordanceThemeDatumProperty(Vector3AffordanceThemeDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3AffordanceThemeDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3AffordanceThemeDatumProperty(Vector3AffordanceThemeDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11719};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
