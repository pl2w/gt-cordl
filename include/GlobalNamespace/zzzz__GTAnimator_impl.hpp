#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAnimator.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTAnimator_def.hpp"
#include "GlobalNamespace/zzzz__GTAnimator_AnimClipAndGObjs_def.hpp"
#include "GlobalNamespace/zzzz__GTEnumValueMap_1_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.get_animationComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animation> (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::get_animationComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5644c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"get_animationComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.get_hasAnimationComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::get_hasAnimationComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5644c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"get_hasAnimationComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.set_hasAnimationComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)(bool)>(&::GlobalNamespace::GTAnimator::set_hasAnimationComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5644c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"set_hasAnimationComponent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5644c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::Init)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5644c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5644fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::get_IsPlaying)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5644ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)(int64_t)>(&::GlobalNamespace::GTAnimator::SetState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5645008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"SetState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.TryPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTAnimator::*)(int64_t)>(&::GlobalNamespace::GTAnimator::TryPlay)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5645054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"TryPlay", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.IDelayedExecListener_OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)(int32_t)>(&::GlobalNamespace::GTAnimator::IDelayedExecListener_OnDelayedAction)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5645330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::Stop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5645524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator.QueueState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)(int64_t)>(&::GlobalNamespace::GTAnimator::QueueState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56455a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"QueueState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator._IsCurrentClipLoopable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::_IsCurrentClipLoopable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x564562c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"_IsCurrentClipLoopable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTAnimator::*)()>(&::GlobalNamespace::GTAnimator::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56456f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GTAnimator::__cordl_internal_get_m_animationComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_animationComponent;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GTAnimator::__cordl_internal_get_m_animationComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_animationComponent;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set_m_animationComponent(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_animationComponent = value;
}
constexpr bool& GlobalNamespace::GTAnimator::__cordl_internal_get__hasAnimationComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasAnimationComponent_k__BackingField;
}
constexpr bool const& GlobalNamespace::GTAnimator::__cordl_internal_get__hasAnimationComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasAnimationComponent_k__BackingField;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set__hasAnimationComponent_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasAnimationComponent_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GTAnimator::__cordl_internal_get_m_animatedGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_animatedGameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GTAnimator::__cordl_internal_get_m_animatedGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_animatedGameObjects;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set_m_animatedGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_animatedGameObjects = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GTAnimator::__cordl_internal_get_m_defaultStaticGameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultStaticGameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GTAnimator::__cordl_internal_get_m_defaultStaticGameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultStaticGameObjects;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set_m_defaultStaticGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultStaticGameObjects = value;
}
constexpr ::GlobalNamespace::GTEnumValueMap_1<::GlobalNamespace::GTAnimator_AnimClipAndGObjs>*& GlobalNamespace::GTAnimator::__cordl_internal_get_m_animationMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_animationMap;
}
constexpr ::GlobalNamespace::GTEnumValueMap_1<::GlobalNamespace::GTAnimator_AnimClipAndGObjs>* const& GlobalNamespace::GTAnimator::__cordl_internal_get_m_animationMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_animationMap;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set_m_animationMap(::GlobalNamespace::GTEnumValueMap_1<::GlobalNamespace::GTAnimator_AnimClipAndGObjs>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_animationMap = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GTAnimator::__cordl_internal_get__allStaticGobjs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allStaticGobjs;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GTAnimator::__cordl_internal_get__allStaticGobjs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allStaticGobjs;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set__allStaticGobjs(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allStaticGobjs = value;
}
constexpr int64_t& GlobalNamespace::GTAnimator::__cordl_internal_get__currentStateAsLong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStateAsLong;
}
constexpr int64_t const& GlobalNamespace::GTAnimator::__cordl_internal_get__currentStateAsLong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStateAsLong;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set__currentStateAsLong(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentStateAsLong = value;
}
constexpr int32_t& GlobalNamespace::GTAnimator::__cordl_internal_get__frameCountWhenLastPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameCountWhenLastPlayed;
}
constexpr int32_t const& GlobalNamespace::GTAnimator::__cordl_internal_get__frameCountWhenLastPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameCountWhenLastPlayed;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set__frameCountWhenLastPlayed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameCountWhenLastPlayed = value;
}
constexpr bool& GlobalNamespace::GTAnimator::__cordl_internal_get__wasInitCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasInitCalled;
}
constexpr bool const& GlobalNamespace::GTAnimator::__cordl_internal_get__wasInitCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasInitCalled;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set__wasInitCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasInitCalled = value;
}
constexpr int64_t& GlobalNamespace::GTAnimator::__cordl_internal_get__queuedStateAsLong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedStateAsLong;
}
constexpr int64_t const& GlobalNamespace::GTAnimator::__cordl_internal_get__queuedStateAsLong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedStateAsLong;
}
constexpr void GlobalNamespace::GTAnimator::__cordl_internal_set__queuedStateAsLong(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queuedStateAsLong = value;
}
inline ::UnityW<::UnityEngine::Animation> GlobalNamespace::GTAnimator::get_animationComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"get_animationComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animation>>(this, ___internal_method);
}
inline bool GlobalNamespace::GTAnimator::get_hasAnimationComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"get_hasAnimationComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GTAnimator::set_hasAnimationComponent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"set_hasAnimationComponent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GTAnimator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTAnimator::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTAnimator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GTAnimator::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GTAnimator::SetState(int64_t  enumValueAsLong)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"SetState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumValueAsLong);
}
inline bool GlobalNamespace::GTAnimator::TryPlay(int64_t  enumValueAsLong)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"TryPlay", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enumValueAsLong);
}
inline void GlobalNamespace::GTAnimator::IDelayedExecListener_OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline void GlobalNamespace::GTAnimator::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTAnimator::QueueState(int64_t  enumValueAsLong)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"QueueState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumValueAsLong);
}
inline bool GlobalNamespace::GTAnimator::_IsCurrentClipLoopable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {"_IsCurrentClipLoopable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GTAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTAnimator* GlobalNamespace::GTAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTAnimator*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::GTAnimator::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::GTAnimator::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTAnimator::GTAnimator()   {
}
