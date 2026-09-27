#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionEventNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CollisionEventNotifier)
namespace GlobalNamespace {
class CollisionEventNotifier_CollisionEvent;
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
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class CollisionEventNotifier;
}
namespace GlobalNamespace {
class CollisionEventNotifier_CollisionEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CollisionEventNotifier*);
MARK_REF_T(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionEventNotifier*, "", "CollisionEventNotifier");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*, "", "CollisionEventNotifier/CollisionEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollisionEventNotifier
class CORDL_TYPE CollisionEventNotifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CollisionEvent = ::GlobalNamespace::CollisionEventNotifier_CollisionEvent;

/// @brief Field CollisionEnterEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CollisionEnterEvent, put=__cordl_internal_set_CollisionEnterEvent)) ::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  CollisionEnterEvent;

/// @brief Field CollisionExitEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CollisionExitEvent, put=__cordl_internal_set_CollisionExitEvent)) ::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  CollisionExitEvent;

static inline ::GlobalNamespace::CollisionEventNotifier* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5ae4378, size 0x28, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionExit, addr 0x5ae43a0, size 0x28, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  collision) ;

constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent* const& __cordl_internal_get_CollisionEnterEvent() const;

constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent*& __cordl_internal_get_CollisionEnterEvent() ;

constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent* const& __cordl_internal_get_CollisionExitEvent() const;

constexpr ::GlobalNamespace::CollisionEventNotifier_CollisionEvent*& __cordl_internal_get_CollisionExitEvent() ;

constexpr void __cordl_internal_set_CollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value) ;

constexpr void __cordl_internal_set_CollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value) ;

/// @brief Method .ctor, addr 0x5ae43c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_CollisionEnterEvent, addr 0x5ae4108, size 0x9c, virtual false, abstract: false, final false
inline void add_CollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_CollisionExitEvent, addr 0x5ae4240, size 0x9c, virtual false, abstract: false, final false
inline void add_CollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_CollisionEnterEvent, addr 0x5ae41a4, size 0x9c, virtual false, abstract: false, final false
inline void remove_CollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_CollisionExitEvent, addr 0x5ae42dc, size 0x9c, virtual false, abstract: false, final false
inline void remove_CollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionEventNotifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionEventNotifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionEventNotifier(CollisionEventNotifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionEventNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionEventNotifier(CollisionEventNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3481};

/// [CompilerGenerated]
/// @brief Field CollisionEnterEvent, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  ___CollisionEnterEvent;

/// [CompilerGenerated]
/// @brief Field CollisionExitEvent, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::CollisionEventNotifier_CollisionEvent*  ___CollisionExitEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollisionEventNotifier, ___CollisionEnterEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionEventNotifier, ___CollisionExitEvent) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollisionEventNotifier) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollisionEventNotifier/CollisionEvent
class CORDL_TYPE CollisionEventNotifier_CollisionEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5ae44f0, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::CollisionEventNotifier*  notifier, ::UnityEngine::Collision*  collision, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5ae4518, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5ae44dc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::CollisionEventNotifier*  notifier, ::UnityEngine::Collision*  collision) ;

static inline ::GlobalNamespace::CollisionEventNotifier_CollisionEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5ae43d0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionEventNotifier_CollisionEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionEventNotifier_CollisionEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionEventNotifier_CollisionEvent(CollisionEventNotifier_CollisionEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionEventNotifier_CollisionEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionEventNotifier_CollisionEvent(CollisionEventNotifier_CollisionEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3480};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CollisionEventNotifier_CollisionEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
