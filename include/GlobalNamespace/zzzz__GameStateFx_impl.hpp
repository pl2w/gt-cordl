#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_BehaviourInfo_impl.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_GameObjectInfo_impl.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_MaterialInfo_impl.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_RenderInfo_impl.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_SoundEntry_impl.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_StateReaction_EOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_def.hpp"
#include "GlobalNamespace/zzzz__GTEnumValueMap_1_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_BehaviourInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_GameObjectInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_MaterialInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_RenderInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_SoundEntry_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_StateReaction_EOptions_def.hpp"
#include "GlobalNamespace/zzzz__GameStateFx_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "GlobalNamespace/zzzz__IGameStateProvider_def.hpp"
#include "GlobalNamespace/zzzz__IGameStateReceiver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameStateFx.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStateFx::*)()>(&::GlobalNamespace::GameStateFx::Awake)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x564372c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx._DelaySortCompare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::GameStateFx_StateReaction*, ::GlobalNamespace::GameStateFx_StateReaction*)>(&::GlobalNamespace::GameStateFx::_DelaySortCompare)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5644394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"_DelaySortCompare", {}, {::i2c::type_of<::GlobalNamespace::GameStateFx_StateReaction*>(), ::i2c::type_of<::GlobalNamespace::GameStateFx_StateReaction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStateFx::*)()>(&::GlobalNamespace::GameStateFx::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56443b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStateFx::*)()>(&::GlobalNamespace::GameStateFx::OnDisable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x56444b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx.IGameStateReceiver_GameStateReceiverOnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStateFx::*)(int64_t, int64_t)>(&::GlobalNamespace::GameStateFx::IGameStateReceiver_GameStateReceiverOnStateChanged)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x56445a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"IGameStateReceiver.GameStateReceiverOnStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx.IDelayedExecListener_OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStateFx::*)(int32_t)>(&::GlobalNamespace::GameStateFx::IDelayedExecListener_OnDelayedAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5644a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx._PerformReactions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GameStateFx_StateReaction*)>(&::GlobalNamespace::GameStateFx::_PerformReactions)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5644748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"_PerformReactions", {}, {::i2c::type_of<::GlobalNamespace::GameStateFx_StateReaction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx._IsAllValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameStateFx::*)()>(&::GlobalNamespace::GameStateFx::_IsAllValid)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x5643b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"_IsAllValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx._IsOneValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameStateFx::*)(bool, ::StringW)>(&::GlobalNamespace::GameStateFx::_IsOneValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5644b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"_IsOneValid", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameStateFx._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStateFx::*)()>(&::GlobalNamespace::GameStateFx::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5644b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GameStateFx::__cordl_internal_get__isValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isValid;
}
constexpr bool const& GlobalNamespace::GameStateFx::__cordl_internal_get__isValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isValid;
}
constexpr void GlobalNamespace::GameStateFx::__cordl_internal_set__isValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isValid = value;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& GlobalNamespace::GameStateFx::__cordl_internal_get_m_stateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_stateProvider;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& GlobalNamespace::GameStateFx::__cordl_internal_get_m_stateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_stateProvider;
}
constexpr void GlobalNamespace::GameStateFx::__cordl_internal_set_m_stateProvider(::UnityW<::UnityEngine::MonoBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_stateProvider = value;
}
constexpr ::GlobalNamespace::IGameStateProvider*& GlobalNamespace::GameStateFx::__cordl_internal_get__stateProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateProvider;
}
constexpr ::GlobalNamespace::IGameStateProvider* const& GlobalNamespace::GameStateFx::__cordl_internal_get__stateProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateProvider;
}
constexpr void GlobalNamespace::GameStateFx::__cordl_internal_set__stateProvider(::GlobalNamespace::IGameStateProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateProvider = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GameStateFx::__cordl_internal_get_m_defaultAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GameStateFx::__cordl_internal_get_m_defaultAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultAudioSource;
}
constexpr void GlobalNamespace::GameStateFx::__cordl_internal_set_m_defaultAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultAudioSource = value;
}
constexpr bool& GlobalNamespace::GameStateFx::__cordl_internal_get__hasDefaultAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasDefaultAudioSource;
}
constexpr bool const& GlobalNamespace::GameStateFx::__cordl_internal_get__hasDefaultAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasDefaultAudioSource;
}
constexpr void GlobalNamespace::GameStateFx::__cordl_internal_set__hasDefaultAudioSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasDefaultAudioSource = value;
}
constexpr ::GlobalNamespace::GTEnumValueMap_1<::ArrayW<::GlobalNamespace::GameStateFx_StateReaction*>>*& GlobalNamespace::GameStateFx::__cordl_internal_get_m_stateMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_stateMap;
}
constexpr ::GlobalNamespace::GTEnumValueMap_1<::ArrayW<::GlobalNamespace::GameStateFx_StateReaction*>>* const& GlobalNamespace::GameStateFx::__cordl_internal_get_m_stateMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_stateMap;
}
constexpr void GlobalNamespace::GameStateFx::__cordl_internal_set_m_stateMap(::GlobalNamespace::GTEnumValueMap_1<::ArrayW<::GlobalNamespace::GameStateFx_StateReaction*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_stateMap = value;
}
constexpr int32_t& GlobalNamespace::GameStateFx::__cordl_internal_get__delayedExecContextFrameNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedExecContextFrameNum;
}
constexpr int32_t const& GlobalNamespace::GameStateFx::__cordl_internal_get__delayedExecContextFrameNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayedExecContextFrameNum;
}
constexpr void GlobalNamespace::GameStateFx::__cordl_internal_set__delayedExecContextFrameNum(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayedExecContextFrameNum = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GameStateFx_StateReaction*>*& GlobalNamespace::GameStateFx::__cordl_internal_get__reactionQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactionQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GameStateFx_StateReaction*>* const& GlobalNamespace::GameStateFx::__cordl_internal_get__reactionQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reactionQueue;
}
constexpr void GlobalNamespace::GameStateFx::__cordl_internal_set__reactionQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::GameStateFx_StateReaction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reactionQueue = value;
}
inline void GlobalNamespace::GameStateFx::setStaticF__g_materialsCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "_g_materialsCache", ::GlobalNamespace::GameStateFx*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GlobalNamespace::GameStateFx::getStaticF__g_materialsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "_g_materialsCache", ::GlobalNamespace::GameStateFx*>();
}
inline void GlobalNamespace::GameStateFx::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GameStateFx::_DelaySortCompare(::GlobalNamespace::GameStateFx_StateReaction*  a, ::GlobalNamespace::GameStateFx_StateReaction*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"_DelaySortCompare", {}, {::i2c::type_of<::GlobalNamespace::GameStateFx_StateReaction*>(), ::i2c::type_of<::GlobalNamespace::GameStateFx_StateReaction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::GameStateFx::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameStateFx::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameStateFx::IGameStateReceiver_GameStateReceiverOnStateChanged(int64_t  oldState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"IGameStateReceiver.GameStateReceiverOnStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void GlobalNamespace::GameStateFx::IDelayedExecListener_OnDelayedAction(int32_t  contextFrameNum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextFrameNum);
}
inline void GlobalNamespace::GameStateFx::_PerformReactions(::GlobalNamespace::GameStateFx_StateReaction*  reaction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"_PerformReactions", {}, {::i2c::type_of<::GlobalNamespace::GameStateFx_StateReaction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reaction);
}
inline bool GlobalNamespace::GameStateFx::_IsAllValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"_IsAllValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameStateFx::_IsOneValid(bool  isValidCondition, ::StringW  msgFailReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {"_IsOneValid", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isValidCondition, msgFailReason);
}
inline void GlobalNamespace::GameStateFx::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameStateFx* GlobalNamespace::GameStateFx::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameStateFx*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameStateReceiver"
constexpr  GlobalNamespace::GameStateFx::operator ::GlobalNamespace::IGameStateReceiver*() noexcept {
return static_cast<::GlobalNamespace::IGameStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameStateReceiver"
constexpr ::GlobalNamespace::IGameStateReceiver* GlobalNamespace::GameStateFx::i___GlobalNamespace__IGameStateReceiver() noexcept {
return static_cast<::GlobalNamespace::IGameStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::GameStateFx::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::GameStateFx::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameStateFx::GameStateFx()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameStateFx_StateReaction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameStateFx_StateReaction::*)()>(&::GlobalNamespace::GameStateFx_StateReaction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5644c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx_StateReaction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::GlobalNamespace::StateReaction_GameStateFx_EOptions const& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_set_options(::GlobalNamespace::StateReaction_GameStateFx_EOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
constexpr float_t& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::GlobalNamespace::GameStateFx_SoundEntry& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_soundInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundInfo;
}
constexpr ::GlobalNamespace::GameStateFx_SoundEntry const& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_soundInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundInfo;
}
constexpr void GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_set_soundInfo(::GlobalNamespace::GameStateFx_SoundEntry  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundInfo = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameStateFx_GameObjectInfo>& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_gameObjectInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfos;
}
constexpr ::ArrayW<::GlobalNamespace::GameStateFx_GameObjectInfo> const& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_gameObjectInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectInfos;
}
constexpr void GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_set_gameObjectInfos(::ArrayW<::GlobalNamespace::GameStateFx_GameObjectInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjectInfos = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameStateFx_BehaviourInfo>& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_behaviourInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviourInfos;
}
constexpr ::ArrayW<::GlobalNamespace::GameStateFx_BehaviourInfo> const& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_behaviourInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviourInfos;
}
constexpr void GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_set_behaviourInfos(::ArrayW<::GlobalNamespace::GameStateFx_BehaviourInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviourInfos = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameStateFx_RenderInfo>& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::GlobalNamespace::GameStateFx_RenderInfo> const& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_set_renderers(::ArrayW<::GlobalNamespace::GameStateFx_RenderInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameStateFx_MaterialInfo>& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_materialInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialInfos;
}
constexpr ::ArrayW<::GlobalNamespace::GameStateFx_MaterialInfo> const& GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_get_materialInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialInfos;
}
constexpr void GlobalNamespace::GameStateFx_StateReaction::__cordl_internal_set_materialInfos(::ArrayW<::GlobalNamespace::GameStateFx_MaterialInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialInfos = value;
}
inline void GlobalNamespace::GameStateFx_StateReaction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameStateFx_StateReaction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameStateFx_StateReaction* GlobalNamespace::GameStateFx_StateReaction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameStateFx_StateReaction*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameStateFx_StateReaction::GameStateFx_StateReaction()   {
}
