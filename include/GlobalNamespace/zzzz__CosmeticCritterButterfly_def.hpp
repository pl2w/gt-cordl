#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterButterfly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmitParams_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticCritterButterfly)
namespace GlobalNamespace {
struct ParticleSystem_EmitParams;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterButterfly;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterButterfly*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterButterfly*, "", "CosmeticCritterButterfly");
// Dependencies CosmeticCritter, UnityEngine.ParticleSystem::EmitParams, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterButterfly
class CORDL_TYPE CosmeticCritterButterfly : public ::GlobalNamespace::CosmeticCritter {
public:
// Declarations
 __declspec(property(get=get_GetEmitParams)) ::GlobalNamespace::ParticleSystem_EmitParams  GetEmitParams;

/// @brief Field direction, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::UnityEngine::Vector3  direction;

/// @brief Field emitParams, offset 0x70, size 0x90 
 __declspec(property(get=__cordl_internal_get_emitParams, put=__cordl_internal_set_emitParams)) ::GlobalNamespace::ParticleSystem_EmitParams  emitParams;

/// @brief Field particleSystem, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystem, put=__cordl_internal_set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystem;

/// @brief Field speed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field startPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPosition, put=__cordl_internal_set_startPosition)) ::UnityEngine::Vector3  startPosition;

static inline ::GlobalNamespace::CosmeticCritterButterfly* New_ctor() ;

/// @brief Method SetRandomVariables, addr 0x57f18f4, size 0x98, virtual true, abstract: false, final false
inline void SetRandomVariables() ;

/// @brief Method SetStartPos, addr 0x57f18e8, size 0xc, virtual false, abstract: false, final false
inline void SetStartPos(::UnityEngine::Vector3  initialPos) ;

/// @brief Method Tick, addr 0x57f198c, size 0x78, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction() ;

constexpr ::GlobalNamespace::ParticleSystem_EmitParams const& __cordl_internal_get_emitParams() const;

constexpr ::GlobalNamespace::ParticleSystem_EmitParams& __cordl_internal_get_emitParams() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPosition() ;

constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_emitParams(::GlobalNamespace::ParticleSystem_EmitParams  value) ;

constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_startPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x57f1a04, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GetEmitParams, addr 0x57f18d8, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_EmitParams get_GetEmitParams() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterButterfly() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterButterfly", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterButterfly(CosmeticCritterButterfly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterButterfly", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterButterfly(CosmeticCritterButterfly const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{192};

/// [Tooltip("The speed this Butterfly will move at.")]
/// [SerializeField]
/// @brief Field speed, offset: 0x48, size: 0x4, def value: None
 float_t  ___speed;

/// [Tooltip("Emit one particle from this particle system when spawning.")]
/// [SerializeField]
/// @brief Field particleSystem, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystem;

/// @brief Field startPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPosition;

/// @brief Field direction, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___direction;

/// @brief Field emitParams, offset: 0x70, size: 0x90, def value: None
 ::GlobalNamespace::ParticleSystem_EmitParams  ___emitParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterButterfly, ___speed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterButterfly, ___particleSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterButterfly, ___startPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterButterfly, ___direction) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterButterfly, ___emitParams) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterButterfly) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
