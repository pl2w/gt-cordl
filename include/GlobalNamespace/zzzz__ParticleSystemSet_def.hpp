#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemSet)
namespace GlobalNamespace {
struct ParticleSystemSet__FadePlayBackSpeed_d__12;
}
namespace GlobalNamespace {
struct ParticleSystemSet__FadeScaleXZ_d__20;
}
namespace GlobalNamespace {
struct ParticleSystem_MainModule;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemSet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParticleSystemSet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystemSet*, "", "ParticleSystemSet");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.ParticleSystem::MainModule, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemSet
class CORDL_TYPE ParticleSystemSet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FadePlayBackSpeed_d__12 = ::GlobalNamespace::ParticleSystemSet__FadePlayBackSpeed_d__12;

using _FadeScaleXZ_d__20 = ::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20;

/// @brief Field ActiveDuringEmission, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveDuringEmission, put=__cordl_internal_set_ActiveDuringEmission)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ActiveDuringEmission;

/// @brief Field fadeRate, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeRate, put=__cordl_internal_set_fadeRate)) float_t  fadeRate;

/// @brief Field localScale, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_localScale, put=__cordl_internal_set_localScale)) ::UnityEngine::Vector3  localScale;

/// @brief Field loop, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_loop, put=__cordl_internal_set_loop)) bool  loop;

/// @brief Field ps, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ps, put=__cordl_internal_set_ps)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ps;

/// @brief Field psEmits, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_psEmits, put=__cordl_internal_set_psEmits)) ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  psEmits;

/// @brief Field psMains, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_psMains, put=__cordl_internal_set_psMains)) ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  psMains;

/// @brief Field skipForSimulationSpeed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_skipForSimulationSpeed, put=__cordl_internal_set_skipForSimulationSpeed)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  skipForSimulationSpeed;

/// @brief Field skipSet, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_skipSet, put=__cordl_internal_set_skipSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ParticleSystem_MainModule>*  skipSet;

/// @brief Method Awake, addr 0x570e130, size 0x3c4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x570ec54, size 0x60, virtual false, abstract: false, final false
inline void Clear() ;

/// [AsyncStateMachine(typeof(ParticleSystemSet::<FadePlayBackSpeed>d__12))]
/// @brief Method FadePlayBackSpeed, addr 0x570e5d4, size 0xb8, virtual false, abstract: false, final false
inline void FadePlayBackSpeed(float_t  target) ;

/// [AsyncStateMachine(typeof(ParticleSystemSet::<FadeScaleXZ>d__20))]
/// @brief Method FadeScaleXZ, addr 0x570ecf4, size 0xb8, virtual false, abstract: false, final false
inline void FadeScaleXZ(float_t  scaler) ;

static inline ::GlobalNamespace::ParticleSystemSet* New_ctor() ;

/// @brief Method Pause, addr 0x570ea70, size 0x60, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method SetColor, addr 0x570e68c, size 0x1d8, virtual false, abstract: false, final false
inline void SetColor(::StringW  RRGGBB) ;

/// @brief Method SetColors, addr 0x570e864, size 0x20c, virtual false, abstract: false, final false
inline void SetColors(::StringW  RRGGBBRRGGBB) ;

/// @brief Method SetFadeRate, addr 0x570e5c4, size 0x10, virtual false, abstract: false, final false
inline void SetFadeRate(float_t  rate) ;

/// @brief Method SetPlayBackSpeed, addr 0x570e4f4, size 0xd0, virtual false, abstract: false, final false
inline void SetPlayBackSpeed(float_t  target) ;

/// @brief Method SetScaleXZ, addr 0x570ecb4, size 0x40, virtual false, abstract: false, final false
inline void SetScaleXZ(float_t  scaler) ;

/// @brief Method StartEmission, addr 0x570ead0, size 0xdc, virtual false, abstract: false, final false
inline void StartEmission() ;

/// @brief Method StopEmission, addr 0x570ebac, size 0xa8, virtual false, abstract: false, final false
inline void StopEmission() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_ActiveDuringEmission() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_ActiveDuringEmission() ;

constexpr float_t const& __cordl_internal_get_fadeRate() const;

constexpr float_t& __cordl_internal_get_fadeRate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localScale() ;

constexpr bool const& __cordl_internal_get_loop() const;

constexpr bool& __cordl_internal_get_loop() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_ps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_ps() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& __cordl_internal_get_psEmits() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& __cordl_internal_get_psEmits() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule> const& __cordl_internal_get_psMains() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>& __cordl_internal_get_psMains() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_skipForSimulationSpeed() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_skipForSimulationSpeed() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ParticleSystem_MainModule>* const& __cordl_internal_get_skipSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ParticleSystem_MainModule>*& __cordl_internal_get_skipSet() ;

constexpr void __cordl_internal_set_ActiveDuringEmission(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_fadeRate(float_t  value) ;

constexpr void __cordl_internal_set_localScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_loop(bool  value) ;

constexpr void __cordl_internal_set_ps(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_psEmits(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value) ;

constexpr void __cordl_internal_set_psMains(::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  value) ;

constexpr void __cordl_internal_set_skipForSimulationSpeed(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_skipSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ParticleSystem_MainModule>*  value) ;

/// @brief Method .ctor, addr 0x570edac, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemSet(ParticleSystemSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemSet(ParticleSystemSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1171};

/// [SerializeField]
/// @brief Field ActiveDuringEmission, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___ActiveDuringEmission;

/// @brief Field localScale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localScale;

/// @brief Field ps, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___ps;

/// @brief Field psMains, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  ___psMains;

/// @brief Field skipForSimulationSpeed, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___skipForSimulationSpeed;

/// @brief Field skipSet, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ParticleSystem_MainModule>*  ___skipSet;

/// @brief Field psEmits, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  ___psEmits;

/// @brief Field loop, offset: 0x60, size: 0x1, def value: None
 bool  ___loop;

/// @brief Field fadeRate, offset: 0x64, size: 0x4, def value: None
 float_t  ___fadeRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___ActiveDuringEmission) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___localScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___ps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___psMains) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___skipForSimulationSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___skipSet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___psEmits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___loop) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet, ___fadeRate) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystemSet) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
