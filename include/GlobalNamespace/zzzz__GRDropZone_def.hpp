#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDropZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRDropZone)
namespace GlobalNamespace {
class GRDropZone__DelayedStopEffect_d__10;
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
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRDropZone;
}
namespace GlobalNamespace {
class GRDropZone__DelayedStopEffect_d__10;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDropZone*);
MARK_REF_T(::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDropZone*, "", "GRDropZone");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*, "", "GRDropZone/<DelayedStopEffect>d__10");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDropZone
class CORDL_TYPE GRDropZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DelayedStopEffect_d__10 = ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10;

/// @brief Field effectDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectDuration, put=__cordl_internal_set_effectDuration)) float_t  effectDuration;

/// @brief Field playingEffect, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_playingEffect, put=__cordl_internal_set_playingEffect)) bool  playingEffect;

/// @brief Field repelDirectionLocal, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_repelDirectionLocal, put=__cordl_internal_set_repelDirectionLocal)) ::UnityEngine::Vector3  repelDirectionLocal;

/// @brief Field repelDirectionWorld, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_repelDirectionWorld, put=__cordl_internal_set_repelDirectionWorld)) ::UnityEngine::Vector3  repelDirectionWorld;

/// @brief Field sfxPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sfxPrefab, put=__cordl_internal_set_sfxPrefab)) ::UnityW<::UnityEngine::GameObject>  sfxPrefab;

/// @brief Field vfxRoot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_vfxRoot, put=__cordl_internal_set_vfxRoot)) ::UnityW<::UnityEngine::GameObject>  vfxRoot;

/// @brief Method Awake, addr 0x5877684, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(GRDropZone::<DelayedStopEffect>d__10))]
/// @brief Method DelayedStopEffect, addr 0x5877a8c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedStopEffect() ;

/// @brief Method GetRepelDirectionWorld, addr 0x58778d0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetRepelDirectionWorld() ;

static inline ::GlobalNamespace::GRDropZone* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5877784, size 0x14c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method PlayEffect, addr 0x58778dc, size 0x1b0, virtual false, abstract: false, final false
inline void PlayEffect() ;

constexpr float_t const& __cordl_internal_get_effectDuration() const;

constexpr float_t& __cordl_internal_get_effectDuration() ;

constexpr bool const& __cordl_internal_get_playingEffect() const;

constexpr bool& __cordl_internal_get_playingEffect() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_repelDirectionLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_repelDirectionLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_repelDirectionWorld() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_repelDirectionWorld() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sfxPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sfxPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_vfxRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_vfxRoot() ;

constexpr void __cordl_internal_set_effectDuration(float_t  value) ;

constexpr void __cordl_internal_set_playingEffect(bool  value) ;

constexpr void __cordl_internal_set_repelDirectionLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_repelDirectionWorld(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sfxPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_vfxRoot(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5877b20, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDropZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDropZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDropZone(GRDropZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDropZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDropZone(GRDropZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1911};

/// [SerializeField]
/// @brief Field vfxRoot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___vfxRoot;

/// [SerializeField]
/// @brief Field sfxPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sfxPrefab;

/// @brief Field effectDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___effectDuration;

/// @brief Field playingEffect, offset: 0x34, size: 0x1, def value: None
 bool  ___playingEffect;

/// [SerializeField]
/// @brief Field repelDirectionLocal, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___repelDirectionLocal;

/// @brief Field repelDirectionWorld, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___repelDirectionWorld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDropZone, ___vfxRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDropZone, ___sfxPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDropZone, ___effectDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDropZone, ___playingEffect) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDropZone, ___repelDirectionLocal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDropZone, ___repelDirectionWorld) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDropZone) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDropZone/<DelayedStopEffect>d__10
class CORDL_TYPE GRDropZone__DelayedStopEffect_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GRDropZone>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5877ba0, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5877c70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5877c78, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5877cb0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5877b9c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GRDropZone> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GRDropZone>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRDropZone>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5877af8, size 0x28, virtual false, abstract: false, final false
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
constexpr GRDropZone__DelayedStopEffect_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDropZone__DelayedStopEffect_d__10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDropZone__DelayedStopEffect_d__10(GRDropZone__DelayedStopEffect_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDropZone__DelayedStopEffect_d__10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDropZone__DelayedStopEffect_d__10(GRDropZone__DelayedStopEffect_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1910};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRDropZone>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
