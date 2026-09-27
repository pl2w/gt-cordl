#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSconce.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRSconce_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSconce)
namespace GlobalNamespace {
struct GRSconce_State;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GameLight;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GRSconce;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSconce*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSconce*, "", "GRSconce");
// Dependencies GRSconce::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSconce
class CORDL_TYPE GRSconce : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GRSconce_State;

/// @brief Field audioSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field gameLight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameLight, put=__cordl_internal_set_gameLight)) ::UnityW<::GlobalNamespace::GameLight>  gameLight;

/// @brief Field lightOnSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightOnSound, put=__cordl_internal_set_lightOnSound)) ::UnityW<::UnityEngine::AudioClip>  lightOnSound;

/// @brief Field lightOnSoundVolume, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightOnSoundVolume, put=__cordl_internal_set_lightOnSoundVolume)) float_t  lightOnSoundVolume;

/// @brief Field meshRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field offMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_offMaterial, put=__cordl_internal_set_offMaterial)) ::UnityW<::UnityEngine::Material>  offMaterial;

/// @brief Field onMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaterial, put=__cordl_internal_set_onMaterial)) ::UnityW<::UnityEngine::Material>  onMaterial;

/// @brief Field state, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRSconce_State  state;

/// @brief Field tool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Method Awake, addr 0x58aa310, size 0x15c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsAuthority, addr 0x58aa4b0, size 0x18, virtual false, abstract: false, final false
inline bool IsAuthority() ;

static inline ::GlobalNamespace::GRSconce* New_ctor() ;

/// @brief Method OnEnergyChange, addr 0x58aa5bc, size 0x64, virtual false, abstract: false, final false
inline void OnEnergyChange(::GlobalNamespace::GRTool*  tool, int32_t  energy, ::GlobalNamespace::GameEntityId  chargingEntityId) ;

/// @brief Method OnStateChange, addr 0x58aa620, size 0x48, virtual false, abstract: false, final false
inline void OnStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method SetState, addr 0x58aa4c8, size 0x78, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRSconce_State  newState) ;

/// @brief Method StartLight, addr 0x58aa540, size 0x7c, virtual false, abstract: false, final false
inline void StartLight() ;

/// @brief Method StopLight, addr 0x58aa46c, size 0x44, virtual false, abstract: false, final false
inline void StopLight() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::GlobalNamespace::GameLight> const& __cordl_internal_get_gameLight() const;

constexpr ::UnityW<::GlobalNamespace::GameLight>& __cordl_internal_get_gameLight() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_lightOnSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_lightOnSound() ;

constexpr float_t const& __cordl_internal_get_lightOnSoundVolume() const;

constexpr float_t& __cordl_internal_get_lightOnSoundVolume() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_offMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_offMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_onMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_onMaterial() ;

constexpr ::GlobalNamespace::GRSconce_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRSconce_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_gameLight(::UnityW<::GlobalNamespace::GameLight>  value) ;

constexpr void __cordl_internal_set_lightOnSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_lightOnSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRSconce_State  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

/// @brief Method .ctor, addr 0x58aa668, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSconce() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSconce", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSconce(GRSconce && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSconce", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSconce(GRSconce const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2024};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field gameLight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLight>  ___gameLight;

/// @brief Field tool, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field meshRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field offMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___offMaterial;

/// @brief Field onMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___onMaterial;

/// @brief Field audioSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field lightOnSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___lightOnSound;

/// @brief Field lightOnSoundVolume, offset: 0x60, size: 0x4, def value: None
 float_t  ___lightOnSoundVolume;

/// @brief Field state, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::GRSconce_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSconce, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___gameLight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___tool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___meshRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___offMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___onMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___audioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___lightOnSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___lightOnSoundVolume) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSconce, ___state) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSconce) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
