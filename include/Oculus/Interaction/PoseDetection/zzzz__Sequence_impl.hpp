#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Sequence.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__Sequence_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__Sequence_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::Sequence::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.get_RemainActiveWhile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::PoseDetection::Sequence::*)()>(&::Oculus::Interaction::PoseDetection::Sequence::get_RemainActiveWhile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"get_RemainActiveWhile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.set_RemainActiveWhile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Sequence::set_RemainActiveWhile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"set_RemainActiveWhile", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.get_CurrentActivationStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PoseDetection::Sequence::*)()>(&::Oculus::Interaction::PoseDetection::Sequence::get_CurrentActivationStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"get_CurrentActivationStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.set_CurrentActivationStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)(int32_t)>(&::Oculus::Interaction::PoseDetection::Sequence::set_CurrentActivationStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a3a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"set_CurrentActivationStep", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)()>(&::Oculus::Interaction::PoseDetection::Sequence::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4a3a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)()>(&::Oculus::Interaction::PoseDetection::Sequence::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa4a3b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)()>(&::Oculus::Interaction::PoseDetection::Sequence::Update)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xa4a3c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.EnterNextStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)(float_t)>(&::Oculus::Interaction::PoseDetection::Sequence::EnterNextStep)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4a3fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"EnterNextStep", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)()>(&::Oculus::Interaction::PoseDetection::Sequence::ResetState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4a3af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"ResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::Sequence::*)()>(&::Oculus::Interaction::PoseDetection::Sequence::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.set_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)(bool)>(&::Oculus::Interaction::PoseDetection::Sequence::set_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.InjectOptionalStepsToActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)(::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>)>(&::Oculus::Interaction::PoseDetection::Sequence::InjectOptionalStepsToActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a405c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"InjectOptionalStepsToActivate", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.InjectOptionalRemainActiveWhile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Sequence::InjectOptionalRemainActiveWhile)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4a4064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"InjectOptionalRemainActiveWhile", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::Sequence::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence::*)()>(&::Oculus::Interaction::PoseDetection::Sequence::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4a413c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__stepsToActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepsToActivate;
}
constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*> const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__stepsToActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepsToActivate;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__stepsToActivate(::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stepsToActivate = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__remainActiveWhile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remainActiveWhile;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__remainActiveWhile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remainActiveWhile;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__remainActiveWhile(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remainActiveWhile = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__remainActiveCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remainActiveCooldown;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__remainActiveCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remainActiveCooldown;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__remainActiveCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remainActiveCooldown = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__RemainActiveWhile_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemainActiveWhile_k__BackingField;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__RemainActiveWhile_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemainActiveWhile_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__RemainActiveWhile_k__BackingField(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RemainActiveWhile_k__BackingField = value;
}
constexpr int32_t& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__CurrentActivationStep_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentActivationStep_k__BackingField;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__CurrentActivationStep_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentActivationStep_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__CurrentActivationStep_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentActivationStep_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__currentStepActivatedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStepActivatedTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__currentStepActivatedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStepActivatedTime;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__currentStepActivatedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentStepActivatedTime = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__stepFailedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepFailedTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__stepFailedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepFailedTime;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__stepFailedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stepFailedTime = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__currentStepWasActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStepWasActive;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__currentStepWasActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStepWasActive;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__currentStepWasActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentStepWasActive = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__cooldownExceededTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldownExceededTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__cooldownExceededTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldownExceededTime;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__cooldownExceededTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cooldownExceededTime = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__wasRemainActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasRemainActive;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__wasRemainActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasRemainActive;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__wasRemainActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasRemainActive = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
inline void Oculus::Interaction::PoseDetection::Sequence::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::Sequence::get_RemainActiveWhile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"get_RemainActiveWhile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence::set_RemainActiveWhile(::Oculus::Interaction::IActiveState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"set_RemainActiveWhile", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::PoseDetection::Sequence::get_CurrentActivationStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"get_CurrentActivationStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence::set_CurrentActivationStep(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"set_CurrentActivationStep", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::Sequence::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence::EnterNextStep(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"EnterNextStep", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void Oculus::Interaction::PoseDetection::Sequence::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::Sequence::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::Sequence::InjectOptionalStepsToActivate(::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>  stepsToActivate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"InjectOptionalStepsToActivate", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stepsToActivate);
}
inline void Oculus::Interaction::PoseDetection::Sequence::InjectOptionalRemainActiveWhile(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"InjectOptionalRemainActiveWhile", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::PoseDetection::Sequence::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::PoseDetection::Sequence::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Sequence* Oculus::Interaction::PoseDetection::Sequence::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Sequence*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::PoseDetection::Sequence::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::Sequence::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::PoseDetection::Sequence::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::PoseDetection::Sequence::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Sequence::Sequence()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence___c::*)()>(&::Oculus::Interaction::PoseDetection::Sequence___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence___c.__ctor_b__33_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::Sequence___c::*)()>(&::Oculus::Interaction::PoseDetection::Sequence___c::__ctor_b__33_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence___c*>(),
                        {"<.ctor>b__33_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::Sequence___c::setStaticF___9(::Oculus::Interaction::PoseDetection::Sequence___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::Sequence___c*, "<>9", ::Oculus::Interaction::PoseDetection::Sequence___c*>(std::forward<::Oculus::Interaction::PoseDetection::Sequence___c*>(value));
}
inline ::Oculus::Interaction::PoseDetection::Sequence___c* Oculus::Interaction::PoseDetection::Sequence___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::Sequence___c*, "<>9", ::Oculus::Interaction::PoseDetection::Sequence___c*>();
}
inline void Oculus::Interaction::PoseDetection::Sequence___c::setStaticF___9__33_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__33_0", ::Oculus::Interaction::PoseDetection::Sequence___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::PoseDetection::Sequence___c::getStaticF___9__33_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__33_0", ::Oculus::Interaction::PoseDetection::Sequence___c*>();
}
inline void Oculus::Interaction::PoseDetection::Sequence___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::Sequence___c::__ctor_b__33_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence___c*>(),
                        {"<.ctor>b__33_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Sequence___c* Oculus::Interaction::PoseDetection::Sequence___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Sequence___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Sequence___c::Sequence___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_DebugModel.GetChildrenCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::PoseDetection::Sequence_DebugModel::*)(::Oculus::Interaction::PoseDetection::Sequence*, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*)>(&::Oculus::Interaction::PoseDetection::Sequence_DebugModel::GetChildrenCoroutine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4a42a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_DebugModel*>(),
                        {"GetChildrenCoroutine", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_DebugModel.GetChildrenAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* (::Oculus::Interaction::PoseDetection::Sequence_DebugModel::*)(::Oculus::Interaction::PoseDetection::Sequence*)>(&::Oculus::Interaction::PoseDetection::Sequence_DebugModel::GetChildrenAsync)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4a4354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_DebugModel*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_DebugModel*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_DebugModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence_DebugModel::*)()>(&::Oculus::Interaction::PoseDetection::Sequence_DebugModel::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4a44a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::IEnumerator* Oculus::Interaction::PoseDetection::Sequence_DebugModel::GetChildrenCoroutine(::Oculus::Interaction::PoseDetection::Sequence*  sequence, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*  tcs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_DebugModel*>(),
                        {"GetChildrenCoroutine", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence*>(), ::i2c::type_of<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, sequence, tcs);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* Oculus::Interaction::PoseDetection::Sequence_DebugModel::GetChildrenAsync(::Oculus::Interaction::PoseDetection::Sequence*  activeState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_DebugModel*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*>(this, ___internal_method, activeState);
}
inline void Oculus::Interaction::PoseDetection::Sequence_DebugModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_DebugModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Sequence_DebugModel* Oculus::Interaction::PoseDetection::Sequence_DebugModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Sequence_DebugModel*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Sequence_DebugModel::Sequence_DebugModel()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::*)(int32_t)>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4a432c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::*)()>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4a4594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::*)()>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xa4a4598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::*)()>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a495c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::*)()>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4a4964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::*)()>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a499c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Sequence>& Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_get_sequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequence;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Sequence> const& Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_get_sequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequence;
}
constexpr void Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_set_sequence(::UnityW<::Oculus::Interaction::PoseDetection::Sequence>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequence = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*& Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* const& Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
inline void Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0* Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0::DebugModel_Sequence__GetChildrenCoroutine_d__0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::*)()>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c._GetChildrenCoroutine_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::*)(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*)>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::_GetChildrenCoroutine_b__0_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4a4558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(),
                        {"<GetChildrenCoroutine>b__0_0", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c._GetChildrenCoroutine_b__0_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::*)(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*)>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::_GetChildrenCoroutine_b__0_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4a4574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(),
                        {"<GetChildrenCoroutine>b__0_1", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c._GetChildrenCoroutine_b__0_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::_GetChildrenCoroutine_b__0_2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4a4588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(),
                        {"<GetChildrenCoroutine>b__0_2", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::setStaticF___9(::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*, "<>9", ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(std::forward<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(value));
}
inline ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c* Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*, "<>9", ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>();
}
inline void Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::setStaticF___9__0_0(::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,bool>*, "<>9__0_0", ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(std::forward<::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,bool>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,bool>* Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,bool>*, "<>9__0_0", ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>();
}
inline void Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::setStaticF___9__0_1(::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,::Oculus::Interaction::IActiveState*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,::Oculus::Interaction::IActiveState*>*, "<>9__0_1", ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(std::forward<::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,::Oculus::Interaction::IActiveState*>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,::Oculus::Interaction::IActiveState*>* Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::getStaticF___9__0_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,::Oculus::Interaction::IActiveState*>*, "<>9__0_1", ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>();
}
inline void Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::setStaticF___9__0_2(::System::Func_2<::Oculus::Interaction::IActiveState*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::IActiveState*,bool>*, "<>9__0_2", ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(std::forward<::System::Func_2<::Oculus::Interaction::IActiveState*,bool>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::IActiveState*,bool>* Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::getStaticF___9__0_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::IActiveState*,bool>*, "<>9__0_2", ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>();
}
inline void Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::_GetChildrenCoroutine_b__0_0(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(),
                        {"<GetChildrenCoroutine>b__0_0", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::_GetChildrenCoroutine_b__0_1(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*  step)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(),
                        {"<GetChildrenCoroutine>b__0_1", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method, step);
}
inline bool Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::_GetChildrenCoroutine_b__0_2(::Oculus::Interaction::IActiveState*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>(),
                        {"<GetChildrenCoroutine>b__0_2", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c* Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c::DebugModel_Sequence___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep.get_ActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::*)()>(&::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::get_ActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"get_ActiveState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep.set_ActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::set_ActiveState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"set_ActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep.get_MinActiveTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::*)()>(&::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::get_MinActiveTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"get_MinActiveTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep.get_MaxStepTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::*)()>(&::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::get_MaxStepTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"get_MaxStepTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::*)()>(&::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a4254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::*)(::Oculus::Interaction::IActiveState*, float_t, float_t)>(&::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4a425c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::*)()>(&::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4a3bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_get__ActiveState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveState_k__BackingField;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_get__ActiveState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveState_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_set__ActiveState_k__BackingField(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveState_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_get__minActiveTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minActiveTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_get__minActiveTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minActiveTime;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_set__minActiveTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minActiveTime = value;
}
constexpr float_t& Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_get__maxStepTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStepTime;
}
constexpr float_t const& Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_get__maxStepTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStepTime;
}
constexpr void Oculus::Interaction::PoseDetection::Sequence_ActivationStep::__cordl_internal_set__maxStepTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxStepTime = value;
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::Sequence_ActivationStep::get_ActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"get_ActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence_ActivationStep::set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"set_ActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PoseDetection::Sequence_ActivationStep::get_MinActiveTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"get_MinActiveTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::Sequence_ActivationStep::get_MaxStepTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"get_MaxStepTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence_ActivationStep::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::Sequence_ActivationStep::_ctor(::Oculus::Interaction::IActiveState*  activeState, float_t  minActiveTime, float_t  maxStepTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState, minActiveTime, maxStepTime);
}
inline void Oculus::Interaction::PoseDetection::Sequence_ActivationStep::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep* Oculus::Interaction::PoseDetection::Sequence_ActivationStep::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>());
}
inline ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep* Oculus::Interaction::PoseDetection::Sequence_ActivationStep::New_ctor(::Oculus::Interaction::IActiveState*  activeState, float_t  minActiveTime, float_t  maxStepTime)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>(activeState, minActiveTime, maxStepTime));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep::Sequence_ActivationStep()   {
}
