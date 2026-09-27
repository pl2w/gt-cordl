#pragma once
// IWYU pragma private; include "TagEffects/GameObjectOnDisableDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameObjectOnDisableDispatcher)
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
namespace TagEffects {
class GameObjectOnDisableDispatcher_OnDisabledEvent;
}
// Forward declare root types
namespace TagEffects {
class GameObjectOnDisableDispatcher;
}
namespace TagEffects {
class GameObjectOnDisableDispatcher_OnDisabledEvent;
}
// Write type traits
MARK_REF_T(::TagEffects::GameObjectOnDisableDispatcher*);
MARK_REF_T(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*);
DEFINE_IL2CPP_CLASS(::TagEffects::GameObjectOnDisableDispatcher*, "TagEffects", "GameObjectOnDisableDispatcher");
DEFINE_IL2CPP_CLASS(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*, "TagEffects", "GameObjectOnDisableDispatcher/OnDisabledEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.GameObjectOnDisableDispatcher
class CORDL_TYPE GameObjectOnDisableDispatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnDisabledEvent = ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent;

/// @brief Field OnDisabled, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisabled, put=__cordl_internal_set_OnDisabled)) ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*  OnDisabled;

static inline ::TagEffects::GameObjectOnDisableDispatcher* New_ctor() ;

/// @brief Method OnDisable, addr 0x5cd9394, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

constexpr ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* const& __cordl_internal_get_OnDisabled() const;

constexpr ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*& __cordl_internal_get_OnDisabled() ;

constexpr void __cordl_internal_set_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*  value) ;

/// @brief Method .ctor, addr 0x5cd93b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDisabled, addr 0x5cd89dc, size 0x9c, virtual false, abstract: false, final false
inline void add_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnDisabled, addr 0x5cd90b4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectOnDisableDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectOnDisableDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectOnDisableDispatcher(GameObjectOnDisableDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectOnDisableDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectOnDisableDispatcher(GameObjectOnDisableDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4494};

/// [CompilerGenerated]
/// @brief Field OnDisabled, offset: 0x20, size: 0x8, def value: None
 ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent*  ___OnDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::GameObjectOnDisableDispatcher, ___OnDisabled) == 0x20, "Offset mismatch!");

static_assert(sizeof(::TagEffects::GameObjectOnDisableDispatcher) == 0x28, "Size mismatch!");

} // namespace end def TagEffects
// Dependencies System.MulticastDelegate
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.GameObjectOnDisableDispatcher/OnDisabledEvent
class CORDL_TYPE GameObjectOnDisableDispatcher_OnDisabledEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5cd93d0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::TagEffects::GameObjectOnDisableDispatcher*  me, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5cd93f0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5cd93bc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::TagEffects::GameObjectOnDisableDispatcher*  me) ;

static inline ::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5cd88d4, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectOnDisableDispatcher_OnDisabledEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectOnDisableDispatcher_OnDisabledEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectOnDisableDispatcher_OnDisabledEvent(GameObjectOnDisableDispatcher_OnDisabledEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectOnDisableDispatcher_OnDisabledEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectOnDisableDispatcher_OnDisabledEvent(GameObjectOnDisableDispatcher_OnDisabledEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TagEffects::GameObjectOnDisableDispatcher_OnDisabledEvent) == 0x80, "Size mismatch!");

} // namespace end def TagEffects
