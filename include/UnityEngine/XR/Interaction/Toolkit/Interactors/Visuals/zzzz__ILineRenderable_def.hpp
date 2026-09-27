#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/ILineRenderable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ILineRenderable)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class ILineRenderable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "ILineRenderable");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ILineRenderable
class CORDL_TYPE ILineRenderable {
public:
// Declarations
/// @brief Method GetLinePoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetLinePoints(::by_ref<::ArrayW<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints) ;

/// @brief Method TryGetHitInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetHitInfo(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<int32_t>  positionInLine, ::by_ref<bool>  isValidTarget) ;

// Ctor Parameters [CppParam { name: "", ty: "ILineRenderable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILineRenderable(ILineRenderable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11488};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
