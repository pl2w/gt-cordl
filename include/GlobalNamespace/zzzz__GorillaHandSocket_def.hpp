#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandSocket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandSocketConstraint_def.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaHandSocket)
namespace GlobalNamespace {
class GorillaHandNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaHandSocket;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHandSocket*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHandSocket*, "", "GorillaHandSocket");
// [DisallowMultipleComponent]
// Dependencies HandSocketConstraint, TimeSince, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHandSocket
class CORDL_TYPE GorillaHandSocket : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _attachedHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachedHand, put=__cordl_internal_set__attachedHand)) ::UnityW<::GlobalNamespace::GorillaHandNode>  _attachedHand;

/// @brief Field _inUse, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__inUse, put=__cordl_internal_set__inUse)) bool  _inUse;

/// @brief Field _sinceSocketStateChange, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sinceSocketStateChange, put=__cordl_internal_set__sinceSocketStateChange)) ::GlobalNamespace::TimeSince  _sinceSocketStateChange;

/// @brief Field attachCooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_attachCooldown, put=__cordl_internal_set_attachCooldown)) float_t  attachCooldown;

 __declspec(property(get=get_attachedHand)) ::UnityW<::GlobalNamespace::GorillaHandNode>  attachedHand;

/// @brief Field collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field constraint, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_constraint, put=__cordl_internal_set_constraint)) ::GlobalNamespace::HandSocketConstraint  constraint;

/// @brief Field gColliderToSocket, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gColliderToSocket, put=setStaticF_gColliderToSocket)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaHandSocket>>*  gColliderToSocket;

 __declspec(property(get=get_inUse)) bool  inUse;

/// @brief Method Attach, addr 0x590da00, size 0xd0, virtual false, abstract: false, final false
inline void Attach(::GlobalNamespace::GorillaHandNode*  hand) ;

/// @brief Method Awake, addr 0x590ddc8, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanAttach, addr 0x590d9dc, size 0x24, virtual false, abstract: false, final false
inline bool CanAttach() ;

/// @brief Method Detach, addr 0x590dad0, size 0x14, virtual false, abstract: false, final false
inline void Detach() ;

/// @brief Method Detach, addr 0x590dae4, size 0xf4, virtual false, abstract: false, final false
inline void Detach(::by_ref<::GlobalNamespace::GorillaHandNode*>  hand) ;

/// @brief Method FetchSocket, addr 0x590d94c, size 0x90, virtual false, abstract: false, final false
static inline bool FetchSocket(::UnityEngine::Collider*  collider, ::by_ref<::GlobalNamespace::GorillaHandSocket*>  socket) ;

/// @brief Method FixedUpdate, addr 0x590df0c, size 0x84, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::GorillaHandSocket* New_ctor() ;

/// @brief Method OnDisable, addr 0x590dd00, size 0xc8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x590dc34, size 0xcc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHandAttach, addr 0x590dbd8, size 0x4, virtual true, abstract: false, final false
inline void OnHandAttach() ;

/// @brief Method OnHandDetach, addr 0x590dbdc, size 0x4, virtual true, abstract: false, final false
inline void OnHandDetach() ;

/// @brief Method OnUpdateAttached, addr 0x590dbe0, size 0x54, virtual true, abstract: false, final false
inline void OnUpdateAttached() ;

/// @brief Method Setup, addr 0x590ddcc, size 0x140, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::UnityW<::GlobalNamespace::GorillaHandNode> const& __cordl_internal_get__attachedHand() const;

constexpr ::UnityW<::GlobalNamespace::GorillaHandNode>& __cordl_internal_get__attachedHand() ;

constexpr bool const& __cordl_internal_get__inUse() const;

constexpr bool& __cordl_internal_get__inUse() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sinceSocketStateChange() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sinceSocketStateChange() ;

constexpr float_t const& __cordl_internal_get_attachCooldown() const;

constexpr float_t& __cordl_internal_get_attachCooldown() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider() ;

constexpr ::GlobalNamespace::HandSocketConstraint const& __cordl_internal_get_constraint() const;

constexpr ::GlobalNamespace::HandSocketConstraint& __cordl_internal_get_constraint() ;

constexpr void __cordl_internal_set__attachedHand(::UnityW<::GlobalNamespace::GorillaHandNode>  value) ;

constexpr void __cordl_internal_set__inUse(bool  value) ;

constexpr void __cordl_internal_set__sinceSocketStateChange(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_attachCooldown(float_t  value) ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_constraint(::GlobalNamespace::HandSocketConstraint  value) ;

/// @brief Method .ctor, addr 0x590df90, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaHandSocket>>* getStaticF_gColliderToSocket() ;

/// @brief Method get_attachedHand, addr 0x590d93c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaHandNode> get_attachedHand() ;

/// @brief Method get_inUse, addr 0x590d944, size 0x8, virtual false, abstract: false, final false
inline bool get_inUse() ;

static inline void setStaticF_gColliderToSocket(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::GorillaHandSocket>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHandSocket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandSocket", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHandSocket(GorillaHandSocket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandSocket", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHandSocket(GorillaHandSocket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2172};

/// @brief Field collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___collider;

/// @brief Field attachCooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ___attachCooldown;

/// @brief Field constraint, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::HandSocketConstraint  ___constraint;

/// @brief Field _attachedHand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaHandNode>  ____attachedHand;

/// @brief Field _inUse, offset: 0x38, size: 0x1, def value: None
 bool  ____inUse;

/// @brief Field _sinceSocketStateChange, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sinceSocketStateChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHandSocket, ___collider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandSocket, ___attachCooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandSocket, ___constraint) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandSocket, ____attachedHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandSocket, ____inUse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHandSocket, ____sinceSocketStateChange) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHandSocket) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
