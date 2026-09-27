#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderDispenser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPieceSet_PieceInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderDispenser)
namespace GlobalNamespace {
class BuilderDispenser__PlayAnimation_d__22;
}
namespace GlobalNamespace {
struct BuilderPieceSet_PieceInfo;
}
namespace GlobalNamespace {
class BuilderPiece;
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
class AnimationClip;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderDispenser;
}
namespace GlobalNamespace {
class BuilderDispenser__PlayAnimation_d__22;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderDispenser*);
MARK_REF_T(::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderDispenser*, "", "BuilderDispenser");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22*, "", "BuilderDispenser/<PlayAnimation>d__22");
// Dependencies BuilderPieceSet::PieceInfo, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderDispenser
class CORDL_TYPE BuilderDispenser : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayAnimation_d__22 = ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22;

/// @brief Field OnGrabSpawnDelay, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_OnGrabSpawnDelay, put=__cordl_internal_set_OnGrabSpawnDelay)) float_t  OnGrabSpawnDelay;

/// @brief Field animateParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_animateParent, put=__cordl_internal_set_animateParent)) ::UnityW<::UnityEngine::Animation>  animateParent;

/// @brief Field currentAnimation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentAnimation, put=__cordl_internal_set_currentAnimation)) ::UnityW<::UnityEngine::AnimationClip>  currentAnimation;

/// @brief Field dispenseDefaultAnimation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenseDefaultAnimation, put=__cordl_internal_set_dispenseDefaultAnimation)) ::UnityW<::UnityEngine::AnimationClip>  dispenseDefaultAnimation;

/// @brief Field dispenserFX, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenserFX, put=__cordl_internal_set_dispenserFX)) ::UnityW<::UnityEngine::GameObject>  dispenserFX;

/// @brief Field displayTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayTransform, put=__cordl_internal_set_displayTransform)) ::UnityW<::UnityEngine::Transform>  displayTransform;

/// @brief Field hasPiece, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPiece, put=__cordl_internal_set_hasPiece)) bool  hasPiece;

/// @brief Field materialType, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialType, put=__cordl_internal_set_materialType)) int32_t  materialType;

/// @brief Field nextSpawnTime, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSpawnTime, put=__cordl_internal_set_nextSpawnTime)) double_t  nextSpawnTime;

/// @brief Field nullPiece, offset 0x88, size 0x18 
 __declspec(property(get=__cordl_internal_get_nullPiece, put=__cordl_internal_set_nullPiece)) ::GlobalNamespace::BuilderPieceSet_PieceInfo  nullPiece;

/// @brief Field pieceToSpawn, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_pieceToSpawn, put=__cordl_internal_set_pieceToSpawn)) ::GlobalNamespace::BuilderPieceSet_PieceInfo  pieceToSpawn;

/// @brief Field playFX, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_playFX, put=__cordl_internal_set_playFX)) bool  playFX;

/// @brief Field shelfID, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfID, put=__cordl_internal_set_shelfID)) int32_t  shelfID;

/// @brief Field spawnCount, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnCount, put=__cordl_internal_set_spawnCount)) int32_t  spawnCount;

/// @brief Field spawnRetryDelay, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnRetryDelay, put=__cordl_internal_set_spawnRetryDelay)) float_t  spawnRetryDelay;

/// @brief Field spawnTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnTransform, put=__cordl_internal_set_spawnTransform)) ::UnityW<::UnityEngine::Transform>  spawnTransform;

/// @brief Field spawnedPieceInstance, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnedPieceInstance, put=__cordl_internal_set_spawnedPieceInstance)) ::UnityW<::GlobalNamespace::BuilderPiece>  spawnedPieceInstance;

/// @brief Field table, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Method AssignPieceType, addr 0x57b877c, size 0x84, virtual false, abstract: false, final false
inline void AssignPieceType(::GlobalNamespace::BuilderPieceSet_PieceInfo  piece, int32_t  inMaterialType) ;

/// @brief Method Awake, addr 0x57b7b8c, size 0x4c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearDispenser, addr 0x57b8940, size 0x130, virtual false, abstract: false, final false
inline void ClearDispenser() ;

/// @brief Method DoesPieceMatchSpawnInfo, addr 0x57b807c, size 0x1f4, virtual false, abstract: false, final false
inline bool DoesPieceMatchSpawnInfo(::GlobalNamespace::BuilderPiece*  piece) ;

static inline ::GlobalNamespace::BuilderDispenser* New_ctor() ;

/// @brief Method OnClearTable, addr 0x57b8a70, size 0x18, virtual false, abstract: false, final false
inline void OnClearTable() ;

/// @brief Method ParentPieceToShelf, addr 0x57b8800, size 0x140, virtual false, abstract: false, final false
inline void ParentPieceToShelf(::UnityEngine::Transform*  shelfTransform) ;

/// [IteratorStateMachine(typeof(BuilderDispenser::<PlayAnimation>d__22))]
/// @brief Method PlayAnimation, addr 0x57b85f8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayAnimation() ;

/// @brief Method ShelfPieceCreated, addr 0x57b8270, size 0x388, virtual false, abstract: false, final false
inline void ShelfPieceCreated(::GlobalNamespace::BuilderPiece*  piece, bool  playAnimation) ;

/// @brief Method ShelfPieceRecycled, addr 0x57b868c, size 0xf0, virtual false, abstract: false, final false
inline void ShelfPieceRecycled(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method TrySpawnPiece, addr 0x57b7d80, size 0x2fc, virtual false, abstract: false, final false
inline void TrySpawnPiece() ;

/// @brief Method UpdateDispenser, addr 0x57b7bd8, size 0x1a8, virtual false, abstract: false, final false
inline void UpdateDispenser() ;

constexpr float_t const& __cordl_internal_get_OnGrabSpawnDelay() const;

constexpr float_t& __cordl_internal_get_OnGrabSpawnDelay() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_animateParent() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_animateParent() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_currentAnimation() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_currentAnimation() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_dispenseDefaultAnimation() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_dispenseDefaultAnimation() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_dispenserFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_dispenserFX() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_displayTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_displayTransform() ;

constexpr bool const& __cordl_internal_get_hasPiece() const;

constexpr bool& __cordl_internal_get_hasPiece() ;

constexpr int32_t const& __cordl_internal_get_materialType() const;

constexpr int32_t& __cordl_internal_get_materialType() ;

constexpr double_t const& __cordl_internal_get_nextSpawnTime() const;

constexpr double_t& __cordl_internal_get_nextSpawnTime() ;

constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo const& __cordl_internal_get_nullPiece() const;

constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo& __cordl_internal_get_nullPiece() ;

constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo const& __cordl_internal_get_pieceToSpawn() const;

constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo& __cordl_internal_get_pieceToSpawn() ;

constexpr bool const& __cordl_internal_get_playFX() const;

constexpr bool& __cordl_internal_get_playFX() ;

constexpr int32_t const& __cordl_internal_get_shelfID() const;

constexpr int32_t& __cordl_internal_get_shelfID() ;

constexpr int32_t const& __cordl_internal_get_spawnCount() const;

constexpr int32_t& __cordl_internal_get_spawnCount() ;

constexpr float_t const& __cordl_internal_get_spawnRetryDelay() const;

constexpr float_t& __cordl_internal_get_spawnRetryDelay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnTransform() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_spawnedPieceInstance() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_spawnedPieceInstance() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr void __cordl_internal_set_OnGrabSpawnDelay(float_t  value) ;

constexpr void __cordl_internal_set_animateParent(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_currentAnimation(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_dispenseDefaultAnimation(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_dispenserFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_displayTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hasPiece(bool  value) ;

constexpr void __cordl_internal_set_materialType(int32_t  value) ;

constexpr void __cordl_internal_set_nextSpawnTime(double_t  value) ;

constexpr void __cordl_internal_set_nullPiece(::GlobalNamespace::BuilderPieceSet_PieceInfo  value) ;

constexpr void __cordl_internal_set_pieceToSpawn(::GlobalNamespace::BuilderPieceSet_PieceInfo  value) ;

constexpr void __cordl_internal_set_playFX(bool  value) ;

constexpr void __cordl_internal_set_shelfID(int32_t  value) ;

constexpr void __cordl_internal_set_spawnCount(int32_t  value) ;

constexpr void __cordl_internal_set_spawnRetryDelay(float_t  value) ;

constexpr void __cordl_internal_set_spawnTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_spawnedPieceInstance(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

/// @brief Method .ctor, addr 0x57b8a88, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderDispenser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderDispenser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderDispenser(BuilderDispenser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderDispenser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderDispenser(BuilderDispenser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1584};

/// @brief Field displayTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___displayTransform;

/// @brief Field spawnTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnTransform;

/// @brief Field animateParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___animateParent;

/// @brief Field dispenseDefaultAnimation, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___dispenseDefaultAnimation;

/// @brief Field dispenserFX, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___dispenserFX;

/// @brief Field currentAnimation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___currentAnimation;

/// [HideInInspector]
/// @brief Field table, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

/// [HideInInspector]
/// @brief Field shelfID, offset: 0x58, size: 0x4, def value: None
 int32_t  ___shelfID;

/// @brief Field pieceToSpawn, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::BuilderPieceSet_PieceInfo  ___pieceToSpawn;

/// @brief Field spawnedPieceInstance, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___spawnedPieceInstance;

/// @brief Field materialType, offset: 0x80, size: 0x4, def value: None
 int32_t  ___materialType;

/// @brief Field nullPiece, offset: 0x88, size: 0x18, def value: None
 ::GlobalNamespace::BuilderPieceSet_PieceInfo  ___nullPiece;

/// @brief Field spawnCount, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___spawnCount;

/// @brief Field nextSpawnTime, offset: 0xa8, size: 0x8, def value: None
 double_t  ___nextSpawnTime;

/// @brief Field hasPiece, offset: 0xb0, size: 0x1, def value: None
 bool  ___hasPiece;

/// @brief Field OnGrabSpawnDelay, offset: 0xb4, size: 0x4, def value: None
 float_t  ___OnGrabSpawnDelay;

/// @brief Field spawnRetryDelay, offset: 0xb8, size: 0x4, def value: None
 float_t  ___spawnRetryDelay;

/// @brief Field playFX, offset: 0xbc, size: 0x1, def value: None
 bool  ___playFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___displayTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___spawnTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___animateParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___dispenseDefaultAnimation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___dispenserFX) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___currentAnimation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___table) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___shelfID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___pieceToSpawn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___spawnedPieceInstance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___materialType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___nullPiece) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___spawnCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___nextSpawnTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___hasPiece) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___OnGrabSpawnDelay) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___spawnRetryDelay) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser, ___playFX) == 0xbc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderDispenser) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderDispenser/<PlayAnimation>d__22
class CORDL_TYPE BuilderDispenser__PlayAnimation_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BuilderDispenser>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57b8aa8, size 0x3f0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57b8e98, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x57b8ea0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57b8ed8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57b8aa4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::BuilderDispenser> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BuilderDispenser>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuilderDispenser>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x57b8664, size 0x28, virtual false, abstract: false, final false
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
constexpr BuilderDispenser__PlayAnimation_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderDispenser__PlayAnimation_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderDispenser__PlayAnimation_d__22(BuilderDispenser__PlayAnimation_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderDispenser__PlayAnimation_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderDispenser__PlayAnimation_d__22(BuilderDispenser__PlayAnimation_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1583};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderDispenser>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderDispenser__PlayAnimation_d__22) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
