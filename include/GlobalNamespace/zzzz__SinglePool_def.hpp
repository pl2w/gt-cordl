#pragma once
// IWYU pragma private; include "GlobalNamespace/SinglePool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SinglePool)
namespace GlobalNamespace {
class IGorillaSimpleBackgroundWorker;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SinglePool;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SinglePool*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SinglePool*, "", "SinglePool");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SinglePool
class CORDL_TYPE SinglePool : public ::System::Object {
public:
// Declarations
/// @brief Field activePool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_activePool, put=__cordl_internal_set_activePool)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  activePool;

/// @brief Field amountAllocatedToPool, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_amountAllocatedToPool, put=__cordl_internal_set_amountAllocatedToPool)) int32_t  amountAllocatedToPool;

/// @brief Field gameObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field inactivePool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inactivePool, put=__cordl_internal_set_inactivePool)) ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  inactivePool;

/// @brief Field initAmountToPool, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_initAmountToPool, put=__cordl_internal_set_initAmountToPool)) int32_t  initAmountToPool;

/// @brief Field objectToPool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectToPool, put=__cordl_internal_set_objectToPool)) ::UnityW<::UnityEngine::GameObject>  objectToPool;

/// @brief Field pooledObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pooledObjects, put=__cordl_internal_set_pooledObjects)) ::System::Collections::Generic::HashSet_1<int32_t>*  pooledObjects;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr operator  ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept;

/// @brief Method Destroy, addr 0x5b0b8d4, size 0x10c, virtual false, abstract: false, final false
inline void Destroy(::UnityEngine::GameObject*  obj) ;

/// @brief Method GetActiveCount, addr 0x5b0ba30, size 0x50, virtual false, abstract: false, final false
inline int32_t GetActiveCount() ;

/// @brief Method GetInactiveCount, addr 0x5b0ba80, size 0x48, virtual false, abstract: false, final false
inline int32_t GetInactiveCount() ;

/// @brief Method GetTotalCount, addr 0x5b0b9e8, size 0x48, virtual false, abstract: false, final false
inline int32_t GetTotalCount() ;

/// @brief Method Initialize, addr 0x5b0b5f4, size 0x180, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::GameObject*  gameObject_) ;

/// @brief Method Instantiate, addr 0x5b0b774, size 0x160, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(bool  setActive) ;

static inline ::GlobalNamespace::SinglePool* New_ctor() ;

/// @brief Method PoolGUID, addr 0x5b0b9e0, size 0x8, virtual false, abstract: false, final false
inline int32_t PoolGUID() ;

/// @brief Method PrivAllocPooledObjects, addr 0x5b0b56c, size 0x88, virtual false, abstract: false, final false
inline void PrivAllocPooledObjects() ;

/// @brief Method SimpleWork, addr 0x5b0b378, size 0x1f4, virtual true, abstract: false, final true
inline void SimpleWork() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_activePool() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_activePool() ;

constexpr int32_t const& __cordl_internal_get_amountAllocatedToPool() const;

constexpr int32_t& __cordl_internal_get_amountAllocatedToPool() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_inactivePool() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_inactivePool() ;

constexpr int32_t const& __cordl_internal_get_initAmountToPool() const;

constexpr int32_t& __cordl_internal_get_initAmountToPool() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_objectToPool() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_objectToPool() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_pooledObjects() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_pooledObjects() ;

constexpr void __cordl_internal_set_activePool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_amountAllocatedToPool(int32_t  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_inactivePool(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_initAmountToPool(int32_t  value) ;

constexpr void __cordl_internal_set_objectToPool(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_pooledObjects(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5b0bac8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SinglePool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SinglePool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SinglePool(SinglePool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SinglePool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SinglePool(SinglePool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3520};

/// @brief Field objectToPool, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___objectToPool;

/// @brief Field initAmountToPool, offset: 0x18, size: 0x4, def value: None
 int32_t  ___initAmountToPool;

/// @brief Field pooledObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___pooledObjects;

/// @brief Field inactivePool, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  ___inactivePool;

/// @brief Field activePool, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  ___activePool;

/// @brief Field gameObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// @brief Field amountAllocatedToPool, offset: 0x40, size: 0x4, def value: None
 int32_t  ___amountAllocatedToPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SinglePool, ___objectToPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePool, ___initAmountToPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePool, ___pooledObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePool, ___inactivePool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePool, ___activePool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePool, ___gameObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePool, ___amountAllocatedToPool) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SinglePool) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
