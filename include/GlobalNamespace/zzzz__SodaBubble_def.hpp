#pragma once
// IWYU pragma private; include "GlobalNamespace/SodaBubble.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SodaBubble)
namespace GlobalNamespace {
class SodaBubble__PopCoroutine_d__5;
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
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class SodaBubble;
}
namespace GlobalNamespace {
class SodaBubble__PopCoroutine_d__5;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SodaBubble*);
MARK_REF_T(::GlobalNamespace::SodaBubble__PopCoroutine_d__5*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SodaBubble*, "", "SodaBubble");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SodaBubble__PopCoroutine_d__5*, "", "SodaBubble/<PopCoroutine>d__5");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SodaBubble
class CORDL_TYPE SodaBubble : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PopCoroutine_d__5 = ::GlobalNamespace::SodaBubble__PopCoroutine_d__5;

/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field body, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_body, put=__cordl_internal_set_body)) ::UnityW<::UnityEngine::Rigidbody>  body;

/// @brief Field bubbleCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bubbleCollider, put=__cordl_internal_set_bubbleCollider)) ::UnityW<::UnityEngine::MeshCollider>  bubbleCollider;

/// @brief Field bubbleMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bubbleMesh, put=__cordl_internal_set_bubbleMesh)) ::UnityW<::UnityEngine::MeshRenderer>  bubbleMesh;

static inline ::GlobalNamespace::SodaBubble* New_ctor() ;

/// @brief Method Pop, addr 0x59838cc, size 0x20, virtual false, abstract: false, final false
inline void Pop() ;

/// [IteratorStateMachine(typeof(SodaBubble::<PopCoroutine>d__5))]
/// @brief Method PopCoroutine, addr 0x59838ec, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PopCoroutine() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_body() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_body() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_bubbleCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_bubbleCollider() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_bubbleMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_bubbleMesh() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_body(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_bubbleCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set_bubbleMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5983980, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SodaBubble() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SodaBubble", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SodaBubble(SodaBubble && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SodaBubble", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SodaBubble(SodaBubble const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2537};

/// @brief Field bubbleMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___bubbleMesh;

/// @brief Field body, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___body;

/// @brief Field bubbleCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___bubbleCollider;

/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SodaBubble, ___bubbleMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SodaBubble, ___body) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SodaBubble, ___bubbleCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SodaBubble, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SodaBubble) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SodaBubble/<PopCoroutine>d__5
class CORDL_TYPE SodaBubble__PopCoroutine_d__5 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SodaBubble>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x598398c, size 0x18c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SodaBubble__PopCoroutine_d__5* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5983b18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5983b20, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5983b58, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5983988, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::SodaBubble> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SodaBubble>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SodaBubble>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5983958, size 0x28, virtual false, abstract: false, final false
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
constexpr SodaBubble__PopCoroutine_d__5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SodaBubble__PopCoroutine_d__5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SodaBubble__PopCoroutine_d__5(SodaBubble__PopCoroutine_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SodaBubble__PopCoroutine_d__5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SodaBubble__PopCoroutine_d__5(SodaBubble__PopCoroutine_d__5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2536};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SodaBubble>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SodaBubble__PopCoroutine_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SodaBubble__PopCoroutine_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SodaBubble__PopCoroutine_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SodaBubble__PopCoroutine_d__5) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
