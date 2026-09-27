#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ProceduralWorld.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Examples/zzzz__ProceduralWorld_RotationRandomness_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralWorld)
namespace GlobalNamespace {
struct ProceduralWorld_RotationRandomness;
}
namespace Pathfinding::Examples {
class ProceduralTile_ProceduralWorld__Generate_d__11;
}
namespace Pathfinding::Examples {
class ProceduralTile_ProceduralWorld__InternalGenerate_d__16;
}
namespace Pathfinding::Examples {
class ProceduralWorld_ProceduralPrefab;
}
namespace Pathfinding::Examples {
class ProceduralWorld_ProceduralTile;
}
namespace Pathfinding::Examples {
class ProceduralWorld__GenerateTiles_d__13;
}
namespace Pathfinding {
struct Int2;
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
namespace System {
class Random;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Examples {
class ProceduralTile_ProceduralWorld__Generate_d__11;
}
namespace Pathfinding::Examples {
class ProceduralTile_ProceduralWorld__InternalGenerate_d__16;
}
namespace Pathfinding::Examples {
class ProceduralWorld;
}
namespace Pathfinding::Examples {
class ProceduralWorld_ProceduralPrefab;
}
namespace Pathfinding::Examples {
class ProceduralWorld_ProceduralTile;
}
namespace Pathfinding::Examples {
class ProceduralWorld__GenerateTiles_d__13;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*);
MARK_REF_T(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*);
MARK_REF_T(::Pathfinding::Examples::ProceduralWorld*);
MARK_REF_T(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*);
MARK_REF_T(::Pathfinding::Examples::ProceduralWorld_ProceduralTile*);
MARK_REF_T(::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*, "Pathfinding.Examples", "ProceduralWorld/ProceduralTile/<Generate>d__11");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*, "Pathfinding.Examples", "ProceduralWorld/ProceduralTile/<InternalGenerate>d__16");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ProceduralWorld*, "Pathfinding.Examples", "ProceduralWorld");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*, "Pathfinding.Examples", "ProceduralWorld/ProceduralPrefab");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ProceduralWorld_ProceduralTile*, "Pathfinding.Examples", "ProceduralWorld/ProceduralTile");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*, "Pathfinding.Examples", "ProceduralWorld/<GenerateTiles>d__13");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_procedural_world.php")]
// Dependencies Pathfinding.Examples.ProceduralWorld::ProceduralPrefab, UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ProceduralWorld
class CORDL_TYPE ProceduralWorld : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationRandomness = ::GlobalNamespace::ProceduralWorld_RotationRandomness;

using ProceduralPrefab = ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab;

using ProceduralTile = ::Pathfinding::Examples::ProceduralWorld_ProceduralTile;

using _GenerateTiles_d__13 = ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13;

/// @brief Field disableAsyncLoadWithinRange, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_disableAsyncLoadWithinRange, put=__cordl_internal_set_disableAsyncLoadWithinRange)) int32_t  disableAsyncLoadWithinRange;

/// @brief Field prefabs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabs, put=__cordl_internal_set_prefabs)) ::ArrayW<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>  prefabs;

/// @brief Field range, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) int32_t  range;

/// @brief Field staticBatching, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_staticBatching, put=__cordl_internal_set_staticBatching)) bool  staticBatching;

/// @brief Field subTiles, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_subTiles, put=__cordl_internal_set_subTiles)) int32_t  subTiles;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field tileGenerationQueue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tileGenerationQueue, put=__cordl_internal_set_tileGenerationQueue)) ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*  tileGenerationQueue;

/// @brief Field tileSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_tileSize, put=__cordl_internal_set_tileSize)) float_t  tileSize;

/// @brief Field tiles, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tiles, put=__cordl_internal_set_tiles)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>*  tiles;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.ProceduralWorld::<GenerateTiles>d__13))]
/// @brief Method GenerateTiles, addr 0x5ef2e94, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GenerateTiles() ;

static inline ::Pathfinding::Examples::ProceduralWorld* New_ctor() ;

/// @brief Method Start, addr 0x5ef276c, size 0x8c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5ef27f8, size 0x69c, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_disableAsyncLoadWithinRange() const;

constexpr int32_t& __cordl_internal_get_disableAsyncLoadWithinRange() ;

constexpr ::ArrayW<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*> const& __cordl_internal_get_prefabs() const;

constexpr ::ArrayW<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>& __cordl_internal_get_prefabs() ;

constexpr int32_t const& __cordl_internal_get_range() const;

constexpr int32_t& __cordl_internal_get_range() ;

constexpr bool const& __cordl_internal_get_staticBatching() const;

constexpr bool& __cordl_internal_get_staticBatching() ;

constexpr int32_t const& __cordl_internal_get_subTiles() const;

constexpr int32_t& __cordl_internal_get_subTiles() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>* const& __cordl_internal_get_tileGenerationQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*& __cordl_internal_get_tileGenerationQueue() ;

constexpr float_t const& __cordl_internal_get_tileSize() const;

constexpr float_t& __cordl_internal_get_tileSize() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>* const& __cordl_internal_get_tiles() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>*& __cordl_internal_get_tiles() ;

constexpr void __cordl_internal_set_disableAsyncLoadWithinRange(int32_t  value) ;

constexpr void __cordl_internal_set_prefabs(::ArrayW<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>  value) ;

constexpr void __cordl_internal_set_range(int32_t  value) ;

constexpr void __cordl_internal_set_staticBatching(bool  value) ;

constexpr void __cordl_internal_set_subTiles(int32_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tileGenerationQueue(::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*  value) ;

constexpr void __cordl_internal_set_tileSize(float_t  value) ;

constexpr void __cordl_internal_set_tiles(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>*  value) ;

/// @brief Method .ctor, addr 0x5ef32ac, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralWorld() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralWorld", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralWorld(ProceduralWorld && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralWorld", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralWorld(ProceduralWorld const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21527};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field prefabs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>  ___prefabs;

/// @brief Field range, offset: 0x30, size: 0x4, def value: None
 int32_t  ___range;

/// @brief Field disableAsyncLoadWithinRange, offset: 0x34, size: 0x4, def value: None
 int32_t  ___disableAsyncLoadWithinRange;

/// @brief Field tileSize, offset: 0x38, size: 0x4, def value: None
 float_t  ___tileSize;

/// @brief Field subTiles, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___subTiles;

/// @brief Field staticBatching, offset: 0x40, size: 0x1, def value: None
 bool  ___staticBatching;

/// @brief Field tileGenerationQueue, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*  ___tileGenerationQueue;

/// @brief Field tiles, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>*  ___tiles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___prefabs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___range) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___disableAsyncLoadWithinRange) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___tileSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___subTiles) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___staticBatching) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___tileGenerationQueue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld, ___tiles) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ProceduralWorld) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ProceduralWorld/<GenerateTiles>d__13
class CORDL_TYPE ProceduralWorld__GenerateTiles_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::Examples::ProceduralWorld>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef4290, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ef4378, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ef4380, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ef43b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef428c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::Examples::ProceduralWorld> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::Examples::ProceduralWorld>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::ProceduralWorld>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef3284, size 0x28, virtual false, abstract: false, final false
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
constexpr ProceduralWorld__GenerateTiles_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralWorld__GenerateTiles_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralWorld__GenerateTiles_d__13(ProceduralWorld__GenerateTiles_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralWorld__GenerateTiles_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralWorld__GenerateTiles_d__13(ProceduralWorld__GenerateTiles_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21526};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::ProceduralWorld>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ProceduralWorld/ProceduralTile
class CORDL_TYPE ProceduralWorld_ProceduralTile : public ::System::Object {
public:
// Declarations
using _Generate_d__11 = ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11;

using _InternalGenerate_d__16 = ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16;

/// @brief Field <destroyed>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__destroyed_k__BackingField, put=__cordl_internal_set__destroyed_k__BackingField)) bool  _destroyed_k__BackingField;

 __declspec(property(get=get_destroyed, put=set_destroyed)) bool  destroyed;

/// @brief Field ie, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ie, put=__cordl_internal_set_ie)) ::System::Collections::IEnumerator*  ie;

/// @brief Field rnd, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnd, put=__cordl_internal_set_rnd)) ::System::Random*  rnd;

/// @brief Field root, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityW<::UnityEngine::Transform>  root;

/// @brief Field world, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_world, put=__cordl_internal_set_world)) ::UnityW<::Pathfinding::Examples::ProceduralWorld>  world;

/// @brief Field x, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) int32_t  x;

/// @brief Field z, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) int32_t  z;

/// @brief Method Destroy, addr 0x5ef2f00, size 0x168, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method ForceFinish, addr 0x5ef3184, size 0x100, virtual false, abstract: false, final false
inline void ForceFinish() ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.ProceduralWorld::ProceduralTile::<Generate>d__11))]
/// @brief Method Generate, addr 0x5ef3118, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Generate() ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.ProceduralWorld::ProceduralTile::<InternalGenerate>d__16))]
/// @brief Method InternalGenerate, addr 0x5ef3654, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* InternalGenerate() ;

static inline ::Pathfinding::Examples::ProceduralWorld_ProceduralTile* New_ctor(::Pathfinding::Examples::ProceduralWorld*  world, int32_t  x, int32_t  z) ;

/// @brief Method RandomInside, addr 0x5ef343c, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 RandomInside() ;

/// @brief Method RandomInside, addr 0x5ef34d0, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 RandomInside(float_t  px, float_t  pz) ;

/// @brief Method RandomYRot, addr 0x5ef3578, size 0xdc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion RandomYRot(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*  prefab) ;

constexpr bool const& __cordl_internal_get__destroyed_k__BackingField() const;

constexpr bool& __cordl_internal_get__destroyed_k__BackingField() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_ie() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_ie() ;

constexpr ::System::Random* const& __cordl_internal_get_rnd() const;

constexpr ::System::Random*& __cordl_internal_get_rnd() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root() ;

constexpr ::UnityW<::Pathfinding::Examples::ProceduralWorld> const& __cordl_internal_get_world() const;

constexpr ::UnityW<::Pathfinding::Examples::ProceduralWorld>& __cordl_internal_get_world() ;

constexpr int32_t const& __cordl_internal_get_x() const;

constexpr int32_t& __cordl_internal_get_x() ;

constexpr int32_t const& __cordl_internal_get_z() const;

constexpr int32_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set__destroyed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_ie(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_rnd(::System::Random*  value) ;

constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_world(::UnityW<::Pathfinding::Examples::ProceduralWorld>  value) ;

constexpr void __cordl_internal_set_x(int32_t  value) ;

constexpr void __cordl_internal_set_z(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ef3068, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Examples::ProceduralWorld*  world, int32_t  x, int32_t  z) ;

/// [CompilerGenerated]
/// @brief Method get_destroyed, addr 0x5ef3404, size 0x8, virtual false, abstract: false, final false
inline bool get_destroyed() ;

/// [CompilerGenerated]
/// @brief Method set_destroyed, addr 0x5ef340c, size 0x8, virtual false, abstract: false, final false
inline void set_destroyed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralWorld_ProceduralTile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralWorld_ProceduralTile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralWorld_ProceduralTile(ProceduralWorld_ProceduralTile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralWorld_ProceduralTile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralWorld_ProceduralTile(ProceduralWorld_ProceduralTile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21525};

/// @brief Field x, offset: 0x10, size: 0x4, def value: None
 int32_t  ___x;

/// @brief Field z, offset: 0x14, size: 0x4, def value: None
 int32_t  ___z;

/// @brief Field rnd, offset: 0x18, size: 0x8, def value: None
 ::System::Random*  ___rnd;

/// @brief Field world, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::ProceduralWorld>  ___world;

/// [CompilerGenerated]
/// @brief Field <destroyed>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____destroyed_k__BackingField;

/// @brief Field root, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___root;

/// @brief Field ie, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___ie;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralTile, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralTile, ___z) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralTile, ___rnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralTile, ___world) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralTile, ____destroyed_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralTile, ___root) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralTile, ___ie) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ProceduralWorld_ProceduralTile) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ProceduralWorld/ProceduralTile/<InternalGenerate>d__16
class CORDL_TYPE ProceduralTile_ProceduralWorld__InternalGenerate_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::Examples::ProceduralWorld_ProceduralTile*  __4__this;

/// @brief Field <count>5__11, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__count_5__11, put=__cordl_internal_set__count_5__11)) int32_t  _count_5__11;

/// @brief Field <counter>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__counter_5__2, put=__cordl_internal_set__counter_5__2)) int32_t  _counter_5__2;

/// @brief Field <ditherMap>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ditherMap_5__3, put=__cordl_internal_set__ditherMap_5__3)) ::System::Object*  _ditherMap_5__3;

/// @brief Field <i>5__4, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__4, put=__cordl_internal_set__i_5__4)) int32_t  _i_5__4;

/// @brief Field <j>5__12, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__j_5__12, put=__cordl_internal_set__j_5__12)) int32_t  _j_5__12;

/// @brief Field <pref>5__5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pref_5__5, put=__cordl_internal_set__pref_5__5)) ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*  _pref_5__5;

/// @brief Field <px>5__9, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__px_5__9, put=__cordl_internal_set__px_5__9)) float_t  _px_5__9;

/// @brief Field <pz>5__10, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__pz_5__10, put=__cordl_internal_set__pz_5__10)) float_t  _pz_5__10;

/// @brief Field <subSize>5__6, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__subSize_5__6, put=__cordl_internal_set__subSize_5__6)) float_t  _subSize_5__6;

/// @brief Field <sx>5__7, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sx_5__7, put=__cordl_internal_set__sx_5__7)) int32_t  _sx_5__7;

/// @brief Field <sz>5__8, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__sz_5__8, put=__cordl_internal_set__sz_5__8)) int32_t  _sz_5__8;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef39c4, size 0x880, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ef4244, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ef424c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ef4284, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef39c0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__count_5__11() const;

constexpr int32_t& __cordl_internal_get__count_5__11() ;

constexpr int32_t const& __cordl_internal_get__counter_5__2() const;

constexpr int32_t& __cordl_internal_get__counter_5__2() ;

constexpr ::System::Object* const& __cordl_internal_get__ditherMap_5__3() const;

constexpr ::System::Object*& __cordl_internal_get__ditherMap_5__3() ;

constexpr int32_t const& __cordl_internal_get__i_5__4() const;

constexpr int32_t& __cordl_internal_get__i_5__4() ;

constexpr int32_t const& __cordl_internal_get__j_5__12() const;

constexpr int32_t& __cordl_internal_get__j_5__12() ;

constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab* const& __cordl_internal_get__pref_5__5() const;

constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*& __cordl_internal_get__pref_5__5() ;

constexpr float_t const& __cordl_internal_get__px_5__9() const;

constexpr float_t& __cordl_internal_get__px_5__9() ;

constexpr float_t const& __cordl_internal_get__pz_5__10() const;

constexpr float_t& __cordl_internal_get__pz_5__10() ;

constexpr float_t const& __cordl_internal_get__subSize_5__6() const;

constexpr float_t& __cordl_internal_get__subSize_5__6() ;

constexpr int32_t const& __cordl_internal_get__sx_5__7() const;

constexpr int32_t& __cordl_internal_get__sx_5__7() ;

constexpr int32_t const& __cordl_internal_get__sz_5__8() const;

constexpr int32_t& __cordl_internal_get__sz_5__8() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::Examples::ProceduralWorld_ProceduralTile*  value) ;

constexpr void __cordl_internal_set__count_5__11(int32_t  value) ;

constexpr void __cordl_internal_set__counter_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__ditherMap_5__3(::System::Object*  value) ;

constexpr void __cordl_internal_set__i_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__j_5__12(int32_t  value) ;

constexpr void __cordl_internal_set__pref_5__5(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*  value) ;

constexpr void __cordl_internal_set__px_5__9(float_t  value) ;

constexpr void __cordl_internal_set__pz_5__10(float_t  value) ;

constexpr void __cordl_internal_set__subSize_5__6(float_t  value) ;

constexpr void __cordl_internal_set__sx_5__7(int32_t  value) ;

constexpr void __cordl_internal_set__sz_5__8(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef36c0, size 0x28, virtual false, abstract: false, final false
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
constexpr ProceduralTile_ProceduralWorld__InternalGenerate_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralTile_ProceduralWorld__InternalGenerate_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralTile_ProceduralWorld__InternalGenerate_d__16(ProceduralTile_ProceduralWorld__InternalGenerate_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralTile_ProceduralWorld__InternalGenerate_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralTile_ProceduralWorld__InternalGenerate_d__16(ProceduralTile_ProceduralWorld__InternalGenerate_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21524};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Examples::ProceduralWorld_ProceduralTile*  _____4__this;

/// @brief Field <counter>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____counter_5__2;

/// @brief Field <ditherMap>5__3, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ____ditherMap_5__3;

/// @brief Field <i>5__4, offset: 0x38, size: 0x4, def value: None
 int32_t  ____i_5__4;

/// @brief Field <pref>5__5, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*  ____pref_5__5;

/// @brief Field <subSize>5__6, offset: 0x48, size: 0x4, def value: None
 float_t  ____subSize_5__6;

/// @brief Field <sx>5__7, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____sx_5__7;

/// @brief Field <sz>5__8, offset: 0x50, size: 0x4, def value: None
 int32_t  ____sz_5__8;

/// @brief Field <px>5__9, offset: 0x54, size: 0x4, def value: None
 float_t  ____px_5__9;

/// @brief Field <pz>5__10, offset: 0x58, size: 0x4, def value: None
 float_t  ____pz_5__10;

/// @brief Field <count>5__11, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____count_5__11;

/// @brief Field <j>5__12, offset: 0x60, size: 0x4, def value: None
 int32_t  ____j_5__12;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____counter_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____ditherMap_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____i_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____pref_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____subSize_5__6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____sx_5__7) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____sz_5__8) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____px_5__9) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____pz_5__10) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____count_5__11) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16, ____j_5__12) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16) == 0x68, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ProceduralWorld/ProceduralTile/<Generate>d__11
class CORDL_TYPE ProceduralTile_ProceduralWorld__Generate_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::Examples::ProceduralWorld_ProceduralTile*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef36ec, size 0x28c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ef3978, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ef3980, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ef39b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef36e8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::Examples::ProceduralWorld_ProceduralTile*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef3414, size 0x28, virtual false, abstract: false, final false
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
constexpr ProceduralTile_ProceduralWorld__Generate_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralTile_ProceduralWorld__Generate_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralTile_ProceduralWorld__Generate_d__11(ProceduralTile_ProceduralWorld__Generate_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralTile_ProceduralWorld__Generate_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralTile_ProceduralWorld__Generate_d__11(ProceduralTile_ProceduralWorld__Generate_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21523};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Examples::ProceduralWorld_ProceduralTile*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// Dependencies Pathfinding.Examples.ProceduralWorld::RotationRandomness, System.Object, UnityEngine.Vector2
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ProceduralWorld/ProceduralPrefab
class CORDL_TYPE ProceduralWorld_ProceduralPrefab : public ::System::Object {
public:
// Declarations
/// @brief Field density, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_density, put=__cordl_internal_set_density)) float_t  density;

/// @brief Field perlin, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlin, put=__cordl_internal_set_perlin)) float_t  perlin;

/// @brief Field perlinOffset, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get_perlinOffset, put=__cordl_internal_set_perlinOffset)) ::UnityEngine::Vector2  perlinOffset;

/// @brief Field perlinPower, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinPower, put=__cordl_internal_set_perlinPower)) float_t  perlinPower;

/// @brief Field perlinScale, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_perlinScale, put=__cordl_internal_set_perlinScale)) float_t  perlinScale;

/// @brief Field prefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field random, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) float_t  random;

/// @brief Field randomRotation, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomRotation, put=__cordl_internal_set_randomRotation)) ::GlobalNamespace::ProceduralWorld_RotationRandomness  randomRotation;

/// @brief Field singleFixed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_singleFixed, put=__cordl_internal_set_singleFixed)) bool  singleFixed;

static inline ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab* New_ctor() ;

constexpr float_t const& __cordl_internal_get_density() const;

constexpr float_t& __cordl_internal_get_density() ;

constexpr float_t const& __cordl_internal_get_perlin() const;

constexpr float_t& __cordl_internal_get_perlin() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_perlinOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_perlinOffset() ;

constexpr float_t const& __cordl_internal_get_perlinPower() const;

constexpr float_t& __cordl_internal_get_perlinPower() ;

constexpr float_t const& __cordl_internal_get_perlinScale() const;

constexpr float_t& __cordl_internal_get_perlinScale() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr float_t const& __cordl_internal_get_random() const;

constexpr float_t& __cordl_internal_get_random() ;

constexpr ::GlobalNamespace::ProceduralWorld_RotationRandomness const& __cordl_internal_get_randomRotation() const;

constexpr ::GlobalNamespace::ProceduralWorld_RotationRandomness& __cordl_internal_get_randomRotation() ;

constexpr bool const& __cordl_internal_get_singleFixed() const;

constexpr bool& __cordl_internal_get_singleFixed() ;

constexpr void __cordl_internal_set_density(float_t  value) ;

constexpr void __cordl_internal_set_perlin(float_t  value) ;

constexpr void __cordl_internal_set_perlinOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_perlinPower(float_t  value) ;

constexpr void __cordl_internal_set_perlinScale(float_t  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_random(float_t  value) ;

constexpr void __cordl_internal_set_randomRotation(::GlobalNamespace::ProceduralWorld_RotationRandomness  value) ;

constexpr void __cordl_internal_set_singleFixed(bool  value) ;

/// @brief Method .ctor, addr 0x5ef339c, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralWorld_ProceduralPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralWorld_ProceduralPrefab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralWorld_ProceduralPrefab(ProceduralWorld_ProceduralPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralWorld_ProceduralPrefab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralWorld_ProceduralPrefab(ProceduralWorld_ProceduralPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21522};

/// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field density, offset: 0x18, size: 0x4, def value: None
 float_t  ___density;

/// @brief Field perlin, offset: 0x1c, size: 0x4, def value: None
 float_t  ___perlin;

/// @brief Field perlinPower, offset: 0x20, size: 0x4, def value: None
 float_t  ___perlinPower;

/// @brief Field perlinOffset, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___perlinOffset;

/// @brief Field perlinScale, offset: 0x2c, size: 0x4, def value: None
 float_t  ___perlinScale;

/// @brief Field random, offset: 0x30, size: 0x4, def value: None
 float_t  ___random;

/// @brief Field randomRotation, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::ProceduralWorld_RotationRandomness  ___randomRotation;

/// @brief Field singleFixed, offset: 0x38, size: 0x1, def value: None
 bool  ___singleFixed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___density) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___perlin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___perlinPower) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___perlinOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___perlinScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___random) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___randomRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab, ___singleFixed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Examples
