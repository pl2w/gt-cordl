#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportNode)
namespace GlobalNamespace {
class TeleportNode__DelayedTeleport_d__12;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
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
namespace GlobalNamespace {
class TeleportNode;
}
namespace GlobalNamespace {
class TeleportNode__DelayedTeleport_d__12;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeleportNode*);
MARK_REF_T(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportNode*, "", "TeleportNode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12*, "", "TeleportNode/<DelayedTeleport>d__12");
// Dependencies GTZone, GorillaTriggerBox, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportNode
class CORDL_TYPE TeleportNode : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
using _DelayedTeleport_d__12 = ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12;

/// @brief Field destinationOverride, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationOverride, put=__cordl_internal_set_destinationOverride)) ::UnityW<::UnityEngine::Transform>  destinationOverride;

/// @brief Field keepVelocity, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepVelocity, put=__cordl_internal_set_keepVelocity)) bool  keepVelocity;

/// @brief Field onTeleport, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTeleport, put=__cordl_internal_set_onTeleport)) ::UnityEngine::Events::UnityEvent*  onTeleport;

/// @brief Field seamless, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_seamless, put=__cordl_internal_set_seamless)) bool  seamless;

/// @brief Field subsOnly, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_subsOnly, put=__cordl_internal_set_subsOnly)) bool  subsOnly;

/// @brief Field teleportFromRef, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_teleportFromRef, put=__cordl_internal_set_teleportFromRef)) ::GlobalNamespace::XSceneRef  teleportFromRef;

/// @brief Field teleportTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_teleportTime, put=__cordl_internal_set_teleportTime)) float_t  teleportTime;

/// @brief Field teleportToRef, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_teleportToRef, put=__cordl_internal_set_teleportToRef)) ::GlobalNamespace::XSceneRef  teleportToRef;

/// @brief Field teleportToZone, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_teleportToZone, put=__cordl_internal_set_teleportToZone)) ::GlobalNamespace::GTZone  teleportToZone;

/// @brief Method ClearDestinationOverride, addr 0x5b2d0cc, size 0xc, virtual false, abstract: false, final false
inline void ClearDestinationOverride() ;

/// [IteratorStateMachine(typeof(TeleportNode::<DelayedTeleport>d__12))]
/// @brief Method DelayedTeleport, addr 0x5b2d718, size 0xdc, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedTeleport(::GorillaLocomotion::GTPlayer*  p, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

static inline ::GlobalNamespace::TeleportNode* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5b2d0d8, size 0x640, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

/// @brief Method SetDestinationOverride, addr 0x5b2d0c4, size 0x8, virtual false, abstract: false, final false
inline void SetDestinationOverride(::UnityEngine::Transform*  destination) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_destinationOverride() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_destinationOverride() ;

constexpr bool const& __cordl_internal_get_keepVelocity() const;

constexpr bool& __cordl_internal_get_keepVelocity() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTeleport() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTeleport() ;

constexpr bool const& __cordl_internal_get_seamless() const;

constexpr bool& __cordl_internal_get_seamless() ;

constexpr bool const& __cordl_internal_get_subsOnly() const;

constexpr bool& __cordl_internal_get_subsOnly() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_teleportFromRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_teleportFromRef() ;

constexpr float_t const& __cordl_internal_get_teleportTime() const;

constexpr float_t& __cordl_internal_get_teleportTime() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_teleportToRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_teleportToRef() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_teleportToZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_teleportToZone() ;

constexpr void __cordl_internal_set_destinationOverride(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_keepVelocity(bool  value) ;

constexpr void __cordl_internal_set_onTeleport(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_seamless(bool  value) ;

constexpr void __cordl_internal_set_subsOnly(bool  value) ;

constexpr void __cordl_internal_set_teleportFromRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_teleportTime(float_t  value) ;

constexpr void __cordl_internal_set_teleportToRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_teleportToZone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5b2d7f4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportNode(TeleportNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportNode(TeleportNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3644};

/// [SerializeField]
/// @brief Field teleportFromRef, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___teleportFromRef;

/// [SerializeField]
/// @brief Field teleportToRef, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___teleportToRef;

/// [SerializeField]
/// @brief Field teleportToZone, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___teleportToZone;

/// [SerializeField]
/// @brief Field seamless, offset: 0x54, size: 0x1, def value: None
 bool  ___seamless;

/// [SerializeField]
/// @brief Field keepVelocity, offset: 0x55, size: 0x1, def value: None
 bool  ___keepVelocity;

/// [SerializeField]
/// @brief Field subsOnly, offset: 0x56, size: 0x1, def value: None
 bool  ___subsOnly;

/// [SerializeField]
/// @brief Field onTeleport, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTeleport;

/// @brief Field teleportTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___teleportTime;

/// @brief Field destinationOverride, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___destinationOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportNode, ___teleportFromRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode, ___teleportToRef) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode, ___teleportToZone) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode, ___seamless) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode, ___keepVelocity) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode, ___subsOnly) == 0x56, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode, ___onTeleport) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode, ___teleportTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode, ___destinationOverride) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportNode) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportNode/<DelayedTeleport>d__12
class CORDL_TYPE TeleportNode__DelayedTeleport_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TeleportNode>  __4__this;

/// @brief Field p, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_p, put=__cordl_internal_set_p)) ::UnityW<::GorillaLocomotion::GTPlayer>  p;

/// @brief Field position, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b2d838, size 0xbc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::TeleportNode__DelayedTeleport_d__12* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b2d8f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b2d8fc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b2d934, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b2d834, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TeleportNode> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TeleportNode>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_p() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_p() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TeleportNode>  value) ;

constexpr void __cordl_internal_set_p(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b2d80c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportNode__DelayedTeleport_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportNode__DelayedTeleport_d__12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportNode__DelayedTeleport_d__12(TeleportNode__DelayedTeleport_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportNode__DelayedTeleport_d__12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportNode__DelayedTeleport_d__12(TeleportNode__DelayedTeleport_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3643};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field p, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___p;

/// @brief Field position, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field rotation, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

/// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TeleportNode>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12, ___p) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12, ___position) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12, ___rotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12, _____4__this) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportNode__DelayedTeleport_d__12) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
