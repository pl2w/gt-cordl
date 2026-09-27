#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeCandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RubberDuck_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeCandle)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeCandle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeCandle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeCandle*, "", "MonkeCandle");
// Dependencies RubberDuck, UnityEngine.ParticleSystem::Particle, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeCandle
class CORDL_TYPE MonkeCandle : public ::GlobalNamespace::RubberDuck {
public:
// Declarations
/// @brief Field currentParticles, offset 0x3d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentParticles, put=__cordl_internal_set_currentParticles)) ::System::Collections::Generic::List_1<uint32_t>*  currentParticles;

/// @brief Field fxExplodeAudio, offset 0x3c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxExplodeAudio, put=__cordl_internal_set_fxExplodeAudio)) ::UnityW<::UnityEngine::AudioSource>  fxExplodeAudio;

/// @brief Field fxParticleArray, offset 0x3b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxParticleArray, put=__cordl_internal_set_fxParticleArray)) ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  fxParticleArray;

/// @brief Field movingFxAudio, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_movingFxAudio, put=__cordl_internal_set_movingFxAudio)) ::UnityW<::UnityEngine::AudioSource>  movingFxAudio;

/// @brief Field outPosition, offset 0x3e0, size 0xc 
 __declspec(property(get=__cordl_internal_get_outPosition, put=__cordl_internal_set_outPosition)) ::UnityEngine::Vector3  outPosition;

/// @brief Field particleInfoDict, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleInfoDict, put=__cordl_internal_set_particleInfoDict)) ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*  particleInfoDict;

static inline ::GlobalNamespace::MonkeCandle* New_ctor() ;

/// @brief Method Start, addr 0x57929d0, size 0x9c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TriggeredLateUpdate, addr 0x5792a6c, size 0x5b4, virtual true, abstract: false, final false
inline void TriggeredLateUpdate() ;

constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_currentParticles() const;

constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_currentParticles() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_fxExplodeAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_fxExplodeAudio() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle> const& __cordl_internal_get_fxParticleArray() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>& __cordl_internal_get_fxParticleArray() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_movingFxAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_movingFxAudio() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_outPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_outPosition() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>* const& __cordl_internal_get_particleInfoDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*& __cordl_internal_get_particleInfoDict() ;

constexpr void __cordl_internal_set_currentParticles(::System::Collections::Generic::List_1<uint32_t>*  value) ;

constexpr void __cordl_internal_set_fxExplodeAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_fxParticleArray(::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  value) ;

constexpr void __cordl_internal_set_movingFxAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_outPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_particleInfoDict(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x57932ec, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeCandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeCandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeCandle(MonkeCandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeCandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeCandle(MonkeCandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1451};

/// @brief Field fxParticleArray, offset: 0x3b8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  ___fxParticleArray;

/// @brief Field movingFxAudio, offset: 0x3c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___movingFxAudio;

/// @brief Field fxExplodeAudio, offset: 0x3c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___fxExplodeAudio;

/// @brief Field currentParticles, offset: 0x3d0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint32_t>*  ___currentParticles;

/// @brief Field particleInfoDict, offset: 0x3d8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::Vector3>*  ___particleInfoDict;

/// @brief Field outPosition, offset: 0x3e0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___outPosition;

/// @brief Size padding 0x420 - 0x3f0 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeCandle, ___fxParticleArray) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeCandle, ___movingFxAudio) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeCandle, ___fxExplodeAudio) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeCandle, ___currentParticles) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeCandle, ___particleInfoDict) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeCandle, ___outPosition) == 0x3e0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeCandle) == 0x420, "Size mismatch!");

} // namespace end def GlobalNamespace
