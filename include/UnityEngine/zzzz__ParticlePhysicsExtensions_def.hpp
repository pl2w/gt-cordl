#pragma once
// IWYU pragma private; include "UnityEngine/ParticlePhysicsExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticlePhysicsExtensions)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct ParticleCollisionEvent;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace UnityEngine {
class ParticlePhysicsExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::ParticlePhysicsExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticlePhysicsExtensions*, "UnityEngine", "ParticlePhysicsExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticlePhysicsExtensions
class CORDL_TYPE ParticlePhysicsExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetCollisionEvents, addr 0xb671f1c, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetCollisionEvents(::UnityEngine::ParticleSystem*  ps, ::UnityEngine::GameObject*  go, ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  collisionEvents) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticlePhysicsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticlePhysicsExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticlePhysicsExtensions(ParticlePhysicsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticlePhysicsExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticlePhysicsExtensions(ParticlePhysicsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ParticlePhysicsExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
