#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleEffectsPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ParticleEffect_def.hpp"
#include "GlobalNamespace/zzzz__RingBuffer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleEffectsPool)
namespace GlobalNamespace {
class ParticleEffect;
}
namespace GlobalNamespace {
class ParticleEffectsPool__PlayDelayed_d__15;
}
namespace GlobalNamespace {
template<typename T>
class RingBuffer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleEffectsPool;
}
namespace GlobalNamespace {
class ParticleEffectsPool__PlayDelayed_d__15;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParticleEffectsPool*);
MARK_REF_T(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleEffectsPool*, "", "ParticleEffectsPool");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15*, "", "ParticleEffectsPool/<PlayDelayed>d__15");
// Dependencies ParticleEffect, RingBuffer`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleEffectsPool
class CORDL_TYPE ParticleEffectsPool : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayDelayed_d__15 = ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15;

/// @brief Field _effectToPool, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectToPool, put=__cordl_internal_set__effectToPool)) ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  _effectToPool;

/// @brief Field _pools, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pools, put=__cordl_internal_set__pools)) ::ArrayW<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*>  _pools;

/// @brief Field effects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_effects, put=__cordl_internal_set_effects)) ::ArrayW<::UnityW<::GlobalNamespace::ParticleEffect>>  effects;

/// @brief Field poolSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_poolSize, put=__cordl_internal_set_poolSize)) int32_t  poolSize;

/// @brief Method Awake, addr 0x565789c, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetPoolIndex, addr 0x5657ea8, size 0x78, virtual false, abstract: false, final false
inline int32_t GetPoolIndex(int64_t  effectID) ;

/// @brief Method InitPoolForPrefab, addr 0x5657b64, size 0x20c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>* InitPoolForPrefab(int32_t  index, ::GlobalNamespace::ParticleEffect*  prefab) ;

/// @brief Method MoveToSceneWorldRoot, addr 0x5657a70, size 0xf4, virtual false, abstract: false, final false
inline void MoveToSceneWorldRoot() ;

static inline ::GlobalNamespace::ParticleEffectsPool* New_ctor() ;

/// @brief Method OnPoolAwake, addr 0x5657a6c, size 0x4, virtual true, abstract: false, final false
inline void OnPoolAwake() ;

/// [IteratorStateMachine(typeof(ParticleEffectsPool::<PlayDelayed>d__15))]
/// @brief Method PlayDelayed, addr 0x56580d8, size 0xa8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayDelayed(int32_t  index, ::UnityEngine::Vector3  worldPos, float_t  delay) ;

/// @brief Method PlayEffect, addr 0x5657d70, size 0x50, virtual false, abstract: false, final false
inline void PlayEffect(::GlobalNamespace::ParticleEffect*  effect, ::UnityEngine::Vector3  worldPos) ;

/// @brief Method PlayEffect, addr 0x5657e04, size 0x58, virtual false, abstract: false, final false
inline void PlayEffect(::GlobalNamespace::ParticleEffect*  effect, ::UnityEngine::Vector3  worldPos, float_t  delay) ;

/// @brief Method PlayEffect, addr 0x5657dc0, size 0x44, virtual false, abstract: false, final false
inline void PlayEffect(int64_t  effectID, ::UnityEngine::Vector3  worldPos) ;

/// @brief Method PlayEffect, addr 0x5657e5c, size 0x4c, virtual false, abstract: false, final false
inline void PlayEffect(int64_t  effectID, ::UnityEngine::Vector3  worldPos, float_t  delay) ;

/// @brief Method PlayEffect, addr 0x5657f20, size 0xe0, virtual false, abstract: false, final false
inline void PlayEffect(int32_t  index, ::UnityEngine::Vector3  worldPos) ;

/// @brief Method PlayEffect, addr 0x5658000, size 0xd8, virtual false, abstract: false, final false
inline void PlayEffect(int32_t  index, ::UnityEngine::Vector3  worldPos, float_t  delay) ;

/// @brief Method Return, addr 0x5657810, size 0x7c, virtual false, abstract: false, final false
inline void Return(::GlobalNamespace::ParticleEffect*  effect) ;

/// @brief Method Setup, addr 0x56578bc, size 0x1b0, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>* const& __cordl_internal_get__effectToPool() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*& __cordl_internal_get__effectToPool() ;

constexpr ::ArrayW<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*> const& __cordl_internal_get__pools() const;

constexpr ::ArrayW<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*>& __cordl_internal_get__pools() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ParticleEffect>> const& __cordl_internal_get_effects() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ParticleEffect>>& __cordl_internal_get_effects() ;

constexpr int32_t const& __cordl_internal_get_poolSize() const;

constexpr int32_t& __cordl_internal_get_poolSize() ;

constexpr void __cordl_internal_set__effectToPool(::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  value) ;

constexpr void __cordl_internal_set__pools(::ArrayW<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*>  value) ;

constexpr void __cordl_internal_set_effects(::ArrayW<::UnityW<::GlobalNamespace::ParticleEffect>>  value) ;

constexpr void __cordl_internal_set_poolSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x56581a8, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleEffectsPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffectsPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleEffectsPool(ParticleEffectsPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffectsPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleEffectsPool(ParticleEffectsPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{752};

/// @brief Field effects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ParticleEffect>>  ___effects;

/// [Space]
/// @brief Field poolSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___poolSize;

/// [Space]
/// @brief Field _pools, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RingBuffer_1<::UnityW<::GlobalNamespace::ParticleEffect>>*>  ____pools;

/// @brief Field _effectToPool, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  ____effectToPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool, ___effects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool, ___poolSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool, ____pools) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool, ____effectToPool) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleEffectsPool) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleEffectsPool/<PlayDelayed>d__15
class CORDL_TYPE ParticleEffectsPool__PlayDelayed_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ParticleEffectsPool>  __4__this;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field index, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field worldPos, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_worldPos, put=__cordl_internal_set_worldPos)) ::UnityEngine::Vector3  worldPos;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x56582a4, size 0xc4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5658368, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5658370, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x56583a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x56582a0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ParticleEffectsPool> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ParticleEffectsPool>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldPos() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ParticleEffectsPool>  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_worldPos(::UnityEngine::Vector3  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5658180, size 0x28, virtual false, abstract: false, final false
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
constexpr ParticleEffectsPool__PlayDelayed_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffectsPool__PlayDelayed_d__15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleEffectsPool__PlayDelayed_d__15(ParticleEffectsPool__PlayDelayed_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffectsPool__PlayDelayed_d__15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleEffectsPool__PlayDelayed_d__15(ParticleEffectsPool__PlayDelayed_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{751};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ParticleEffectsPool>  _____4__this;

/// @brief Field index, offset: 0x30, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field worldPos, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___worldPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15, ___index) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15, ___worldPos) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleEffectsPool__PlayDelayed_d__15) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
