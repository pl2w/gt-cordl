#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameStateFx_BehaviourInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_GameObjectInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_MaterialInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_RenderInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_SoundEntry_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_StateReaction_EOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameStateFx)
namespace GlobalNamespace {
template<typename T>
class GTEnumValueMap_1;
}
namespace GlobalNamespace {
struct GameStateFx_BehaviourInfo;
}
namespace GlobalNamespace {
struct GameStateFx_GameObjectInfo;
}
namespace GlobalNamespace {
struct GameStateFx_MaterialInfo;
}
namespace GlobalNamespace {
struct GameStateFx_RenderInfo;
}
namespace GlobalNamespace {
struct GameStateFx_SoundEntry;
}
namespace GlobalNamespace {
class GameStateFx_StateReaction;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GlobalNamespace {
class IGameStateProvider;
}
namespace GlobalNamespace {
class IGameStateReceiver;
}
namespace GlobalNamespace {
struct StateReaction_GameStateFx_EOptions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class GameStateFx;
}
namespace GlobalNamespace {
class GameStateFx_StateReaction;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameStateFx*);
MARK_REF_T(::GlobalNamespace::GameStateFx_StateReaction*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameStateFx*, "", "GameStateFx");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameStateFx_StateReaction*, "", "GameStateFx/StateReaction");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameStateFx
class CORDL_TYPE GameStateFx : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BehaviourInfo = ::GlobalNamespace::GameStateFx_BehaviourInfo;

using GameObjectInfo = ::GlobalNamespace::GameStateFx_GameObjectInfo;

using MaterialInfo = ::GlobalNamespace::GameStateFx_MaterialInfo;

using RenderInfo = ::GlobalNamespace::GameStateFx_RenderInfo;

using SoundEntry = ::GlobalNamespace::GameStateFx_SoundEntry;

using StateReaction = ::GlobalNamespace::GameStateFx_StateReaction;

/// @brief Field _delayedExecContextFrameNum, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayedExecContextFrameNum, put=__cordl_internal_set__delayedExecContextFrameNum)) int32_t  _delayedExecContextFrameNum;

/// @brief Field _g_materialsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_materialsCache, put=setStaticF__g_materialsCache)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  _g_materialsCache;

/// @brief Field _hasDefaultAudioSource, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasDefaultAudioSource, put=__cordl_internal_set__hasDefaultAudioSource)) bool  _hasDefaultAudioSource;

/// @brief Field _isValid, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isValid, put=__cordl_internal_set__isValid)) bool  _isValid;

/// @brief Field _reactionQueue, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__reactionQueue, put=__cordl_internal_set__reactionQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::GameStateFx_StateReaction*>*  _reactionQueue;

/// @brief Field _stateProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateProvider, put=__cordl_internal_set__stateProvider)) ::GlobalNamespace::IGameStateProvider*  _stateProvider;

/// @brief Field m_defaultAudioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_defaultAudioSource, put=__cordl_internal_set_m_defaultAudioSource)) ::UnityW<::UnityEngine::AudioSource>  m_defaultAudioSource;

/// @brief Field m_stateMap, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_stateMap, put=__cordl_internal_set_m_stateMap)) ::GlobalNamespace::GTEnumValueMap_1<::ArrayW<::GlobalNamespace::GameStateFx_StateReaction*>>*  m_stateMap;

/// @brief Field m_stateProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_stateProvider, put=__cordl_internal_set_m_stateProvider)) ::UnityW<::UnityEngine::MonoBehaviour>  m_stateProvider;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameStateReceiver"
constexpr operator  ::GlobalNamespace::IGameStateReceiver*() noexcept;

/// @brief Method Awake, addr 0x564372c, size 0x454, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IDelayedExecListener.OnDelayedAction, addr 0x5644a64, size 0xb0, virtual true, abstract: false, final true
inline void IDelayedExecListener_OnDelayedAction(int32_t  contextFrameNum) ;

/// @brief Method IGameStateReceiver.GameStateReceiverOnStateChanged, addr 0x56445a8, size 0x1a0, virtual true, abstract: false, final true
inline void IGameStateReceiver_GameStateReceiverOnStateChanged(int64_t  oldState, int64_t  newState) ;

static inline ::GlobalNamespace::GameStateFx* New_ctor() ;

/// @brief Method OnDisable, addr 0x56444b4, size 0xf4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56443b8, size 0xfc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method _DelaySortCompare, addr 0x5644394, size 0x24, virtual false, abstract: false, final false
static inline int32_t _DelaySortCompare(::GlobalNamespace::GameStateFx_StateReaction*  a, ::GlobalNamespace::GameStateFx_StateReaction*  b) ;

/// @brief Method _IsAllValid, addr 0x5643b80, size 0x814, virtual false, abstract: false, final false
inline bool _IsAllValid() ;

/// @brief Method _IsOneValid, addr 0x5644b14, size 0x28, virtual false, abstract: false, final false
inline bool _IsOneValid(bool  isValidCondition, ::StringW  msgFailReason) ;

/// @brief Method _PerformReactions, addr 0x5644748, size 0x31c, virtual false, abstract: false, final false
static inline void _PerformReactions(::GlobalNamespace::GameStateFx_StateReaction*  reaction) ;

constexpr int32_t const& __cordl_internal_get__delayedExecContextFrameNum() const;

constexpr int32_t& __cordl_internal_get__delayedExecContextFrameNum() ;

constexpr bool const& __cordl_internal_get__hasDefaultAudioSource() const;

constexpr bool& __cordl_internal_get__hasDefaultAudioSource() ;

constexpr bool const& __cordl_internal_get__isValid() const;

constexpr bool& __cordl_internal_get__isValid() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GameStateFx_StateReaction*>* const& __cordl_internal_get__reactionQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GameStateFx_StateReaction*>*& __cordl_internal_get__reactionQueue() ;

constexpr ::GlobalNamespace::IGameStateProvider* const& __cordl_internal_get__stateProvider() const;

constexpr ::GlobalNamespace::IGameStateProvider*& __cordl_internal_get__stateProvider() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_defaultAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_defaultAudioSource() ;

constexpr ::GlobalNamespace::GTEnumValueMap_1<::ArrayW<::GlobalNamespace::GameStateFx_StateReaction*>>* const& __cordl_internal_get_m_stateMap() const;

constexpr ::GlobalNamespace::GTEnumValueMap_1<::ArrayW<::GlobalNamespace::GameStateFx_StateReaction*>>*& __cordl_internal_get_m_stateMap() ;

constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_m_stateProvider() const;

constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_m_stateProvider() ;

constexpr void __cordl_internal_set__delayedExecContextFrameNum(int32_t  value) ;

constexpr void __cordl_internal_set__hasDefaultAudioSource(bool  value) ;

constexpr void __cordl_internal_set__isValid(bool  value) ;

constexpr void __cordl_internal_set__reactionQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::GameStateFx_StateReaction*>*  value) ;

constexpr void __cordl_internal_set__stateProvider(::GlobalNamespace::IGameStateProvider*  value) ;

constexpr void __cordl_internal_set_m_defaultAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_stateMap(::GlobalNamespace::GTEnumValueMap_1<::ArrayW<::GlobalNamespace::GameStateFx_StateReaction*>>*  value) ;

constexpr void __cordl_internal_set_m_stateProvider(::UnityW<::UnityEngine::MonoBehaviour>  value) ;

/// @brief Method .ctor, addr 0x5644b3c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* getStaticF__g_materialsCache() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameStateReceiver"
constexpr ::GlobalNamespace::IGameStateReceiver* i___GlobalNamespace__IGameStateReceiver() noexcept;

static inline void setStaticF__g_materialsCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameStateFx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameStateFx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameStateFx(GameStateFx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameStateFx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameStateFx(GameStateFx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{669};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GT/GameStateFx]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/GameStateFx]  "};

/// @brief Field _isValid, offset: 0x20, size: 0x1, def value: None
 bool  ____isValid;

/// [SerializeField]
/// @brief Field m_stateProvider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MonoBehaviour>  ___m_stateProvider;

/// @brief Field _stateProvider, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::IGameStateProvider*  ____stateProvider;

/// [SerializeField]
/// @brief Field m_defaultAudioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_defaultAudioSource;

/// @brief Field _hasDefaultAudioSource, offset: 0x40, size: 0x1, def value: None
 bool  ____hasDefaultAudioSource;

/// [SerializeField]
/// @brief Field m_stateMap, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::GTEnumValueMap_1<::ArrayW<::GlobalNamespace::GameStateFx_StateReaction*>>*  ___m_stateMap;

/// @brief Field _delayedExecContextFrameNum, offset: 0x50, size: 0x4, def value: None
 int32_t  ____delayedExecContextFrameNum;

/// @brief Field _reactionQueue, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::GameStateFx_StateReaction*>*  ____reactionQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStateFx, ____isValid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx, ___m_stateProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx, ____stateProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx, ___m_defaultAudioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx, ____hasDefaultAudioSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx, ___m_stateMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx, ____delayedExecContextFrameNum) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx, ____reactionQueue) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameStateFx) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GameStateFx::BehaviourInfo, GameStateFx::GameObjectInfo, GameStateFx::MaterialInfo, GameStateFx::RenderInfo, GameStateFx::SoundEntry, GameStateFx::StateReaction::EOptions, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameStateFx/StateReaction
class CORDL_TYPE GameStateFx_StateReaction : public ::System::Object {
public:
// Declarations
using EOptions = ::GlobalNamespace::StateReaction_GameStateFx_EOptions;

/// @brief Field behaviourInfos, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviourInfos, put=__cordl_internal_set_behaviourInfos)) ::ArrayW<::GlobalNamespace::GameStateFx_BehaviourInfo>  behaviourInfos;

/// @brief Field delay, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field gameObjectInfos, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjectInfos, put=__cordl_internal_set_gameObjectInfos)) ::ArrayW<::GlobalNamespace::GameStateFx_GameObjectInfo>  gameObjectInfos;

/// @brief Field materialInfos, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialInfos, put=__cordl_internal_set_materialInfos)) ::ArrayW<::GlobalNamespace::GameStateFx_MaterialInfo>  materialInfos;

/// @brief Field options, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::GlobalNamespace::StateReaction_GameStateFx_EOptions  options;

/// @brief Field renderers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::GlobalNamespace::GameStateFx_RenderInfo>  renderers;

/// @brief Field soundInfo, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get_soundInfo, put=__cordl_internal_set_soundInfo)) ::GlobalNamespace::GameStateFx_SoundEntry  soundInfo;

static inline ::GlobalNamespace::GameStateFx_StateReaction* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::GameStateFx_BehaviourInfo> const& __cordl_internal_get_behaviourInfos() const;

constexpr ::ArrayW<::GlobalNamespace::GameStateFx_BehaviourInfo>& __cordl_internal_get_behaviourInfos() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::ArrayW<::GlobalNamespace::GameStateFx_GameObjectInfo> const& __cordl_internal_get_gameObjectInfos() const;

constexpr ::ArrayW<::GlobalNamespace::GameStateFx_GameObjectInfo>& __cordl_internal_get_gameObjectInfos() ;

constexpr ::ArrayW<::GlobalNamespace::GameStateFx_MaterialInfo> const& __cordl_internal_get_materialInfos() const;

constexpr ::ArrayW<::GlobalNamespace::GameStateFx_MaterialInfo>& __cordl_internal_get_materialInfos() ;

constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions const& __cordl_internal_get_options() const;

constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions& __cordl_internal_get_options() ;

constexpr ::ArrayW<::GlobalNamespace::GameStateFx_RenderInfo> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::GlobalNamespace::GameStateFx_RenderInfo>& __cordl_internal_get_renderers() ;

constexpr ::GlobalNamespace::GameStateFx_SoundEntry const& __cordl_internal_get_soundInfo() const;

constexpr ::GlobalNamespace::GameStateFx_SoundEntry& __cordl_internal_get_soundInfo() ;

constexpr void __cordl_internal_set_behaviourInfos(::ArrayW<::GlobalNamespace::GameStateFx_BehaviourInfo>  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_gameObjectInfos(::ArrayW<::GlobalNamespace::GameStateFx_GameObjectInfo>  value) ;

constexpr void __cordl_internal_set_materialInfos(::ArrayW<::GlobalNamespace::GameStateFx_MaterialInfo>  value) ;

constexpr void __cordl_internal_set_options(::GlobalNamespace::StateReaction_GameStateFx_EOptions  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::GlobalNamespace::GameStateFx_RenderInfo>  value) ;

constexpr void __cordl_internal_set_soundInfo(::GlobalNamespace::GameStateFx_SoundEntry  value) ;

/// @brief Method .ctor, addr 0x5644c64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameStateFx_StateReaction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameStateFx_StateReaction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameStateFx_StateReaction(GameStateFx_StateReaction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameStateFx_StateReaction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameStateFx_StateReaction(GameStateFx_StateReaction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{661};

/// [Tooltip("Options for what this reaction should do.")]
/// @brief Field options, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::StateReaction_GameStateFx_EOptions  ___options;

/// @brief Field delay, offset: 0x14, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field soundInfo, offset: 0x18, size: 0x20, def value: None
 ::GlobalNamespace::GameStateFx_SoundEntry  ___soundInfo;

/// @brief Field gameObjectInfos, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameStateFx_GameObjectInfo>  ___gameObjectInfos;

/// @brief Field behaviourInfos, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameStateFx_BehaviourInfo>  ___behaviourInfos;

/// @brief Field renderers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameStateFx_RenderInfo>  ___renderers;

/// @brief Field materialInfos, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameStateFx_MaterialInfo>  ___materialInfos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStateFx_StateReaction, ___options) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_StateReaction, ___delay) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_StateReaction, ___soundInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_StateReaction, ___gameObjectInfos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_StateReaction, ___behaviourInfos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_StateReaction, ___renderers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_StateReaction, ___materialInfos) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameStateFx_StateReaction) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
