#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Visuals/HandGhost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HandGhost)
namespace Oculus::Interaction::HandGrab::Visuals {
class HandPuppet;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabPose;
}
namespace Oculus::Interaction::HandGrab {
class HandPose;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab::Visuals {
class HandGhost;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::Visuals::HandGhost*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::Visuals::HandGhost*, "Oculus.Interaction.HandGrab.Visuals", "HandGhost");
// [RequireComponent(typeof(Oculus.Interaction.HandGrab.Visuals.HandPuppet))]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::HandGrab::Visuals {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.Visuals.HandGhost
class CORDL_TYPE HandGhost : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Root)) ::UnityW<::UnityEngine::Transform>  Root;

/// @brief Field _handGrabPose, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabPose, put=__cordl_internal_set__handGrabPose)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>  _handGrabPose;

/// @brief Field _puppet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__puppet, put=__cordl_internal_set__puppet)) ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandPuppet>  _puppet;

/// @brief Field _root, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::UnityW<::UnityEngine::Transform>  _root;

/// @brief Method InjectAllHandGhost, addr 0xa4e5aa4, size 0x8, virtual false, abstract: false, final false
inline void InjectAllHandGhost(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*  puppet) ;

/// @brief Method InjectHandPuppet, addr 0xa4e5aac, size 0x8, virtual false, abstract: false, final false
inline void InjectHandPuppet(::Oculus::Interaction::HandGrab::Visuals::HandPuppet*  puppet) ;

/// @brief Method InjectOptionalHandGrabPose, addr 0xa4e5ab4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalHandGrabPose(::Oculus::Interaction::HandGrab::HandGrabPose*  handGrabPose) ;

/// @brief Method InjectOptionalRoot, addr 0xa4e5abc, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRoot(::UnityEngine::Transform*  root) ;

static inline ::Oculus::Interaction::HandGrab::Visuals::HandGhost* New_ctor() ;

/// @brief Method OnValidate, addr 0xa4e5574, size 0x120, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xa4e54e4, size 0x90, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetPose, addr 0xa4e5694, size 0x78, virtual false, abstract: false, final false
inline void SetPose(::Oculus::Interaction::HandGrab::HandGrabPose*  handGrabPose) ;

/// @brief Method SetPose, addr 0xa4e5a14, size 0x6c, virtual false, abstract: false, final false
inline void SetPose(::Oculus::Interaction::HandGrab::HandPose*  userPose, ::UnityEngine::Pose  rootPose) ;

/// @brief Method SetRootPose, addr 0xa4e5940, size 0xd4, virtual false, abstract: false, final false
inline void SetRootPose(::UnityEngine::Pose  rootPose, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method Start, addr 0xa4e570c, size 0x90, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> const& __cordl_internal_get__handGrabPose() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>& __cordl_internal_get__handGrabPose() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandPuppet> const& __cordl_internal_get__puppet() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandPuppet>& __cordl_internal_get__puppet() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__root() ;

constexpr void __cordl_internal_set__handGrabPose(::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>  value) ;

constexpr void __cordl_internal_set__puppet(::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandPuppet>  value) ;

constexpr void __cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4e5ac4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Root, addr 0xa4e54dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Root() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGhost() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGhost", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGhost(HandGhost && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGhost", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGhost(HandGhost const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16342};

/// [SerializeField]
/// @brief Field _puppet, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::Visuals::HandPuppet>  ____puppet;

/// [SerializeField]
/// [Optional]
/// @brief Field _root, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____root;

/// [SerializeField]
/// [Optional]
/// [FormerlySerializedAs("_handGrabPoint")]
/// @brief Field _handGrabPose, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>  ____handGrabPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandGhost, ____puppet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandGhost, ____root) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::Visuals::HandGhost, ____handGrabPose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::Visuals::HandGhost) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab::Visuals
