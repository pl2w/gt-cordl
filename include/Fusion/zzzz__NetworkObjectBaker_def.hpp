#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectBaker)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
class NetworkObjectBaker_TransformPathCache;
}
namespace Fusion {
class NetworkObjectBaker___c;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class SimulationBehaviour;
}
namespace GlobalNamespace {
struct NetworkObjectBaker_Result;
}
namespace GlobalNamespace {
struct NetworkObjectBaker_TransformPath;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Fusion {
class NetworkObjectBaker;
}
namespace Fusion {
class NetworkObjectBaker_TransformPathCache;
}
namespace Fusion {
class NetworkObjectBaker___c;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectBaker*);
MARK_REF_T(::Fusion::NetworkObjectBaker_TransformPathCache*);
MARK_REF_T(::Fusion::NetworkObjectBaker___c*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectBaker*, "Fusion", "NetworkObjectBaker");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectBaker_TransformPathCache*, "Fusion", "NetworkObjectBaker/TransformPathCache");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectBaker___c*, "Fusion", "NetworkObjectBaker/<>c");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectBaker
class CORDL_TYPE NetworkObjectBaker : public ::System::Object {
public:
// Declarations
using TransformPathCache = ::Fusion::NetworkObjectBaker_TransformPathCache;

using __c = ::Fusion::NetworkObjectBaker___c;

using Result = ::GlobalNamespace::NetworkObjectBaker_Result;

using TransformPath = ::GlobalNamespace::NetworkObjectBaker_TransformPath;

/// @brief Field _allNetworkObjects, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__allNetworkObjects, put=__cordl_internal_set__allNetworkObjects)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  _allNetworkObjects;

/// @brief Field _allSimulationBehaviours, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__allSimulationBehaviours, put=__cordl_internal_set__allSimulationBehaviours)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  _allSimulationBehaviours;

/// @brief Field _arrayBufferNB, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrayBufferNB, put=__cordl_internal_set__arrayBufferNB)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkBehaviour>>*  _arrayBufferNB;

/// @brief Field _arrayBufferNO, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrayBufferNO, put=__cordl_internal_set__arrayBufferNO)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  _arrayBufferNO;

/// @brief Field _networkObjectsPaths, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkObjectsPaths, put=__cordl_internal_set__networkObjectsPaths)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*  _networkObjectsPaths;

/// @brief Field _pathCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pathCache, put=__cordl_internal_set__pathCache)) ::Fusion::NetworkObjectBaker_TransformPathCache*  _pathCache;

/// @brief Method Bake, addr 0x60e3990, size 0x1164, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkObjectBaker_Result Bake(::UnityEngine::GameObject*  root) ;

/// @brief Method GetSortKey, addr 0x60e3860, size 0x8, virtual true, abstract: false, final false
inline uint32_t GetSortKey(::Fusion::NetworkObject*  obj) ;

static inline ::Fusion::NetworkObjectBaker* New_ctor() ;

/// @brief Method PostprocessBehaviour, addr 0x60e3868, size 0x8, virtual true, abstract: false, final false
inline bool PostprocessBehaviour(::Fusion::SimulationBehaviour*  behaviour) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool Set(::UnityEngine::MonoBehaviour*  host, ::by_ref<::ArrayW<T>>  field, ::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool Set(::UnityEngine::MonoBehaviour*  host, ::by_ref<T>  field, T  value) ;

/// @brief Method SetDirty, addr 0x60e3850, size 0x4, virtual true, abstract: false, final false
inline void SetDirty(::UnityEngine::MonoBehaviour*  obj) ;

/// [Conditional("FUSION_EDITOR_TRACE")]
/// @brief Method Trace, addr 0x60e3870, size 0x8c, virtual false, abstract: false, final false
static inline void Trace(::StringW  msg) ;

/// @brief Method TryGetExecutionOrder, addr 0x60e3854, size 0xc, virtual true, abstract: false, final false
inline bool TryGetExecutionOrder(::UnityEngine::MonoBehaviour*  obj, ::by_ref<int32_t>  order) ;

/// @brief Method Warn, addr 0x60e38fc, size 0x94, virtual false, abstract: false, final false
static inline void Warn(::StringW  msg, ::UnityEngine::Object*  context) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& __cordl_internal_get__allNetworkObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& __cordl_internal_get__allNetworkObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>* const& __cordl_internal_get__allSimulationBehaviours() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*& __cordl_internal_get__allSimulationBehaviours() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkBehaviour>>* const& __cordl_internal_get__arrayBufferNB() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkBehaviour>>*& __cordl_internal_get__arrayBufferNB() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>* const& __cordl_internal_get__arrayBufferNO() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*& __cordl_internal_get__arrayBufferNO() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>* const& __cordl_internal_get__networkObjectsPaths() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*& __cordl_internal_get__networkObjectsPaths() ;

constexpr ::Fusion::NetworkObjectBaker_TransformPathCache* const& __cordl_internal_get__pathCache() const;

constexpr ::Fusion::NetworkObjectBaker_TransformPathCache*& __cordl_internal_get__pathCache() ;

constexpr void __cordl_internal_set__allNetworkObjects(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value) ;

constexpr void __cordl_internal_set__allSimulationBehaviours(::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  value) ;

constexpr void __cordl_internal_set__arrayBufferNB(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkBehaviour>>*  value) ;

constexpr void __cordl_internal_set__arrayBufferNO(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  value) ;

constexpr void __cordl_internal_set__networkObjectsPaths(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*  value) ;

constexpr void __cordl_internal_set__pathCache(::Fusion::NetworkObjectBaker_TransformPathCache*  value) ;

/// @brief Method .ctor, addr 0x60e50c8, size 0x1dc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectBaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectBaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectBaker(NetworkObjectBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectBaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectBaker(NetworkObjectBaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23445};

/// @brief Field _allNetworkObjects, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  ____allNetworkObjects;

/// @brief Field _networkObjectsPaths, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*  ____networkObjectsPaths;

/// @brief Field _allSimulationBehaviours, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::SimulationBehaviour>>*  ____allSimulationBehaviours;

/// @brief Field _pathCache, offset: 0x28, size: 0x8, def value: None
 ::Fusion::NetworkObjectBaker_TransformPathCache*  ____pathCache;

/// @brief Field _arrayBufferNB, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkBehaviour>>*  ____arrayBufferNB;

/// @brief Field _arrayBufferNO, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkObject>>*  ____arrayBufferNO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectBaker, ____allNetworkObjects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectBaker, ____networkObjectsPaths) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectBaker, ____allSimulationBehaviours) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectBaker, ____pathCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectBaker, ____arrayBufferNB) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectBaker, ____arrayBufferNO) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectBaker) == 0x40, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectBaker/<>c
class CORDL_TYPE NetworkObjectBaker___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::NetworkObjectBaker___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Predicate_1<::UnityW<::Fusion::NetworkObject>>*  __9__13_0;

/// @brief Field <>9__13_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_1, put=setStaticF___9__13_1)) ::System::Predicate_1<::UnityW<::Fusion::SimulationBehaviour>>*  __9__13_1;

static inline ::Fusion::NetworkObjectBaker___c* New_ctor() ;

/// @brief Method <Bake>b__13_0, addr 0x60e5a24, size 0x5c, virtual false, abstract: false, final false
inline bool _Bake_b__13_0(::Fusion::NetworkObject*  x) ;

/// @brief Method <Bake>b__13_1, addr 0x60e5a80, size 0x5c, virtual false, abstract: false, final false
inline bool _Bake_b__13_1(::Fusion::SimulationBehaviour*  x) ;

/// @brief Method .ctor, addr 0x60e5a1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkObjectBaker___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::Fusion::NetworkObject>>* getStaticF___9__13_0() ;

static inline ::System::Predicate_1<::UnityW<::Fusion::SimulationBehaviour>>* getStaticF___9__13_1() ;

static inline void setStaticF___9(::Fusion::NetworkObjectBaker___c*  value) ;

static inline void setStaticF___9__13_0(::System::Predicate_1<::UnityW<::Fusion::NetworkObject>>*  value) ;

static inline void setStaticF___9__13_1(::System::Predicate_1<::UnityW<::Fusion::SimulationBehaviour>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectBaker___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectBaker___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectBaker___c(NetworkObjectBaker___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectBaker___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectBaker___c(NetworkObjectBaker___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectBaker___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectBaker/TransformPathCache
class CORDL_TYPE NetworkObjectBaker_TransformPathCache : public ::System::Object {
public:
// Declarations
/// @brief Field _cache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cache, put=__cordl_internal_set__cache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::GlobalNamespace::NetworkObjectBaker_TransformPath>*  _cache;

/// @brief Field _nexts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nexts, put=__cordl_internal_set__nexts)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*  _nexts;

/// @brief Field _siblingIndexStack, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__siblingIndexStack, put=__cordl_internal_set__siblingIndexStack)) ::System::Collections::Generic::List_1<uint16_t>*  _siblingIndexStack;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*() noexcept;

/// @brief Method Clear, addr 0x60e548c, size 0x94, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Compare, addr 0x60e5058, size 0x40, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::NetworkObjectBaker_TransformPath  x, ::GlobalNamespace::NetworkObjectBaker_TransformPath  y) ;

/// @brief Method CompareToDepthUnchecked, addr 0x60e5550, size 0x164, virtual false, abstract: false, final false
inline int32_t CompareToDepthUnchecked(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  y, int32_t  depth) ;

/// @brief Method Create, addr 0x60e4b00, size 0x3d4, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkObjectBaker_TransformPath Create(::UnityEngine::Transform*  transform) ;

/// @brief Method Dump, addr 0x60e57c8, size 0x84, virtual false, abstract: false, final false
inline ::StringW Dump(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x) ;

/// @brief Method Dump, addr 0x60e584c, size 0x168, virtual false, abstract: false, final false
inline void Dump(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x, ::System::Text::StringBuilder*  builder) ;

/// @brief Method Equals, addr 0x60e5520, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::NetworkObjectBaker_TransformPath  x, ::GlobalNamespace::NetworkObjectBaker_TransformPath  y) ;

/// @brief Method GetHashCode, addr 0x60e56b4, size 0x8, virtual true, abstract: false, final true
inline int32_t GetHashCode(::GlobalNamespace::NetworkObjectBaker_TransformPath  obj) ;

/// @brief Method GetHashCode, addr 0x60e56bc, size 0x10c, virtual false, abstract: false, final false
inline int32_t GetHashCode(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  path, int32_t  hash) ;

/// @brief Method IsAncestorOf, addr 0x60e5098, size 0x30, virtual false, abstract: false, final false
inline bool IsAncestorOf(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  y) ;

/// @brief Method IsEqualOrAncestorOf, addr 0x60e5028, size 0x30, virtual false, abstract: false, final false
inline bool IsEqualOrAncestorOf(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  x, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkObjectBaker_TransformPath>  y) ;

static inline ::Fusion::NetworkObjectBaker_TransformPathCache* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::GlobalNamespace::NetworkObjectBaker_TransformPath>* const& __cordl_internal_get__cache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::GlobalNamespace::NetworkObjectBaker_TransformPath>*& __cordl_internal_get__cache() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>* const& __cordl_internal_get__nexts() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*& __cordl_internal_get__nexts() ;

constexpr ::System::Collections::Generic::List_1<uint16_t>* const& __cordl_internal_get__siblingIndexStack() const;

constexpr ::System::Collections::Generic::List_1<uint16_t>*& __cordl_internal_get__siblingIndexStack() ;

constexpr void __cordl_internal_set__cache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::GlobalNamespace::NetworkObjectBaker_TransformPath>*  value) ;

constexpr void __cordl_internal_set__nexts(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*  value) ;

constexpr void __cordl_internal_set__siblingIndexStack(::System::Collections::Generic::List_1<uint16_t>*  value) ;

/// @brief Method .ctor, addr 0x60e52a4, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__NetworkObjectBaker_TransformPath_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>* i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace__NetworkObjectBaker_TransformPath_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectBaker_TransformPathCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectBaker_TransformPathCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectBaker_TransformPathCache(NetworkObjectBaker_TransformPathCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectBaker_TransformPathCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectBaker_TransformPathCache(NetworkObjectBaker_TransformPathCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23443};

/// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::GlobalNamespace::NetworkObjectBaker_TransformPath>*  ____cache;

/// @brief Field _siblingIndexStack, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint16_t>*  ____siblingIndexStack;

/// @brief Field _nexts, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkObjectBaker_TransformPath>*  ____nexts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectBaker_TransformPathCache, ____cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectBaker_TransformPathCache, ____siblingIndexStack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectBaker_TransformPathCache, ____nexts) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectBaker_TransformPathCache) == 0x28, "Size mismatch!");

} // namespace end def Fusion
