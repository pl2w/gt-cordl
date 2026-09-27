#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectPools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObjectPools_DelayedSpawnData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPools)
namespace GlobalNamespace {
class DelayedDestroyPooledObj;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GlobalNamespace {
struct ObjectPools_DelayedSpawnData;
}
namespace GlobalNamespace {
class ObjectPools_DelayedSpawnListener;
}
namespace GlobalNamespace {
class ObjectPools___c__DisplayClass22_0;
}
namespace GlobalNamespace {
class SinglePool;
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
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectPools;
}
namespace GlobalNamespace {
class ObjectPools_DelayedSpawnListener;
}
namespace GlobalNamespace {
class ObjectPools___c__DisplayClass22_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObjectPools*);
MARK_REF_T(::GlobalNamespace::ObjectPools_DelayedSpawnListener*);
MARK_REF_T(::GlobalNamespace::ObjectPools___c__DisplayClass22_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectPools*, "", "ObjectPools");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectPools_DelayedSpawnListener*, "", "ObjectPools/DelayedSpawnListener");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectPools___c__DisplayClass22_0*, "", "ObjectPools/<>c__DisplayClass22_0");
// Dependencies ObjectPools::DelayedSpawnData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectPools
class CORDL_TYPE ObjectPools : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DelayedSpawnData = ::GlobalNamespace::ObjectPools_DelayedSpawnData;

using DelayedSpawnListener = ::GlobalNamespace::ObjectPools_DelayedSpawnListener;

using __c__DisplayClass22_0 = ::GlobalNamespace::ObjectPools___c__DisplayClass22_0;

/// @brief Field _delayedData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__delayedData, put=setStaticF__delayedData)) ::ArrayW<::GlobalNamespace::ObjectPools_DelayedSpawnData>  _delayedData;

/// @brief Field _delayedFreeHead, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__delayedFreeHead, put=setStaticF__delayedFreeHead)) int32_t  _delayedFreeHead;

/// @brief Field _delayedFreeNext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__delayedFreeNext, put=setStaticF__delayedFreeNext)) ::ArrayW<int32_t>  _delayedFreeNext;

/// @brief Field _delayedHighWater, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__delayedHighWater, put=setStaticF__delayedHighWater)) int32_t  _delayedHighWater;

/// @brief Field _delayedListener, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__delayedListener, put=setStaticF__delayedListener)) ::GlobalNamespace::ObjectPools_DelayedSpawnListener*  _delayedListener;

/// @brief Field <initialized>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized_k__BackingField, put=__cordl_internal_set__initialized_k__BackingField)) bool  _initialized_k__BackingField;

 __declspec(property(get=get_initialized, put=set_initialized)) bool  initialized;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ObjectPools>  instance;

/// @brief Field lookUp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookUp, put=__cordl_internal_set_lookUp)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SinglePool*>*  lookUp;

/// @brief Field pools, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pools, put=__cordl_internal_set_pools)) ::System::Collections::Generic::List_1<::GlobalNamespace::SinglePool*>*  pools;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method Awake, addr 0x5b0bae8, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildValidationCheck, addr 0x5b0c3c8, size 0x430, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method CancelDelayedInstantiate, addr 0x5b0cca4, size 0xa0, virtual false, abstract: false, final false
static inline void CancelDelayedInstantiate(int32_t  idx) ;

/// @brief Method Destroy, addr 0x5b07af4, size 0x3c, virtual false, abstract: false, final false
inline void Destroy(::UnityEngine::GameObject*  obj) ;

/// @brief Method DoesPoolExist, addr 0x5b0bfd0, size 0x58, virtual false, abstract: false, final false
inline bool DoesPoolExist(int32_t  hash) ;

/// @brief Method DoesPoolExist, addr 0x5b0bfb0, size 0x20, virtual false, abstract: false, final false
inline bool DoesPoolExist(::UnityEngine::GameObject*  obj) ;

/// @brief Method GetPoolByHash, addr 0x5b0c028, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::SinglePool* GetPoolByHash(int32_t  hash) ;

/// @brief Method GetPoolByObjectType, addr 0x5b0c080, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::SinglePool* GetPoolByObjectType(::UnityEngine::GameObject*  obj) ;

/// @brief Method InitializePools, addr 0x5b0bb54, size 0x45c, virtual false, abstract: false, final false
inline void InitializePools() ;

/// @brief Method Instantiate, addr 0x5b0c158, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(int32_t  hash, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  setActive) ;

/// @brief Method Instantiate, addr 0x5b0c0fc, size 0x5c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(int32_t  hash, ::UnityEngine::Vector3  position, bool  setActive) ;

/// @brief Method Instantiate, addr 0x5b0c0dc, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(int32_t  hash, bool  setActive) ;

/// @brief Method Instantiate, addr 0x5b0c2cc, size 0xfc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject*  obj, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  scale, bool  setActive) ;

/// @brief Method Instantiate, addr 0x5b0c240, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject*  obj, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  setActive) ;

/// @brief Method Instantiate, addr 0x5b0c1e4, size 0x5c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject*  obj, ::UnityEngine::Vector3  position, bool  setActive) ;

/// @brief Method Instantiate, addr 0x5b0c0a0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject*  obj, bool  setActive) ;

/// @brief Method InstantiateDelayed, addr 0x5b0c800, size 0x88, virtual false, abstract: false, final false
static inline int32_t InstantiateDelayed(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  pos, float_t  delay) ;

/// @brief Method InstantiateDelayed, addr 0x5b0c888, size 0x29c, virtual false, abstract: false, final false
static inline int32_t InstantiateDelayed(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  xform, ::UnityEngine::Vector3  localPos, float_t  delay) ;

static inline ::GlobalNamespace::ObjectPools* New_ctor() ;

/// @brief Method Start, addr 0x5b0bb50, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateDelayedInstantiate, addr 0x5b0cbe4, size 0xc0, virtual false, abstract: false, final false
static inline void UpdateDelayedInstantiate(int32_t  idx, ::UnityEngine::Vector3  localPos) ;

/// @brief Method UpdateDelayedInstantiate, addr 0x5b0cb24, size 0xc0, virtual false, abstract: false, final false
static inline void UpdateDelayedInstantiate(int32_t  idx, ::UnityEngine::Transform*  xform) ;

/// @brief Method UpdateDelayedInstantiate, addr 0x5b0cd44, size 0xdc, virtual false, abstract: false, final false
static inline void UpdateDelayedInstantiate(int32_t  idx, ::UnityEngine::Transform*  xform, ::UnityEngine::Vector3  localPos) ;

constexpr bool const& __cordl_internal_get__initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__initialized_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SinglePool*>* const& __cordl_internal_get_lookUp() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SinglePool*>*& __cordl_internal_get_lookUp() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SinglePool*>* const& __cordl_internal_get_pools() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SinglePool*>*& __cordl_internal_get_pools() ;

constexpr void __cordl_internal_set__initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_lookUp(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SinglePool*>*  value) ;

constexpr void __cordl_internal_set_pools(::System::Collections::Generic::List_1<::GlobalNamespace::SinglePool*>*  value) ;

/// @brief Method .ctor, addr 0x5b0ce20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::GlobalNamespace::ObjectPools_DelayedSpawnData> getStaticF__delayedData() ;

static inline int32_t getStaticF__delayedFreeHead() ;

static inline ::ArrayW<int32_t> getStaticF__delayedFreeNext() ;

static inline int32_t getStaticF__delayedHighWater() ;

static inline ::GlobalNamespace::ObjectPools_DelayedSpawnListener* getStaticF__delayedListener() ;

static inline ::UnityW<::GlobalNamespace::ObjectPools> getStaticF_instance() ;

/// [CompilerGenerated]
/// @brief Method get_initialized, addr 0x5b0bad8, size 0x8, virtual false, abstract: false, final false
inline bool get_initialized() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

static inline void setStaticF__delayedData(::ArrayW<::GlobalNamespace::ObjectPools_DelayedSpawnData>  value) ;

static inline void setStaticF__delayedFreeHead(int32_t  value) ;

static inline void setStaticF__delayedFreeNext(::ArrayW<int32_t>  value) ;

static inline void setStaticF__delayedHighWater(int32_t  value) ;

static inline void setStaticF__delayedListener(::GlobalNamespace::ObjectPools_DelayedSpawnListener*  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ObjectPools>  value) ;

/// [CompilerGenerated]
/// @brief Method set_initialized, addr 0x5b0bae0, size 0x8, virtual false, abstract: false, final false
inline void set_initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPools", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPools(ObjectPools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPools", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPools(ObjectPools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3524};

/// @brief Field k_delayedInitialCount offset 0xffffffff size 0x4
static constexpr int32_t  k_delayedInitialCount{static_cast<int32_t>(0x10)};

/// [CompilerGenerated]
/// @brief Field <initialized>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____initialized_k__BackingField;

/// [SerializeField]
/// @brief Field pools, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SinglePool*>*  ___pools;

/// @brief Field lookUp, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SinglePool*>*  ___lookUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectPools, ____initialized_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectPools, ___pools) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectPools, ___lookUp) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectPools) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectPools/<>c__DisplayClass22_0
class CORDL_TYPE ObjectPools___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field pool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::GlobalNamespace::SinglePool*  pool;

static inline ::GlobalNamespace::ObjectPools___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <BuildValidationCheck>b__0, addr 0x5b0d138, size 0xec, virtual false, abstract: false, final false
inline ::StringW _BuildValidationCheck_b__0(::GlobalNamespace::DelayedDestroyPooledObj*  c) ;

constexpr ::GlobalNamespace::SinglePool* const& __cordl_internal_get_pool() const;

constexpr ::GlobalNamespace::SinglePool*& __cordl_internal_get_pool() ;

constexpr void __cordl_internal_set_pool(::GlobalNamespace::SinglePool*  value) ;

/// @brief Method .ctor, addr 0x5b0c7f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPools___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPools___c__DisplayClass22_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPools___c__DisplayClass22_0(ObjectPools___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPools___c__DisplayClass22_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPools___c__DisplayClass22_0(ObjectPools___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3523};

/// @brief Field pool, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::SinglePool*  ___pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectPools___c__DisplayClass22_0, ___pool) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectPools___c__DisplayClass22_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectPools/DelayedSpawnListener
class CORDL_TYPE ObjectPools_DelayedSpawnListener : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

static inline ::GlobalNamespace::ObjectPools_DelayedSpawnListener* New_ctor() ;

/// @brief Method OnDelayedAction, addr 0x5b0cf48, size 0x1f0, virtual true, abstract: false, final true
inline void OnDelayedAction(int32_t  contextId) ;

/// @brief Method .ctor, addr 0x5b0cf40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPools_DelayedSpawnListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPools_DelayedSpawnListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPools_DelayedSpawnListener(ObjectPools_DelayedSpawnListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPools_DelayedSpawnListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPools_DelayedSpawnListener(ObjectPools_DelayedSpawnListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3522};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ObjectPools_DelayedSpawnListener) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
