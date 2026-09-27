#pragma once
// IWYU pragma private; include "GlobalNamespace/ShadeJumpscare.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShadeJumpscare)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ShadeJumpscare;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ShadeJumpscare*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShadeJumpscare*, "", "ShadeJumpscare");
// Dependencies UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShadeJumpscare
class CORDL_TYPE ShadeJumpscare : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animationTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationTime, put=__cordl_internal_set_animationTime)) float_t  animationTime;

/// @brief Field audioClips, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClips, put=__cordl_internal_set_audioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  audioClips;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field shadeHeightFunction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadeHeightFunction, put=__cordl_internal_set_shadeHeightFunction)) ::UnityEngine::AnimationCurve*  shadeHeightFunction;

/// @brief Field shadeRotationSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadeRotationSpeed, put=__cordl_internal_set_shadeRotationSpeed)) float_t  shadeRotationSpeed;

/// @brief Field shadeScaleFunction, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadeScaleFunction, put=__cordl_internal_set_shadeScaleFunction)) ::UnityEngine::AnimationCurve*  shadeScaleFunction;

/// @brief Field shadeTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadeTransform, put=__cordl_internal_set_shadeTransform)) ::UnityW<::UnityEngine::Transform>  shadeTransform;

/// @brief Field shadeYScaleMultFunction, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadeYScaleMultFunction, put=__cordl_internal_set_shadeYScaleMultFunction)) ::UnityEngine::AnimationCurve*  shadeYScaleMultFunction;

/// @brief Field soundVolumeFunction, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundVolumeFunction, put=__cordl_internal_set_soundVolumeFunction)) ::UnityEngine::AnimationCurve*  soundVolumeFunction;

/// @brief Field startAngle, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_startAngle, put=__cordl_internal_set_startAngle)) float_t  startAngle;

/// @brief Field startTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Method Awake, addr 0x57f3b04, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ShadeJumpscare* New_ctor() ;

/// @brief Method OnEnable, addr 0x57f3b5c, size 0xc4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x57f3c20, size 0x16c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_animationTime() const;

constexpr float_t& __cordl_internal_get_animationTime() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_audioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_audioClips() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_shadeHeightFunction() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_shadeHeightFunction() ;

constexpr float_t const& __cordl_internal_get_shadeRotationSpeed() const;

constexpr float_t& __cordl_internal_get_shadeRotationSpeed() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_shadeScaleFunction() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_shadeScaleFunction() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shadeTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shadeTransform() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_shadeYScaleMultFunction() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_shadeYScaleMultFunction() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_soundVolumeFunction() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_soundVolumeFunction() ;

constexpr float_t const& __cordl_internal_get_startAngle() const;

constexpr float_t& __cordl_internal_get_startAngle() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_animationTime(float_t  value) ;

constexpr void __cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_shadeHeightFunction(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_shadeRotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_shadeScaleFunction(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_shadeTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shadeYScaleMultFunction(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_soundVolumeFunction(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_startAngle(float_t  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

/// @brief Method .ctor, addr 0x57f3d8c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShadeJumpscare() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShadeJumpscare", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShadeJumpscare(ShadeJumpscare && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShadeJumpscare", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShadeJumpscare(ShadeJumpscare const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{203};

/// [SerializeField]
/// @brief Field shadeTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shadeTransform;

/// [SerializeField]
/// @brief Field animationTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___animationTime;

/// [SerializeField]
/// @brief Field shadeRotationSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___shadeRotationSpeed;

/// [SerializeField]
/// @brief Field shadeHeightFunction, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___shadeHeightFunction;

/// [SerializeField]
/// @brief Field shadeScaleFunction, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___shadeScaleFunction;

/// [SerializeField]
/// @brief Field shadeYScaleMultFunction, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___shadeYScaleMultFunction;

/// [SerializeField]
/// @brief Field soundVolumeFunction, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___soundVolumeFunction;

/// [SerializeField]
/// @brief Field audioClips, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___audioClips;

/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field startTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field startAngle, offset: 0x64, size: 0x4, def value: None
 float_t  ___startAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___shadeTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___animationTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___shadeRotationSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___shadeHeightFunction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___shadeScaleFunction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___shadeYScaleMultFunction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___soundVolumeFunction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___audioClips) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___startTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShadeJumpscare, ___startAngle) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShadeJumpscare) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
