#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRRigCollection)
namespace GlobalNamespace {
class CompositeTriggerEvents;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRigCollection;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRigCollection*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigCollection*, "", "VRRigCollection");
// [RequireComponent(typeof(CompositeTriggerEvents))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRigCollection
class CORDL_TYPE VRRigCollection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Rigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  Rigs;

/// @brief Field collisionTriggerEvents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionTriggerEvents, put=__cordl_internal_set_collisionTriggerEvents)) ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  collisionTriggerEvents;

/// @brief Field containedRigs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_containedRigs, put=__cordl_internal_set_containedRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  containedRigs;

/// @brief Field playerEnteredCollection, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerEnteredCollection, put=__cordl_internal_set_playerEnteredCollection)) ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  playerEnteredCollection;

/// @brief Field playerLeftCollection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLeftCollection, put=__cordl_internal_set_playerLeftCollection)) ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  playerLeftCollection;

/// @brief Method HasRig, addr 0x5b1d528, size 0xa8, virtual false, abstract: false, final false
inline bool HasRig(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method HasRig, addr 0x5b1d448, size 0xe0, virtual false, abstract: false, final false
inline bool HasRig(::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::VRRigCollection* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b1ceac, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b1cdd4, size 0xd8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRigTriggerEnter, addr 0x5b1d02c, size 0x234, virtual false, abstract: false, final false
inline void OnRigTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnRigTriggerExit, addr 0x5b1d260, size 0x1e8, virtual false, abstract: false, final false
inline void OnRigTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method RigDisabled, addr 0x5b1cfe4, size 0x48, virtual false, abstract: false, final false
inline void RigDisabled(::GlobalNamespace::RigContainer*  rig) ;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& __cordl_internal_get_collisionTriggerEvents() const;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& __cordl_internal_get_collisionTriggerEvents() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* const& __cordl_internal_get_containedRigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*& __cordl_internal_get_containedRigs() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* const& __cordl_internal_get_playerEnteredCollection() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*& __cordl_internal_get_playerEnteredCollection() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* const& __cordl_internal_get_playerLeftCollection() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*& __cordl_internal_get_playerLeftCollection() ;

constexpr void __cordl_internal_set_collisionTriggerEvents(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value) ;

constexpr void __cordl_internal_set_containedRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

constexpr void __cordl_internal_set_playerEnteredCollection(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

constexpr void __cordl_internal_set_playerLeftCollection(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value) ;

/// @brief Method .ctor, addr 0x5b1d5d0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Rigs, addr 0x5b1cdcc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* get_Rigs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRigCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRigCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRigCollection(VRRigCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRigCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRigCollection(VRRigCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3586};

/// @brief Field containedRigs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  ___containedRigs;

/// [SerializeField]
/// @brief Field collisionTriggerEvents, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  ___collisionTriggerEvents;

/// @brief Field playerEnteredCollection, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  ___playerEnteredCollection;

/// @brief Field playerLeftCollection, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  ___playerLeftCollection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigCollection, ___containedRigs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigCollection, ___collisionTriggerEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigCollection, ___playerEnteredCollection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigCollection, ___playerLeftCollection) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigCollection) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
