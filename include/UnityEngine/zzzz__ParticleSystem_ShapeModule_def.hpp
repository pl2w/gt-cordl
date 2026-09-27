#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_ShapeModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_ShapeModule)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct ParticleSystemShapeType;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_ShapeModule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_ShapeModule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/ShapeModule
struct CORDL_TYPE ParticleSystem_ShapeModule {
public:
// Declarations
 __declspec(property(get=get_meshRenderer, put=set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

 __declspec(property(put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_radius, put=set_radius)) float_t  radius;

 __declspec(property(put=set_randomPositionAmount)) float_t  randomPositionAmount;

 __declspec(property(get=get_scale, put=set_scale)) ::UnityEngine::Vector3  scale;

 __declspec(property(put=set_shapeType)) ::UnityEngine::ParticleSystemShapeType  shapeType;

 __declspec(property(put=set_skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedMeshRenderer;

/// @brief Method .ctor, addr 0xb66e4b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_meshRenderer, addr 0xb670128, size 0x6c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshRenderer> get_meshRenderer() ;

/// @brief Method get_meshRenderer_Injected, addr 0xb670194, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_meshRenderer_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ShapeModule>  _unity_self) ;

/// @brief Method get_radius, addr 0xb6700a0, size 0x3c, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method get_scale, addr 0xb670408, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_scale() ;

/// @brief Method get_scale_Injected, addr 0xb670464, size 0x44, virtual false, abstract: false, final false
static inline void get_scale_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ShapeModule>  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// [NativeThrows]
/// @brief Method set_meshRenderer, addr 0xb6701d0, size 0x8c, virtual false, abstract: false, final false
inline void set_meshRenderer(::UnityEngine::MeshRenderer*  value) ;

/// @brief Method set_meshRenderer_Injected, addr 0xb67025c, size 0x44, virtual false, abstract: false, final false
static inline void set_meshRenderer_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ShapeModule>  _unity_self, ::System::IntPtr  value) ;

/// [NativeThrows]
/// @brief Method set_position, addr 0xb670370, size 0x54, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_position_Injected, addr 0xb6703c4, size 0x44, virtual false, abstract: false, final false
static inline void set_position_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ShapeModule>  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// [NativeThrows]
/// @brief Method set_radius, addr 0xb6700dc, size 0x4c, virtual false, abstract: false, final false
inline void set_radius(float_t  value) ;

/// [NativeThrows]
/// @brief Method set_randomPositionAmount, addr 0xb670054, size 0x4c, virtual false, abstract: false, final false
inline void set_randomPositionAmount(float_t  value) ;

/// [NativeThrows]
/// @brief Method set_scale, addr 0xb6704a8, size 0x54, virtual false, abstract: false, final false
inline void set_scale(::UnityEngine::Vector3  value) ;

/// @brief Method set_scale_Injected, addr 0xb6704fc, size 0x44, virtual false, abstract: false, final false
static inline void set_scale_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ShapeModule>  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// [NativeThrows]
/// @brief Method set_shapeType, addr 0xb670010, size 0x44, virtual false, abstract: false, final false
inline void set_shapeType(::UnityEngine::ParticleSystemShapeType  value) ;

/// [NativeThrows]
/// @brief Method set_skinnedMeshRenderer, addr 0xb6702a0, size 0x8c, virtual false, abstract: false, final false
inline void set_skinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  value) ;

/// @brief Method set_skinnedMeshRenderer_Injected, addr 0xb67032c, size 0x44, virtual false, abstract: false, final false
static inline void set_skinnedMeshRenderer_Injected(::by_ref<::GlobalNamespace::ParticleSystem_ShapeModule>  _unity_self, ::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_ShapeModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_ShapeModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_ShapeModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_ShapeModule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
