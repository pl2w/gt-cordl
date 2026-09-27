#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeakerBodyAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSSpeakerBodyAnimator)
namespace Meta::WitAi::TTS::Interfaces {
class ISpeaker;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerBodyAnimator;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator*, "Meta.WitAi.TTS.Utilities", "TTSSpeakerBodyAnimator");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeakerBodyAnimator
class CORDL_TYPE TTSSpeakerBodyAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Animator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Animator, put=__cordl_internal_set_Animator)) ::UnityW<::UnityEngine::Animator>  Animator;

/// @brief Field AnimatorSpeakKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnimatorSpeakKey, put=__cordl_internal_set_AnimatorSpeakKey)) ::StringW  AnimatorSpeakKey;

 __declspec(property(get=get_Speaker)) ::Meta::WitAi::TTS::Interfaces::ISpeaker*  Speaker;

/// @brief Field _pausing, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__pausing, put=__cordl_internal_set__pausing)) bool  _pausing;

/// @brief Field _speaker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__speaker, put=__cordl_internal_set__speaker)) ::UnityW<::UnityEngine::Object>  _speaker;

/// @brief Field _speaking, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__speaking, put=__cordl_internal_set__speaking)) bool  _speaking;

/// @brief Method Awake, addr 0x9e6548c, size 0x134, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator* New_ctor() ;

/// @brief Method RefreshPausing, addr 0x9e655d8, size 0x138, virtual false, abstract: false, final false
inline void RefreshPausing() ;

/// @brief Method RefreshSpeaking, addr 0x9e65710, size 0x128, virtual false, abstract: false, final false
inline void RefreshSpeaking() ;

/// @brief Method Update, addr 0x9e655c0, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_Animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_Animator() ;

constexpr ::StringW const& __cordl_internal_get_AnimatorSpeakKey() const;

constexpr ::StringW& __cordl_internal_get_AnimatorSpeakKey() ;

constexpr bool const& __cordl_internal_get__pausing() const;

constexpr bool& __cordl_internal_get__pausing() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__speaker() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__speaker() ;

constexpr bool const& __cordl_internal_get__speaking() const;

constexpr bool& __cordl_internal_get__speaking() ;

constexpr void __cordl_internal_set_Animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_AnimatorSpeakKey(::StringW  value) ;

constexpr void __cordl_internal_set__pausing(bool  value) ;

constexpr void __cordl_internal_set__speaker(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__speaking(bool  value) ;

/// @brief Method .ctor, addr 0x9e65838, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Speaker, addr 0x9e65444, size 0x48, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Interfaces::ISpeaker* get_Speaker() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerBodyAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerBodyAnimator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerBodyAnimator(TTSSpeakerBodyAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerBodyAnimator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerBodyAnimator(TTSSpeakerBodyAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29171};

/// [SerializeField]
/// [ObjectType(typeof(Meta.WitAi.TTS.Interfaces.ISpeaker), new[] {  })]
/// @brief Field _speaker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____speaker;

/// @brief Field Animator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___Animator;

/// [DropDown("GetAnimatorKeys", false, false, true, true, null, false)]
/// @brief Field AnimatorSpeakKey, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___AnimatorSpeakKey;

/// @brief Field _speaking, offset: 0x38, size: 0x1, def value: None
 bool  ____speaking;

/// @brief Field _pausing, offset: 0x39, size: 0x1, def value: None
 bool  ____pausing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator, ____speaker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator, ___Animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator, ___AnimatorSpeakKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator, ____speaking) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator, ____pausing) == 0x39, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerBodyAnimator) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
