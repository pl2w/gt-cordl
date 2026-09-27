#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderItem_BuilderItemState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderItem)
namespace GlobalNamespace {
struct BuilderItem_BuilderItemState;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GorillaTagScripts {
class BuilderAttachEdge;
}
namespace GorillaTagScripts {
class BuilderAttachGridPlane;
}
namespace GorillaTagScripts {
class BuilderItemReliableState;
}
namespace GorillaTagScripts {
class BuilderTable;
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
class Behaviour;
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
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderItem;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderItem*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderItem*, "GorillaTagScripts", "BuilderItem");
// Dependencies GorillaTagScripts.BuilderItem::BuilderItemState, TransferrableObject, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderItem
class CORDL_TYPE BuilderItem : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using BuilderItemState = ::GlobalNamespace::BuilderItem_BuilderItemState;

/// @brief Field attachedPiece, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachedPiece, put=__cordl_internal_set_attachedPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  attachedPiece;

/// @brief Field audioSource, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field builtItemPath, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_builtItemPath, put=__cordl_internal_set_builtItemPath)) ::StringW  builtItemPath;

/// @brief Field colliders, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field currTable, offset 0x3b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currTable, put=__cordl_internal_set_currTable)) ::UnityW<::GorillaTagScripts::BuilderTable>  currTable;

/// @brief Field edges, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_edges, put=__cordl_internal_set_edges)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachEdge>>*  edges;

/// @brief Field enableCollidersWhenReady, offset 0x350, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableCollidersWhenReady, put=__cordl_internal_set_enableCollidersWhenReady)) bool  enableCollidersWhenReady;

/// @brief Field gridPlanes, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_gridPlanes, put=__cordl_internal_set_gridPlanes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  gridPlanes;

/// @brief Field handsFreeOfCollidersTime, offset 0x354, size 0x4 
 __declspec(property(get=__cordl_internal_get_handsFreeOfCollidersTime, put=__cordl_internal_set_handsFreeOfCollidersTime)) float_t  handsFreeOfCollidersTime;

/// @brief Field initialGrabInteractorScale, offset 0x3ac, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialGrabInteractorScale, put=__cordl_internal_set_initialGrabInteractorScale)) ::UnityEngine::Vector3  initialGrabInteractorScale;

/// @brief Field initialPosition, offset 0x390, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialPosition, put=__cordl_internal_set_initialPosition)) ::UnityEngine::Vector3  initialPosition;

/// @brief Field initialRotation, offset 0x39c, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialRotation, put=__cordl_internal_set_initialRotation)) ::UnityEngine::Quaternion  initialRotation;

/// @brief Field itemRoot, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemRoot, put=__cordl_internal_set_itemRoot)) ::UnityW<::UnityEngine::GameObject>  itemRoot;

/// @brief Field onlyWhenPlacedBehaviours, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_onlyWhenPlacedBehaviours, put=__cordl_internal_set_onlyWhenPlacedBehaviours)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  onlyWhenPlacedBehaviours;

/// @brief Field parent, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::UnityEngine::Transform>  parent;

/// @brief Field parentItem, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentItem, put=__cordl_internal_set_parentItem)) ::UnityW<::GorillaTagScripts::BuilderItem>  parentItem;

/// @brief Field placeAudio, offset 0x3d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeAudio, put=__cordl_internal_set_placeAudio)) ::UnityW<::UnityEngine::AudioClip>  placeAudio;

/// @brief Field placeVFX, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeVFX, put=__cordl_internal_set_placeVFX)) ::UnityW<::UnityEngine::GameObject>  placeVFX;

/// @brief Field previousItemState, offset 0x3e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousItemState, put=__cordl_internal_set_previousItemState)) ::GlobalNamespace::BuilderItem_BuilderItemState  previousItemState;

/// @brief Field reliableState, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableState, put=__cordl_internal_set_reliableState)) ::UnityW<::GorillaTagScripts::BuilderItemReliableState>  reliableState;

/// @brief Field snapAudio, offset 0x3c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapAudio, put=__cordl_internal_set_snapAudio)) ::UnityW<::UnityEngine::AudioClip>  snapAudio;

/// @brief Method AttachPiece, addr 0x5b866ec, size 0x2e4, virtual false, abstract: false, final false
inline void AttachPiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method Awake, addr 0x5b865ec, size 0xc8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildEnvItem, addr 0x5b87444, size 0xec, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> BuildEnvItem(int32_t  prefabHash, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method DetachPiece, addr 0x5b869d0, size 0x320, virtual false, abstract: false, final false
inline void DetachPiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method GetDefaultTransformationMatrix, addr 0x5b86d70, size 0xa0, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetDefaultTransformationMatrix() ;

/// @brief Method GetPhotonViewId, addr 0x5b875a0, size 0x88, virtual false, abstract: false, final false
inline int32_t GetPhotonViewId() ;

/// @brief Method IsOverlapping, addr 0x5b86f50, size 0xe4, virtual false, abstract: false, final false
inline bool IsOverlapping(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  interactionPoints) ;

/// @brief Method LateUpdateLocal, addr 0x5b87034, size 0x8, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateShared, addr 0x5b86e10, size 0x140, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GorillaTagScripts::BuilderItem* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b866bc, size 0x8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b866b4, size 0x8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5b8703c, size 0xdc, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHandMatrixUpdate, addr 0x5b87530, size 0x70, virtual true, abstract: false, final false
inline void OnHandMatrixUpdate(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, bool  leftHand) ;

/// @brief Method OnHoverOverTableEnd, addr 0x5b87254, size 0x14, virtual false, abstract: false, final false
inline void OnHoverOverTableEnd(::GorillaTagScripts::BuilderTable*  table) ;

/// @brief Method OnHoverOverTableStart, addr 0x5b87244, size 0x10, virtual false, abstract: false, final false
inline void OnHoverOverTableStart(::GorillaTagScripts::BuilderTable*  table) ;

/// @brief Method OnJoinedRoom, addr 0x5b87268, size 0x8, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x5b87270, size 0x128, virtual true, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnRelease, addr 0x5b87118, size 0x7c, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnStateChanged, addr 0x5b86cf0, size 0x80, virtual false, abstract: false, final false
inline void OnStateChanged() ;

/// @brief Method PlayVFX, addr 0x5b87398, size 0x98, virtual false, abstract: false, final false
inline void PlayVFX(::UnityEngine::GameObject*  vfx) ;

/// @brief Method Reparent, addr 0x5b87194, size 0xb0, virtual false, abstract: false, final false
inline bool Reparent(::UnityEngine::Transform*  _transform) ;

/// @brief Method ShouldBeKinematic, addr 0x5b865c8, size 0x24, virtual true, abstract: false, final false
inline bool ShouldBeKinematic() ;

/// @brief Method ShouldPlayFX, addr 0x5b87430, size 0x14, virtual false, abstract: false, final false
inline bool ShouldPlayFX() ;

/// @brief Method Start, addr 0x5b866c4, size 0x28, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_attachedPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_attachedPiece() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::StringW const& __cordl_internal_get_builtItemPath() const;

constexpr ::StringW& __cordl_internal_get_builtItemPath() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_currTable() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_currTable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachEdge>>* const& __cordl_internal_get_edges() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachEdge>>*& __cordl_internal_get_edges() ;

constexpr bool const& __cordl_internal_get_enableCollidersWhenReady() const;

constexpr bool& __cordl_internal_get_enableCollidersWhenReady() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>* const& __cordl_internal_get_gridPlanes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*& __cordl_internal_get_gridPlanes() ;

constexpr float_t const& __cordl_internal_get_handsFreeOfCollidersTime() const;

constexpr float_t& __cordl_internal_get_handsFreeOfCollidersTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialGrabInteractorScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialGrabInteractorScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialRotation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_itemRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_itemRoot() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>* const& __cordl_internal_get_onlyWhenPlacedBehaviours() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*& __cordl_internal_get_onlyWhenPlacedBehaviours() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderItem> const& __cordl_internal_get_parentItem() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderItem>& __cordl_internal_get_parentItem() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_placeAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_placeAudio() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_placeVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_placeVFX() ;

constexpr ::GlobalNamespace::BuilderItem_BuilderItemState const& __cordl_internal_get_previousItemState() const;

constexpr ::GlobalNamespace::BuilderItem_BuilderItemState& __cordl_internal_get_previousItemState() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderItemReliableState> const& __cordl_internal_get_reliableState() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderItemReliableState>& __cordl_internal_get_reliableState() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_snapAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_snapAudio() ;

constexpr void __cordl_internal_set_attachedPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_builtItemPath(::StringW  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_currTable(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_edges(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachEdge>>*  value) ;

constexpr void __cordl_internal_set_enableCollidersWhenReady(bool  value) ;

constexpr void __cordl_internal_set_gridPlanes(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  value) ;

constexpr void __cordl_internal_set_handsFreeOfCollidersTime(float_t  value) ;

constexpr void __cordl_internal_set_initialGrabInteractorScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_itemRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_onlyWhenPlacedBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_parentItem(::UnityW<::GorillaTagScripts::BuilderItem>  value) ;

constexpr void __cordl_internal_set_placeAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_placeVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_previousItemState(::GlobalNamespace::BuilderItem_BuilderItemState  value) ;

constexpr void __cordl_internal_set_reliableState(::UnityW<::GorillaTagScripts::BuilderItemReliableState>  value) ;

constexpr void __cordl_internal_set_snapAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x5b87628, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderItem(BuilderItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderItem(BuilderItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3930};

/// @brief Field reliableState, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderItemReliableState>  ___reliableState;

/// @brief Field builtItemPath, offset: 0x340, size: 0x8, def value: None
 ::StringW  ___builtItemPath;

/// @brief Field itemRoot, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___itemRoot;

/// @brief Field enableCollidersWhenReady, offset: 0x350, size: 0x1, def value: None
 bool  ___enableCollidersWhenReady;

/// @brief Field handsFreeOfCollidersTime, offset: 0x354, size: 0x4, def value: None
 float_t  ___handsFreeOfCollidersTime;

/// @brief Field attachedPiece, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___attachedPiece;

/// @brief Field onlyWhenPlacedBehaviours, offset: 0x360, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  ___onlyWhenPlacedBehaviours;

/// @brief Field parentItem, offset: 0x368, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderItem>  ___parentItem;

/// @brief Field gridPlanes, offset: 0x370, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  ___gridPlanes;

/// @brief Field edges, offset: 0x378, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachEdge>>*  ___edges;

/// @brief Field colliders, offset: 0x380, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field parent, offset: 0x388, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parent;

/// @brief Field initialPosition, offset: 0x390, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialPosition;

/// @brief Field initialRotation, offset: 0x39c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialRotation;

/// @brief Field initialGrabInteractorScale, offset: 0x3ac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialGrabInteractorScale;

/// @brief Field currTable, offset: 0x3b8, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___currTable;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x3c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field snapAudio, offset: 0x3c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___snapAudio;

/// @brief Field placeAudio, offset: 0x3d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___placeAudio;

/// @brief Field placeVFX, offset: 0x3d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___placeVFX;

/// @brief Field previousItemState, offset: 0x3e0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderItem_BuilderItemState  ___previousItemState;

/// @brief Size padding 0x418 - 0x3e8 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___reliableState) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___builtItemPath) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___itemRoot) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___enableCollidersWhenReady) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___handsFreeOfCollidersTime) == 0x354, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___attachedPiece) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___onlyWhenPlacedBehaviours) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___parentItem) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___gridPlanes) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___edges) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___colliders) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___parent) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___initialPosition) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___initialRotation) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___initialGrabInteractorScale) == 0x3ac, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___currTable) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___audioSource) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___snapAudio) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___placeAudio) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___placeVFX) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderItem, ___previousItemState) == 0x3e0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderItem) == 0x418, "Size mismatch!");

} // namespace end def GorillaTagScripts
