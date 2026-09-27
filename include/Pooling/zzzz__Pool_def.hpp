#pragma once
// IWYU pragma private; include "Pooling/Pool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pool)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
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
namespace Pooling {
class Pool;
}
// Write type traits
MARK_REF_T(::Pooling::Pool*);
DEFINE_IL2CPP_CLASS(::Pooling::Pool*, "Pooling", "Pool");
// [Extension]
// Dependencies System.Object
namespace Pooling {
// Is value type: false
// CS Name: Pooling.Pool
class CORDL_TYPE Pool : public ::System::Object {
public:
// Declarations
/// @brief Field poolDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_poolDict, put=setStaticF_poolDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>*  poolDict;

/// @brief Method ChildToPoolRoot, addr 0x5b6fee8, size 0x98, virtual false, abstract: false, final false
static inline void ChildToPoolRoot(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method CreateInstance, addr 0x5b6ff80, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateInstance(::UnityEngine::GameObject*  prefab) ;

/// @brief Method CreatePool, addr 0x5b6fb84, size 0x204, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* CreatePool(::UnityEngine::GameObject*  prefab, bool  collectionChecks, int32_t  defaultCapacity, int32_t  maxPoolSize) ;

/// @brief Method DestroyPool, addr 0x5b6fa68, size 0x11c, virtual false, abstract: false, final false
static inline void DestroyPool(::UnityEngine::GameObject*  prefab) ;

/// [Extension]
/// @brief Method Get, addr 0x5b70060, size 0x100, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Get(::UnityEngine::GameObject*  prefab) ;

/// [Extension]
/// @brief Method Get, addr 0x5b702d4, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Get(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent) ;

/// [Extension]
/// @brief Method Get, addr 0x5b70160, size 0x174, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Get(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [Extension]
/// @brief Method Get, addr 0x5b703a8, size 0x1a8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Get(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method GetOrCreatePool, addr 0x5b6fd88, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* GetOrCreatePool(::UnityEngine::GameObject*  prefab) ;

/// @brief Method GetPool, addr 0x5b6fe50, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>* GetPool(::UnityEngine::GameObject*  prefab) ;

/// [Extension]
/// @brief Method GetUninstantiated, addr 0x5b70550, size 0x100, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> GetUninstantiated(::UnityEngine::GameObject*  prefab) ;

/// [Extension]
/// @brief Method GetUninstantiated, addr 0x5b707a4, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> GetUninstantiated(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent) ;

/// [Extension]
/// @brief Method GetUninstantiated, addr 0x5b70650, size 0x154, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> GetUninstantiated(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [Extension]
/// @brief Method GetUninstantiated, addr 0x5b70878, size 0x188, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> GetUninstantiated(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method OnDestroy, addr 0x5b70c54, size 0x74, virtual false, abstract: false, final false
static inline void OnDestroy(::UnityEngine::GameObject*  instance) ;

/// @brief Method OnGet, addr 0x5b70b8c, size 0x4, virtual false, abstract: false, final false
static inline void OnGet(::UnityEngine::GameObject*  instance) ;

/// @brief Method OnRelease, addr 0x5b70b90, size 0xc4, virtual false, abstract: false, final false
static inline void OnRelease(::UnityEngine::GameObject*  instance) ;

/// @brief Method OnSceneChange, addr 0x5b6f970, size 0xf8, virtual false, abstract: false, final false
static inline void OnSceneChange() ;

/// @brief Method OnSceneManagerSceneUnload, addr 0x5b6f924, size 0x4c, virtual false, abstract: false, final false
static inline void OnSceneManagerSceneUnload(::UnityEngine::SceneManagement::Scene  scene) ;

/// [Extension]
/// @brief Method Release, addr 0x5b70a00, size 0x18c, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  instance) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>* getStaticF_poolDict() ;

static inline void setStaticF_poolDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::Pool::IObjectPool_1<::UnityW<::UnityEngine::GameObject>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Pool(Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pool(Pool const& ) = delete;

/// @brief Field PoolRoot value: Null
static ::UnityW<::UnityEngine::Transform> const PoolRoot;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3861};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pooling::Pool) == 0x10, "Size mismatch!");

} // namespace end def Pooling
