#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotorSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotorSound)
namespace Oculus::Interaction::Locomotion {
class AdjustableAudio;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventHandler;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotorSound;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotorSound*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotorSound*, "Oculus.Interaction.Locomotion", "LocomotorSound");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotorSound
class CORDL_TYPE LocomotorSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Locomotor, put=set_Locomotor)) ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  Locomotor;

/// @brief Field <Locomotor>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Locomotor_k__BackingField, put=__cordl_internal_set__Locomotor_k__BackingField)) ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  _Locomotor_k__BackingField;

/// @brief Field _locomotor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__locomotor, put=__cordl_internal_set__locomotor)) ::UnityW<::UnityEngine::Object>  _locomotor;

/// @brief Field _pitchVariance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__pitchVariance, put=__cordl_internal_set__pitchVariance)) float_t  _pitchVariance;

/// @brief Field _rotationCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationCurve, put=__cordl_internal_set__rotationCurve)) ::UnityEngine::AnimationCurve*  _rotationCurve;

/// @brief Field _snapTurnSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapTurnSound, put=__cordl_internal_set__snapTurnSound)) ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  _snapTurnSound;

/// @brief Field _started, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _translationCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__translationCurve, put=__cordl_internal_set__translationCurve)) ::UnityEngine::AnimationCurve*  _translationCurve;

/// @brief Field _translationDeniedSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__translationDeniedSound, put=__cordl_internal_set__translationDeniedSound)) ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  _translationDeniedSound;

/// @brief Field _translationSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__translationSound, put=__cordl_internal_set__translationSound)) ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  _translationSound;

/// @brief Method Awake, addr 0xa42f210, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleLocomotionEvent, addr 0xa42f494, size 0x140, virtual false, abstract: false, final false
inline void HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent, ::UnityEngine::Pose  delta) ;

/// @brief Method InjectAllLocomotorSound, addr 0xa42f6e4, size 0x4, virtual false, abstract: false, final false
inline void InjectAllLocomotorSound(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  locomotor) ;

/// @brief Method InjectPlayerLocomotor, addr 0xa42f6e8, size 0xd0, virtual false, abstract: false, final false
inline void InjectPlayerLocomotor(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  locomotor) ;

static inline ::Oculus::Interaction::Locomotion::LocomotorSound* New_ctor() ;

/// @brief Method OnDisable, addr 0xa42f394, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42f294, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayDenialSound, addr 0xa42f68c, size 0x58, virtual false, abstract: false, final false
inline void PlayDenialSound(float_t  translationDistance) ;

/// @brief Method PlayRotationSound, addr 0xa42f62c, size 0x60, virtual false, abstract: false, final false
inline void PlayRotationSound(float_t  rotationLength) ;

/// @brief Method PlayTranslationSound, addr 0xa42f5d4, size 0x58, virtual false, abstract: false, final false
inline void PlayTranslationSound(float_t  translationDistance) ;

/// @brief Method Start, addr 0xa42f268, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* const& __cordl_internal_get__Locomotor_k__BackingField() const;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*& __cordl_internal_get__Locomotor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__locomotor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__locomotor() ;

constexpr float_t const& __cordl_internal_get__pitchVariance() const;

constexpr float_t& __cordl_internal_get__pitchVariance() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rotationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rotationCurve() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio> const& __cordl_internal_get__snapTurnSound() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>& __cordl_internal_get__snapTurnSound() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__translationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__translationCurve() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio> const& __cordl_internal_get__translationDeniedSound() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>& __cordl_internal_get__translationDeniedSound() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio> const& __cordl_internal_get__translationSound() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>& __cordl_internal_get__translationSound() ;

constexpr void __cordl_internal_set__Locomotor_k__BackingField(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value) ;

constexpr void __cordl_internal_set__locomotor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__pitchVariance(float_t  value) ;

constexpr void __cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__snapTurnSound(::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__translationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__translationDeniedSound(::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  value) ;

constexpr void __cordl_internal_set__translationSound(::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  value) ;

/// @brief Method .ctor, addr 0xa42f7b8, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Locomotor, addr 0xa42f200, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* get_Locomotor() ;

/// [CompilerGenerated]
/// @brief Method set_Locomotor, addr 0xa42f208, size 0x8, virtual false, abstract: false, final false
inline void set_Locomotor(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotorSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotorSound", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotorSound(LocomotorSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotorSound", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotorSound(LocomotorSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28272};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Locomotion.ILocomotionEventHandler), new[] {  })]
/// @brief Field _locomotor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____locomotor;

/// [CompilerGenerated]
/// @brief Field <Locomotor>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  ____Locomotor_k__BackingField;

/// [SerializeField]
/// @brief Field _translationSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  ____translationSound;

/// [SerializeField]
/// @brief Field _translationDeniedSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  ____translationDeniedSound;

/// [SerializeField]
/// @brief Field _snapTurnSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::AdjustableAudio>  ____snapTurnSound;

/// [SerializeField]
/// @brief Field _translationCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____translationCurve;

/// [SerializeField]
/// @brief Field _rotationCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rotationCurve;

/// [SerializeField]
/// @brief Field _pitchVariance, offset: 0x58, size: 0x4, def value: None
 float_t  ____pitchVariance;

/// @brief Field _started, offset: 0x5c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____locomotor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____Locomotor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____translationSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____translationDeniedSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____snapTurnSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____translationCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____rotationCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____pitchVariance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotorSound, ____started) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotorSound) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
