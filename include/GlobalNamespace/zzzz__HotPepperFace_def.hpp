#pragma once
// IWYU pragma private; include "GlobalNamespace/HotPepperFace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HotPepperFace)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class HotPepperFace;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HotPepperFace*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HotPepperFace*, "", "HotPepperFace");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HotPepperFace
class CORDL_TYPE HotPepperFace : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _breathSpeaker, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__breathSpeaker, put=__cordl_internal_set__breathSpeaker)) ::UnityW<::UnityEngine::AudioSource>  _breathSpeaker;

/// @brief Field _effectLength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__effectLength, put=__cordl_internal_set__effectLength)) float_t  _effectLength;

/// @brief Field _faceMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__faceMesh, put=__cordl_internal_set__faceMesh)) ::UnityW<::UnityEngine::GameObject>  _faceMesh;

/// @brief Field _fireFX, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__fireFX, put=__cordl_internal_set__fireFX)) ::UnityW<::UnityEngine::ParticleSystem>  _fireFX;

/// @brief Field _flameSpeaker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__flameSpeaker, put=__cordl_internal_set__flameSpeaker)) ::UnityW<::UnityEngine::AudioSource>  _flameSpeaker;

/// @brief Field _thermalSourceVolume, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__thermalSourceVolume, put=__cordl_internal_set__thermalSourceVolume)) ::UnityW<::UnityEngine::GameObject>  _thermalSourceVolume;

static inline ::GlobalNamespace::HotPepperFace* New_ctor() ;

/// @brief Method PlayFX, addr 0x578acb8, size 0xac, virtual false, abstract: false, final false
inline void PlayFX() ;

/// @brief Method PlayFX, addr 0x578ac30, size 0x78, virtual false, abstract: false, final false
inline void PlayFX(float_t  delay) ;

/// @brief Method StopFX, addr 0x578ad64, size 0x68, virtual false, abstract: false, final false
inline void StopFX() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__breathSpeaker() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__breathSpeaker() ;

constexpr float_t const& __cordl_internal_get__effectLength() const;

constexpr float_t& __cordl_internal_get__effectLength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__faceMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__faceMesh() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__fireFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__fireFX() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__flameSpeaker() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__flameSpeaker() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__thermalSourceVolume() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__thermalSourceVolume() ;

constexpr void __cordl_internal_set__breathSpeaker(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__effectLength(float_t  value) ;

constexpr void __cordl_internal_set__faceMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__fireFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__flameSpeaker(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__thermalSourceVolume(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x578adcc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HotPepperFace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HotPepperFace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HotPepperFace(HotPepperFace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HotPepperFace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HotPepperFace(HotPepperFace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1432};

/// [SerializeField]
/// @brief Field _faceMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____faceMesh;

/// [SerializeField]
/// @brief Field _fireFX, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____fireFX;

/// [SerializeField]
/// @brief Field _flameSpeaker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____flameSpeaker;

/// [SerializeField]
/// @brief Field _breathSpeaker, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____breathSpeaker;

/// [SerializeField]
/// @brief Field _effectLength, offset: 0x40, size: 0x4, def value: None
 float_t  ____effectLength;

/// [SerializeField]
/// @brief Field _thermalSourceVolume, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____thermalSourceVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HotPepperFace, ____faceMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotPepperFace, ____fireFX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotPepperFace, ____flameSpeaker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotPepperFace, ____breathSpeaker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotPepperFace, ____effectLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HotPepperFace, ____thermalSourceVolume) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HotPepperFace) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
