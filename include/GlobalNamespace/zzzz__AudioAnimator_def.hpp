#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAnimator_AudioTarget_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioAnimator)
namespace GlobalNamespace {
struct AudioAnimator_AudioTarget;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioAnimator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioAnimator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioAnimator*, "", "AudioAnimator");
// Dependencies AudioAnimator::AudioTarget, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioAnimator
class CORDL_TYPE AudioAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AudioTarget = ::GlobalNamespace::AudioAnimator_AudioTarget;

/// @brief Field didInitBaseVolume, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_didInitBaseVolume, put=__cordl_internal_set_didInitBaseVolume)) bool  didInitBaseVolume;

/// @brief Field targets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targets, put=__cordl_internal_set_targets)) ::ArrayW<::GlobalNamespace::AudioAnimator_AudioTarget>  targets;

/// @brief Method InitBaseVolume, addr 0x56466fc, size 0x88, virtual false, abstract: false, final false
inline void InitBaseVolume() ;

static inline ::GlobalNamespace::AudioAnimator* New_ctor() ;

/// @brief Method Start, addr 0x56466ec, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePitchAndVolume, addr 0x564678c, size 0x1a8, virtual false, abstract: false, final false
inline void UpdatePitchAndVolume(float_t  pitchValue, float_t  volumeValue, bool  ignoreSmoothing) ;

/// @brief Method UpdateValue, addr 0x5646784, size 0x8, virtual false, abstract: false, final false
inline void UpdateValue(float_t  value, bool  ignoreSmoothing) ;

constexpr bool const& __cordl_internal_get_didInitBaseVolume() const;

constexpr bool& __cordl_internal_get_didInitBaseVolume() ;

constexpr ::ArrayW<::GlobalNamespace::AudioAnimator_AudioTarget> const& __cordl_internal_get_targets() const;

constexpr ::ArrayW<::GlobalNamespace::AudioAnimator_AudioTarget>& __cordl_internal_get_targets() ;

constexpr void __cordl_internal_set_didInitBaseVolume(bool  value) ;

constexpr void __cordl_internal_set_targets(::ArrayW<::GlobalNamespace::AudioAnimator_AudioTarget>  value) ;

/// @brief Method .ctor, addr 0x5646934, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioAnimator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioAnimator(AudioAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioAnimator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioAnimator(AudioAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{687};

/// @brief Field didInitBaseVolume, offset: 0x20, size: 0x1, def value: None
 bool  ___didInitBaseVolume;

/// [SerializeField]
/// @brief Field targets, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioAnimator_AudioTarget>  ___targets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioAnimator, ___didInitBaseVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioAnimator, ___targets) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioAnimator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
