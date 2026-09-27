#pragma once
// IWYU pragma private; include "Oculus/Interaction/ICollidersRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ICollidersRef)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Oculus::Interaction {
class ICollidersRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ICollidersRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ICollidersRef*, "Oculus.Interaction", "ICollidersRef");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ICollidersRef
class CORDL_TYPE ICollidersRef {
public:
// Declarations
 __declspec(property(get=get_Colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  Colliders;

/// @brief Method get_Colliders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> get_Colliders() ;

// Ctor Parameters [CppParam { name: "", ty: "ICollidersRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICollidersRef(ICollidersRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
