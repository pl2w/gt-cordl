#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTAnimator)
namespace GlobalNamespace {
struct GTAnimator_AnimClipAndGObjs;
}
namespace GlobalNamespace {
template<typename T>
class GTEnumValueMap_1;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GTAnimator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTAnimator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTAnimator*, "", "GTAnimator");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTAnimator
class CORDL_TYPE GTAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnimClipAndGObjs = ::GlobalNamespace::GTAnimator_AnimClipAndGObjs;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

/// @brief Field _allStaticGobjs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__allStaticGobjs, put=__cordl_internal_set__allStaticGobjs)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  _allStaticGobjs;

/// @brief Field _currentStateAsLong, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentStateAsLong, put=__cordl_internal_set__currentStateAsLong)) int64_t  _currentStateAsLong;

/// @brief Field _frameCountWhenLastPlayed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameCountWhenLastPlayed, put=__cordl_internal_set__frameCountWhenLastPlayed)) int32_t  _frameCountWhenLastPlayed;

/// @brief Field <hasAnimationComponent>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasAnimationComponent_k__BackingField, put=__cordl_internal_set__hasAnimationComponent_k__BackingField)) bool  _hasAnimationComponent_k__BackingField;

/// @brief Field _queuedStateAsLong, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__queuedStateAsLong, put=__cordl_internal_set__queuedStateAsLong)) int64_t  _queuedStateAsLong;

/// @brief Field _wasInitCalled, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasInitCalled, put=__cordl_internal_set__wasInitCalled)) bool  _wasInitCalled;

 __declspec(property(get=get_animationComponent)) ::UnityW<::UnityEngine::Animation>  animationComponent;

 __declspec(property(get=get_hasAnimationComponent, put=set_hasAnimationComponent)) bool  hasAnimationComponent;

/// @brief Field m_animatedGameObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_animatedGameObjects, put=__cordl_internal_set_m_animatedGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  m_animatedGameObjects;

/// @brief Field m_animationComponent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_animationComponent, put=__cordl_internal_set_m_animationComponent)) ::UnityW<::UnityEngine::Animation>  m_animationComponent;

/// @brief Field m_animationMap, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_animationMap, put=__cordl_internal_set_m_animationMap)) ::GlobalNamespace::GTEnumValueMap_1<::GlobalNamespace::GTAnimator_AnimClipAndGObjs>*  m_animationMap;

/// @brief Field m_defaultStaticGameObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_defaultStaticGameObjects, put=__cordl_internal_set_m_defaultStaticGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  m_defaultStaticGameObjects;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Method Awake, addr 0x5644c84, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IDelayedExecListener.OnDelayedAction, addr 0x5645330, size 0x1f4, virtual true, abstract: false, final true
inline void IDelayedExecListener_OnDelayedAction(int32_t  contextId) ;

/// @brief Method Init, addr 0x5644c88, size 0x364, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::GTAnimator* New_ctor() ;

/// @brief Method OnEnable, addr 0x5644fec, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method QueueState, addr 0x56455a8, size 0x84, virtual false, abstract: false, final false
inline void QueueState(int64_t  enumValueAsLong) ;

/// @brief Method SetState, addr 0x5645008, size 0x4c, virtual false, abstract: false, final false
inline void SetState(int64_t  enumValueAsLong) ;

/// @brief Method Stop, addr 0x5645524, size 0x84, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method TryPlay, addr 0x5645054, size 0x2dc, virtual false, abstract: false, final false
inline bool TryPlay(int64_t  enumValueAsLong) ;

/// @brief Method _IsCurrentClipLoopable, addr 0x564562c, size 0xcc, virtual false, abstract: false, final false
inline bool _IsCurrentClipLoopable() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__allStaticGobjs() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__allStaticGobjs() ;

constexpr int64_t const& __cordl_internal_get__currentStateAsLong() const;

constexpr int64_t& __cordl_internal_get__currentStateAsLong() ;

constexpr int32_t const& __cordl_internal_get__frameCountWhenLastPlayed() const;

constexpr int32_t& __cordl_internal_get__frameCountWhenLastPlayed() ;

constexpr bool const& __cordl_internal_get__hasAnimationComponent_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasAnimationComponent_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__queuedStateAsLong() const;

constexpr int64_t& __cordl_internal_get__queuedStateAsLong() ;

constexpr bool const& __cordl_internal_get__wasInitCalled() const;

constexpr bool& __cordl_internal_get__wasInitCalled() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_m_animatedGameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_m_animatedGameObjects() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_m_animationComponent() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_m_animationComponent() ;

constexpr ::GlobalNamespace::GTEnumValueMap_1<::GlobalNamespace::GTAnimator_AnimClipAndGObjs>* const& __cordl_internal_get_m_animationMap() const;

constexpr ::GlobalNamespace::GTEnumValueMap_1<::GlobalNamespace::GTAnimator_AnimClipAndGObjs>*& __cordl_internal_get_m_animationMap() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_m_defaultStaticGameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_m_defaultStaticGameObjects() ;

constexpr void __cordl_internal_set__allStaticGobjs(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__currentStateAsLong(int64_t  value) ;

constexpr void __cordl_internal_set__frameCountWhenLastPlayed(int32_t  value) ;

constexpr void __cordl_internal_set__hasAnimationComponent_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__queuedStateAsLong(int64_t  value) ;

constexpr void __cordl_internal_set__wasInitCalled(bool  value) ;

constexpr void __cordl_internal_set_m_animatedGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_m_animationComponent(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_m_animationMap(::GlobalNamespace::GTEnumValueMap_1<::GlobalNamespace::GTAnimator_AnimClipAndGObjs>*  value) ;

constexpr void __cordl_internal_set_m_defaultStaticGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x56456f8, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsPlaying, addr 0x5644ff0, size 0x18, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_animationComponent, addr 0x5644c6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Animation> get_animationComponent() ;

/// [CompilerGenerated]
/// @brief Method get_hasAnimationComponent, addr 0x5644c74, size 0x8, virtual false, abstract: false, final false
inline bool get_hasAnimationComponent() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

/// [CompilerGenerated]
/// @brief Method set_hasAnimationComponent, addr 0x5644c7c, size 0x8, virtual false, abstract: false, final false
inline void set_hasAnimationComponent(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTAnimator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTAnimator(GTAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTAnimator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTAnimator(GTAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{673};

/// @brief Field _k_invalidState offset 0xffffffff size 0x8
static constexpr int64_t  _k_invalidState{static_cast<int64_t>(0x8000000000000000)};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GTAnimator]  ERROR!!!  "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"[GTAnimator]  ERROR!!!  (beta only log)  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GTAnimator]  "};

/// [Tooltip("Assign a unity Animation component (not to be confused with less performant Animator Component).")]
/// [SerializeField]
/// @brief Field m_animationComponent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___m_animationComponent;

/// [CompilerGenerated]
/// @brief Field <hasAnimationComponent>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____hasAnimationComponent_k__BackingField;

/// [Tooltip("These will be activated when animation starts playing and deactivated when any anim finishes playing.")]
/// [SerializeField]
/// @brief Field m_animatedGameObjects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___m_animatedGameObjects;

/// [Tooltip("If an enum map value is not defined then these will be activated.")]
/// [SerializeField]
/// @brief Field m_defaultStaticGameObjects, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___m_defaultStaticGameObjects;

/// [Header("Enum To Animation Mapping")]
/// [Tooltip("Map an enum\'s values to specific AnimationClips.")]
/// [SerializeField]
/// @brief Field m_animationMap, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::GTEnumValueMap_1<::GlobalNamespace::GTAnimator_AnimClipAndGObjs>*  ___m_animationMap;

/// @brief Field _allStaticGobjs, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ____allStaticGobjs;

/// @brief Field _currentStateAsLong, offset: 0x50, size: 0x8, def value: None
 int64_t  ____currentStateAsLong;

/// @brief Field _frameCountWhenLastPlayed, offset: 0x58, size: 0x4, def value: None
 int32_t  ____frameCountWhenLastPlayed;

/// @brief Field _wasInitCalled, offset: 0x5c, size: 0x1, def value: None
 bool  ____wasInitCalled;

/// @brief Field _queuedStateAsLong, offset: 0x60, size: 0x8, def value: None
 int64_t  ____queuedStateAsLong;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTAnimator, ___m_animationComponent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ____hasAnimationComponent_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ___m_animatedGameObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ___m_defaultStaticGameObjects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ___m_animationMap) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ____allStaticGobjs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ____currentStateAsLong) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ____frameCountWhenLastPlayed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ____wasInitCalled) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTAnimator, ____queuedStateAsLong) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTAnimator) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
