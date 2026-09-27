#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VoxelAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelInteractor)
namespace GlobalNamespace {
class VoxelInteractor__DoContinuousAction_d__14;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class Collision;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace GlobalNamespace {
class VoxelInteractor;
}
namespace GlobalNamespace {
class VoxelInteractor__DoContinuousAction_d__14;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoxelInteractor*);
MARK_REF_T(::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelInteractor*, "", "VoxelInteractor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*, "", "VoxelInteractor/<DoContinuousAction>d__14");
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, VoxelAction
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoxelInteractor
class CORDL_TYPE VoxelInteractor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoContinuousAction_d__14 = ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14;

/// @brief Field _actionRoutine, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__actionRoutine, put=__cordl_internal_set__actionRoutine)) ::UnityEngine::Coroutine*  _actionRoutine;

/// @brief Field _active, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _hitColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__hitColliders, put=setStaticF__hitColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _hitColliders;

/// @brief Field _hitWorlds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__hitWorlds, put=setStaticF__hitWorlds)) ::System::Collections::Generic::List_1<::UnityW<::Voxels::VoxelWorld>>*  _hitWorlds;

/// @brief Field _nextActionTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextActionTime, put=__cordl_internal_set__nextActionTime)) float_t  _nextActionTime;

/// @brief Field action, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::GlobalNamespace::VoxelAction  action;

/// @brief Field cooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field layerMask, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field rayLength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayLength, put=__cordl_internal_set_rayLength)) float_t  rayLength;

/// @brief Method ApplyVoxelAction, addr 0x5dfada8, size 0x110, virtual false, abstract: false, final false
inline bool ApplyVoxelAction(::UnityEngine::Collision*  collision) ;

/// @brief Method ApplyVoxelAction, addr 0x5dfaeb8, size 0x11c, virtual false, abstract: false, final false
inline bool ApplyVoxelAction(::UnityEngine::RaycastHit  hit) ;

/// [IteratorStateMachine(typeof(VoxelInteractor::<DoContinuousAction>d__14))]
/// @brief Method DoContinuousAction, addr 0x5dfa6d8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoContinuousAction() ;

static inline ::GlobalNamespace::VoxelInteractor* New_ctor() ;

/// @brief Method OnDisable, addr 0x5dfa628, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5dfafd4, size 0x11c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method PerformAction, addr 0x5dfa744, size 0x230, virtual false, abstract: false, final false
inline void PerformAction() ;

/// @brief Method PerformActionOmnidirectional, addr 0x5dfa974, size 0x40c, virtual false, abstract: false, final false
inline void PerformActionOmnidirectional() ;

/// @brief Method StartOngoingAction, addr 0x5dfa670, size 0x68, virtual false, abstract: false, final false
inline void StartOngoingAction() ;

/// @brief Method StopOngoingAction, addr 0x5dfa62c, size 0x44, virtual false, abstract: false, final false
inline void StopOngoingAction() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__actionRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__actionRoutine() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr float_t const& __cordl_internal_get__nextActionTime() const;

constexpr float_t& __cordl_internal_get__nextActionTime() ;

constexpr ::GlobalNamespace::VoxelAction const& __cordl_internal_get_action() const;

constexpr ::GlobalNamespace::VoxelAction& __cordl_internal_get_action() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr float_t const& __cordl_internal_get_rayLength() const;

constexpr float_t& __cordl_internal_get_rayLength() ;

constexpr void __cordl_internal_set__actionRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__nextActionTime(float_t  value) ;

constexpr void __cordl_internal_set_action(::GlobalNamespace::VoxelAction  value) ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_rayLength(float_t  value) ;

/// @brief Method .ctor, addr 0x5dfb0f0, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF__hitColliders() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Voxels::VoxelWorld>>* getStaticF__hitWorlds() ;

static inline void setStaticF__hitColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

static inline void setStaticF__hitWorlds(::System::Collections::Generic::List_1<::UnityW<::Voxels::VoxelWorld>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelInteractor(VoxelInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelInteractor(VoxelInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{501};

/// [SerializeField]
/// @brief Field layerMask, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// [SerializeField]
/// @brief Field rayLength, offset: 0x24, size: 0x4, def value: None
 float_t  ___rayLength;

/// [SerializeField]
/// [Range(0.25, 2)]
/// @brief Field cooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ___cooldown;

/// [SerializeField]
/// @brief Field action, offset: 0x2c, size: 0x10, def value: None
 ::GlobalNamespace::VoxelAction  ___action;

/// @brief Field _active, offset: 0x3c, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _actionRoutine, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____actionRoutine;

/// @brief Field _nextActionTime, offset: 0x48, size: 0x4, def value: None
 float_t  ____nextActionTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelInteractor, ___layerMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelInteractor, ___rayLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelInteractor, ___cooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelInteractor, ___action) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelInteractor, ____active) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelInteractor, ____actionRoutine) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelInteractor, ____nextActionTime) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelInteractor) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoxelInteractor/<DoContinuousAction>d__14
class CORDL_TYPE VoxelInteractor__DoContinuousAction_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::VoxelInteractor>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5dfb138, size 0xb8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5dfb1f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5dfb1f8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5dfb230, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5dfb134, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::VoxelInteractor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::VoxelInteractor>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VoxelInteractor>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5dfad80, size 0x28, virtual false, abstract: false, final false
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
constexpr VoxelInteractor__DoContinuousAction_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelInteractor__DoContinuousAction_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelInteractor__DoContinuousAction_d__14(VoxelInteractor__DoContinuousAction_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelInteractor__DoContinuousAction_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelInteractor__DoContinuousAction_d__14(VoxelInteractor__DoContinuousAction_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{500};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VoxelInteractor>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
