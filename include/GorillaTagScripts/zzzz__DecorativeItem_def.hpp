#pragma once
// IWYU pragma private; include "GorillaTagScripts/DecorativeItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItem_DecorativeItemState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DecorativeItem)
namespace GlobalNamespace {
struct DecorativeItem_DecorativeItemState;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTagScripts {
class DecorativeItemReliableState;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
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
class DecorativeItem;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::DecorativeItem*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::DecorativeItem*, "GorillaTagScripts", "DecorativeItem");
// Dependencies GorillaTagScripts.DecorativeItem::DecorativeItemState, TransferrableObject, UnityEngine.LayerMask, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.DecorativeItem
class CORDL_TYPE DecorativeItem : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using DecorativeItemState = ::GlobalNamespace::DecorativeItem_DecorativeItemState;

/// @brief Field _respawnTimestamp, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get__respawnTimestamp, put=__cordl_internal_set__respawnTimestamp)) float_t  _respawnTimestamp;

/// @brief Field audioSource, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field breakItemLayerMask, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakItemLayerMask, put=__cordl_internal_set_breakItemLayerMask)) ::UnityEngine::LayerMask  breakItemLayerMask;

/// @brief Field currentPosition, offset 0x368, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentPosition, put=__cordl_internal_set_currentPosition)) ::UnityEngine::Vector3  currentPosition;

/// @brief Field isSnapped, offset 0x364, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSnapped, put=__cordl_internal_set_isSnapped)) bool  isSnapped;

/// @brief Field parent, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::UnityEngine::Transform>  parent;

/// @brief Field previousItemState, offset 0x390, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousItemState, put=__cordl_internal_set_previousItemState)) ::GlobalNamespace::DecorativeItem_DecorativeItemState  previousItemState;

/// @brief Field reliableState, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableState, put=__cordl_internal_set_reliableState)) ::UnityW<::GorillaTagScripts::DecorativeItemReliableState>  reliableState;

/// @brief Field respawnItem, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_respawnItem, put=__cordl_internal_set_respawnItem)) ::UnityEngine::Events::UnityAction_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*  respawnItem;

/// @brief Field respawnTimer, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_respawnTimer, put=__cordl_internal_set_respawnTimer)) ::UnityEngine::Coroutine*  respawnTimer;

/// @brief Field shatterVFX, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_shatterVFX, put=__cordl_internal_set_shatterVFX)) ::UnityW<::UnityEngine::GameObject>  shatterVFX;

/// @brief Field snapAudio, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapAudio, put=__cordl_internal_set_snapAudio)) ::UnityW<::UnityEngine::AudioClip>  snapAudio;

/// @brief Method InvokeRespawn, addr 0x5bb6ca8, size 0x2c, virtual false, abstract: false, final false
inline void InvokeRespawn() ;

/// @brief Method LateUpdateLocal, addr 0x5bb6bdc, size 0xcc, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateShared, addr 0x5bb6b84, size 0x58, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GorillaTagScripts::DecorativeItem* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5bb703c, size 0xb0, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  other) ;

/// @brief Method OnGrab, addr 0x5bb6cd4, size 0x20, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x5bb6cf4, size 0x40, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnSpawn, addr 0x5bb6670, size 0x40, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method OnStateChanged, addr 0x5bb66d8, size 0x60, virtual false, abstract: false, final false
inline void OnStateChanged() ;

/// @brief Method PlayVFX, addr 0x5bb6e10, size 0x98, virtual false, abstract: false, final false
inline void PlayVFX(::UnityEngine::GameObject*  vfx) ;

/// @brief Method Reparent, addr 0x5bb6d34, size 0xb0, virtual false, abstract: false, final false
inline bool Reparent(::UnityEngine::Transform*  _transform) ;

/// @brief Method Respawn, addr 0x5bb6a14, size 0x170, virtual false, abstract: false, final false
inline void Respawn(::UnityEngine::Vector3  randPosition, ::UnityEngine::Quaternion  randRotation) ;

/// @brief Method SetWillTeleport, addr 0x5bb6de4, size 0x18, virtual false, abstract: false, final false
inline void SetWillTeleport() ;

/// @brief Method ShouldBeKinematic, addr 0x5bb664c, size 0x24, virtual true, abstract: false, final false
inline bool ShouldBeKinematic() ;

/// @brief Method ShouldPlayFX, addr 0x5bb6dfc, size 0x14, virtual false, abstract: false, final false
inline bool ShouldPlayFX() ;

/// @brief Method SnapItem, addr 0x5bb6738, size 0x2dc, virtual false, abstract: false, final false
inline void SnapItem(bool  snap, ::UnityEngine::Vector3  attachPoint) ;

/// @brief Method Start, addr 0x5bb66b0, size 0x28, virtual true, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get__respawnTimestamp() const;

constexpr float_t& __cordl_internal_get__respawnTimestamp() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_breakItemLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_breakItemLayerMask() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentPosition() ;

constexpr bool const& __cordl_internal_get_isSnapped() const;

constexpr bool& __cordl_internal_get_isSnapped() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent() ;

constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState const& __cordl_internal_get_previousItemState() const;

constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState& __cordl_internal_get_previousItemState() ;

constexpr ::UnityW<::GorillaTagScripts::DecorativeItemReliableState> const& __cordl_internal_get_reliableState() const;

constexpr ::UnityW<::GorillaTagScripts::DecorativeItemReliableState>& __cordl_internal_get_reliableState() ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::GorillaTagScripts::DecorativeItem>>* const& __cordl_internal_get_respawnItem() const;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*& __cordl_internal_get_respawnItem() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_respawnTimer() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_respawnTimer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_shatterVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_shatterVFX() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_snapAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_snapAudio() ;

constexpr void __cordl_internal_set__respawnTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_breakItemLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_currentPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_isSnapped(bool  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_previousItemState(::GlobalNamespace::DecorativeItem_DecorativeItemState  value) ;

constexpr void __cordl_internal_set_reliableState(::UnityW<::GorillaTagScripts::DecorativeItemReliableState>  value) ;

constexpr void __cordl_internal_set_respawnItem(::UnityEngine::Events::UnityAction_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*  value) ;

constexpr void __cordl_internal_set_respawnTimer(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_shatterVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_snapAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x5bb70ec, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecorativeItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecorativeItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecorativeItem(DecorativeItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecorativeItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecorativeItem(DecorativeItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3968};

/// @brief Field reliableState, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::DecorativeItemReliableState>  ___reliableState;

/// @brief Field respawnItem, offset: 0x340, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*  ___respawnItem;

/// @brief Field breakItemLayerMask, offset: 0x348, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___breakItemLayerMask;

/// @brief Field respawnTimer, offset: 0x350, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___respawnTimer;

/// @brief Field parent, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parent;

/// @brief Field _respawnTimestamp, offset: 0x360, size: 0x4, def value: None
 float_t  ____respawnTimestamp;

/// @brief Field isSnapped, offset: 0x364, size: 0x1, def value: None
 bool  ___isSnapped;

/// @brief Field currentPosition, offset: 0x368, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentPosition;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field snapAudio, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___snapAudio;

/// @brief Field shatterVFX, offset: 0x388, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___shatterVFX;

/// @brief Field previousItemState, offset: 0x390, size: 0x4, def value: None
 ::GlobalNamespace::DecorativeItem_DecorativeItemState  ___previousItemState;

/// @brief Size padding 0x3c8 - 0x398 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___reliableState) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___respawnItem) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___breakItemLayerMask) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___respawnTimer) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___parent) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ____respawnTimestamp) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___isSnapped) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___currentPosition) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___audioSource) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___snapAudio) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___shatterVFX) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItem, ___previousItemState) == 0x390, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::DecorativeItem) == 0x3c8, "Size mismatch!");

} // namespace end def GorillaTagScripts
