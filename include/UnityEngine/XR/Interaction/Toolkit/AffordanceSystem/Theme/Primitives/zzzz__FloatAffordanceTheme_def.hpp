#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/FloatAffordanceTheme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__BaseAffordanceTheme_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatAffordanceTheme)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceTheme;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "FloatAffordanceTheme");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceTheme
class CORDL_TYPE FloatAffordanceTheme : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<float_t> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme* New_ctor() ;

/// @brief Method .ctor, addr 0xb4d114c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatAffordanceTheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceTheme", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatAffordanceTheme(FloatAffordanceTheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceTheme", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatAffordanceTheme(FloatAffordanceTheme const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11712};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceTheme) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
