#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ObjectPool`1_PooledObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ObjectPool`1_PooledObject)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct ObjectPool_1_PooledObject;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ObjectPool_1_PooledObject);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ObjectPool_1_PooledObject, "UnityEngine.Rendering", "ObjectPool`1/PooledObject");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.ObjectPool`1/PooledObject<T>
struct CORDL_TYPE ObjectPool_1_PooledObject {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  value, ::UnityEngine::Rendering::ObjectPool_1<T>*  pool) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_1_PooledObject() ;

// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Pool", ty: "::UnityEngine::Rendering::ObjectPool_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr ObjectPool_1_PooledObject(T  m_ToReturn, ::UnityEngine::Rendering::ObjectPool_1<T>*  m_Pool) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ToReturn, offset: 0x0, size: 0x8, def value: None
 T  m_ToReturn;

/// @brief Field m_Pool, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::ObjectPool_1<T>*  m_Pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
