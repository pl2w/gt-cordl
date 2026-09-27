#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersPool)
namespace GlobalNamespace {
class CrittersPool_CrittersPoolSettings;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersPool;
}
namespace GlobalNamespace {
class CrittersPool_CrittersPoolSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersPool*);
MARK_REF_T(::GlobalNamespace::CrittersPool_CrittersPoolSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersPool*, "", "CrittersPool");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersPool_CrittersPoolSettings*, "", "CrittersPool/CrittersPoolSettings");
// Dependencies CrittersPool::CrittersPoolSettings, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersPool
class CORDL_TYPE CrittersPool : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CrittersPoolSettings = ::GlobalNamespace::CrittersPool_CrittersPoolSettings;

/// @brief Field eventEffects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventEffects, put=__cordl_internal_set_eventEffects)) ::ArrayW<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>  eventEffects;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::CrittersPool>  instance;

/// @brief Field poolParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_poolParent, put=__cordl_internal_set_poolParent)) ::UnityW<::UnityEngine::Transform>  poolParent;

/// @brief Field pools, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pools, put=__cordl_internal_set_pools)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  pools;

/// @brief Method Awake, addr 0x56f3110, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetInstance, addr 0x56f2e50, size 0x214, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetInstance(::UnityEngine::GameObject*  prefab) ;

/// @brief Method GetPooled, addr 0x56f2df0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> GetPooled(::UnityEngine::GameObject*  prefab) ;

static inline ::GlobalNamespace::CrittersPool* New_ctor() ;

/// @brief Method Return, addr 0x56f3064, size 0x60, virtual false, abstract: false, final false
static inline void Return(::UnityEngine::GameObject*  pooledGO) ;

/// @brief Method ReturnInstance, addr 0x56f30c4, size 0x4c, virtual false, abstract: false, final false
inline void ReturnInstance(::UnityEngine::GameObject*  instance) ;

/// @brief Method SetupPools, addr 0x56f31e4, size 0x3d0, virtual false, abstract: false, final false
inline void SetupPools() ;

constexpr ::ArrayW<::GlobalNamespace::CrittersPool_CrittersPoolSettings*> const& __cordl_internal_get_eventEffects() const;

constexpr ::ArrayW<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>& __cordl_internal_get_eventEffects() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poolParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poolParent() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* const& __cordl_internal_get_pools() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*& __cordl_internal_get_pools() ;

constexpr void __cordl_internal_set_eventEffects(::ArrayW<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>  value) ;

constexpr void __cordl_internal_set_poolParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pools(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value) ;

/// @brief Method .ctor, addr 0x56f35b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::CrittersPool> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::CrittersPool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersPool(CrittersPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersPool(CrittersPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{118};

/// @brief Field eventEffects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>  ___eventEffects;

/// @brief Field pools, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  ___pools;

/// @brief Field poolParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poolParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersPool, ___eventEffects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPool, ___pools) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPool, ___poolParent) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersPool) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersPool/CrittersPoolSettings
class CORDL_TYPE CrittersPool_CrittersPoolSettings : public ::System::Object {
public:
// Declarations
/// @brief Field poolObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_poolObject, put=__cordl_internal_set_poolObject)) ::UnityW<::UnityEngine::GameObject>  poolObject;

/// @brief Field poolSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_poolSize, put=__cordl_internal_set_poolSize)) int32_t  poolSize;

static inline ::GlobalNamespace::CrittersPool_CrittersPoolSettings* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_poolObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_poolObject() ;

constexpr int32_t const& __cordl_internal_get_poolSize() const;

constexpr int32_t& __cordl_internal_get_poolSize() ;

constexpr void __cordl_internal_set_poolObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_poolSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x56f35bc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersPool_CrittersPoolSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersPool_CrittersPoolSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersPool_CrittersPoolSettings(CrittersPool_CrittersPoolSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersPool_CrittersPoolSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersPool_CrittersPoolSettings(CrittersPool_CrittersPoolSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{117};

/// @brief Field poolObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___poolObject;

/// @brief Field poolSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___poolSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersPool_CrittersPoolSettings, ___poolObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPool_CrittersPoolSettings, ___poolSize) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersPool_CrittersPoolSettings) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
