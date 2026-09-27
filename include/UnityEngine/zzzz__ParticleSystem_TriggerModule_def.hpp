#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_TriggerModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_TriggerModule)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_TriggerModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_TriggerModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_TriggerModule, "UnityEngine", "ParticleSystem/TriggerModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/TriggerModule
struct CORDL_TYPE ParticleSystem_TriggerModule {
public:
// Declarations
/// [NativeThrows]
/// @brief Method SetCollider, addr 0xb670540, size 0x94, virtual false, abstract: false, final false
inline void SetCollider(int32_t  index, ::UnityEngine::Component*  collider) ;

/// @brief Method SetCollider_Injected, addr 0xb6705d4, size 0x54, virtual false, abstract: false, final false
static inline void SetCollider_Injected(::by_ref<::GlobalNamespace::ParticleSystem_TriggerModule>  _unity_self, int32_t  index, ::System::IntPtr  collider) ;

/// @brief Method .ctor, addr 0xb66e6d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_TriggerModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_TriggerModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30795};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_TriggerModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_TriggerModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
