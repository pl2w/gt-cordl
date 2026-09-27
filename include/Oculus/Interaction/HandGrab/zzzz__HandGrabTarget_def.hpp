#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HandGrabTarget)
namespace GlobalNamespace {
struct HandGrabTarget_GrabAnchor;
}
namespace Oculus::Interaction::Grab {
struct GrabTypeFlags;
}
namespace Oculus::Interaction::HandGrab {
struct HandAlignType;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabResult;
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
namespace Oculus::Interaction::HandGrab {
class HandGrabTarget;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::HandGrabTarget*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::HandGrabTarget*, "Oculus.Interaction.HandGrab", "HandGrabTarget");
// Dependencies Oculus.Interaction.Grab.GrabTypeFlags, Oculus.Interaction.HandGrab.HandAlignType, System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.HandGrabTarget
class CORDL_TYPE HandGrabTarget : public ::System::Object {
public:
// Declarations
using GrabAnchor = ::GlobalNamespace::HandGrabTarget_GrabAnchor;

 __declspec(property(get=get_Anchor, put=set_Anchor)) ::Oculus::Interaction::Grab::GrabTypeFlags  Anchor;

 __declspec(property(get=get_HandAlignment, put=set_HandAlignment)) ::Oculus::Interaction::HandGrab::HandAlignType  HandAlignment;

 __declspec(property(get=get_HandPose)) ::Oculus::Interaction::HandGrab::HandPose*  HandPose;

/// @brief Field <Anchor>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Anchor_k__BackingField, put=__cordl_internal_set__Anchor_k__BackingField)) ::Oculus::Interaction::Grab::GrabTypeFlags  _Anchor_k__BackingField;

/// @brief Field <HandAlignment>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__HandAlignment_k__BackingField, put=__cordl_internal_set__HandAlignment_k__BackingField)) ::Oculus::Interaction::HandGrab::HandAlignType  _HandAlignment_k__BackingField;

/// @brief Field _handGrabResult, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabResult, put=__cordl_internal_set__handGrabResult)) ::Oculus::Interaction::HandGrab::HandGrabResult*  _handGrabResult;

/// @brief Field _relativeTo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityW<::UnityEngine::Transform>  _relativeTo;

/// @brief Method GetWorldPoseDisplaced, addr 0xa4e21e4, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetWorldPoseDisplaced(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset) ;

static inline ::Oculus::Interaction::HandGrab::HandGrabTarget* New_ctor() ;

/// [Obsolete("Use Set with GrabTypeFlags instead")]
/// @brief Method Set, addr 0xa4e2284, size 0x68, virtual false, abstract: false, final false
inline void Set(::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::HandGrab::HandAlignType  handAlignment, ::GlobalNamespace::HandGrabTarget_GrabAnchor  anchor, ::Oculus::Interaction::HandGrab::HandGrabResult*  handGrabResult) ;

/// @brief Method Set, addr 0xa4dc6e4, size 0x3c, virtual false, abstract: false, final false
inline void Set(::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::HandGrab::HandAlignType  handAlignment, ::Oculus::Interaction::Grab::GrabTypeFlags  anchor, ::Oculus::Interaction::HandGrab::HandGrabResult*  handGrabResult) ;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& __cordl_internal_get__Anchor_k__BackingField() const;

constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& __cordl_internal_get__Anchor_k__BackingField() ;

constexpr ::Oculus::Interaction::HandGrab::HandAlignType const& __cordl_internal_get__HandAlignment_k__BackingField() const;

constexpr ::Oculus::Interaction::HandGrab::HandAlignType& __cordl_internal_get__HandAlignment_k__BackingField() ;

constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& __cordl_internal_get__handGrabResult() const;

constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& __cordl_internal_get__handGrabResult() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__relativeTo() ;

constexpr void __cordl_internal_set__Anchor_k__BackingField(::Oculus::Interaction::Grab::GrabTypeFlags  value) ;

constexpr void __cordl_internal_set__HandAlignment_k__BackingField(::Oculus::Interaction::HandGrab::HandAlignType  value) ;

constexpr void __cordl_internal_set__handGrabResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4dcb4c, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Anchor, addr 0xa4e2274, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Grab::GrabTypeFlags get_Anchor() ;

/// [CompilerGenerated]
/// @brief Method get_HandAlignment, addr 0xa4e2264, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::HandAlignType get_HandAlignment() ;

/// @brief Method get_HandPose, addr 0xa4e21bc, size 0x28, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::HandPose* get_HandPose() ;

/// [CompilerGenerated]
/// @brief Method set_Anchor, addr 0xa4e227c, size 0x8, virtual false, abstract: false, final false
inline void set_Anchor(::Oculus::Interaction::Grab::GrabTypeFlags  value) ;

/// [CompilerGenerated]
/// @brief Method set_HandAlignment, addr 0xa4e226c, size 0x8, virtual false, abstract: false, final false
inline void set_HandAlignment(::Oculus::Interaction::HandGrab::HandAlignType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandGrabTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandGrabTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandGrabTarget(HandGrabTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandGrabTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandGrabTarget(HandGrabTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16328};

/// @brief Field _relativeTo, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____relativeTo;

/// @brief Field _handGrabResult, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandGrabResult*  ____handGrabResult;

/// [CompilerGenerated]
/// @brief Field <HandAlignment>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Oculus::Interaction::HandGrab::HandAlignType  ____HandAlignment_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Anchor>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::GrabTypeFlags  ____Anchor_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabTarget, ____relativeTo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabTarget, ____handGrabResult) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabTarget, ____HandAlignment_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::HandGrabTarget, ____Anchor_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::HandGrabTarget) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
