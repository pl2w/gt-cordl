#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandDebugGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__HandDebugGizmos_CoordSpace_def.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandDebugGizmos)
namespace GlobalNamespace {
struct HandDebugGizmos_CoordSpace;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class HandDebugGizmos___c;
}
namespace Oculus::Interaction {
class IHandVisual;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Space;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandDebugGizmos;
}
namespace Oculus::Interaction {
class HandDebugGizmos___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandDebugGizmos*);
MARK_REF_T(::Oculus::Interaction::HandDebugGizmos___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandDebugGizmos*, "Oculus.Interaction", "HandDebugGizmos");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandDebugGizmos___c*, "Oculus.Interaction", "HandDebugGizmos/<>c");
// Dependencies Oculus.Interaction.HandDebugGizmos::CoordSpace, Oculus.Interaction.SkeletonDebugGizmos
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandDebugGizmos
class CORDL_TYPE HandDebugGizmos : public ::Oculus::Interaction::SkeletonDebugGizmos {
public:
// Declarations
using CoordSpace = ::GlobalNamespace::HandDebugGizmos_CoordSpace;

using __c = ::Oculus::Interaction::HandDebugGizmos___c;

 __declspec(property(get=get_ForceOffVisibility, put=set_ForceOffVisibility)) bool  ForceOffVisibility;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_IsVisible)) bool  IsVisible;

 __declspec(property(get=get_Space, put=set_Space)) ::GlobalNamespace::HandDebugGizmos_CoordSpace  Space;

/// @brief Field WhenHandVisualUpdated, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenHandVisualUpdated, put=__cordl_internal_set_WhenHandVisualUpdated)) ::System::Action*  WhenHandVisualUpdated;

/// @brief Field <ForceOffVisibility>k__BackingField, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceOffVisibility_k__BackingField, put=__cordl_internal_set__ForceOffVisibility_k__BackingField)) bool  _ForceOffVisibility_k__BackingField;

/// @brief Field <Hand>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _hand, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _isVisible, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVisible, put=__cordl_internal_set__isVisible)) bool  _isVisible;

/// @brief Field _space, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__space, put=__cordl_internal_set__space)) ::GlobalNamespace::HandDebugGizmos_CoordSpace  _space;

/// @brief Field _started, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IHandVisual"
constexpr operator  ::Oculus::Interaction::IHandVisual*() noexcept;

/// @brief Method Awake, addr 0xa46e294, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetJointPose, addr 0xa46e518, size 0x198, virtual true, abstract: false, final true
inline ::UnityEngine::Pose GetJointPose(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Space  space) ;

/// @brief Method HandleHandUpdated, addr 0xa46e6b0, size 0x100, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllHandDebugGizmos, addr 0xa46ea80, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandDebugGizmos(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa46ea84, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::HandDebugGizmos* New_ctor() ;

/// @brief Method OnDisable, addr 0xa46e418, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa46e318, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa46e2ec, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetJointPose, addr 0xa46e878, size 0x208, virtual true, abstract: false, final false
inline bool TryGetJointPose(int32_t  jointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method TryGetParentJointId, addr 0xa46e7b0, size 0xc8, virtual true, abstract: false, final false
inline bool TryGetParentJointId(int32_t  jointId, ::by_ref<int32_t>  parent) ;

constexpr ::System::Action* const& __cordl_internal_get_WhenHandVisualUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenHandVisualUpdated() ;

constexpr bool const& __cordl_internal_get__ForceOffVisibility_k__BackingField() const;

constexpr bool& __cordl_internal_get__ForceOffVisibility_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__isVisible() const;

constexpr bool& __cordl_internal_get__isVisible() ;

constexpr ::GlobalNamespace::HandDebugGizmos_CoordSpace const& __cordl_internal_get__space() const;

constexpr ::GlobalNamespace::HandDebugGizmos_CoordSpace& __cordl_internal_get__space() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_WhenHandVisualUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__ForceOffVisibility_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__isVisible(bool  value) ;

constexpr void __cordl_internal_set__space(::GlobalNamespace::HandDebugGizmos_CoordSpace  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa46eb54, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenHandVisualUpdated, addr 0xa46e15c, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenHandVisualUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_ForceOffVisibility, addr 0xa46e144, size 0x8, virtual true, abstract: false, final true
inline bool get_ForceOffVisibility() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa46e124, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_IsVisible, addr 0xa46e154, size 0x8, virtual true, abstract: false, final true
inline bool get_IsVisible() ;

/// @brief Method get_Space, addr 0xa46e134, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandDebugGizmos_CoordSpace get_Space() ;

/// @brief Convert to "::Oculus::Interaction::IHandVisual"
constexpr ::Oculus::Interaction::IHandVisual* i___Oculus__Interaction__IHandVisual() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenHandVisualUpdated, addr 0xa46e1f8, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenHandVisualUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ForceOffVisibility, addr 0xa46e14c, size 0x8, virtual true, abstract: false, final true
inline void set_ForceOffVisibility(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa46e12c, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_Space, addr 0xa46e13c, size 0x8, virtual false, abstract: false, final false
inline void set_Space(::GlobalNamespace::HandDebugGizmos_CoordSpace  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandDebugGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandDebugGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandDebugGizmos(HandDebugGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandDebugGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandDebugGizmos(HandDebugGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15921};

/// [Tooltip("The IHand that will drive the visuals.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [Tooltip("The coordinate space in which to draw the skeleton. World space draws the skeleton at the world Body location. Local draws the skeleton relative to this transform\'s position, and can be placed, scaled, or mirrored as desired.")]
/// [SerializeField]
/// @brief Field _space, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::HandDebugGizmos_CoordSpace  ____space;

/// [CompilerGenerated]
/// @brief Field <ForceOffVisibility>k__BackingField, offset: 0x5c, size: 0x1, def value: None
 bool  ____ForceOffVisibility_k__BackingField;

/// [CompilerGenerated]
/// @brief Field WhenHandVisualUpdated, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___WhenHandVisualUpdated;

/// @brief Field _isVisible, offset: 0x68, size: 0x1, def value: None
 bool  ____isVisible;

/// @brief Field _started, offset: 0x69, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandDebugGizmos, ____hand) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandDebugGizmos, ____Hand_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandDebugGizmos, ____space) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandDebugGizmos, ____ForceOffVisibility_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandDebugGizmos, ___WhenHandVisualUpdated) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandDebugGizmos, ____isVisible) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandDebugGizmos, ____started) == 0x69, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandDebugGizmos) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandDebugGizmos/<>c
class CORDL_TYPE HandDebugGizmos___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::HandDebugGizmos___c*  __9;

/// @brief Field <>9__31_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__31_0, put=setStaticF___9__31_0)) ::System::Action*  __9__31_0;

static inline ::Oculus::Interaction::HandDebugGizmos___c* New_ctor() ;

/// @brief Method <.ctor>b__31_0, addr 0xa46ecbc, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__31_0() ;

/// @brief Method .ctor, addr 0xa46ecb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::HandDebugGizmos___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__31_0() ;

static inline void setStaticF___9(::Oculus::Interaction::HandDebugGizmos___c*  value) ;

static inline void setStaticF___9__31_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandDebugGizmos___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandDebugGizmos___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandDebugGizmos___c(HandDebugGizmos___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandDebugGizmos___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandDebugGizmos___c(HandDebugGizmos___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandDebugGizmos___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
