#pragma once
// IWYU pragma private; include "Oculus/Interaction/Collisions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Collisions)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class Collisions;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Collisions*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Collisions*, "Oculus.Interaction", "Collisions");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Collisions
class CORDL_TYPE Collisions : public ::System::Object {
public:
// Declarations
/// @brief Method ClosestPointToCollider, addr 0xa40024c, size 0x284, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointToCollider(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider) ;

/// @brief Method ClosestPointToColliders, addr 0xa400128, size 0x124, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointToColliders(::UnityEngine::Vector3  point, ::ArrayW<::UnityEngine::Collider*>  colliders) ;

/// [Obsolete("This method is not in use and will soon be deleted.")]
/// @brief Method IsCapsuleWithinColliderApprox, addr 0xa4004d0, size 0x210, virtual false, abstract: false, final false
static inline bool IsCapsuleWithinColliderApprox(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  radius, ::UnityEngine::Collider*  collider) ;

/// @brief Method IsPointWithinCollider, addr 0xa40073c, size 0x5c, virtual false, abstract: false, final false
static inline bool IsPointWithinCollider(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider) ;

/// @brief Method IsSphereWithinCollider, addr 0xa4006e0, size 0x5c, virtual false, abstract: false, final false
static inline bool IsSphereWithinCollider(::UnityEngine::Vector3  point, float_t  radius, ::UnityEngine::Collider*  collider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collisions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collisions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Collisions(Collisions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collisions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collisions(Collisions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15694};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Collisions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
