#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorAnimatorTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceLoudnessReactorAnimatorTarget)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactorAnimatorTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*, "", "VoiceLoudnessReactorAnimatorTarget");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactorAnimatorTarget
class CORDL_TYPE VoiceLoudnessReactorAnimatorTarget : public ::System::Object {
public:
// Declarations
/// @brief Field animator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field animatorSpeedToLoudness, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animatorSpeedToLoudness, put=__cordl_internal_set_animatorSpeedToLoudness)) float_t  animatorSpeedToLoudness;

/// @brief Field useSmoothedLoudness, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSmoothedLoudness, put=__cordl_internal_set_useSmoothedLoudness)) bool  useSmoothedLoudness;

static inline ::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_animatorSpeedToLoudness() const;

constexpr float_t& __cordl_internal_get_animatorSpeedToLoudness() ;

constexpr bool const& __cordl_internal_get_useSmoothedLoudness() const;

constexpr bool& __cordl_internal_get_useSmoothedLoudness() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_animatorSpeedToLoudness(float_t  value) ;

constexpr void __cordl_internal_set_useSmoothedLoudness(bool  value) ;

/// @brief Method .ctor, addr 0x5b410c4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactorAnimatorTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorAnimatorTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactorAnimatorTarget(VoiceLoudnessReactorAnimatorTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorAnimatorTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactorAnimatorTarget(VoiceLoudnessReactorAnimatorTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3723};

/// @brief Field animator, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field useSmoothedLoudness, offset: 0x18, size: 0x1, def value: None
 bool  ___useSmoothedLoudness;

/// @brief Field animatorSpeedToLoudness, offset: 0x1c, size: 0x4, def value: None
 float_t  ___animatorSpeedToLoudness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget, ___animator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget, ___useSmoothedLoudness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget, ___animatorSpeedToLoudness) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
