#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerEventNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerEventNotifier)
namespace GlobalNamespace {
class TriggerEventNotifier_TriggerEvent;
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
// Forward declare root types
namespace GlobalNamespace {
class TriggerEventNotifier;
}
namespace GlobalNamespace {
class TriggerEventNotifier_TriggerEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TriggerEventNotifier*);
MARK_REF_T(::GlobalNamespace::TriggerEventNotifier_TriggerEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerEventNotifier*, "", "TriggerEventNotifier");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerEventNotifier_TriggerEvent*, "", "TriggerEventNotifier/TriggerEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TriggerEventNotifier
class CORDL_TYPE TriggerEventNotifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TriggerEvent = ::GlobalNamespace::TriggerEventNotifier_TriggerEvent;

/// @brief Field TriggerEnterEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerEnterEvent, put=__cordl_internal_set_TriggerEnterEvent)) ::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  TriggerEnterEvent;

/// @brief Field TriggerExitEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerExitEvent, put=__cordl_internal_set_TriggerExitEvent)) ::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  TriggerExitEvent;

/// @brief Field maskIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maskIndex, put=__cordl_internal_set_maskIndex)) int32_t  maskIndex;

static inline ::GlobalNamespace::TriggerEventNotifier* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5b1acb0, size 0x28, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5b1acd8, size 0x28, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::TriggerEventNotifier_TriggerEvent* const& __cordl_internal_get_TriggerEnterEvent() const;

constexpr ::GlobalNamespace::TriggerEventNotifier_TriggerEvent*& __cordl_internal_get_TriggerEnterEvent() ;

constexpr ::GlobalNamespace::TriggerEventNotifier_TriggerEvent* const& __cordl_internal_get_TriggerExitEvent() const;

constexpr ::GlobalNamespace::TriggerEventNotifier_TriggerEvent*& __cordl_internal_get_TriggerExitEvent() ;

constexpr int32_t const& __cordl_internal_get_maskIndex() const;

constexpr int32_t& __cordl_internal_get_maskIndex() ;

constexpr void __cordl_internal_set_TriggerEnterEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  value) ;

constexpr void __cordl_internal_set_TriggerExitEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  value) ;

constexpr void __cordl_internal_set_maskIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b1ad00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_TriggerEnterEvent, addr 0x5b1aa40, size 0x9c, virtual false, abstract: false, final false
inline void add_TriggerEnterEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_TriggerExitEvent, addr 0x5b1ab78, size 0x9c, virtual false, abstract: false, final false
inline void add_TriggerExitEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_TriggerEnterEvent, addr 0x5b1aadc, size 0x9c, virtual false, abstract: false, final false
inline void remove_TriggerEnterEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_TriggerExitEvent, addr 0x5b1ac14, size 0x9c, virtual false, abstract: false, final false
inline void remove_TriggerExitEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerEventNotifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerEventNotifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerEventNotifier(TriggerEventNotifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerEventNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerEventNotifier(TriggerEventNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3572};

/// [CompilerGenerated]
/// @brief Field TriggerEnterEvent, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  ___TriggerEnterEvent;

/// [CompilerGenerated]
/// @brief Field TriggerExitEvent, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::TriggerEventNotifier_TriggerEvent*  ___TriggerExitEvent;

/// [HideInInspector]
/// @brief Field maskIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___maskIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerEventNotifier, ___TriggerEnterEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerEventNotifier, ___TriggerExitEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerEventNotifier, ___maskIndex) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerEventNotifier) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: TriggerEventNotifier/TriggerEvent
class CORDL_TYPE TriggerEventNotifier_TriggerEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b1ae28, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  collider, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b1ae50, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b1ae14, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::TriggerEventNotifier_TriggerEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b1ad08, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerEventNotifier_TriggerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerEventNotifier_TriggerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerEventNotifier_TriggerEvent(TriggerEventNotifier_TriggerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerEventNotifier_TriggerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerEventNotifier_TriggerEvent(TriggerEventNotifier_TriggerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TriggerEventNotifier_TriggerEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
