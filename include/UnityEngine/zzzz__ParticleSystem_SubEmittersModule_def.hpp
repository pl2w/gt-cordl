#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_SubEmittersModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_SubEmittersModule)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_SubEmittersModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_SubEmittersModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_SubEmittersModule, "UnityEngine", "ParticleSystem/SubEmittersModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/SubEmittersModule
struct CORDL_TYPE ParticleSystem_SubEmittersModule {
public:
// Declarations
 __declspec(property(get=get_subEmittersCount)) int32_t  subEmittersCount;

/// [NativeThrows]
/// @brief Method GetSubEmitterSystem, addr 0xb670664, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ParticleSystem> GetSubEmitterSystem(int32_t  index) ;

/// @brief Method GetSubEmitterSystem_Injected, addr 0xb6706e0, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSubEmitterSystem_Injected(::by_ref<::GlobalNamespace::ParticleSystem_SubEmittersModule>  _unity_self, int32_t  index) ;

/// @brief Method .ctor, addr 0xb66e6f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_subEmittersCount, addr 0xb670628, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_subEmittersCount() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_SubEmittersModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_SubEmittersModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_SubEmittersModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_SubEmittersModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
