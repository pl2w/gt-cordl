#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemExtensionsImpl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemExtensionsImpl)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
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
class ParticleSystemExtensionsImpl;
}
// Write type traits
MARK_REF_T(::UnityEngine::ParticleSystemExtensionsImpl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemExtensionsImpl*, "UnityEngine", "ParticleSystemExtensionsImpl");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystemExtensionsImpl
class CORDL_TYPE ParticleSystemExtensionsImpl : public ::System::Object {
public:
// Declarations
/// [FreeFunction(Name = "ParticleSystemScriptBindings::GetCollisionEvents")]
/// @brief Method GetCollisionEvents, addr 0xb671f20, size 0x2bc, virtual false, abstract: false, final false
static inline int32_t GetCollisionEvents(/* [NotNull] */ ::UnityEngine::ParticleSystem*  ps, /* [NotNull] */ ::UnityEngine::GameObject*  go, /* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  collisionEvents) ;

/// @brief Method GetCollisionEvents_Injected, addr 0xb67709c, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetCollisionEvents_Injected(::System::IntPtr  ps, ::System::IntPtr  go, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  collisionEvents) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemExtensionsImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemExtensionsImpl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemExtensionsImpl(ParticleSystemExtensionsImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemExtensionsImpl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemExtensionsImpl(ParticleSystemExtensionsImpl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ParticleSystemExtensionsImpl) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
