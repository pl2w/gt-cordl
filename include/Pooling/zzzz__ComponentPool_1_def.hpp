#pragma once
// IWYU pragma private; include "Pooling/ComponentPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentPool_1)
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
class Transform;
}
// Forward declare root types
namespace Pooling {
template<typename T>
class ComponentPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pooling::ComponentPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pooling::ComponentPool_1, "Pooling", "ComponentPool`1");
// Dependencies System.Object
namespace Pooling {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pooling.ComponentPool`1<T>
class CORDL_TYPE ComponentPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field poolDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_poolDict, put=setStaticF_poolDict)) ::System::Collections::Generic::Dictionary_2<T,::UnityEngine::Pool::IObjectPool_1<T>*>*  poolDict;

/// @brief Method ChildToPoolRoot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void ChildToPoolRoot(::UnityEngine::Transform*  transform) ;

/// @brief Method CreatePool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::IObjectPool_1<T>* CreatePool(T  prefab, bool  collectionChecks, int32_t  defaultCapacity, int32_t  maxPoolSize) ;

/// @brief Method DestroyPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void DestroyPool(T  prefab) ;

/// @brief Method GetOrCreatePool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::IObjectPool_1<T>* GetOrCreatePool(T  prefab) ;

/// @brief Method GetPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::IObjectPool_1<T>* GetPool(T  prefab) ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnDestroy(T  instance) ;

/// @brief Method OnGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnGet(T  instance) ;

/// @brief Method OnRelease, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnRelease(T  instance) ;

/// @brief Method OnSceneManagerSceneUnload, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnSceneManagerSceneUnload(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method OnSceneWillChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnSceneWillChange() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Release(T  prefab, T  instance) ;

static inline ::System::Collections::Generic::Dictionary_2<T,::UnityEngine::Pool::IObjectPool_1<T>*>* getStaticF_poolDict() ;

static inline void setStaticF_poolDict(::System::Collections::Generic::Dictionary_2<T,::UnityEngine::Pool::IObjectPool_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentPool_1(ComponentPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentPool_1(ComponentPool_1 const& ) = delete;

/// @brief Field PoolRoot value: Null
static ::UnityW<::UnityEngine::Transform> const PoolRoot;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3862};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pooling
