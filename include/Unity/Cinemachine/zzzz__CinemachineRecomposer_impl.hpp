#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineRecomposer.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineRecomposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRecomposer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRecomposer::*)()>(&::Unity::Cinemachine::CinemachineRecomposer::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae96e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRecomposer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRecomposer::*)()>(&::Unity::Cinemachine::CinemachineRecomposer::OnValidate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xae96eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRecomposer.PrePipelineMutateCameraStateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRecomposer::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineRecomposer::PrePipelineMutateCameraStateCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae96ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRecomposer.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRecomposer::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineRecomposer::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xae96efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRecomposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRecomposer::*)()>(&::Unity::Cinemachine::CinemachineRecomposer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae971cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineCore_Stage& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_ApplyAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyAfter;
}
constexpr ::GlobalNamespace::CinemachineCore_Stage const& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_ApplyAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyAfter;
}
constexpr void Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_set_ApplyAfter(::GlobalNamespace::CinemachineCore_Stage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApplyAfter = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_Tilt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tilt;
}
constexpr float_t const& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_Tilt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tilt;
}
constexpr void Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_set_Tilt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tilt = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_Pan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pan;
}
constexpr float_t const& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_Pan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pan;
}
constexpr void Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_set_Pan(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pan = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_Dutch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dutch;
}
constexpr float_t const& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_Dutch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dutch;
}
constexpr void Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_set_Dutch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Dutch = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_ZoomScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZoomScale;
}
constexpr float_t const& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_ZoomScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZoomScale;
}
constexpr void Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_set_ZoomScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZoomScale = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_FollowAttachment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowAttachment;
}
constexpr float_t const& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_FollowAttachment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowAttachment;
}
constexpr void Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_set_FollowAttachment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FollowAttachment = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_LookAtAttachment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LookAtAttachment;
}
constexpr float_t const& Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_get_LookAtAttachment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LookAtAttachment;
}
constexpr void Unity::Cinemachine::CinemachineRecomposer::__cordl_internal_set_LookAtAttachment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LookAtAttachment = value;
}
inline void Unity::Cinemachine::CinemachineRecomposer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineRecomposer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineRecomposer::PrePipelineMutateCameraStateCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineRecomposer::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineRecomposer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRecomposer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineRecomposer* Unity::Cinemachine::CinemachineRecomposer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineRecomposer*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineRecomposer::CinemachineRecomposer()   {
}
