#pragma once
// IWYU pragma private; include "GlobalNamespace/PeriodicNoiseGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PeriodicNoiseGenerator)
namespace GlobalNamespace {
class CrittersLoudNoise;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class PeriodicNoiseGenerator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeriodicNoiseGenerator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeriodicNoiseGenerator*, "", "PeriodicNoiseGenerator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeriodicNoiseGenerator
class CORDL_TYPE PeriodicNoiseGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lastTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTime, put=__cordl_internal_set_lastTime)) float_t  lastTime;

/// @brief Field mR, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mR, put=__cordl_internal_set_mR)) ::UnityW<::UnityEngine::MeshRenderer>  mR;

/// @brief Field noiseActor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_noiseActor, put=__cordl_internal_set_noiseActor)) ::UnityW<::GlobalNamespace::CrittersLoudNoise>  noiseActor;

/// @brief Field randomDuration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomDuration, put=__cordl_internal_set_randomDuration)) float_t  randomDuration;

/// @brief Field sleepDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepDuration, put=__cordl_internal_set_sleepDuration)) float_t  sleepDuration;

/// @brief Field solid, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_solid, put=__cordl_internal_set_solid)) ::UnityW<::UnityEngine::Material>  solid;

/// @brief Field transparent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transparent, put=__cordl_internal_set_transparent)) ::UnityW<::UnityEngine::Material>  transparent;

/// @brief Method Awake, addr 0x56fcc90, size 0x9c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeriodicNoiseGenerator* New_ctor() ;

/// @brief Method Update, addr 0x56fcd2c, size 0x168, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_lastTime() const;

constexpr float_t& __cordl_internal_get_lastTime() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_mR() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_mR() ;

constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise> const& __cordl_internal_get_noiseActor() const;

constexpr ::UnityW<::GlobalNamespace::CrittersLoudNoise>& __cordl_internal_get_noiseActor() ;

constexpr float_t const& __cordl_internal_get_randomDuration() const;

constexpr float_t& __cordl_internal_get_randomDuration() ;

constexpr float_t const& __cordl_internal_get_sleepDuration() const;

constexpr float_t& __cordl_internal_get_sleepDuration() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_solid() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_solid() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_transparent() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_transparent() ;

constexpr void __cordl_internal_set_lastTime(float_t  value) ;

constexpr void __cordl_internal_set_mR(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_noiseActor(::UnityW<::GlobalNamespace::CrittersLoudNoise>  value) ;

constexpr void __cordl_internal_set_randomDuration(float_t  value) ;

constexpr void __cordl_internal_set_sleepDuration(float_t  value) ;

constexpr void __cordl_internal_set_solid(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_transparent(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x56fce94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeriodicNoiseGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeriodicNoiseGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PeriodicNoiseGenerator(PeriodicNoiseGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeriodicNoiseGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeriodicNoiseGenerator(PeriodicNoiseGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{143};

/// @brief Field sleepDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___sleepDuration;

/// @brief Field randomDuration, offset: 0x24, size: 0x4, def value: None
 float_t  ___randomDuration;

/// @brief Field lastTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___lastTime;

/// @brief Field noiseActor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersLoudNoise>  ___noiseActor;

/// @brief Field transparent, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___transparent;

/// @brief Field solid, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___solid;

/// @brief Field mR, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___mR;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeriodicNoiseGenerator, ___sleepDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicNoiseGenerator, ___randomDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicNoiseGenerator, ___lastTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicNoiseGenerator, ___noiseActor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicNoiseGenerator, ___transparent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicNoiseGenerator, ___solid) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeriodicNoiseGenerator, ___mR) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeriodicNoiseGenerator) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
