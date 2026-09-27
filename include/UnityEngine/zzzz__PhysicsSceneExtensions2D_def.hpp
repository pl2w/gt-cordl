#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsSceneExtensions2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PhysicsSceneExtensions2D)
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
// Forward declare root types
namespace UnityEngine {
class PhysicsSceneExtensions2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::PhysicsSceneExtensions2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicsSceneExtensions2D*, "UnityEngine", "PhysicsSceneExtensions2D");
// [Extension]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PhysicsSceneExtensions2D
class CORDL_TYPE PhysicsSceneExtensions2D : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetPhysicsScene2D, addr 0xb67b184, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene2D GetPhysicsScene2D(::UnityEngine::SceneManagement::Scene  scene) ;

/// [StaticAccessor("GetPhysicsManager2D()", (UnityEngine.Bindings.StaticAccessorType)1)]
/// [NativeMethod("GetPhysicsSceneFromUnityScene")]
/// @brief Method GetPhysicsScene_Internal, addr 0xb67b27c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene2D GetPhysicsScene_Internal(::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method GetPhysicsScene_Internal_Injected, addr 0xb67b2c4, size 0x44, virtual false, abstract: false, final false
static inline void GetPhysicsScene_Internal_Injected(::by_ref<::UnityEngine::SceneManagement::Scene>  scene, ::by_ref<::UnityEngine::PhysicsScene2D>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsSceneExtensions2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsSceneExtensions2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsSceneExtensions2D(PhysicsSceneExtensions2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsSceneExtensions2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsSceneExtensions2D(PhysicsSceneExtensions2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PhysicsSceneExtensions2D) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
