#pragma once
// IWYU pragma private; include "GlobalNamespace/OneStringGuitar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OneStringGuitar_GuitarStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OneStringGuitar)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class GorillaTriggerColliderHandIndicator;
}
namespace GlobalNamespace {
struct OneStringGuitar_GuitarStates;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OneStringGuitar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OneStringGuitar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OneStringGuitar*, "", "OneStringGuitar");
// Dependencies OneStringGuitar::GuitarStates, TransferrableObject, UnityEngine.AudioClip, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.Quaternion, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OneStringGuitar
class CORDL_TYPE OneStringGuitar : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using GuitarStates = ::GlobalNamespace::OneStringGuitar_GuitarStates;

/// @brief Field angleLerpSnap, offset 0x438, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleLerpSnap, put=__cordl_internal_set_angleLerpSnap)) float_t  angleLerpSnap;

/// @brief Field angleSnapped, offset 0x440, size 0x1 
 __declspec(property(get=__cordl_internal_get_angleSnapped, put=__cordl_internal_set_angleSnapped)) bool  angleSnapped;

/// @brief Field anyHit, offset 0x4f4, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyHit, put=__cordl_internal_set_anyHit)) bool  anyHit;

/// @brief Field audioClips, offset 0x4c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClips, put=__cordl_internal_set_audioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  audioClips;

/// @brief Field audioSource, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field chestColliderLeft, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestColliderLeft, put=__cordl_internal_set_chestColliderLeft)) ::UnityW<::UnityEngine::Collider>  chestColliderLeft;

/// @brief Field chestColliderRight, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestColliderRight, put=__cordl_internal_set_chestColliderRight)) ::UnityW<::UnityEngine::Collider>  chestColliderRight;

/// @brief Field chestOffsetLeft, offset 0x334, size 0xc 
 __declspec(property(get=__cordl_internal_get_chestOffsetLeft, put=__cordl_internal_set_chestOffsetLeft)) ::UnityEngine::Vector3  chestOffsetLeft;

/// @brief Field chestOffsetRight, offset 0x340, size 0xc 
 __declspec(property(get=__cordl_internal_get_chestOffsetRight, put=__cordl_internal_set_chestOffsetRight)) ::UnityEngine::Vector3  chestOffsetRight;

/// @brief Field chestRotationOffset, offset 0x36c, size 0x10 
 __declspec(property(get=__cordl_internal_get_chestRotationOffset, put=__cordl_internal_set_chestRotationOffset)) ::UnityEngine::Quaternion  chestRotationOffset;

/// @brief Field chestTouch, offset 0x448, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestTouch, put=__cordl_internal_set_chestTouch)) ::UnityW<::UnityEngine::Transform>  chestTouch;

/// @brief Field collidersHit, offset 0x458, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersHit, put=__cordl_internal_set_collidersHit)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  collidersHit;

/// @brief Field collidersHitCount, offset 0x450, size 0x4 
 __declspec(property(get=__cordl_internal_get_collidersHitCount, put=__cordl_internal_set_collidersHitCount)) int32_t  collidersHitCount;

/// @brief Field collidersToBeIn, offset 0x4a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersToBeIn, put=__cordl_internal_set_collidersToBeIn)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  collidersToBeIn;

/// @brief Field currentChestCollider, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentChestCollider, put=__cordl_internal_set_currentChestCollider)) ::UnityW<::UnityEngine::Collider>  currentChestCollider;

/// @brief Field currentFretIndex, offset 0x4ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFretIndex, put=__cordl_internal_set_currentFretIndex)) int32_t  currentFretIndex;

/// @brief Field fretHandIndicator, offset 0x4e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fretHandIndicator, put=__cordl_internal_set_fretHandIndicator)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  fretHandIndicator;

/// @brief Field frets, offset 0x4b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_frets, put=__cordl_internal_set_frets)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  frets;

/// @brief Field fretsList, offset 0x4c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fretsList, put=__cordl_internal_set_fretsList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  fretsList;

/// @brief Field handIn, offset 0x4f5, size 0x1 
 __declspec(property(get=__cordl_internal_get_handIn, put=__cordl_internal_set_handIn)) bool  handIn;

/// @brief Field holdingOffsetRotationLeft, offset 0x34c, size 0x10 
 __declspec(property(get=__cordl_internal_get_holdingOffsetRotationLeft, put=__cordl_internal_set_holdingOffsetRotationLeft)) ::UnityEngine::Quaternion  holdingOffsetRotationLeft;

/// @brief Field holdingOffsetRotationRight, offset 0x35c, size 0x10 
 __declspec(property(get=__cordl_internal_get_holdingOffsetRotationRight, put=__cordl_internal_set_holdingOffsetRotationRight)) ::UnityEngine::Quaternion  holdingOffsetRotationRight;

/// @brief Field interactableMask, offset 0x4a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_interactableMask, put=__cordl_internal_set_interactableMask)) ::UnityEngine::LayerMask  interactableMask;

/// @brief Field lastFretIndex, offset 0x4b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFretIndex, put=__cordl_internal_set_lastFretIndex)) int32_t  lastFretIndex;

/// @brief Field lastState, offset 0x52c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::OneStringGuitar_GuitarStates  lastState;

/// @brief Field leftHandIndicator, offset 0x4d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandIndicator, put=__cordl_internal_set_leftHandIndicator)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  leftHandIndicator;

/// @brief Field lerpValue, offset 0x398, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValue, put=__cordl_internal_set_lerpValue)) float_t  lerpValue;

/// @brief Field maxVelocity, offset 0x518, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVelocity, put=__cordl_internal_set_maxVelocity)) float_t  maxVelocity;

/// @brief Field maxVolume, offset 0x510, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVolume, put=__cordl_internal_set_maxVolume)) float_t  maxVolume;

/// @brief Field minVolume, offset 0x514, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVolume, put=__cordl_internal_set_minVolume)) float_t  minVolume;

/// @brief Field nullHit, offset 0x470, size 0x2c 
 __declspec(property(get=__cordl_internal_get_nullHit, put=__cordl_internal_set_nullHit)) ::UnityEngine::RaycastHit  nullHit;

/// @brief Field parentHand, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHand, put=__cordl_internal_set_parentHand)) ::UnityW<::UnityEngine::Transform>  parentHand;

/// @brief Field parentHandLeft, offset 0x3b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHandLeft, put=__cordl_internal_set_parentHandLeft)) ::UnityW<::UnityEngine::Transform>  parentHandLeft;

/// @brief Field parentHandRight, offset 0x3b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentHandRight, put=__cordl_internal_set_parentHandRight)) ::UnityW<::UnityEngine::Transform>  parentHandRight;

/// @brief Field positionSnapped, offset 0x441, size 0x1 
 __declspec(property(get=__cordl_internal_get_positionSnapped, put=__cordl_internal_set_positionSnapped)) bool  positionSnapped;

/// @brief Field raycastHitList, offset 0x468, size 0x8 
 __declspec(property(get=__cordl_internal_get_raycastHitList, put=__cordl_internal_set_raycastHitList)) ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  raycastHitList;

/// @brief Field raycastHits, offset 0x460, size 0x8 
 __declspec(property(get=__cordl_internal_get_raycastHits, put=__cordl_internal_set_raycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  raycastHits;

/// @brief Field reverseGripPositionLeft, offset 0x3e4, size 0xc 
 __declspec(property(get=__cordl_internal_get_reverseGripPositionLeft, put=__cordl_internal_set_reverseGripPositionLeft)) ::UnityEngine::Vector3  reverseGripPositionLeft;

/// @brief Field reverseGripPositionRight, offset 0x41c, size 0xc 
 __declspec(property(get=__cordl_internal_get_reverseGripPositionRight, put=__cordl_internal_set_reverseGripPositionRight)) ::UnityEngine::Vector3  reverseGripPositionRight;

/// @brief Field reverseGripQuatLeft, offset 0x3f0, size 0x10 
 __declspec(property(get=__cordl_internal_get_reverseGripQuatLeft, put=__cordl_internal_set_reverseGripQuatLeft)) ::UnityEngine::Quaternion  reverseGripQuatLeft;

/// @brief Field reverseGripQuatRight, offset 0x428, size 0x10 
 __declspec(property(get=__cordl_internal_get_reverseGripQuatRight, put=__cordl_internal_set_reverseGripQuatRight)) ::UnityEngine::Quaternion  reverseGripQuatRight;

/// @brief Field rightHandIndicator, offset 0x4d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandIndicator, put=__cordl_internal_set_rightHandIndicator)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  rightHandIndicator;

/// @brief Field selfInstrumentIndex, offset 0x528, size 0x4 
 __declspec(property(get=__cordl_internal_get_selfInstrumentIndex, put=__cordl_internal_set_selfInstrumentIndex)) int32_t  selfInstrumentIndex;

/// @brief Field snapDistance, offset 0x3c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapDistance, put=__cordl_internal_set_snapDistance)) float_t  snapDistance;

/// @brief Field sphereRadius, offset 0x4f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_sphereRadius, put=__cordl_internal_set_sphereRadius)) float_t  sphereRadius;

/// @brief Field spherecastSweep, offset 0x4f8, size 0xc 
 __declspec(property(get=__cordl_internal_get_spherecastSweep, put=__cordl_internal_set_spherecastSweep)) ::UnityEngine::Vector3  spherecastSweep;

/// @brief Field startPositionLeft, offset 0x3c8, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPositionLeft, put=__cordl_internal_set_startPositionLeft)) ::UnityEngine::Vector3  startPositionLeft;

/// @brief Field startPositionRight, offset 0x400, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPositionRight, put=__cordl_internal_set_startPositionRight)) ::UnityEngine::Vector3  startPositionRight;

/// @brief Field startQuatLeft, offset 0x3d4, size 0x10 
 __declspec(property(get=__cordl_internal_get_startQuatLeft, put=__cordl_internal_set_startQuatLeft)) ::UnityEngine::Quaternion  startQuatLeft;

/// @brief Field startQuatRight, offset 0x40c, size 0x10 
 __declspec(property(get=__cordl_internal_get_startQuatRight, put=__cordl_internal_set_startQuatRight)) ::UnityEngine::Quaternion  startQuatRight;

/// @brief Field startingLeftChestOffset, offset 0x530, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingLeftChestOffset, put=__cordl_internal_set_startingLeftChestOffset)) ::UnityEngine::Vector3  startingLeftChestOffset;

/// @brief Field startingRightChestOffset, offset 0x53c, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingRightChestOffset, put=__cordl_internal_set_startingRightChestOffset)) ::UnityEngine::Vector3  startingRightChestOffset;

/// @brief Field startingUnsnapDistance, offset 0x548, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingUnsnapDistance, put=__cordl_internal_set_startingUnsnapDistance)) float_t  startingUnsnapDistance;

/// @brief Field strumCollider, offset 0x508, size 0x8 
 __declspec(property(get=__cordl_internal_get_strumCollider, put=__cordl_internal_set_strumCollider)) ::UnityW<::UnityEngine::Collider>  strumCollider;

/// @brief Field strumHandIndicator, offset 0x4e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_strumHandIndicator, put=__cordl_internal_set_strumHandIndicator)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  strumHandIndicator;

/// @brief Field strumList, offset 0x520, size 0x8 
 __declspec(property(get=__cordl_internal_get_strumList, put=__cordl_internal_set_strumList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  strumList;

/// @brief Field unsnapDistance, offset 0x3c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_unsnapDistance, put=__cordl_internal_set_unsnapDistance)) float_t  unsnapDistance;

/// @brief Field vectorLerpSnap, offset 0x43c, size 0x4 
 __declspec(property(get=__cordl_internal_get_vectorLerpSnap, put=__cordl_internal_set_vectorLerpSnap)) float_t  vectorLerpSnap;

/// @brief Method CanActivate, addr 0x5760440, size 0x14, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x57603fc, size 0x44, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

/// @brief Method CheckFretFinger, addr 0x575ff58, size 0x3fc, virtual false, abstract: false, final false
inline void CheckFretFinger(::UnityEngine::Transform*  finger) ;

/// @brief Method GenerateClubOffsetLeft, addr 0x5760694, size 0x5c, virtual false, abstract: false, final false
inline void GenerateClubOffsetLeft() ;

/// @brief Method GenerateClubOffsetRight, addr 0x576074c, size 0x5c, virtual false, abstract: false, final false
inline void GenerateClubOffsetRight() ;

/// @brief Method GenerateReverseGripOffsetLeft, addr 0x5760638, size 0x5c, virtual false, abstract: false, final false
inline void GenerateReverseGripOffsetLeft() ;

/// @brief Method GenerateReverseGripOffsetRight, addr 0x57606f0, size 0x5c, virtual false, abstract: false, final false
inline void GenerateReverseGripOffsetRight() ;

/// @brief Method GenerateVectorOffsetLeft, addr 0x5760480, size 0xdc, virtual false, abstract: false, final false
inline void GenerateVectorOffsetLeft() ;

/// @brief Method GenerateVectorOffsetRight, addr 0x576055c, size 0xdc, virtual false, abstract: false, final false
inline void GenerateVectorOffsetRight() ;

/// @brief Method GetDefaultTransformationMatrix, addr 0x575e674, size 0x58, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetDefaultTransformationMatrix() ;

/// @brief Method LateUpdateShared, addr 0x575ef50, size 0xc84, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::OneStringGuitar* New_ctor() ;

/// @brief Method OnActivate, addr 0x5760454, size 0x2c, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDisable, addr 0x575eed4, size 0x28, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x575ed3c, size 0x198, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRelease, addr 0x575eefc, size 0x54, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnSpawn, addr 0x575e6cc, size 0x46c, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method PlayNote, addr 0x5760354, size 0xa8, virtual true, abstract: false, final false
inline void PlayNote(int32_t  note, float_t  volume) ;

/// @brief Method TestClubPositionRight, addr 0x57607a8, size 0x58, virtual false, abstract: false, final false
inline void TestClubPositionRight() ;

/// @brief Method TestPlayingPositionRight, addr 0x5760858, size 0x198, virtual false, abstract: false, final false
inline void TestPlayingPositionRight() ;

/// @brief Method TestReverseGripPositionRight, addr 0x5760800, size 0x58, virtual false, abstract: false, final false
inline void TestReverseGripPositionRight() ;

/// @brief Method Unsnap, addr 0x575fe84, size 0xd4, virtual false, abstract: false, final false
inline bool Unsnap() ;

/// @brief Method UpdateNonPlayingPosition, addr 0x575fbd4, size 0x2b0, virtual false, abstract: false, final false
inline void UpdateNonPlayingPosition(::UnityEngine::Vector3  positionTarget, ::UnityEngine::Quaternion  rotationTarget) ;

/// @brief Method _GetChestColliderByPath, addr 0x575eb38, size 0x204, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> _GetChestColliderByPath(::GlobalNamespace::VRRig*  vrRig, ::StringW  chestColliderLeftPath) ;

constexpr float_t const& __cordl_internal_get_angleLerpSnap() const;

constexpr float_t& __cordl_internal_get_angleLerpSnap() ;

constexpr bool const& __cordl_internal_get_angleSnapped() const;

constexpr bool& __cordl_internal_get_angleSnapped() ;

constexpr bool const& __cordl_internal_get_anyHit() const;

constexpr bool& __cordl_internal_get_anyHit() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_audioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_audioClips() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_chestColliderLeft() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_chestColliderLeft() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_chestColliderRight() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_chestColliderRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestOffsetLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestOffsetLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestOffsetRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestOffsetRight() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_chestRotationOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_chestRotationOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chestTouch() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chestTouch() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_collidersHit() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_collidersHit() ;

constexpr int32_t const& __cordl_internal_get_collidersHitCount() const;

constexpr int32_t& __cordl_internal_get_collidersHitCount() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_collidersToBeIn() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_collidersToBeIn() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_currentChestCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_currentChestCollider() ;

constexpr int32_t const& __cordl_internal_get_currentFretIndex() const;

constexpr int32_t& __cordl_internal_get_currentFretIndex() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_fretHandIndicator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_fretHandIndicator() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_frets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_frets() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_fretsList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_fretsList() ;

constexpr bool const& __cordl_internal_get_handIn() const;

constexpr bool& __cordl_internal_get_handIn() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_holdingOffsetRotationLeft() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_holdingOffsetRotationLeft() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_holdingOffsetRotationRight() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_holdingOffsetRotationRight() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_interactableMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_interactableMask() ;

constexpr int32_t const& __cordl_internal_get_lastFretIndex() const;

constexpr int32_t& __cordl_internal_get_lastFretIndex() ;

constexpr ::GlobalNamespace::OneStringGuitar_GuitarStates const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::OneStringGuitar_GuitarStates& __cordl_internal_get_lastState() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_leftHandIndicator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_leftHandIndicator() ;

constexpr float_t const& __cordl_internal_get_lerpValue() const;

constexpr float_t& __cordl_internal_get_lerpValue() ;

constexpr float_t const& __cordl_internal_get_maxVelocity() const;

constexpr float_t& __cordl_internal_get_maxVelocity() ;

constexpr float_t const& __cordl_internal_get_maxVolume() const;

constexpr float_t& __cordl_internal_get_maxVolume() ;

constexpr float_t const& __cordl_internal_get_minVolume() const;

constexpr float_t& __cordl_internal_get_minVolume() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_nullHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_nullHit() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentHandLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentHandLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentHandRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentHandRight() ;

constexpr bool const& __cordl_internal_get_positionSnapped() const;

constexpr bool& __cordl_internal_get_positionSnapped() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* const& __cordl_internal_get_raycastHitList() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*& __cordl_internal_get_raycastHitList() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_raycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_raycastHits() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_reverseGripPositionLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_reverseGripPositionLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_reverseGripPositionRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_reverseGripPositionRight() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_reverseGripQuatLeft() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_reverseGripQuatLeft() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_reverseGripQuatRight() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_reverseGripQuatRight() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_rightHandIndicator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_rightHandIndicator() ;

constexpr int32_t const& __cordl_internal_get_selfInstrumentIndex() const;

constexpr int32_t& __cordl_internal_get_selfInstrumentIndex() ;

constexpr float_t const& __cordl_internal_get_snapDistance() const;

constexpr float_t& __cordl_internal_get_snapDistance() ;

constexpr float_t const& __cordl_internal_get_sphereRadius() const;

constexpr float_t& __cordl_internal_get_sphereRadius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spherecastSweep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spherecastSweep() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPositionLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPositionLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPositionRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPositionRight() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_startQuatLeft() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_startQuatLeft() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_startQuatRight() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_startQuatRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingLeftChestOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingLeftChestOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingRightChestOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingRightChestOffset() ;

constexpr float_t const& __cordl_internal_get_startingUnsnapDistance() const;

constexpr float_t& __cordl_internal_get_startingUnsnapDistance() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_strumCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_strumCollider() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_strumHandIndicator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_strumHandIndicator() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_strumList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_strumList() ;

constexpr float_t const& __cordl_internal_get_unsnapDistance() const;

constexpr float_t& __cordl_internal_get_unsnapDistance() ;

constexpr float_t const& __cordl_internal_get_vectorLerpSnap() const;

constexpr float_t& __cordl_internal_get_vectorLerpSnap() ;

constexpr void __cordl_internal_set_angleLerpSnap(float_t  value) ;

constexpr void __cordl_internal_set_angleSnapped(bool  value) ;

constexpr void __cordl_internal_set_anyHit(bool  value) ;

constexpr void __cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_chestColliderLeft(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_chestColliderRight(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_chestOffsetLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_chestOffsetRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_chestRotationOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_chestTouch(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_collidersHit(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_collidersHitCount(int32_t  value) ;

constexpr void __cordl_internal_set_collidersToBeIn(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_currentChestCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_currentFretIndex(int32_t  value) ;

constexpr void __cordl_internal_set_fretHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_frets(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_fretsList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_handIn(bool  value) ;

constexpr void __cordl_internal_set_holdingOffsetRotationLeft(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_holdingOffsetRotationRight(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_interactableMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_lastFretIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::OneStringGuitar_GuitarStates  value) ;

constexpr void __cordl_internal_set_leftHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_lerpValue(float_t  value) ;

constexpr void __cordl_internal_set_maxVelocity(float_t  value) ;

constexpr void __cordl_internal_set_maxVolume(float_t  value) ;

constexpr void __cordl_internal_set_minVolume(float_t  value) ;

constexpr void __cordl_internal_set_nullHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_parentHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_parentHandLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_parentHandRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_positionSnapped(bool  value) ;

constexpr void __cordl_internal_set_raycastHitList(::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  value) ;

constexpr void __cordl_internal_set_raycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_reverseGripPositionLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_reverseGripPositionRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_reverseGripQuatLeft(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_reverseGripQuatRight(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rightHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_selfInstrumentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_snapDistance(float_t  value) ;

constexpr void __cordl_internal_set_sphereRadius(float_t  value) ;

constexpr void __cordl_internal_set_spherecastSweep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startPositionLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startPositionRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startQuatLeft(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_startQuatRight(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_startingLeftChestOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingRightChestOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingUnsnapDistance(float_t  value) ;

constexpr void __cordl_internal_set_strumCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_strumHandIndicator(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_strumList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_unsnapDistance(float_t  value) ;

constexpr void __cordl_internal_set_vectorLerpSnap(float_t  value) ;

/// @brief Method .ctor, addr 0x57609f0, size 0x1bc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneStringGuitar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneStringGuitar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneStringGuitar(OneStringGuitar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneStringGuitar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneStringGuitar(OneStringGuitar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1342};

/// @brief Field chestOffsetLeft, offset: 0x334, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___chestOffsetLeft;

/// @brief Field chestOffsetRight, offset: 0x340, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___chestOffsetRight;

/// @brief Field holdingOffsetRotationLeft, offset: 0x34c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___holdingOffsetRotationLeft;

/// @brief Field holdingOffsetRotationRight, offset: 0x35c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___holdingOffsetRotationRight;

/// @brief Field chestRotationOffset, offset: 0x36c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___chestRotationOffset;

/// @brief Field currentChestCollider, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___currentChestCollider;

/// @brief Field chestColliderLeft, offset: 0x388, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___chestColliderLeft;

/// @brief Field chestColliderRight, offset: 0x390, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___chestColliderRight;

/// @brief Field lerpValue, offset: 0x398, size: 0x4, def value: None
 float_t  ___lerpValue;

/// @brief Field audioSource, offset: 0x3a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field parentHand, offset: 0x3a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentHand;

/// @brief Field parentHandLeft, offset: 0x3b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentHandLeft;

/// @brief Field parentHandRight, offset: 0x3b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentHandRight;

/// @brief Field unsnapDistance, offset: 0x3c0, size: 0x4, def value: None
 float_t  ___unsnapDistance;

/// @brief Field snapDistance, offset: 0x3c4, size: 0x4, def value: None
 float_t  ___snapDistance;

/// @brief Field startPositionLeft, offset: 0x3c8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPositionLeft;

/// @brief Field startQuatLeft, offset: 0x3d4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___startQuatLeft;

/// @brief Field reverseGripPositionLeft, offset: 0x3e4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___reverseGripPositionLeft;

/// @brief Field reverseGripQuatLeft, offset: 0x3f0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___reverseGripQuatLeft;

/// @brief Field startPositionRight, offset: 0x400, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPositionRight;

/// @brief Field startQuatRight, offset: 0x40c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___startQuatRight;

/// @brief Field reverseGripPositionRight, offset: 0x41c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___reverseGripPositionRight;

/// @brief Field reverseGripQuatRight, offset: 0x428, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___reverseGripQuatRight;

/// @brief Field angleLerpSnap, offset: 0x438, size: 0x4, def value: None
 float_t  ___angleLerpSnap;

/// @brief Field vectorLerpSnap, offset: 0x43c, size: 0x4, def value: None
 float_t  ___vectorLerpSnap;

/// @brief Field angleSnapped, offset: 0x440, size: 0x1, def value: None
 bool  ___angleSnapped;

/// @brief Field positionSnapped, offset: 0x441, size: 0x1, def value: None
 bool  ___positionSnapped;

/// @brief Field chestTouch, offset: 0x448, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___chestTouch;

/// @brief Field collidersHitCount, offset: 0x450, size: 0x4, def value: None
 int32_t  ___collidersHitCount;

/// @brief Field collidersHit, offset: 0x458, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___collidersHit;

/// @brief Field raycastHits, offset: 0x460, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___raycastHits;

/// @brief Field raycastHitList, offset: 0x468, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  ___raycastHitList;

/// @brief Field nullHit, offset: 0x470, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___nullHit;

/// @brief Field collidersToBeIn, offset: 0x4a0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___collidersToBeIn;

/// @brief Field interactableMask, offset: 0x4a8, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___interactableMask;

/// @brief Field currentFretIndex, offset: 0x4ac, size: 0x4, def value: None
 int32_t  ___currentFretIndex;

/// @brief Field lastFretIndex, offset: 0x4b0, size: 0x4, def value: None
 int32_t  ___lastFretIndex;

/// @brief Field frets, offset: 0x4b8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___frets;

/// @brief Field fretsList, offset: 0x4c0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___fretsList;

/// @brief Field audioClips, offset: 0x4c8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___audioClips;

/// @brief Field leftHandIndicator, offset: 0x4d0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___leftHandIndicator;

/// @brief Field rightHandIndicator, offset: 0x4d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___rightHandIndicator;

/// @brief Field fretHandIndicator, offset: 0x4e0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___fretHandIndicator;

/// @brief Field strumHandIndicator, offset: 0x4e8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___strumHandIndicator;

/// @brief Field sphereRadius, offset: 0x4f0, size: 0x4, def value: None
 float_t  ___sphereRadius;

/// @brief Field anyHit, offset: 0x4f4, size: 0x1, def value: None
 bool  ___anyHit;

/// @brief Field handIn, offset: 0x4f5, size: 0x1, def value: None
 bool  ___handIn;

/// @brief Field spherecastSweep, offset: 0x4f8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spherecastSweep;

/// @brief Field strumCollider, offset: 0x508, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___strumCollider;

/// @brief Field maxVolume, offset: 0x510, size: 0x4, def value: None
 float_t  ___maxVolume;

/// @brief Field minVolume, offset: 0x514, size: 0x4, def value: None
 float_t  ___minVolume;

/// @brief Field maxVelocity, offset: 0x518, size: 0x4, def value: None
 float_t  ___maxVelocity;

/// @brief Field strumList, offset: 0x520, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___strumList;

/// @brief Field selfInstrumentIndex, offset: 0x528, size: 0x4, def value: None
 int32_t  ___selfInstrumentIndex;

/// @brief Field lastState, offset: 0x52c, size: 0x4, def value: None
 ::GlobalNamespace::OneStringGuitar_GuitarStates  ___lastState;

/// @brief Field startingLeftChestOffset, offset: 0x530, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingLeftChestOffset;

/// @brief Field startingRightChestOffset, offset: 0x53c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingRightChestOffset;

/// @brief Field startingUnsnapDistance, offset: 0x548, size: 0x4, def value: None
 float_t  ___startingUnsnapDistance;

/// @brief Size padding 0x580 - 0x550 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___chestOffsetLeft) == 0x334, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___chestOffsetRight) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___holdingOffsetRotationLeft) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___holdingOffsetRotationRight) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___chestRotationOffset) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___currentChestCollider) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___chestColliderLeft) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___chestColliderRight) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___lerpValue) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___audioSource) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___parentHand) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___parentHandLeft) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___parentHandRight) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___unsnapDistance) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___snapDistance) == 0x3c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___startPositionLeft) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___startQuatLeft) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___reverseGripPositionLeft) == 0x3e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___reverseGripQuatLeft) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___startPositionRight) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___startQuatRight) == 0x40c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___reverseGripPositionRight) == 0x41c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___reverseGripQuatRight) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___angleLerpSnap) == 0x438, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___vectorLerpSnap) == 0x43c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___angleSnapped) == 0x440, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___positionSnapped) == 0x441, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___chestTouch) == 0x448, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___collidersHitCount) == 0x450, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___collidersHit) == 0x458, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___raycastHits) == 0x460, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___raycastHitList) == 0x468, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___nullHit) == 0x470, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___collidersToBeIn) == 0x4a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___interactableMask) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___currentFretIndex) == 0x4ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___lastFretIndex) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___frets) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___fretsList) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___audioClips) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___leftHandIndicator) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___rightHandIndicator) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___fretHandIndicator) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___strumHandIndicator) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___sphereRadius) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___anyHit) == 0x4f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___handIn) == 0x4f5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___spherecastSweep) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___strumCollider) == 0x508, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___maxVolume) == 0x510, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___minVolume) == 0x514, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___maxVelocity) == 0x518, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___strumList) == 0x520, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___selfInstrumentIndex) == 0x528, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___lastState) == 0x52c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___startingLeftChestOffset) == 0x530, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___startingRightChestOffset) == 0x53c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OneStringGuitar, ___startingUnsnapDistance) == 0x548, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OneStringGuitar) == 0x580, "Size mismatch!");

} // namespace end def GlobalNamespace
