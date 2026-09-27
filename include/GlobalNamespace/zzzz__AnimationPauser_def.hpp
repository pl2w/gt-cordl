#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationPauser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__StateMachineBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationPauser)
namespace GlobalNamespace {
struct AnimationPauser__OnStateEnter_d__4;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationPauser;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimationPauser*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationPauser*, "", "AnimationPauser");
// Dependencies UnityEngine.StateMachineBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimationPauser
class CORDL_TYPE AnimationPauser : public ::UnityEngine::StateMachineBehaviour {
public:
// Declarations
using _OnStateEnter_d__4 = ::GlobalNamespace::AnimationPauser__OnStateEnter_d__4;

/// @brief Field Restart_Anim_Name, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Restart_Anim_Name, put=setStaticF_Restart_Anim_Name)) ::StringW  Restart_Anim_Name;

/// @brief Field _animPauseDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__animPauseDuration, put=__cordl_internal_set__animPauseDuration)) int32_t  _animPauseDuration;

/// @brief Field _maxTimeBetweenAnims, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxTimeBetweenAnims, put=__cordl_internal_set__maxTimeBetweenAnims)) int32_t  _maxTimeBetweenAnims;

/// @brief Field _minTimeBetweenAnims, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minTimeBetweenAnims, put=__cordl_internal_set__minTimeBetweenAnims)) int32_t  _minTimeBetweenAnims;

static inline ::GlobalNamespace::AnimationPauser* New_ctor() ;

/// [AsyncStateMachine(typeof(AnimationPauser::<OnStateEnter>d__4))]
/// @brief Method OnStateEnter, addr 0x5a44760, size 0xec, virtual true, abstract: false, final false
inline void OnStateEnter(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

constexpr int32_t const& __cordl_internal_get__animPauseDuration() const;

constexpr int32_t& __cordl_internal_get__animPauseDuration() ;

constexpr int32_t const& __cordl_internal_get__maxTimeBetweenAnims() const;

constexpr int32_t& __cordl_internal_get__maxTimeBetweenAnims() ;

constexpr int32_t const& __cordl_internal_get__minTimeBetweenAnims() const;

constexpr int32_t& __cordl_internal_get__minTimeBetweenAnims() ;

constexpr void __cordl_internal_set__animPauseDuration(int32_t  value) ;

constexpr void __cordl_internal_set__maxTimeBetweenAnims(int32_t  value) ;

constexpr void __cordl_internal_set__minTimeBetweenAnims(int32_t  value) ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__0, addr 0x5a448c8, size 0x30, virtual false, abstract: false, final false
inline void __n__0(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

/// @brief Method .ctor, addr 0x5a4484c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_Restart_Anim_Name() ;

static inline void setStaticF_Restart_Anim_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationPauser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationPauser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationPauser(AnimationPauser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPauser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationPauser(AnimationPauser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2976};

/// [SerializeField]
/// @brief Field _maxTimeBetweenAnims, offset: 0x18, size: 0x4, def value: None
 int32_t  ____maxTimeBetweenAnims;

/// [SerializeField]
/// @brief Field _minTimeBetweenAnims, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____minTimeBetweenAnims;

/// @brief Field _animPauseDuration, offset: 0x20, size: 0x4, def value: None
 int32_t  ____animPauseDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationPauser, ____maxTimeBetweenAnims) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationPauser, ____minTimeBetweenAnims) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationPauser, ____animPauseDuration) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationPauser) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
