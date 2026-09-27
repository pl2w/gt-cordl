#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetEvaluatorEnabledAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(XRTargetEvaluatorEnabledAttribute)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetEvaluatorEnabledAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetEvaluatorEnabledAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluatorEnabledAttribute
class CORDL_TYPE XRTargetEvaluatorEnabledAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xb4a5124, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTargetEvaluatorEnabledAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTargetEvaluatorEnabledAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTargetEvaluatorEnabledAttribute(XRTargetEvaluatorEnabledAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTargetEvaluatorEnabledAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTargetEvaluatorEnabledAttribute(XRTargetEvaluatorEnabledAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluatorEnabledAttribute) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
