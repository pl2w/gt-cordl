#pragma once
// IWYU pragma private; include "Pooling/ComponentPoolExts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(ComponentPoolExts)
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
class ComponentPoolExts;
}
// Write type traits
MARK_REF_T(::Pooling::ComponentPoolExts*);
DEFINE_IL2CPP_CLASS(::Pooling::ComponentPoolExts*, "Pooling", "ComponentPoolExts");
// [Extension]
// Dependencies System.Object, UnityEngine.Component
namespace Pooling {
// Is value type: false
// CS Name: Pooling.ComponentPoolExts
class CORDL_TYPE ComponentPoolExts : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CreateComponentInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T CreateComponentInstance(T  prefab) ;

/// [Extension]
/// @brief Method GetInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetInstance(T  prefab) ;

/// [Extension]
/// @brief Method GetInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetInstance(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [Extension]
/// @brief Method GetUninstantiated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetUninstantiated(T  prefab, ::UnityEngine::Transform*  parent) ;

/// [Extension]
/// @brief Method GetUninstantiated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetUninstantiated(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [Extension]
/// @brief Method GetUninstantiated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetUninstantiated(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// [Extension]
/// @brief Method ReleaseInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void ReleaseInstance(T  prefab, T  instance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentPoolExts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentPoolExts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentPoolExts(ComponentPoolExts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentPoolExts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentPoolExts(ComponentPoolExts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pooling::ComponentPoolExts) == 0x10, "Size mismatch!");

} // namespace end def Pooling
