#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeChangerTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SizeChangerTrigger)
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class SizeChangerTrigger_SizeChangerTriggerEvent;
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SizeChangerTrigger;
}
namespace GlobalNamespace {
class SizeChangerTrigger_SizeChangerTriggerEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SizeChangerTrigger*);
MARK_REF_T(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeChangerTrigger*, "", "SizeChangerTrigger");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*, "", "SizeChangerTrigger/SizeChangerTriggerEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SizeChangerTrigger
class CORDL_TYPE SizeChangerTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SizeChangerTriggerEvent = ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent;

/// @brief Field OnEnter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnter, put=__cordl_internal_set_OnEnter)) ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  OnEnter;

/// @brief Field OnExit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnExit, put=__cordl_internal_set_OnExit)) ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  OnExit;

/// @brief Field builderEnterTrigger, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_builderEnterTrigger, put=__cordl_internal_set_builderEnterTrigger)) bool  builderEnterTrigger;

/// @brief Field builderExitOnEnterTrigger, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_builderExitOnEnterTrigger, put=__cordl_internal_set_builderExitOnEnterTrigger)) bool  builderExitOnEnterTrigger;

/// @brief Field myCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCollider, put=__cordl_internal_set_myCollider)) ::UnityW<::UnityEngine::Collider>  myCollider;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Method Awake, addr 0x595ce30, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosestPoint, addr 0x595cc28, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3  position) ;

static inline ::GlobalNamespace::SizeChangerTrigger* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x595cecc, size 0x68, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x595cec0, size 0x4, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x595cf34, size 0x68, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x595cec4, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x595cec8, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnTriggerEnter, addr 0x595ce88, size 0x1c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x595cea4, size 0x1c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* const& __cordl_internal_get_OnEnter() const;

constexpr ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*& __cordl_internal_get_OnEnter() ;

constexpr ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* const& __cordl_internal_get_OnExit() const;

constexpr ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*& __cordl_internal_get_OnExit() ;

constexpr bool const& __cordl_internal_get_builderEnterTrigger() const;

constexpr bool& __cordl_internal_get_builderEnterTrigger() ;

constexpr bool const& __cordl_internal_get_builderExitOnEnterTrigger() const;

constexpr bool& __cordl_internal_get_builderExitOnEnterTrigger() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_myCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_myCollider() ;

constexpr void __cordl_internal_set_OnEnter(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  value) ;

constexpr void __cordl_internal_set_OnExit(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  value) ;

constexpr void __cordl_internal_set_builderEnterTrigger(bool  value) ;

constexpr void __cordl_internal_set_builderExitOnEnterTrigger(bool  value) ;

constexpr void __cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x595cf9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnEnter, addr 0x595bed4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnEnter(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnExit, addr 0x595bf70, size 0x9c, virtual false, abstract: false, final false
inline void add_OnExit(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  value) ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnEnter, addr 0x595c198, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnEnter(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnExit, addr 0x595c234, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnExit(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SizeChangerTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SizeChangerTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SizeChangerTrigger(SizeChangerTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizeChangerTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizeChangerTrigger(SizeChangerTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2346};

/// @brief Field myCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___myCollider;

/// [CompilerGenerated]
/// @brief Field OnEnter, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  ___OnEnter;

/// [CompilerGenerated]
/// @brief Field OnExit, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*  ___OnExit;

/// @brief Field builderEnterTrigger, offset: 0x38, size: 0x1, def value: None
 bool  ___builderEnterTrigger;

/// @brief Field builderExitOnEnterTrigger, offset: 0x39, size: 0x1, def value: None
 bool  ___builderExitOnEnterTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SizeChangerTrigger, ___myCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChangerTrigger, ___OnEnter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChangerTrigger, ___OnExit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChangerTrigger, ___builderEnterTrigger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SizeChangerTrigger, ___builderExitOnEnterTrigger) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SizeChangerTrigger) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: SizeChangerTrigger/SizeChangerTriggerEvent
class CORDL_TYPE SizeChangerTrigger_SizeChangerTriggerEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x595cfb8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Collider*  other, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x595cfd8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x595cfa4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Collider*  other) ;

static inline ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x595bdcc, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SizeChangerTrigger_SizeChangerTriggerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SizeChangerTrigger_SizeChangerTriggerEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SizeChangerTrigger_SizeChangerTriggerEvent(SizeChangerTrigger_SizeChangerTriggerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SizeChangerTrigger_SizeChangerTriggerEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SizeChangerTrigger_SizeChangerTriggerEvent(SizeChangerTrigger_SizeChangerTriggerEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2345};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
