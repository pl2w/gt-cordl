#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPieceSet_PieceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPool)
namespace GlobalNamespace {
class BuilderBumpGlow;
}
namespace GlobalNamespace {
class BuilderPieceSet_BuilderPieceSubset;
}
namespace GlobalNamespace {
class BuilderPieceSet;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class BuilderShelf;
}
namespace GlobalNamespace {
class IGorillaSimpleBackgroundWorker;
}
namespace GlobalNamespace {
struct SnapBounds;
}
namespace GorillaTagScripts {
class BuilderAttachGridPlane;
}
namespace GorillaTagScripts {
class BuilderPool__BuildFromPieceSets_d__15;
}
namespace GorillaTagScripts {
class SnapOverlap;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
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
// Forward declare root types
namespace GorillaTagScripts {
class BuilderPool;
}
namespace GorillaTagScripts {
class BuilderPool__BuildFromPieceSets_d__15;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderPool*);
MARK_REF_T(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderPool*, "GorillaTagScripts", "BuilderPool");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15*, "GorillaTagScripts", "BuilderPool/<BuildFromPieceSets>d__15");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderPool
class CORDL_TYPE BuilderPool : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _BuildFromPieceSets_d__15 = ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15;

/// @brief Field bumpGlowPool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bumpGlowPool, put=__cordl_internal_set_bumpGlowPool)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*  bumpGlowPool;

/// @brief Field bumpGlowPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bumpGlowPrefab, put=__cordl_internal_set_bumpGlowPrefab)) ::UnityW<::GlobalNamespace::BuilderBumpGlow>  bumpGlowPrefab;

/// @brief Field hasBuiltPieceSets, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBuiltPieceSets, put=__cordl_internal_set_hasBuiltPieceSets)) bool  hasBuiltPieceSets;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::BuilderPool>  instance;

/// @brief Field isSetup, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSetup, put=__cordl_internal_set_isSetup)) bool  isSetup;

/// @brief Field piecePoolLookup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_piecePoolLookup, put=__cordl_internal_set_piecePoolLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  piecePoolLookup;

/// @brief Field piecePools, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_piecePools, put=__cordl_internal_set_piecePools)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>*  piecePools;

/// @brief Field piecesToAdd, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_piecesToAdd, put=__cordl_internal_set_piecesToAdd)) ::System::Collections::Generic::Queue_1<int32_t>*  piecesToAdd;

/// @brief Field snapOverlapPool, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapOverlapPool, put=__cordl_internal_set_snapOverlapPool)) ::System::Collections::Generic::List_1<::GorillaTagScripts::SnapOverlap*>*  snapOverlapPool;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr operator  ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept;

/// @brief Method AddToGlowBumpPool, addr 0x5b87fa0, size 0x15c, virtual false, abstract: false, final false
inline void AddToGlowBumpPool(int32_t  count) ;

/// @brief Method AddToPool, addr 0x5b88374, size 0x428, virtual false, abstract: false, final false
inline void AddToPool(int32_t  pieceType, int32_t  count) ;

/// @brief Method AddToSnapOverlapPool, addr 0x5b880fc, size 0x14c, virtual false, abstract: false, final false
inline void AddToSnapOverlapPool(int32_t  count) ;

/// @brief Method Awake, addr 0x5b87d40, size 0xcc, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.BuilderPool::<BuildFromPieceSets>d__15))]
/// @brief Method BuildFromPieceSets, addr 0x5b8879c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* BuildFromPieceSets() ;

/// @brief Method BuildFromShelves, addr 0x5b88248, size 0x12c, virtual false, abstract: false, final false
inline void BuildFromShelves(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*  shelves) ;

/// @brief Method CreateGlowBump, addr 0x5b888f8, size 0xbc, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderBumpGlow> CreateGlowBump() ;

/// @brief Method CreatePiece, addr 0x5b860a0, size 0x2cc, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> CreatePiece(int32_t  pieceType, bool  assertNotEmpty) ;

/// @brief Method CreateSnapOverlap, addr 0x5b88b94, size 0xfc, virtual false, abstract: false, final false
inline ::GorillaTagScripts::SnapOverlap* CreateSnapOverlap(::GorillaTagScripts::BuilderAttachGridPlane*  otherPlane, ::GlobalNamespace::SnapBounds  bounds) ;

/// @brief Method DestroyBumpGlow, addr 0x5b889b4, size 0x1e0, virtual false, abstract: false, final false
inline void DestroyBumpGlow(::GlobalNamespace::BuilderBumpGlow*  bump) ;

/// @brief Method DestroyPiece, addr 0x5b85cf0, size 0x3b0, virtual false, abstract: false, final false
inline void DestroyPiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method DestroySnapOverlap, addr 0x5b83438, size 0xf0, virtual false, abstract: false, final false
inline void DestroySnapOverlap(::GorillaTagScripts::SnapOverlap*  snapOverlap) ;

static inline ::GorillaTagScripts::BuilderPool* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b88c90, size 0x3ac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Setup, addr 0x5b87e0c, size 0x194, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method SimpleWork, addr 0x5b88830, size 0xc8, virtual true, abstract: false, final true
inline void SimpleWork() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>* const& __cordl_internal_get_bumpGlowPool() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*& __cordl_internal_get_bumpGlowPool() ;

constexpr ::UnityW<::GlobalNamespace::BuilderBumpGlow> const& __cordl_internal_get_bumpGlowPrefab() const;

constexpr ::UnityW<::GlobalNamespace::BuilderBumpGlow>& __cordl_internal_get_bumpGlowPrefab() ;

constexpr bool const& __cordl_internal_get_hasBuiltPieceSets() const;

constexpr bool& __cordl_internal_get_hasBuiltPieceSets() ;

constexpr bool const& __cordl_internal_get_isSetup() const;

constexpr bool& __cordl_internal_get_isSetup() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_piecePoolLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_piecePoolLookup() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>* const& __cordl_internal_get_piecePools() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>*& __cordl_internal_get_piecePools() ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get_piecesToAdd() const;

constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get_piecesToAdd() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::SnapOverlap*>* const& __cordl_internal_get_snapOverlapPool() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::SnapOverlap*>*& __cordl_internal_get_snapOverlapPool() ;

constexpr void __cordl_internal_set_bumpGlowPool(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*  value) ;

constexpr void __cordl_internal_set_bumpGlowPrefab(::UnityW<::GlobalNamespace::BuilderBumpGlow>  value) ;

constexpr void __cordl_internal_set_hasBuiltPieceSets(bool  value) ;

constexpr void __cordl_internal_set_isSetup(bool  value) ;

constexpr void __cordl_internal_set_piecePoolLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_piecePools(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>*  value) ;

constexpr void __cordl_internal_set_piecesToAdd(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_snapOverlapPool(::System::Collections::Generic::List_1<::GorillaTagScripts::SnapOverlap*>*  value) ;

/// @brief Method .ctor, addr 0x5b8903c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::BuilderPool> getStaticF_instance() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::BuilderPool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPool(BuilderPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPool(BuilderPool const& ) = delete;

/// @brief Field INITIAL_INSTANCE_COUNT_PREMIUM offset 0xffffffff size 0x4
static constexpr int32_t  INITIAL_INSTANCE_COUNT_PREMIUM{static_cast<int32_t>(0x8)};

/// @brief Field INITIAL_INSTANCE_COUNT_STARTER offset 0xffffffff size 0x4
static constexpr int32_t  INITIAL_INSTANCE_COUNT_STARTER{static_cast<int32_t>(0x20)};

/// @brief Field POOl_CAPACITY offset 0xffffffff size 0x4
static constexpr int32_t  POOl_CAPACITY{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3934};

/// @brief Field piecePools, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>*  ___piecePools;

/// @brief Field piecePoolLookup, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___piecePoolLookup;

/// [HideInInspector]
/// @brief Field bumpGlowPool, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*  ___bumpGlowPool;

/// @brief Field bumpGlowPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderBumpGlow>  ___bumpGlowPrefab;

/// [HideInInspector]
/// @brief Field snapOverlapPool, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::SnapOverlap*>*  ___snapOverlapPool;

/// @brief Field isSetup, offset: 0x48, size: 0x1, def value: None
 bool  ___isSetup;

/// @brief Field hasBuiltPieceSets, offset: 0x49, size: 0x1, def value: None
 bool  ___hasBuiltPieceSets;

/// @brief Field piecesToAdd, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int32_t>*  ___piecesToAdd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderPool, ___piecePools) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool, ___piecePoolLookup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool, ___bumpGlowPool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool, ___bumpGlowPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool, ___snapOverlapPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool, ___isSetup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool, ___hasBuiltPieceSets) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool, ___piecesToAdd) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderPool) == 0x58, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies BuilderPieceSet::PieceInfo, System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderPool/<BuildFromPieceSets>d__15
class CORDL_TYPE BuilderPool__BuildFromPieceSets_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::BuilderPool>  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::BuilderPieceSet>>  __7__wrap1;

/// @brief Field <>7__wrap4, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap4, put=__cordl_internal_set___7__wrap4)) ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>  __7__wrap4;

/// @brief Field <>7__wrap5, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap5, put=__cordl_internal_set___7__wrap5)) ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_PieceInfo>  __7__wrap5;

/// @brief Field <isFallbackSet>5__4, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFallbackSet_5__4, put=__cordl_internal_set__isFallbackSet_5__4)) bool  _isFallbackSet_5__4;

/// @brief Field <isStarterSet>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isStarterSet_5__3, put=__cordl_internal_set__isStarterSet_5__3)) bool  _isStarterSet_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b891e4, size 0x6b8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b8998c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b89994, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b899cc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b890c4, size 0x120, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderPool> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderPool>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::BuilderPieceSet>> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::BuilderPieceSet>>& __cordl_internal_get___7__wrap1() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*> const& __cordl_internal_get___7__wrap4() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>& __cordl_internal_get___7__wrap4() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_PieceInfo> const& __cordl_internal_get___7__wrap5() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_PieceInfo>& __cordl_internal_get___7__wrap5() ;

constexpr bool const& __cordl_internal_get__isFallbackSet_5__4() const;

constexpr bool& __cordl_internal_get__isFallbackSet_5__4() ;

constexpr bool const& __cordl_internal_get__isStarterSet_5__3() const;

constexpr bool& __cordl_internal_get__isStarterSet_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::BuilderPool>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::BuilderPieceSet>>  value) ;

constexpr void __cordl_internal_set___7__wrap4(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>  value) ;

constexpr void __cordl_internal_set___7__wrap5(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_PieceInfo>  value) ;

constexpr void __cordl_internal_set__isFallbackSet_5__4(bool  value) ;

constexpr void __cordl_internal_set__isStarterSet_5__3(bool  value) ;

/// @brief Method <>m__Finally1, addr 0x5b8993c, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x5b898ec, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// @brief Method <>m__Finally3, addr 0x5b8989c, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally3() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b88808, size 0x28, virtual false, abstract: false, final false
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
constexpr BuilderPool__BuildFromPieceSets_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPool__BuildFromPieceSets_d__15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPool__BuildFromPieceSets_d__15(BuilderPool__BuildFromPieceSets_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPool__BuildFromPieceSets_d__15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPool__BuildFromPieceSets_d__15(BuilderPool__BuildFromPieceSets_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3933};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderPool>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::UnityW<::GlobalNamespace::BuilderPieceSet>>  _____7__wrap1;

/// @brief Field <isStarterSet>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____isStarterSet_5__3;

/// @brief Field <isFallbackSet>5__4, offset: 0x41, size: 0x1, def value: None
 bool  ____isFallbackSet_5__4;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>  _____7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::BuilderPieceSet_PieceInfo>  _____7__wrap5;

/// @brief Size padding 0x88 - 0x78 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15, ____isStarterSet_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15, ____isFallbackSet_5__4) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15, _____7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15, _____7__wrap5) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderPool__BuildFromPieceSets_d__15) == 0x88, "Size mismatch!");

} // namespace end def GorillaTagScripts
