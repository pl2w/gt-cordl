#pragma once
// IWYU pragma private; include "Pooling/PoolableExts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pooling/zzzz__IPoolable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(PoolableExts)
namespace System {
template<typename T>
class Action_1;
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
class PoolableExts;
}
// Write type traits
MARK_REF_T(::Pooling::PoolableExts*);
DEFINE_IL2CPP_CLASS(::Pooling::PoolableExts*, "Pooling", "PoolableExts");
// [Extension]
// Dependencies Pooling.IPoolable`1<T>, System.Object, UnityEngine.Component
namespace Pooling {
// Is value type: false
// CS Name: Pooling.PoolableExts
class CORDL_TYPE PoolableExts : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
static inline T CreateInstance(T  prefab) ;

/// [Extension]
/// @brief Method DestroyPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
static inline void DestroyPool(T  prefab) ;

/// [Extension]
/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
static inline T Get(T  prefab) ;

/// [Extension]
/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
static inline T Get(T  prefab, ::UnityEngine::Transform*  parent) ;

/// [Extension]
/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
static inline T Get(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::System::Action_1<T>*  beforeEnable) ;

/// [Extension]
/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
static inline T Get(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, ::System::Action_1<T>*  beforeEnable) ;

/// [Extension]
/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
static inline void Release(T  poolable) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolableExts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolableExts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolableExts(PoolableExts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolableExts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolableExts(PoolableExts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3868};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pooling::PoolableExts) == 0x10, "Size mismatch!");

} // namespace end def Pooling
