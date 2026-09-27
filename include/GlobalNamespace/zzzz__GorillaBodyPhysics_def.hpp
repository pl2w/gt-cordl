#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaBodyPhysics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GorillaBodyPhysics)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaBodyPhysics;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaBodyPhysics*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaBodyPhysics*, "", "GorillaBodyPhysics");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaBodyPhysics
class CORDL_TYPE GorillaBodyPhysics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bodyCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::GameObject>  bodyCollider;

/// @brief Field bodyColliderOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_bodyColliderOffset, put=__cordl_internal_set_bodyColliderOffset)) ::UnityEngine::Vector3  bodyColliderOffset;

/// @brief Field headsetTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_headsetTransform, put=__cordl_internal_set_headsetTransform)) ::UnityW<::UnityEngine::Transform>  headsetTransform;

/// @brief Method FixedUpdate, addr 0x579d2c8, size 0x64, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::GorillaBodyPhysics* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bodyCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyColliderOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyColliderOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headsetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headsetTransform() ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_bodyColliderOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headsetTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x579d32c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaBodyPhysics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaBodyPhysics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaBodyPhysics(GorillaBodyPhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaBodyPhysics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaBodyPhysics(GorillaBodyPhysics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1496};

/// @brief Field bodyCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___bodyCollider;

/// @brief Field bodyColliderOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bodyColliderOffset;

/// @brief Field headsetTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headsetTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaBodyPhysics, ___bodyCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyPhysics, ___bodyColliderOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyPhysics, ___headsetTransform) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaBodyPhysics) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
