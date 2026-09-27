#pragma once
// IWYU pragma private; include "GlobalNamespace/MenagerieCritter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KeyValueStringPair_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieCritter_MenagerieCritterState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MenagerieCritter)
namespace GlobalNamespace {
class CritterConfiguration;
}
namespace GlobalNamespace {
class CritterVisuals;
}
namespace GlobalNamespace {
class CrittersAnim;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GlobalNamespace {
class IEyeScannable;
}
namespace GlobalNamespace {
class IHoldableObject;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
struct KeyValueStringPair;
}
namespace GlobalNamespace {
struct MenagerieCritter_MenagerieCritterState;
}
namespace GlobalNamespace {
class MenagerieSlot;
}
namespace GlobalNamespace {
class Menagerie_CritterData;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
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
namespace GlobalNamespace {
class MenagerieCritter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenagerieCritter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenagerieCritter*, "", "MenagerieCritter");
// Dependencies KeyValueStringPair, MenagerieCritter::MenagerieCritterState, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenagerieCritter
class CORDL_TYPE MenagerieCritter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MenagerieCritterState = ::GlobalNamespace::MenagerieCritter_MenagerieCritterState;

 __declspec(property(get=get_CritterData)) ::GlobalNamespace::Menagerie_CritterData*  CritterData;

 __declspec(property(get=IEyeScannable_get_Bounds)) ::UnityEngine::Bounds  IEyeScannable_Bounds;

 __declspec(property(get=IEyeScannable_get_Entries)) ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*  IEyeScannable_Entries;

 __declspec(property(get=IEyeScannable_get_Position)) ::UnityEngine::Vector3  IEyeScannable_Position;

 __declspec(property(get=IEyeScannable_get_scannableId)) int32_t  IEyeScannable_scannableId;

/// @brief Field OnDataChange, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDataChange, put=__cordl_internal_set_OnDataChange)) ::System::Action*  OnDataChange;

/// @brief Field OnReleased, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReleased, put=__cordl_internal_set_OnReleased)) ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  OnReleased;

 __declspec(property(get=get_Slot, put=set_Slot)) ::UnityW<::GlobalNamespace::MenagerieSlot>  Slot;

 __declspec(property(get=get_TwoHanded)) bool  TwoHanded;

/// @brief Field _animRoot, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__animRoot, put=__cordl_internal_set__animRoot)) ::UnityW<::UnityEngine::Transform>  _animRoot;

/// @brief Field _bodyScale, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get__bodyScale, put=__cordl_internal_set__bodyScale)) ::UnityEngine::Vector3  _bodyScale;

/// @brief Field _critterConfiguration, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__critterConfiguration, put=__cordl_internal_set__critterConfiguration)) ::GlobalNamespace::CritterConfiguration*  _critterConfiguration;

/// @brief Field _critterData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__critterData, put=__cordl_internal_set__critterData)) ::GlobalNamespace::Menagerie_CritterData*  _critterData;

/// @brief Field _currentAnim, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentAnim, put=__cordl_internal_set__currentAnim)) ::GlobalNamespace::CrittersAnim*  _currentAnim;

/// @brief Field _currentAnimTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentAnimTime, put=__cordl_internal_set__currentAnimTime)) float_t  _currentAnimTime;

/// @brief Field _slot, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__slot, put=__cordl_internal_set__slot)) ::UnityW<::GlobalNamespace::MenagerieSlot>  _slot;

/// @brief Field activeGrabbers, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeGrabbers, put=__cordl_internal_set_activeGrabbers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  activeGrabbers;

/// @brief Field bodyCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::Collider>  bodyCollider;

/// @brief Field currentState, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::MenagerieCritter_MenagerieCritterState  currentState;

/// @brief Field eyeScanData, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeScanData, put=__cordl_internal_set_eyeScanData)) ::ArrayW<::GlobalNamespace::KeyValueStringPair>  eyeScanData;

/// @brief Field grabbedFX, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedFX, put=__cordl_internal_set_grabbedFX)) ::UnityW<::UnityEngine::GameObject>  grabbedFX;

/// @brief Field grabbedHaptics, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedHaptics, put=__cordl_internal_set_grabbedHaptics)) ::UnityW<::UnityEngine::AudioClip>  grabbedHaptics;

/// @brief Field grabbedHapticsStrength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbedHapticsStrength, put=__cordl_internal_set_grabbedHapticsStrength)) float_t  grabbedHapticsStrength;

/// @brief Field heldAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldAnimation, put=__cordl_internal_set_heldAnimation)) ::GlobalNamespace::CrittersAnim*  heldAnimation;

/// @brief Field heldBy, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldBy, put=__cordl_internal_set_heldBy)) ::UnityW<::UnityEngine::GameObject>  heldBy;

/// @brief Field isHeld, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeld, put=__cordl_internal_set_isHeld)) bool  isHeld;

/// @brief Field isHeldLeftHand, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeldLeftHand, put=__cordl_internal_set_isHeldLeftHand)) bool  isHeldLeftHand;

/// @brief Field visuals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_visuals, put=__cordl_internal_set_visuals)) ::UnityW<::GlobalNamespace::CritterVisuals>  visuals;

/// @brief Convert operator to "::GlobalNamespace::IEyeScannable"
constexpr operator  ::GlobalNamespace::IEyeScannable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IHoldableObject"
constexpr operator  ::GlobalNamespace::IHoldableObject*() noexcept;

/// @brief Method ApplyCritterData, addr 0x56fa5d0, size 0xe0, virtual false, abstract: false, final false
inline void ApplyCritterData(::GlobalNamespace::Menagerie_CritterData*  critterData) ;

/// @brief Method BuildEyeScannerData, addr 0x56fc248, size 0x30c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* BuildEyeScannerData() ;

/// @brief Method DropItemCleanup, addr 0x56fc1ac, size 0x4, virtual true, abstract: false, final true
inline void DropItemCleanup() ;

/// @brief Method GetCurrentStateName, addr 0x56fc604, size 0x6c, virtual false, abstract: false, final false
inline ::StringW GetCurrentStateName() ;

/// @brief Method IEyeScannable.get_Bounds, addr 0x56fc204, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds IEyeScannable_get_Bounds() ;

/// @brief Method IEyeScannable.get_Entries, addr 0x56fc244, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* IEyeScannable_get_Entries() ;

/// @brief Method IEyeScannable.get_Position, addr 0x56fc1d0, size 0x34, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 IEyeScannable_get_Position() ;

/// @brief Method IEyeScannable.get_scannableId, addr 0x56fc1b0, size 0x20, virtual true, abstract: false, final true
inline int32_t IEyeScannable_get_scannableId() ;

/// @brief Method IHoldableObject.get_gameObject, addr 0x56fc870, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> IHoldableObject_get_gameObject() ;

/// @brief Method IHoldableObject.get_name, addr 0x56fc878, size 0x8, virtual true, abstract: false, final true
inline ::StringW IHoldableObject_get_name() ;

/// @brief Method IHoldableObject.set_name, addr 0x56fc880, size 0x8, virtual true, abstract: false, final true
inline void IHoldableObject_set_name(::StringW  value) ;

static inline ::GlobalNamespace::MenagerieCritter* New_ctor() ;

/// @brief Method OnDisable, addr 0x56fc5ac, size 0x58, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56fc554, size 0x58, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x56fbd08, size 0x1a4, virtual true, abstract: false, final true
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x56fbd04, size 0x4, virtual true, abstract: false, final true
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x56fbeac, size 0x1f8, virtual true, abstract: false, final true
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method PlayAnimation, addr 0x56fbbfc, size 0x100, virtual false, abstract: false, final false
inline void PlayAnimation(::GlobalNamespace::CrittersAnim*  anim, float_t  time) ;

/// @brief Method ResetToTransform, addr 0x56fc0a4, size 0x108, virtual false, abstract: false, final false
inline void ResetToTransform() ;

/// @brief Method Update, addr 0x56fbabc, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAnimation, addr 0x56fbac0, size 0x13c, virtual false, abstract: false, final false
inline void UpdateAnimation() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDataChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnDataChange() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>* const& __cordl_internal_get_OnReleased() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*& __cordl_internal_get_OnReleased() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__animRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__animRoot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__bodyScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__bodyScale() ;

constexpr ::GlobalNamespace::CritterConfiguration* const& __cordl_internal_get__critterConfiguration() const;

constexpr ::GlobalNamespace::CritterConfiguration*& __cordl_internal_get__critterConfiguration() ;

constexpr ::GlobalNamespace::Menagerie_CritterData* const& __cordl_internal_get__critterData() const;

constexpr ::GlobalNamespace::Menagerie_CritterData*& __cordl_internal_get__critterData() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get__currentAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get__currentAnim() ;

constexpr float_t const& __cordl_internal_get__currentAnimTime() const;

constexpr float_t& __cordl_internal_get__currentAnimTime() ;

constexpr ::UnityW<::GlobalNamespace::MenagerieSlot> const& __cordl_internal_get__slot() const;

constexpr ::UnityW<::GlobalNamespace::MenagerieSlot>& __cordl_internal_get__slot() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>* const& __cordl_internal_get_activeGrabbers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*& __cordl_internal_get_activeGrabbers() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_bodyCollider() ;

constexpr ::GlobalNamespace::MenagerieCritter_MenagerieCritterState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::MenagerieCritter_MenagerieCritterState& __cordl_internal_get_currentState() ;

constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair> const& __cordl_internal_get_eyeScanData() const;

constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair>& __cordl_internal_get_eyeScanData() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_grabbedFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_grabbedFX() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_grabbedHaptics() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_grabbedHaptics() ;

constexpr float_t const& __cordl_internal_get_grabbedHapticsStrength() const;

constexpr float_t& __cordl_internal_get_grabbedHapticsStrength() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_heldAnimation() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_heldAnimation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_heldBy() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_heldBy() ;

constexpr bool const& __cordl_internal_get_isHeld() const;

constexpr bool& __cordl_internal_get_isHeld() ;

constexpr bool const& __cordl_internal_get_isHeldLeftHand() const;

constexpr bool& __cordl_internal_get_isHeldLeftHand() ;

constexpr ::UnityW<::GlobalNamespace::CritterVisuals> const& __cordl_internal_get_visuals() const;

constexpr ::UnityW<::GlobalNamespace::CritterVisuals>& __cordl_internal_get_visuals() ;

constexpr void __cordl_internal_set_OnDataChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnReleased(::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  value) ;

constexpr void __cordl_internal_set__animRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__bodyScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__critterConfiguration(::GlobalNamespace::CritterConfiguration*  value) ;

constexpr void __cordl_internal_set__critterData(::GlobalNamespace::Menagerie_CritterData*  value) ;

constexpr void __cordl_internal_set__currentAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set__currentAnimTime(float_t  value) ;

constexpr void __cordl_internal_set__slot(::UnityW<::GlobalNamespace::MenagerieSlot>  value) ;

constexpr void __cordl_internal_set_activeGrabbers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  value) ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::MenagerieCritter_MenagerieCritterState  value) ;

constexpr void __cordl_internal_set_eyeScanData(::ArrayW<::GlobalNamespace::KeyValueStringPair>  value) ;

constexpr void __cordl_internal_set_grabbedFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_grabbedHaptics(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_grabbedHapticsStrength(float_t  value) ;

constexpr void __cordl_internal_set_heldAnimation(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_heldBy(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isHeld(bool  value) ;

constexpr void __cordl_internal_set_isHeldLeftHand(bool  value) ;

constexpr void __cordl_internal_set_visuals(::UnityW<::GlobalNamespace::CritterVisuals>  value) ;

/// @brief Method .ctor, addr 0x56fc7a8, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDataChange, addr 0x56fc670, size 0x9c, virtual true, abstract: false, final true
inline void add_OnDataChange(::System::Action*  value) ;

/// @brief Method get_CritterData, addr 0x56fbaac, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Menagerie_CritterData* get_CritterData() ;

/// @brief Method get_Slot, addr 0x56fbab4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MenagerieSlot> get_Slot() ;

/// @brief Method get_TwoHanded, addr 0x56fbcfc, size 0x8, virtual true, abstract: false, final true
inline bool get_TwoHanded() ;

/// @brief Convert to "::GlobalNamespace::IEyeScannable"
constexpr ::GlobalNamespace::IEyeScannable* i___GlobalNamespace__IEyeScannable() noexcept;

/// @brief Convert to "::GlobalNamespace::IHoldableObject"
constexpr ::GlobalNamespace::IHoldableObject* i___GlobalNamespace__IHoldableObject() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnDataChange, addr 0x56fc70c, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnDataChange(::System::Action*  value) ;

/// @brief Method set_Slot, addr 0x56fa498, size 0x138, virtual false, abstract: false, final false
inline void set_Slot(::GlobalNamespace::MenagerieSlot*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenagerieCritter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenagerieCritter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MenagerieCritter(MenagerieCritter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenagerieCritter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenagerieCritter(MenagerieCritter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{138};

/// @brief Field visuals, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CritterVisuals>  ___visuals;

/// @brief Field bodyCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___bodyCollider;

/// [Header("Feedback")]
/// @brief Field heldAnimation, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___heldAnimation;

/// @brief Field grabbedHaptics, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___grabbedHaptics;

/// @brief Field grabbedHapticsStrength, offset: 0x40, size: 0x4, def value: None
 float_t  ___grabbedHapticsStrength;

/// @brief Field grabbedFX, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___grabbedFX;

/// @brief Field _currentAnim, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ____currentAnim;

/// @brief Field _currentAnimTime, offset: 0x58, size: 0x4, def value: None
 float_t  ____currentAnimTime;

/// @brief Field _animRoot, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____animRoot;

/// @brief Field _bodyScale, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____bodyScale;

/// @brief Field currentState, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::MenagerieCritter_MenagerieCritterState  ___currentState;

/// @brief Field _critterConfiguration, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::CritterConfiguration*  ____critterConfiguration;

/// @brief Field _critterData, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::Menagerie_CritterData*  ____critterData;

/// @brief Field _slot, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenagerieSlot>  ____slot;

/// @brief Field activeGrabbers, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  ___activeGrabbers;

/// @brief Field heldBy, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___heldBy;

/// @brief Field isHeld, offset: 0xa0, size: 0x1, def value: None
 bool  ___isHeld;

/// @brief Field isHeldLeftHand, offset: 0xa1, size: 0x1, def value: None
 bool  ___isHeldLeftHand;

/// @brief Field OnReleased, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  ___OnReleased;

/// @brief Field eyeScanData, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::KeyValueStringPair>  ___eyeScanData;

/// [CompilerGenerated]
/// @brief Field OnDataChange, offset: 0xb8, size: 0x8, def value: None
 ::System::Action*  ___OnDataChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___visuals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___bodyCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___heldAnimation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___grabbedHaptics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___grabbedHapticsStrength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___grabbedFX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ____currentAnim) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ____currentAnimTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ____animRoot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ____bodyScale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___currentState) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ____critterConfiguration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ____critterData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ____slot) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___activeGrabbers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___heldBy) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___isHeld) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___isHeldLeftHand) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___OnReleased) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___eyeScanData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenagerieCritter, ___OnDataChange) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenagerieCritter) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
