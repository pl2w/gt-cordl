#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncRigidBodyToMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SyncRigidBodyToMovement)
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncRigidBodyToMovement;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SyncRigidBodyToMovement*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SyncRigidBodyToMovement*, "", "SyncRigidBodyToMovement");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SyncRigidBodyToMovement
class CORDL_TYPE SyncRigidBodyToMovement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field targetParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetParent, put=__cordl_internal_set_targetParent)) ::UnityW<::UnityEngine::Transform>  targetParent;

/// @brief Field targetRigidbody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRigidbody, put=__cordl_internal_set_targetRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  targetRigidbody;

/// @brief Method Awake, addr 0x5989d08, size 0x88, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5989e6c, size 0x18c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::SyncRigidBodyToMovement* New_ctor() ;

/// @brief Method OnDisable, addr 0x5989e40, size 0x2c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5989d90, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetParent() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_targetRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_targetRigidbody() ;

constexpr void __cordl_internal_set_targetParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x5989ff8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncRigidBodyToMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncRigidBodyToMovement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncRigidBodyToMovement(SyncRigidBodyToMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncRigidBodyToMovement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncRigidBodyToMovement(SyncRigidBodyToMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2559};

/// [SerializeField]
/// @brief Field targetRigidbody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___targetRigidbody;

/// @brief Field targetParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SyncRigidBodyToMovement, ___targetRigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncRigidBodyToMovement, ___targetParent) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SyncRigidBodyToMovement) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
