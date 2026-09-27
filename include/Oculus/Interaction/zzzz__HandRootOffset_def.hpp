#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandRootOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandRootOffset)
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandRootOffset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandRootOffset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandRootOffset*, "Oculus.Interaction", "HandRootOffset");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandRootOffset
class CORDL_TYPE HandRootOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_FreezeRotationX, put=set_FreezeRotationX)) bool  FreezeRotationX;

 __declspec(property(get=get_FreezeRotationY, put=set_FreezeRotationY)) bool  FreezeRotationY;

 __declspec(property(get=get_FreezeRotationZ, put=set_FreezeRotationZ)) bool  FreezeRotationZ;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief [Obsolete("Use MirrorOffsetsForLeftHand instead.")]
 __declspec(property(get=get_MirrorLeftRotation, put=set_MirrorLeftRotation)) bool  MirrorLeftRotation;

 __declspec(property(get=get_MirrorOffsetsForLeftHand, put=set_MirrorOffsetsForLeftHand)) bool  MirrorOffsetsForLeftHand;

 __declspec(property(get=get_Offset, put=set_Offset)) ::UnityEngine::Vector3  Offset;

 __declspec(property(get=get_Rotation, put=set_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _cachedPose, offset 0x6c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__cachedPose, put=__cordl_internal_set__cachedPose)) ::UnityEngine::Pose  _cachedPose;

/// @brief Field _freezeRotationX, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__freezeRotationX, put=__cordl_internal_set__freezeRotationX)) bool  _freezeRotationX;

/// @brief Field _freezeRotationY, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get__freezeRotationY, put=__cordl_internal_set__freezeRotationY)) bool  _freezeRotationY;

/// @brief Field _freezeRotationZ, offset 0x6b, size 0x1 
 __declspec(property(get=__cordl_internal_get__freezeRotationZ, put=__cordl_internal_set__freezeRotationZ)) bool  _freezeRotationZ;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _mirrorOffsetsForLeftHand, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__mirrorOffsetsForLeftHand, put=__cordl_internal_set__mirrorOffsetsForLeftHand)) bool  _mirrorOffsetsForLeftHand;

/// @brief Field _offset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector3  _offset;

/// @brief Field _posOffset, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__posOffset, put=__cordl_internal_set__posOffset)) ::UnityEngine::Vector3  _posOffset;

/// @brief Field _rotOffset, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotOffset, put=__cordl_internal_set__rotOffset)) ::UnityEngine::Quaternion  _rotOffset;

/// @brief Field _rotation, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) ::UnityEngine::Quaternion  _rotation;

/// @brief Field _started, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa47f20c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FreezeRotation, addr 0xa47f6dc, size 0x2fc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion FreezeRotation(::UnityEngine::Quaternion  rotation) ;

/// @brief Method GetOffset, addr 0xa47f5a0, size 0x13c, virtual false, abstract: false, final false
inline void GetOffset(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetOffset, addr 0xa47f9d8, size 0xf4, virtual false, abstract: false, final false
inline void GetOffset(::by_ref<::UnityEngine::Pose>  pose, ::Oculus::Interaction::Input::Handedness  handedness, float_t  scale) ;

/// @brief Method GetWorldPose, addr 0xa47facc, size 0x5c, virtual false, abstract: false, final false
inline void GetWorldPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method HandleHandUpdated, addr 0xa47f490, size 0x110, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllHandRootOffset, addr 0xa47fb28, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandRootOffset(::Oculus::Interaction::Input::IHand*  hand) ;

/// [Obsolete("Use InjectAllHandRootOffset instead")]
/// @brief Method InjectAllHandWristOffset, addr 0xa47fc14, size 0x60, virtual false, abstract: false, final false
inline void InjectAllHandWristOffset(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Vector3  offset, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InjectHand, addr 0xa47fb2c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// [Obsolete("Use the Offset setter instead")]
/// @brief Method InjectOffset, addr 0xa47fbfc, size 0xc, virtual false, abstract: false, final false
inline void InjectOffset(::UnityEngine::Vector3  offset) ;

/// [Obsolete("Use the Rotation setter instead")]
/// @brief Method InjectRotation, addr 0xa47fc08, size 0xc, virtual false, abstract: false, final false
inline void InjectRotation(::UnityEngine::Quaternion  rotation) ;

static inline ::Oculus::Interaction::HandRootOffset* New_ctor() ;

/// @brief Method OnDisable, addr 0xa47f390, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa47f290, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa47f264, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__cachedPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__cachedPose() ;

constexpr bool const& __cordl_internal_get__freezeRotationX() const;

constexpr bool& __cordl_internal_get__freezeRotationX() ;

constexpr bool const& __cordl_internal_get__freezeRotationY() const;

constexpr bool& __cordl_internal_get__freezeRotationY() ;

constexpr bool const& __cordl_internal_get__freezeRotationZ() const;

constexpr bool& __cordl_internal_get__freezeRotationZ() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__mirrorOffsetsForLeftHand() const;

constexpr bool& __cordl_internal_get__mirrorOffsetsForLeftHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__posOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__posOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotation() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__cachedPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__freezeRotationX(bool  value) ;

constexpr void __cordl_internal_set__freezeRotationY(bool  value) ;

constexpr void __cordl_internal_set__freezeRotationZ(bool  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__mirrorOffsetsForLeftHand(bool  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__posOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa47fc74, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FreezeRotationX, addr 0xa47f19c, size 0x8, virtual false, abstract: false, final false
inline bool get_FreezeRotationX() ;

/// @brief Method get_FreezeRotationY, addr 0xa47f1ac, size 0x8, virtual false, abstract: false, final false
inline bool get_FreezeRotationY() ;

/// @brief Method get_FreezeRotationZ, addr 0xa47f1bc, size 0x8, virtual false, abstract: false, final false
inline bool get_FreezeRotationZ() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa47f17c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_MirrorLeftRotation, addr 0xa47f1fc, size 0x8, virtual false, abstract: false, final false
inline bool get_MirrorLeftRotation() ;

/// @brief Method get_MirrorOffsetsForLeftHand, addr 0xa47f18c, size 0x8, virtual false, abstract: false, final false
inline bool get_MirrorOffsetsForLeftHand() ;

/// @brief Method get_Offset, addr 0xa47f1cc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Offset() ;

/// @brief Method get_Rotation, addr 0xa47f1e4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method set_FreezeRotationX, addr 0xa47f1a4, size 0x8, virtual false, abstract: false, final false
inline void set_FreezeRotationX(bool  value) ;

/// @brief Method set_FreezeRotationY, addr 0xa47f1b4, size 0x8, virtual false, abstract: false, final false
inline void set_FreezeRotationY(bool  value) ;

/// @brief Method set_FreezeRotationZ, addr 0xa47f1c4, size 0x8, virtual false, abstract: false, final false
inline void set_FreezeRotationZ(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa47f184, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_MirrorLeftRotation, addr 0xa47f204, size 0x8, virtual false, abstract: false, final false
inline void set_MirrorLeftRotation(bool  value) ;

/// @brief Method set_MirrorOffsetsForLeftHand, addr 0xa47f194, size 0x8, virtual false, abstract: false, final false
inline void set_MirrorOffsetsForLeftHand(bool  value) ;

/// @brief Method set_Offset, addr 0xa47f1d8, size 0xc, virtual false, abstract: false, final false
inline void set_Offset(::UnityEngine::Vector3  value) ;

/// @brief Method set_Rotation, addr 0xa47f1f0, size 0xc, virtual false, abstract: false, final false
inline void set_Rotation(::UnityEngine::Quaternion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandRootOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandRootOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandRootOffset(HandRootOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandRootOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandRootOffset(HandRootOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15975};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// [InspectorName("Offset")]
/// @brief Field _offset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offset;

/// [SerializeField]
/// [InspectorName("Rotation")]
/// @brief Field _rotation, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotation;

/// [SerializeField]
/// [InspectorName("Offset")]
/// @brief Field _posOffset, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____posOffset;

/// [SerializeField]
/// [InspectorName("Rotation")]
/// @brief Field _rotOffset, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rotOffset;

/// [SerializeField]
/// [FormerlySerializedAs("_mirrorLeftRotation")]
/// [Tooltip("When the attached hand\'s handedness is set to Left, this property will mirror the offsets. This allows for offset values to be set in Right hand coordinates for both Left and Right hands.")]
/// @brief Field _mirrorOffsetsForLeftHand, offset: 0x68, size: 0x1, def value: None
 bool  ____mirrorOffsetsForLeftHand;

/// [Header("Freeze rotations")]
/// [SerializeField]
/// @brief Field _freezeRotationX, offset: 0x69, size: 0x1, def value: None
 bool  ____freezeRotationX;

/// [SerializeField]
/// @brief Field _freezeRotationY, offset: 0x6a, size: 0x1, def value: None
 bool  ____freezeRotationY;

/// [SerializeField]
/// @brief Field _freezeRotationZ, offset: 0x6b, size: 0x1, def value: None
 bool  ____freezeRotationZ;

/// @brief Field _cachedPose, offset: 0x6c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____cachedPose;

/// @brief Field _started, offset: 0x88, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____posOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____rotOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____mirrorOffsetsForLeftHand) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____freezeRotationX) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____freezeRotationY) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____freezeRotationZ) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____cachedPose) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandRootOffset, ____started) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandRootOffset) == 0x90, "Size mismatch!");

} // namespace end def Oculus::Interaction
