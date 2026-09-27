#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseListener.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_ImpulseReaction_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_SignalCombinationModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_ImpulseReaction_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_SignalCombinationModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseListener.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseListener::*)()>(&::Unity::Cinemachine::CinemachineImpulseListener::Reset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaee3908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseListener*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseListener.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseListener::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineImpulseListener::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xaee3950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseListener*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseListener*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseListener::*)()>(&::Unity::Cinemachine::CinemachineImpulseListener::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee40a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineCore_Stage& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_ApplyAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyAfter;
}
constexpr ::GlobalNamespace::CinemachineCore_Stage const& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_ApplyAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyAfter;
}
constexpr void Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_set_ApplyAfter(::GlobalNamespace::CinemachineCore_Stage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApplyAfter = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_ChannelMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelMask;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_ChannelMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelMask;
}
constexpr void Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_set_ChannelMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChannelMask = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_Gain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gain;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_Gain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gain;
}
constexpr void Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_set_Gain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Gain = value;
}
constexpr bool& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_Use2DDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Use2DDistance;
}
constexpr bool const& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_Use2DDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Use2DDistance;
}
constexpr void Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_set_Use2DDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Use2DDistance = value;
}
constexpr bool& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_UseCameraSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseCameraSpace;
}
constexpr bool const& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_UseCameraSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseCameraSpace;
}
constexpr void Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_set_UseCameraSpace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseCameraSpace = value;
}
constexpr ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_SignalCombinationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignalCombinationMode;
}
constexpr ::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes const& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_SignalCombinationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SignalCombinationMode;
}
constexpr void Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_set_SignalCombinationMode(::GlobalNamespace::CinemachineImpulseListener_SignalCombinationModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SignalCombinationMode = value;
}
constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_ReactionSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactionSettings;
}
constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction const& Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_get_ReactionSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactionSettings;
}
constexpr void Unity::Cinemachine::CinemachineImpulseListener::__cordl_internal_set_ReactionSettings(::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReactionSettings = value;
}
inline void Unity::Cinemachine::CinemachineImpulseListener::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseListener*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseListener::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseListener*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineImpulseListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineImpulseListener* Unity::Cinemachine::CinemachineImpulseListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineImpulseListener*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineImpulseListener::CinemachineImpulseListener()   {
}
