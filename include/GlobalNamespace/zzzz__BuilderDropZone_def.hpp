#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderDropZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderDropZone_DropType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderDropZone)
namespace GlobalNamespace {
struct BuilderDropZone_DropType;
}
namespace GlobalNamespace {
class BuilderDropZone__DelayedStopEffect_d__16;
}
namespace GorillaTagScripts {
class BuilderTable;
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
class BuilderDropZone;
}
namespace GlobalNamespace {
class BuilderDropZone__DelayedStopEffect_d__16;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderDropZone*);
MARK_REF_T(::GlobalNamespace::BuilderDropZone__DelayedStopEffect_d__16*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderDropZone*, "", "BuilderDropZone");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderDropZone__DelayedStopEffect_d__16*, "", "BuilderDropZone/<DelayedStopEffect>d__16");
// Dependencies BuilderDropZone::DropType, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderDropZone
class CORDL_TYPE BuilderDropZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DropType = ::GlobalNamespace::BuilderDropZone_DropType;

using _DelayedStopEffect_d__16 = ::GlobalNamespace::BuilderDropZone__DelayedStopEffect_d__16;

/// @brief Field dropType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_dropType, put=__cordl_internal_set_dropType)) ::GlobalNamespace::BuilderDropZone_DropType  dropType;

/// @brief Field dropZoneID, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_dropZoneID, put=__cordl_internal_set_dropZoneID)) int32_t  dropZoneID;

/// @brief Field effectDuration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectDuration, put=__cordl_internal_set_effectDuration)) float_t  effectDuration;

/// @brief Field onEnter, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_onEnter, put=__cordl_internal_set_onEnter)) bool  onEnter;

/// @brief Field overrideDirection, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideDirection, put=__cordl_internal_set_overrideDirection)) bool  overrideDirection;

/// @brief Field playingEffect, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_playingEffect, put=__cordl_internal_set_playingEffect)) bool  playingEffect;

/// @brief Field repelDirectionLocal, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_repelDirectionLocal, put=__cordl_internal_set_repelDirectionLocal)) ::UnityEngine::Vector3  repelDirectionLocal;

/// @brief Field repelDirectionWorld, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_repelDirectionWorld, put=__cordl_internal_set_repelDirectionWorld)) ::UnityEngine::Vector3  repelDirectionWorld;

/// @brief Field sfxPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sfxPrefab, put=__cordl_internal_set_sfxPrefab)) ::UnityW<::UnityEngine::GameObject>  sfxPrefab;

/// @brief Field table, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Field vfxRoot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_vfxRoot, put=__cordl_internal_set_vfxRoot)) ::UnityW<::UnityEngine::GameObject>  vfxRoot;

/// @brief Method Awake, addr 0x57ba500, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(BuilderDropZone::<DelayedStopEffect>d__16))]
/// @brief Method DelayedStopEffect, addr 0x57baa3c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedStopEffect() ;

/// @brief Method GetRepelDirectionWorld, addr 0x57ba880, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetRepelDirectionWorld() ;

static inline ::GlobalNamespace::BuilderDropZone* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57ba600, size 0x280, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x57baad0, size 0x280, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method PlayEffect, addr 0x57ba88c, size 0x1b0, virtual false, abstract: false, final false
inline void PlayEffect() ;

constexpr ::GlobalNamespace::BuilderDropZone_DropType const& __cordl_internal_get_dropType() const;

constexpr ::GlobalNamespace::BuilderDropZone_DropType& __cordl_internal_get_dropType() ;

constexpr int32_t const& __cordl_internal_get_dropZoneID() const;

constexpr int32_t& __cordl_internal_get_dropZoneID() ;

constexpr float_t const& __cordl_internal_get_effectDuration() const;

constexpr float_t& __cordl_internal_get_effectDuration() ;

constexpr bool const& __cordl_internal_get_onEnter() const;

constexpr bool& __cordl_internal_get_onEnter() ;

constexpr bool const& __cordl_internal_get_overrideDirection() const;

constexpr bool& __cordl_internal_get_overrideDirection() ;

constexpr bool const& __cordl_internal_get_playingEffect() const;

constexpr bool& __cordl_internal_get_playingEffect() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_repelDirectionLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_repelDirectionLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_repelDirectionWorld() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_repelDirectionWorld() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sfxPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sfxPrefab() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_vfxRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_vfxRoot() ;

constexpr void __cordl_internal_set_dropType(::GlobalNamespace::BuilderDropZone_DropType  value) ;

constexpr void __cordl_internal_set_dropZoneID(int32_t  value) ;

constexpr void __cordl_internal_set_effectDuration(float_t  value) ;

constexpr void __cordl_internal_set_onEnter(bool  value) ;

constexpr void __cordl_internal_set_overrideDirection(bool  value) ;

constexpr void __cordl_internal_set_playingEffect(bool  value) ;

constexpr void __cordl_internal_set_repelDirectionLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_repelDirectionWorld(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sfxPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_vfxRoot(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x57bad50, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderDropZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderDropZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderDropZone(BuilderDropZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderDropZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderDropZone(BuilderDropZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1588};

/// [SerializeField]
/// @brief Field dropType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::BuilderDropZone_DropType  ___dropType;

/// [SerializeField]
/// @brief Field onEnter, offset: 0x24, size: 0x1, def value: None
 bool  ___onEnter;

/// [SerializeField]
/// @brief Field vfxRoot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___vfxRoot;

/// [SerializeField]
/// @brief Field sfxPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sfxPrefab;

/// @brief Field effectDuration, offset: 0x38, size: 0x4, def value: None
 float_t  ___effectDuration;

/// @brief Field playingEffect, offset: 0x3c, size: 0x1, def value: None
 bool  ___playingEffect;

/// @brief Field overrideDirection, offset: 0x3d, size: 0x1, def value: None
 bool  ___overrideDirection;

/// [SerializeField]
/// @brief Field repelDirectionLocal, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___repelDirectionLocal;

/// @brief Field repelDirectionWorld, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___repelDirectionWorld;

/// [HideInInspector]
/// @brief Field dropZoneID, offset: 0x58, size: 0x4, def value: None
 int32_t  ___dropZoneID;

/// @brief Field table, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___dropType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___onEnter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___vfxRoot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___sfxPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___effectDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___playingEffect) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___overrideDirection) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___repelDirectionLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___repelDirectionWorld) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___dropZoneID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone, ___table) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderDropZone) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderDropZone/<DelayedStopEffect>d__16
class CORDL_TYPE BuilderDropZone__DelayedStopEffect_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BuilderDropZone>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57baddc, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BuilderDropZone__DelayedStopEffect_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57baeac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57baeb4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57baeec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57badd8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::BuilderDropZone> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BuilderDropZone>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderDropZone>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57baaa8, size 0x28, virtual false, abstract: false, final false
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
constexpr BuilderDropZone__DelayedStopEffect_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderDropZone__DelayedStopEffect_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderDropZone__DelayedStopEffect_d__16(BuilderDropZone__DelayedStopEffect_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderDropZone__DelayedStopEffect_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderDropZone__DelayedStopEffect_d__16(BuilderDropZone__DelayedStopEffect_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1587};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderDropZone>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderDropZone__DelayedStopEffect_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone__DelayedStopEffect_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDropZone__DelayedStopEffect_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderDropZone__DelayedStopEffect_d__16) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
