#pragma once
// IWYU pragma private; include "Pathfinding/AnimationLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__NodeLink2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationLink)
namespace Pathfinding {
class AnimationLink_LinkClip;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class AnimationLink;
}
namespace Pathfinding {
class AnimationLink_LinkClip;
}
// Write type traits
MARK_REF_T(::Pathfinding::AnimationLink*);
MARK_REF_T(::Pathfinding::AnimationLink_LinkClip*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AnimationLink*, "Pathfinding", "AnimationLink");
DEFINE_IL2CPP_CLASS(::Pathfinding::AnimationLink_LinkClip*, "Pathfinding", "AnimationLink/LinkClip");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_animation_link.php")]
// Dependencies Pathfinding.AnimationLink::LinkClip, Pathfinding.NodeLink2
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AnimationLink
class CORDL_TYPE AnimationLink : public ::Pathfinding::NodeLink2 {
public:
// Declarations
using LinkClip = ::Pathfinding::AnimationLink_LinkClip;

/// @brief Field animSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_animSpeed, put=__cordl_internal_set_animSpeed)) float_t  animSpeed;

/// @brief Field boneRoot, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneRoot, put=__cordl_internal_set_boneRoot)) ::StringW  boneRoot;

/// @brief Field clip, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::StringW  clip;

/// @brief Field referenceMesh, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_referenceMesh, put=__cordl_internal_set_referenceMesh)) ::UnityW<::UnityEngine::GameObject>  referenceMesh;

/// @brief Field reverseAnim, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseAnim, put=__cordl_internal_set_reverseAnim)) bool  reverseAnim;

/// @brief Field sequence, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequence, put=__cordl_internal_set_sequence)) ::ArrayW<::Pathfinding::AnimationLink_LinkClip*>  sequence;

/// @brief Method CalculateOffsets, addr 0x5e52ab8, size 0x7b4, virtual false, abstract: false, final false
inline void CalculateOffsets(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  trace, ::by_ref<::UnityEngine::Vector3>  endPosition) ;

static inline ::Pathfinding::AnimationLink* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5e5326c, size 0x1a0, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method SearchRec, addr 0x5e529c4, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> SearchRec(::UnityEngine::Transform*  tr, ::StringW  name) ;

constexpr float_t const& __cordl_internal_get_animSpeed() const;

constexpr float_t& __cordl_internal_get_animSpeed() ;

constexpr ::StringW const& __cordl_internal_get_boneRoot() const;

constexpr ::StringW& __cordl_internal_get_boneRoot() ;

constexpr ::StringW const& __cordl_internal_get_clip() const;

constexpr ::StringW& __cordl_internal_get_clip() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_referenceMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_referenceMesh() ;

constexpr bool const& __cordl_internal_get_reverseAnim() const;

constexpr bool& __cordl_internal_get_reverseAnim() ;

constexpr ::ArrayW<::Pathfinding::AnimationLink_LinkClip*> const& __cordl_internal_get_sequence() const;

constexpr ::ArrayW<::Pathfinding::AnimationLink_LinkClip*>& __cordl_internal_get_sequence() ;

constexpr void __cordl_internal_set_animSpeed(float_t  value) ;

constexpr void __cordl_internal_set_boneRoot(::StringW  value) ;

constexpr void __cordl_internal_set_clip(::StringW  value) ;

constexpr void __cordl_internal_set_referenceMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_reverseAnim(bool  value) ;

constexpr void __cordl_internal_set_sequence(::ArrayW<::Pathfinding::AnimationLink_LinkClip*>  value) ;

/// @brief Method .ctor, addr 0x5e5340c, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationLink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationLink(AnimationLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationLink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationLink(AnimationLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21234};

/// @brief Field clip, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___clip;

/// @brief Field animSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___animSpeed;

/// @brief Field reverseAnim, offset: 0x9c, size: 0x1, def value: None
 bool  ___reverseAnim;

/// @brief Field referenceMesh, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___referenceMesh;

/// @brief Field sequence, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::AnimationLink_LinkClip*>  ___sequence;

/// @brief Field boneRoot, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___boneRoot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AnimationLink, ___clip) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AnimationLink, ___animSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AnimationLink, ___reverseAnim) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AnimationLink, ___referenceMesh) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AnimationLink, ___sequence) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AnimationLink, ___boneRoot) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AnimationLink) == 0xb8, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AnimationLink/LinkClip
class CORDL_TYPE AnimationLink_LinkClip : public ::System::Object {
public:
// Declarations
/// @brief Field clip, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::UnityW<::UnityEngine::AnimationClip>  clip;

/// @brief Field loopCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopCount, put=__cordl_internal_set_loopCount)) int32_t  loopCount;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Field velocity, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

static inline ::Pathfinding::AnimationLink_LinkClip* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_clip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_clip() ;

constexpr int32_t const& __cordl_internal_get_loopCount() const;

constexpr int32_t& __cordl_internal_get_loopCount() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_loopCount(int32_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5e5353c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_name, addr 0x5e534a0, size 0x9c, virtual false, abstract: false, final false
inline ::StringW get_name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationLink_LinkClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationLink_LinkClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationLink_LinkClip(AnimationLink_LinkClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationLink_LinkClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationLink_LinkClip(AnimationLink_LinkClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21233};

/// @brief Field clip, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___clip;

/// @brief Field velocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field loopCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___loopCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AnimationLink_LinkClip, ___clip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AnimationLink_LinkClip, ___velocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AnimationLink_LinkClip, ___loopCount) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AnimationLink_LinkClip) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
