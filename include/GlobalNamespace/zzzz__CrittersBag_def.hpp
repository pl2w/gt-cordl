#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersBag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersBag)
namespace GlobalNamespace {
struct CrittersActor_CrittersActorType;
}
namespace GlobalNamespace {
class CrittersActor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersBag;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersBag*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersBag*, "", "CrittersBag");
// Dependencies CrittersActor, CrittersAttachPoint::AnchoredLocationTypes, UnityEngine.Collider
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersBag
class CORDL_TYPE CrittersBag : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
/// @brief Field anchorLocation, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_anchorLocation, put=__cordl_internal_set_anchorLocation)) ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  anchorLocation;

/// @brief Field attachDisableColliders, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachDisableColliders, put=__cordl_internal_set_attachDisableColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  attachDisableColliders;

/// @brief Field attachSound, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachSound, put=__cordl_internal_set_attachSound)) ::UnityW<::UnityEngine::AudioClip>  attachSound;

/// @brief Field attachableCollider, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachableCollider, put=__cordl_internal_set_attachableCollider)) ::UnityW<::UnityEngine::Collider>  attachableCollider;

/// @brief Field attachedColliders, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachedColliders, put=__cordl_internal_set_attachedColliders)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  attachedColliders;

/// @brief Field attachedToLocalPlayer, offset 0x1e9, size 0x1 
 __declspec(property(get=__cordl_internal_get_attachedToLocalPlayer, put=__cordl_internal_set_attachedToLocalPlayer)) bool  attachedToLocalPlayer;

/// @brief Field audioSrc, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSrc, put=__cordl_internal_set_audioSrc)) ::UnityW<::UnityEngine::AudioSource>  audioSrc;

/// @brief Field blockAttachTypes, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockAttachTypes, put=__cordl_internal_set_blockAttachTypes)) ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*  blockAttachTypes;

/// @brief Field detachSound, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_detachSound, put=__cordl_internal_set_detachSound)) ::UnityW<::UnityEngine::AudioClip>  detachSound;

/// @brief Field dropCube, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dropCube, put=__cordl_internal_set_dropCube)) ::UnityW<::UnityEngine::BoxCollider>  dropCube;

/// @brief Field equipSound, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_equipSound, put=__cordl_internal_set_equipSound)) ::UnityW<::UnityEngine::AudioClip>  equipSound;

/// @brief Field isAttachedToPlayer, offset 0x1e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAttachedToPlayer, put=__cordl_internal_set_isAttachedToPlayer)) bool  isAttachedToPlayer;

/// @brief Field overlapColliders, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapColliders, put=__cordl_internal_set_overlapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapColliders;

/// @brief Field unequipSound, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unequipSound, put=__cordl_internal_set_unequipSound)) ::UnityW<::UnityEngine::AudioClip>  unequipSound;

/// @brief Method AddStoredObjectCollider, addr 0x55fc0d0, size 0x1cc, virtual false, abstract: false, final false
inline void AddStoredObjectCollider(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method Awake, addr 0x55fb684, size 0xc0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CleanupActor, addr 0x55fb8b4, size 0x110, virtual true, abstract: false, final false
inline void CleanupActor() ;

/// @brief Method GlobalGrabbedBy, addr 0x55fb9c4, size 0x1cc, virtual true, abstract: false, final false
inline void GlobalGrabbedBy(::GlobalNamespace::CrittersActor*  grabbedBy) ;

/// @brief Method GrabbedBy, addr 0x55fbb90, size 0x8, virtual true, abstract: false, final false
inline void GrabbedBy(::GlobalNamespace::CrittersActor*  grabbedBy, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing) ;

/// @brief Method IsActorValidStore, addr 0x55fc5f8, size 0x70, virtual false, abstract: false, final false
inline bool IsActorValidStore(::GlobalNamespace::CrittersActor*  actor) ;

static inline ::GlobalNamespace::CrittersBag* New_ctor() ;

/// @brief Method OnHover, addr 0x55fb744, size 0x170, virtual true, abstract: false, final false
inline void OnHover(bool  isLeft) ;

/// @brief Method Released, addr 0x55fbb98, size 0x538, virtual true, abstract: false, final false
inline void Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulse, ::UnityEngine::Vector3  impulseRotation) ;

/// @brief Method RemoveStoredObjectCollider, addr 0x55fc4cc, size 0x12c, virtual false, abstract: false, final false
inline void RemoveStoredObjectCollider(::GlobalNamespace::CrittersActor*  actor, bool  playSound) ;

constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes const& __cordl_internal_get_anchorLocation() const;

constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes& __cordl_internal_get_anchorLocation() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_attachDisableColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_attachDisableColliders() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_attachSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_attachSound() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_attachableCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_attachableCollider() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_attachedColliders() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_attachedColliders() ;

constexpr bool const& __cordl_internal_get_attachedToLocalPlayer() const;

constexpr bool& __cordl_internal_get_attachedToLocalPlayer() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSrc() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSrc() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>* const& __cordl_internal_get_blockAttachTypes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*& __cordl_internal_get_blockAttachTypes() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_detachSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_detachSound() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_dropCube() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_dropCube() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_equipSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_equipSound() ;

constexpr bool const& __cordl_internal_get_isAttachedToPlayer() const;

constexpr bool& __cordl_internal_get_isAttachedToPlayer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_overlapColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_overlapColliders() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_unequipSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_unequipSound() ;

constexpr void __cordl_internal_set_anchorLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  value) ;

constexpr void __cordl_internal_set_attachDisableColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_attachSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_attachableCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_attachedColliders(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_attachedToLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_audioSrc(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_blockAttachTypes(::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*  value) ;

constexpr void __cordl_internal_set_detachSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_dropCube(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_equipSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_isAttachedToPlayer(bool  value) ;

constexpr void __cordl_internal_set_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_unequipSound(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x55fc668, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersBag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersBag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersBag(CrittersBag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersBag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersBag(CrittersBag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{86};

/// @brief Field audioSrc, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSrc;

/// @brief Field anchorLocation, offset: 0x190, size: 0x4, def value: None
 ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  ___anchorLocation;

/// @brief Field attachableCollider, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___attachableCollider;

/// @brief Field dropCube, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___dropCube;

/// @brief Field overlapColliders, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___overlapColliders;

/// @brief Field attachDisableColliders, offset: 0x1b0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___attachDisableColliders;

/// @brief Field attachedColliders, offset: 0x1b8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  ___attachedColliders;

/// [Header("Child object attachment sounds")]
/// @brief Field attachSound, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___attachSound;

/// @brief Field detachSound, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___detachSound;

/// [Header("Monke equip sounds")]
/// @brief Field equipSound, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___equipSound;

/// @brief Field unequipSound, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___unequipSound;

/// [Header("Attachment Blocking")]
/// @brief Field blockAttachTypes, offset: 0x1e0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*  ___blockAttachTypes;

/// @brief Field isAttachedToPlayer, offset: 0x1e8, size: 0x1, def value: None
 bool  ___isAttachedToPlayer;

/// @brief Field attachedToLocalPlayer, offset: 0x1e9, size: 0x1, def value: None
 bool  ___attachedToLocalPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersBag, ___audioSrc) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___anchorLocation) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___attachableCollider) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___dropCube) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___overlapColliders) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___attachDisableColliders) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___attachedColliders) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___attachSound) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___detachSound) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___equipSound) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___unequipSound) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___blockAttachTypes) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___isAttachedToPlayer) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersBag, ___attachedToLocalPlayer) == 0x1e9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersBag) == 0x1f0, "Size mismatch!");

} // namespace end def GlobalNamespace
