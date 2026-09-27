#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaHandNode)
namespace GlobalNamespace {
class GorillaHandSocket;
}
namespace GlobalNamespace {
class VRMapIndex;
}
namespace GlobalNamespace {
class VRMapMiddle;
}
namespace GlobalNamespace {
class VRMapThumb;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaHandNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHandNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHandNode*, "", "GorillaHandNode");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHandNode
class CORDL_TYPE GorillaHandNode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _isLeftHand, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLeftHand, put=__cordl_internal_set__isLeftHand)) bool  _isLeftHand;

/// @brief Field _isRightHand, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRightHand, put=__cordl_internal_set__isRightHand)) bool  _isRightHand;

/// @brief Field attachedToSocket, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachedToSocket, put=__cordl_internal_set_attachedToSocket)) ::UnityW<::GlobalNamespace::GorillaHandSocket>  attachedToSocket;

/// @brief Field collider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field ignoreSockets, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreSockets, put=__cordl_internal_set_ignoreSockets)) bool  ignoreSockets;

 __declspec(property(get=get_isGripping)) bool  isGripping;

 __declspec(property(get=get_isLeftHand)) bool  isLeftHand;

 __declspec(property(get=get_isRightHand)) bool  isRightHand;

/// @brief Field rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field rigidbody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody, put=__cordl_internal_set_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

/// @brief Field vrIndex, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrIndex, put=__cordl_internal_set_vrIndex)) ::GlobalNamespace::VRMapIndex*  vrIndex;

/// @brief Field vrMiddle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrMiddle, put=__cordl_internal_set_vrMiddle)) ::GlobalNamespace::VRMapMiddle*  vrMiddle;

/// @brief Field vrThumb, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrThumb, put=__cordl_internal_set_vrThumb)) ::GlobalNamespace::VRMapThumb*  vrThumb;

/// @brief Method Awake, addr 0x590d4fc, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaHandNode* New_ctor() ;

/// @brief Method OnTriggerStay, addr 0x590d930, size 0x4, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method PollGrip, addr 0x590d434, size 0xb8, virtual false, abstract: false, final false
inline bool PollGrip() ;

/// @brief Method PollIndex, addr 0x590d8dc, size 0x3c, virtual false, abstract: false, final false
inline float_t PollIndex() ;

/// @brief Method PollMiddle, addr 0x590d918, size 0x18, virtual false, abstract: false, final false
inline float_t PollMiddle() ;

/// @brief Method PollThumb, addr 0x590d8c4, size 0x18, virtual false, abstract: false, final false
inline float_t PollThumb() ;

/// @brief Method Setup, addr 0x590d500, size 0x3c4, virtual false, abstract: false, final false
inline void Setup() ;

constexpr bool const& __cordl_internal_get__isLeftHand() const;

constexpr bool& __cordl_internal_get__isLeftHand() ;

constexpr bool const& __cordl_internal_get__isRightHand() const;

constexpr bool& __cordl_internal_get__isRightHand() ;

constexpr ::UnityW<::GlobalNamespace::GorillaHandSocket> const& __cordl_internal_get_attachedToSocket() const;

constexpr ::UnityW<::GlobalNamespace::GorillaHandSocket>& __cordl_internal_get_attachedToSocket() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider() ;

constexpr bool const& __cordl_internal_get_ignoreSockets() const;

constexpr bool& __cordl_internal_get_ignoreSockets() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody() ;

constexpr ::GlobalNamespace::VRMapIndex* const& __cordl_internal_get_vrIndex() const;

constexpr ::GlobalNamespace::VRMapIndex*& __cordl_internal_get_vrIndex() ;

constexpr ::GlobalNamespace::VRMapMiddle* const& __cordl_internal_get_vrMiddle() const;

constexpr ::GlobalNamespace::VRMapMiddle*& __cordl_internal_get_vrMiddle() ;

constexpr ::GlobalNamespace::VRMapThumb* const& __cordl_internal_get_vrThumb() const;

constexpr ::GlobalNamespace::VRMapThumb*& __cordl_internal_get_vrThumb() ;

constexpr void __cordl_internal_set__isLeftHand(bool  value) ;

constexpr void __cordl_internal_set__isRightHand(bool  value) ;

constexpr void __cordl_internal_set_attachedToSocket(::UnityW<::GlobalNamespace::GorillaHandSocket>  value) ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_ignoreSockets(bool  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_vrIndex(::GlobalNamespace::VRMapIndex*  value) ;

constexpr void __cordl_internal_set_vrMiddle(::GlobalNamespace::VRMapMiddle*  value) ;

constexpr void __cordl_internal_set_vrThumb(::GlobalNamespace::VRMapThumb*  value) ;

/// @brief Method .ctor, addr 0x590d428, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isGripping, addr 0x590d430, size 0x4, virtual false, abstract: false, final false
inline bool get_isGripping() ;

/// @brief Method get_isLeftHand, addr 0x590d4ec, size 0x8, virtual false, abstract: false, final false
inline bool get_isLeftHand() ;

/// @brief Method get_isRightHand, addr 0x590d4f4, size 0x8, virtual false, abstract: false, final false
inline bool get_isRightHand() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHandNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHandNode(GorillaHandNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHandNode(GorillaHandNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2170};

/// @brief Field rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field collider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___collider;

/// @brief Field rigidbody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidbody;

/// [Space]
/// @brief Field vrIndex, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::VRMapIndex*  ___vrIndex;

/// @brief Field vrThumb, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::VRMapThumb*  ___vrThumb;

/// @brief Field vrMiddle, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::VRMapMiddle*  ___vrMiddle;

/// [Space]
/// @brief Field attachedToSocket, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaHandSocket>  ___attachedToSocket;

/// [Space]
/// [SerializeField]
/// @brief Field _isLeftHand, offset: 0x58, size: 0x1, def value: None
 bool  ____isLeftHand;

/// [SerializeField]
/// @brief Field _isRightHand, offset: 0x59, size: 0x1, def value: None
 bool  ____isRightHand;

/// @brief Field ignoreSockets, offset: 0x5a, size: 0x1, def value: None
 bool  ___ignoreSockets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ___rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ___collider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ___rigidbody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ___vrIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ___vrThumb) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ___vrMiddle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ___attachedToSocket) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ____isLeftHand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ____isRightHand) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandNode, ___ignoreSockets) == 0x5a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHandNode) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
