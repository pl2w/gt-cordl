#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRRayProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRRayProvider)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRRayProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRRayProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider
class CORDL_TYPE IXRRayProvider {
public:
// Declarations
 __declspec(property(get=get_rayEndPoint)) ::UnityEngine::Vector3  rayEndPoint;

 __declspec(property(get=get_rayEndTransform)) ::UnityW<::UnityEngine::Transform>  rayEndTransform;

/// @brief Method GetOrCreateAttachTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> GetOrCreateAttachTransform() ;

/// @brief Method GetOrCreateRayOrigin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> GetOrCreateRayOrigin() ;

/// @brief Method SetAttachTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetAttachTransform(::UnityEngine::Transform*  newAttach) ;

/// @brief Method SetRayOrigin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetRayOrigin(::UnityEngine::Transform*  newOrigin) ;

/// @brief Method get_rayEndPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_rayEndPoint() ;

/// @brief Method get_rayEndTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_rayEndTransform() ;

// Ctor Parameters [CppParam { name: "", ty: "IXRRayProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRRayProvider(IXRRayProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11435};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
