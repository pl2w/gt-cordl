#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectileHitNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__BaseGuidedRefTargetMono_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SlingshotProjectileHitNotifier)
namespace GlobalNamespace {
class PaperPlaneProjectile;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier_ProjectileHitEvent;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier_ProjectileTriggerEvent;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier_ProjectileHitEvent;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier_ProjectileTriggerEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotProjectileHitNotifier*);
MARK_REF_T(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*);
MARK_REF_T(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*);
MARK_REF_T(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectileHitNotifier*, "", "SlingshotProjectileHitNotifier");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*, "", "SlingshotProjectileHitNotifier/PaperPlaneProjectileHitEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*, "", "SlingshotProjectileHitNotifier/ProjectileHitEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*, "", "SlingshotProjectileHitNotifier/ProjectileTriggerEvent");
// Dependencies GorillaTag.GuidedRefs.BaseGuidedRefTargetMono
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectileHitNotifier
class CORDL_TYPE SlingshotProjectileHitNotifier : public ::GorillaTag::GuidedRefs::BaseGuidedRefTargetMono {
public:
// Declarations
using PaperPlaneProjectileHitEvent = ::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent;

using ProjectileHitEvent = ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent;

using ProjectileTriggerEvent = ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent;

/// @brief Field OnPaperPlaneHit, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPaperPlaneHit, put=__cordl_internal_set_OnPaperPlaneHit)) ::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*  OnPaperPlaneHit;

/// @brief Field OnProjectileCollisionStay, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProjectileCollisionStay, put=__cordl_internal_set_OnProjectileCollisionStay)) ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  OnProjectileCollisionStay;

/// @brief Field OnProjectileHit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProjectileHit, put=__cordl_internal_set_OnProjectileHit)) ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  OnProjectileHit;

/// @brief Field OnProjectileTriggerEnter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProjectileTriggerEnter, put=__cordl_internal_set_OnProjectileTriggerEnter)) ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  OnProjectileTriggerEnter;

/// @brief Field OnProjectileTriggerExit, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProjectileTriggerExit, put=__cordl_internal_set_OnProjectileTriggerExit)) ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  OnProjectileTriggerExit;

/// @brief Field projectileType, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileType, put=__cordl_internal_set_projectileType)) ::StringW  projectileType;

/// @brief Method InvokeCollisionStay, addr 0x573b5b0, size 0x1c, virtual false, abstract: false, final false
inline void InvokeCollisionStay(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method InvokeHit, addr 0x573c530, size 0x1c, virtual false, abstract: false, final false
inline void InvokeHit(::GlobalNamespace::PaperPlaneProjectile*  projectile, ::UnityEngine::Collider*  collider) ;

/// @brief Method InvokeHit, addr 0x573b2f0, size 0xb4, virtual false, abstract: false, final false
inline void InvokeHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method InvokeTriggerEnter, addr 0x573bcc4, size 0x1c, virtual false, abstract: false, final false
inline void InvokeTriggerEnter(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider) ;

/// @brief Method InvokeTriggerExit, addr 0x573b674, size 0x1c, virtual false, abstract: false, final false
inline void InvokeTriggerExit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::SlingshotProjectileHitNotifier* New_ctor() ;

/// @brief Method OnDestroy, addr 0x573c54c, size 0x48, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent* const& __cordl_internal_get_OnPaperPlaneHit() const;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*& __cordl_internal_get_OnPaperPlaneHit() ;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* const& __cordl_internal_get_OnProjectileCollisionStay() const;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*& __cordl_internal_get_OnProjectileCollisionStay() ;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* const& __cordl_internal_get_OnProjectileHit() const;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*& __cordl_internal_get_OnProjectileHit() ;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* const& __cordl_internal_get_OnProjectileTriggerEnter() const;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*& __cordl_internal_get_OnProjectileTriggerEnter() ;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* const& __cordl_internal_get_OnProjectileTriggerExit() const;

constexpr ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*& __cordl_internal_get_OnProjectileTriggerExit() ;

constexpr ::StringW const& __cordl_internal_get_projectileType() const;

constexpr ::StringW& __cordl_internal_get_projectileType() ;

constexpr void __cordl_internal_set_OnPaperPlaneHit(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*  value) ;

constexpr void __cordl_internal_set_OnProjectileCollisionStay(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  value) ;

constexpr void __cordl_internal_set_OnProjectileHit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  value) ;

constexpr void __cordl_internal_set_OnProjectileTriggerEnter(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  value) ;

constexpr void __cordl_internal_set_OnProjectileTriggerExit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  value) ;

constexpr void __cordl_internal_set_projectileType(::StringW  value) ;

/// @brief Method .ctor, addr 0x573c594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnPaperPlaneHit, addr 0x573c050, size 0x9c, virtual false, abstract: false, final false
inline void add_OnPaperPlaneHit(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnProjectileCollisionStay, addr 0x573c188, size 0x9c, virtual false, abstract: false, final false
inline void add_OnProjectileCollisionStay(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnProjectileHit, addr 0x573bf18, size 0x9c, virtual false, abstract: false, final false
inline void add_OnProjectileHit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnProjectileTriggerEnter, addr 0x573c2c0, size 0x9c, virtual false, abstract: false, final false
inline void add_OnProjectileTriggerEnter(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnProjectileTriggerExit, addr 0x573c3f8, size 0x9c, virtual false, abstract: false, final false
inline void add_OnProjectileTriggerExit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPaperPlaneHit, addr 0x573c0ec, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnPaperPlaneHit(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProjectileCollisionStay, addr 0x573c224, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnProjectileCollisionStay(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProjectileHit, addr 0x573bfb4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnProjectileHit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProjectileTriggerEnter, addr 0x573c35c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnProjectileTriggerEnter(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProjectileTriggerExit, addr 0x573c494, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnProjectileTriggerExit(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectileHitNotifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileHitNotifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectileHitNotifier(SlingshotProjectileHitNotifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileHitNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectileHitNotifier(SlingshotProjectileHitNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1223};

/// [CompilerGenerated]
/// @brief Field OnProjectileHit, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  ___OnProjectileHit;

/// [CompilerGenerated]
/// @brief Field OnPaperPlaneHit, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent*  ___OnPaperPlaneHit;

/// [CompilerGenerated]
/// @brief Field OnProjectileCollisionStay, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent*  ___OnProjectileCollisionStay;

/// [CompilerGenerated]
/// @brief Field OnProjectileTriggerEnter, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  ___OnProjectileTriggerEnter;

/// [CompilerGenerated]
/// @brief Field OnProjectileTriggerExit, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent*  ___OnProjectileTriggerExit;

/// [TagField]
/// [SerializeField]
/// @brief Field projectileType, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___projectileType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotProjectileHitNotifier, ___OnProjectileHit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileHitNotifier, ___OnPaperPlaneHit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileHitNotifier, ___OnProjectileCollisionStay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileHitNotifier, ___OnProjectileTriggerEnter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileHitNotifier, ___OnProjectileTriggerExit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectileHitNotifier, ___projectileType) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotProjectileHitNotifier) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectileHitNotifier/ProjectileTriggerEvent
class CORDL_TYPE SlingshotProjectileHitNotifier_ProjectileTriggerEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x573c964, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x573c98c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x573c950, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x573c844, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectileHitNotifier_ProjectileTriggerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileHitNotifier_ProjectileTriggerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectileHitNotifier_ProjectileTriggerEvent(SlingshotProjectileHitNotifier_ProjectileTriggerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileHitNotifier_ProjectileTriggerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectileHitNotifier_ProjectileTriggerEvent(SlingshotProjectileHitNotifier_ProjectileTriggerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1222};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileTriggerEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectileHitNotifier/PaperPlaneProjectileHitEvent
class CORDL_TYPE SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x573c810, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PaperPlaneProjectile*  projectile, ::UnityEngine::Collider*  collider, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x573c838, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x573c7fc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::PaperPlaneProjectile*  projectile, ::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x573c6f0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent(SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent(SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1221};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotProjectileHitNotifier_PaperPlaneProjectileHitEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectileHitNotifier/ProjectileHitEvent
class CORDL_TYPE SlingshotProjectileHitNotifier_ProjectileHitEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x573c6bc, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x573c6e4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x573c6a8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

static inline ::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x573c59c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectileHitNotifier_ProjectileHitEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileHitNotifier_ProjectileHitEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectileHitNotifier_ProjectileHitEvent(SlingshotProjectileHitNotifier_ProjectileHitEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectileHitNotifier_ProjectileHitEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectileHitNotifier_ProjectileHitEvent(SlingshotProjectileHitNotifier_ProjectileHitEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotProjectileHitNotifier_ProjectileHitEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
