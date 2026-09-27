#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineAutoFocus.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineAutoFocus_FocusTrackingMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineAutoFocus_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineAutoFocus_FocusTrackingMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineAutoFocus_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineAutoFocus.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineAutoFocus::*)()>(&::Unity::Cinemachine::CinemachineAutoFocus::Reset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaee5d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineAutoFocus.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineAutoFocus::*)()>(&::Unity::Cinemachine::CinemachineAutoFocus::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaee5d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineAutoFocus.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineAutoFocus::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineAutoFocus::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xaee5d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineAutoFocus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineAutoFocus::*)()>(&::Unity::Cinemachine::CinemachineAutoFocus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee6038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode& Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_get_FocusTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusTarget;
}
constexpr ::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode const& Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_get_FocusTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusTarget;
}
constexpr void Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_set_FocusTarget(::GlobalNamespace::CinemachineAutoFocus_FocusTrackingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FocusTarget = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_get_CustomTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_get_CustomTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomTarget;
}
constexpr void Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_set_CustomTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomTarget = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_get_FocusDepthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusDepthOffset;
}
constexpr float_t const& Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_get_FocusDepthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusDepthOffset;
}
constexpr void Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_set_FocusDepthOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FocusDepthOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachineAutoFocus::__cordl_internal_set_Damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
inline void Unity::Cinemachine::CinemachineAutoFocus::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineAutoFocus::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineAutoFocus::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineAutoFocus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineAutoFocus* Unity::Cinemachine::CinemachineAutoFocus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineAutoFocus*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineAutoFocus::CinemachineAutoFocus()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee6040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState::__cordl_internal_get_CurrentFocusDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentFocusDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState::__cordl_internal_get_CurrentFocusDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentFocusDistance;
}
constexpr void Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState::__cordl_internal_set_CurrentFocusDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentFocusDistance = value;
}
inline void Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState* Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineAutoFocus_VcamExtraState::CinemachineAutoFocus_VcamExtraState()   {
}
