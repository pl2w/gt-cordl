#pragma once
// IWYU pragma private; include "GlobalNamespace/RigOwnedPhysicsBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(RigOwnedPhysicsBody)
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Pun {
class RigOwnedRigidbodyView;
}
namespace Photon::Pun {
class RigOwnedTransformView;
}
// Forward declare root types
namespace GlobalNamespace {
class RigOwnedPhysicsBody;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigOwnedPhysicsBody*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigOwnedPhysicsBody*, "", "RigOwnedPhysicsBody");
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigOwnedPhysicsBody
class CORDL_TYPE RigOwnedPhysicsBody : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field detachTransform, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_detachTransform, put=__cordl_internal_set_detachTransform)) bool  detachTransform;

/// @brief Field hasRig, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasRig, put=__cordl_internal_set_hasRig)) bool  hasRig;

/// @brief Field hasRigidbodyView, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasRigidbodyView, put=__cordl_internal_set_hasRigidbodyView)) bool  hasRigidbodyView;

/// @brief Field hasTransformView, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTransformView, put=__cordl_internal_set_hasTransformView)) bool  hasTransformView;

/// @brief Field otherComponents, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherComponents, put=__cordl_internal_set_otherComponents)) ::ArrayW<::UnityW<::Photon::Pun::MonoBehaviourPun>>  otherComponents;

/// @brief Field rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field rigidbodyView, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbodyView, put=__cordl_internal_set_rigidbodyView)) ::UnityW<::Photon::Pun::RigOwnedRigidbodyView>  rigidbodyView;

/// @brief Field transformView, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformView, put=__cordl_internal_set_transformView)) ::UnityW<::Photon::Pun::RigOwnedTransformView>  transformView;

/// @brief Method Awake, addr 0x5ac15c8, size 0x150, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::RigOwnedPhysicsBody* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ac1eb0, size 0x19c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ac1718, size 0x294, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnNetConnect, addr 0x5ac19ac, size 0x2f8, virtual false, abstract: false, final false
inline void OnNetConnect() ;

/// @brief Method OnNetDisconnect, addr 0x5ac1ca4, size 0x20c, virtual false, abstract: false, final false
inline void OnNetDisconnect() ;

constexpr bool const& __cordl_internal_get_detachTransform() const;

constexpr bool& __cordl_internal_get_detachTransform() ;

constexpr bool const& __cordl_internal_get_hasRig() const;

constexpr bool& __cordl_internal_get_hasRig() ;

constexpr bool const& __cordl_internal_get_hasRigidbodyView() const;

constexpr bool& __cordl_internal_get_hasRigidbodyView() ;

constexpr bool const& __cordl_internal_get_hasTransformView() const;

constexpr bool& __cordl_internal_get_hasTransformView() ;

constexpr ::ArrayW<::UnityW<::Photon::Pun::MonoBehaviourPun>> const& __cordl_internal_get_otherComponents() const;

constexpr ::ArrayW<::UnityW<::Photon::Pun::MonoBehaviourPun>>& __cordl_internal_get_otherComponents() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::Photon::Pun::RigOwnedRigidbodyView> const& __cordl_internal_get_rigidbodyView() const;

constexpr ::UnityW<::Photon::Pun::RigOwnedRigidbodyView>& __cordl_internal_get_rigidbodyView() ;

constexpr ::UnityW<::Photon::Pun::RigOwnedTransformView> const& __cordl_internal_get_transformView() const;

constexpr ::UnityW<::Photon::Pun::RigOwnedTransformView>& __cordl_internal_get_transformView() ;

constexpr void __cordl_internal_set_detachTransform(bool  value) ;

constexpr void __cordl_internal_set_hasRig(bool  value) ;

constexpr void __cordl_internal_set_hasRigidbodyView(bool  value) ;

constexpr void __cordl_internal_set_hasTransformView(bool  value) ;

constexpr void __cordl_internal_set_otherComponents(::ArrayW<::UnityW<::Photon::Pun::MonoBehaviourPun>>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rigidbodyView(::UnityW<::Photon::Pun::RigOwnedRigidbodyView>  value) ;

constexpr void __cordl_internal_set_transformView(::UnityW<::Photon::Pun::RigOwnedTransformView>  value) ;

/// @brief Method .ctor, addr 0x5ac204c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigOwnedPhysicsBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigOwnedPhysicsBody", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigOwnedPhysicsBody(RigOwnedPhysicsBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigOwnedPhysicsBody", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigOwnedPhysicsBody(RigOwnedPhysicsBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3342};

/// @brief Field rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field transformView, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::RigOwnedTransformView>  ___transformView;

/// @brief Field hasTransformView, offset: 0x30, size: 0x1, def value: None
 bool  ___hasTransformView;

/// @brief Field rigidbodyView, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::RigOwnedRigidbodyView>  ___rigidbodyView;

/// @brief Field hasRigidbodyView, offset: 0x40, size: 0x1, def value: None
 bool  ___hasRigidbodyView;

/// @brief Field otherComponents, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Photon::Pun::MonoBehaviourPun>>  ___otherComponents;

/// @brief Field hasRig, offset: 0x50, size: 0x1, def value: None
 bool  ___hasRig;

/// [Tooltip("To make a rigidbody unaffected by the movement of the holdable part, put this script on the holdable, make the RigOwnedRigidbodyView a child of it, and check this box")]
/// [SerializeField]
/// @brief Field detachTransform, offset: 0x51, size: 0x1, def value: None
 bool  ___detachTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigOwnedPhysicsBody, ___rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigOwnedPhysicsBody, ___transformView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigOwnedPhysicsBody, ___hasTransformView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigOwnedPhysicsBody, ___rigidbodyView) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigOwnedPhysicsBody, ___hasRigidbodyView) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigOwnedPhysicsBody, ___otherComponents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigOwnedPhysicsBody, ___hasRig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigOwnedPhysicsBody, ___detachTransform) == 0x51, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigOwnedPhysicsBody) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
