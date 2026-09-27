#pragma once
// IWYU pragma private; include "Fusion/NetworkMecanimAnimator.hpp"
#include "Fusion/zzzz__AnimatorSyncSettings_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Fusion/zzzz__NetworkMecanimAnimator_AnimatorData_impl.hpp"
#include "Fusion/zzzz__RenderSource_impl.hpp"
#include "Fusion/zzzz__NetworkMecanimAnimator_def.hpp"
#include "Fusion/zzzz__IAfterAllTicks_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "Fusion/zzzz__NetworkMecanimAnimator_AnimatorData_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.get_DynamicWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Fusion::NetworkMecanimAnimator::*)()>(&::Fusion::NetworkMecanimAnimator::get_DynamicWordCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f84ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                    {::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)()>(&::Fusion::NetworkMecanimAnimator::Spawned)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f84eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                    {::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.Fusion_IAfterAllTicks_AfterAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(bool, int32_t)>(&::Fusion::NetworkMecanimAnimator::Fusion_IAfterAllTicks_AfterAllTicks)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f84f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"Fusion.IAfterAllTicks.AfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)()>(&::Fusion::NetworkMecanimAnimator::Render)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f84ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                    {::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(int32_t, bool)>(&::Fusion::NetworkMecanimAnimator::SetTrigger)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f85184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(::StringW, bool)>(&::Fusion::NetworkMecanimAnimator::SetTrigger)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f8524c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.CaptureAnimatorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)()>(&::Fusion::NetworkMecanimAnimator::CaptureAnimatorData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f84fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"CaptureAnimatorData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.ApplyAnimatorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(::Fusion::NetworkBehaviourBuffer)>(&::Fusion::NetworkMecanimAnimator::ApplyAnimatorData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f85118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"ApplyAnimatorData", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.CaptureStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(::by_ref<int32_t>)>(&::Fusion::NetworkMecanimAnimator::CaptureStates)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5f857ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"CaptureStates", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.ApplyStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(::Fusion::NetworkBehaviourBuffer, ::by_ref<int32_t>)>(&::Fusion::NetworkMecanimAnimator::ApplyStates)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5f8605c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"ApplyStates", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.CaptureParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(::by_ref<int32_t>)>(&::Fusion::NetworkMecanimAnimator::CaptureParameters)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x5f85324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"CaptureParameters", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.ApplyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(::Fusion::NetworkBehaviourBuffer, ::by_ref<int32_t>)>(&::Fusion::NetworkMecanimAnimator::ApplyParameters)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5f85c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"ApplyParameters", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.CaptureLayerWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(::by_ref<int32_t>)>(&::Fusion::NetworkMecanimAnimator::CaptureLayerWeights)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f85b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"CaptureLayerWeights", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.ApplyLayerWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)(::Fusion::NetworkBehaviourBuffer, ::by_ref<int32_t>)>(&::Fusion::NetworkMecanimAnimator::ApplyLayerWeights)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f8627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"ApplyLayerWeights", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator.EnsureInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)()>(&::Fusion::NetworkMecanimAnimator::EnsureInitialized)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f84d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkMecanimAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkMecanimAnimator::*)()>(&::Fusion::NetworkMecanimAnimator::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f864d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& Fusion::NetworkMecanimAnimator::__cordl_internal_get_Animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Fusion::NetworkMecanimAnimator::__cordl_internal_get_Animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Animator;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set_Animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Animator = value;
}
constexpr ::Fusion::RenderSource& Fusion::NetworkMecanimAnimator::__cordl_internal_get_ApplyTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyTiming;
}
constexpr ::Fusion::RenderSource const& Fusion::NetworkMecanimAnimator::__cordl_internal_get_ApplyTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyTiming;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set_ApplyTiming(::Fusion::RenderSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApplyTiming = value;
}
constexpr ::Fusion::AnimatorSyncSettings& Fusion::NetworkMecanimAnimator::__cordl_internal_get_SyncSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncSettings;
}
constexpr ::Fusion::AnimatorSyncSettings const& Fusion::NetworkMecanimAnimator::__cordl_internal_get_SyncSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SyncSettings;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set_SyncSettings(::Fusion::AnimatorSyncSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SyncSettings = value;
}
constexpr ::ArrayW<int32_t>& Fusion::NetworkMecanimAnimator::__cordl_internal_get_StateHashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateHashes;
}
constexpr ::ArrayW<int32_t> const& Fusion::NetworkMecanimAnimator::__cordl_internal_get_StateHashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateHashes;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set_StateHashes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StateHashes = value;
}
constexpr ::ArrayW<int32_t>& Fusion::NetworkMecanimAnimator::__cordl_internal_get_TriggerHashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerHashes;
}
constexpr ::ArrayW<int32_t> const& Fusion::NetworkMecanimAnimator::__cordl_internal_get_TriggerHashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerHashes;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set_TriggerHashes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerHashes = value;
}
constexpr int32_t& Fusion::NetworkMecanimAnimator::__cordl_internal_get_TotalWords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalWords;
}
constexpr int32_t const& Fusion::NetworkMecanimAnimator::__cordl_internal_get_TotalWords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalWords;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set_TotalWords(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalWords = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Fusion::NetworkMecanimAnimator::__cordl_internal_get__pendingTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingTriggers;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Fusion::NetworkMecanimAnimator::__cordl_internal_get__pendingTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingTriggers;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set__pendingTriggers(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingTriggers = value;
}
constexpr ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData& Fusion::NetworkMecanimAnimator::__cordl_internal_get__animatorData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatorData;
}
constexpr ::GlobalNamespace::NetworkMecanimAnimator_AnimatorData const& Fusion::NetworkMecanimAnimator::__cordl_internal_get__animatorData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatorData;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set__animatorData(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animatorData = value;
}
constexpr bool& Fusion::NetworkMecanimAnimator::__cordl_internal_get__isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr bool const& Fusion::NetworkMecanimAnimator::__cordl_internal_get__isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set__isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized = value;
}
constexpr int32_t& Fusion::NetworkMecanimAnimator::__cordl_internal_get__lastAppliedTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAppliedTick;
}
constexpr int32_t const& Fusion::NetworkMecanimAnimator::__cordl_internal_get__lastAppliedTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAppliedTick;
}
constexpr void Fusion::NetworkMecanimAnimator::__cordl_internal_set__lastAppliedTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastAppliedTick = value;
}
inline ::System::Nullable_1<int32_t> Fusion::NetworkMecanimAnimator::get_DynamicWordCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void Fusion::NetworkMecanimAnimator::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkMecanimAnimator::Fusion_IAfterAllTicks_AfterAllTicks(bool  resimulation, int32_t  tickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"Fusion.IAfterAllTicks.AfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::NetworkMecanimAnimator::Render()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkMecanimAnimator::SetTrigger(int32_t  triggerHash, bool  passThroughOnInputAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerHash, passThroughOnInputAuthority);
}
inline void Fusion::NetworkMecanimAnimator::SetTrigger(::StringW  trigger, bool  passThroughOnInputAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, passThroughOnInputAuthority);
}
inline void Fusion::NetworkMecanimAnimator::CaptureAnimatorData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"CaptureAnimatorData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkMecanimAnimator::ApplyAnimatorData(::Fusion::NetworkBehaviourBuffer  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"ApplyAnimatorData", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Fusion::NetworkMecanimAnimator::CaptureStates(::by_ref<int32_t>  wordOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"CaptureStates", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordOffset);
}
inline void Fusion::NetworkMecanimAnimator::ApplyStates(::Fusion::NetworkBehaviourBuffer  buffer, ::by_ref<int32_t>  wordOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"ApplyStates", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, wordOffset);
}
inline void Fusion::NetworkMecanimAnimator::CaptureParameters(::by_ref<int32_t>  wordOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"CaptureParameters", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordOffset);
}
inline void Fusion::NetworkMecanimAnimator::ApplyParameters(::Fusion::NetworkBehaviourBuffer  buffer, ::by_ref<int32_t>  wordOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"ApplyParameters", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, wordOffset);
}
inline void Fusion::NetworkMecanimAnimator::CaptureLayerWeights(::by_ref<int32_t>  wordOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"CaptureLayerWeights", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordOffset);
}
inline void Fusion::NetworkMecanimAnimator::ApplyLayerWeights(::Fusion::NetworkBehaviourBuffer  buffer, ::by_ref<int32_t>  wordOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"ApplyLayerWeights", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, wordOffset);
}
inline void Fusion::NetworkMecanimAnimator::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkMecanimAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkMecanimAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkMecanimAnimator* Fusion::NetworkMecanimAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkMecanimAnimator*>());
}
/// @brief Convert operator to "::Fusion::IAfterAllTicks"
constexpr  Fusion::NetworkMecanimAnimator::operator ::Fusion::IAfterAllTicks*() noexcept {
return static_cast<::Fusion::IAfterAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IAfterAllTicks"
constexpr ::Fusion::IAfterAllTicks* Fusion::NetworkMecanimAnimator::i___Fusion__IAfterAllTicks() noexcept {
return static_cast<::Fusion::IAfterAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::NetworkMecanimAnimator::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::NetworkMecanimAnimator::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkMecanimAnimator::NetworkMecanimAnimator()   {
}
