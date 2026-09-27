#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFollowZoom.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFollowZoom_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFollowZoom_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollowZoom.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollowZoom::*)()>(&::Unity::Cinemachine::CinemachineFollowZoom::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae924a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollowZoom.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollowZoom::*)()>(&::Unity::Cinemachine::CinemachineFollowZoom::OnValidate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xae924bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollowZoom.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFollowZoom::*)()>(&::Unity::Cinemachine::CinemachineFollowZoom::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae92508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollowZoom.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollowZoom::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineFollowZoom::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xae92510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollowZoom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollowZoom::*)()>(&::Unity::Cinemachine::CinemachineFollowZoom::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae927b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_get_Width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Width;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_get_Width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Width;
}
constexpr void Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_set_Width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Width = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_set_Damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_get_FovRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FovRange;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_get_FovRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FovRange;
}
constexpr void Unity::Cinemachine::CinemachineFollowZoom::__cordl_internal_set_FovRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FovRange = value;
}
inline void Unity::Cinemachine::CinemachineFollowZoom::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFollowZoom::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineFollowZoom::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFollowZoom::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineFollowZoom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineFollowZoom* Unity::Cinemachine::CinemachineFollowZoom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineFollowZoom*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineFollowZoom::CinemachineFollowZoom()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae927d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState::__cordl_internal_get_m_PreviousFrameZoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFrameZoom;
}
constexpr float_t const& Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState::__cordl_internal_get_m_PreviousFrameZoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFrameZoom;
}
constexpr void Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState::__cordl_internal_set_m_PreviousFrameZoom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousFrameZoom = value;
}
inline void Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState* Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineFollowZoom_VcamExtraState::CinemachineFollowZoom_VcamExtraState()   {
}
