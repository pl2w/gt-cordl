#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/ARGestureInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ARGestureInteractor)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR {
class ARGestureInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor*, "UnityEngine.XR.Interaction.Toolkit.AR", "ARGestureInteractor");
// [Obsolete("ARGestureInteractor has been replaced by the XRScreenspaceController and XRRayInteractor.")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AR {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor
class CORDL_TYPE ARGestureInteractor : public ::System::Object {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor* New_ctor() ;

/// @brief Method .ctor, addr 0xb4cf6ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ARGestureInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ARGestureInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ARGestureInteractor(ARGestureInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ARGestureInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ARGestureInteractor(ARGestureInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11700};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AR::ARGestureInteractor) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AR
