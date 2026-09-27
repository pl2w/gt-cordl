#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraOffset.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraOffset_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraOffset.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraOffset::*)()>(&::Unity::Cinemachine::CinemachineCameraOffset::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae88c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraOffset*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraOffset.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraOffset::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineCameraOffset::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xae88ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraOffset*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraOffset*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraOffset::*)()>(&::Unity::Cinemachine::CinemachineCameraOffset::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae88ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraOffset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_get_Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_get_Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr void Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_set_Offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Offset = value;
}
constexpr ::GlobalNamespace::CinemachineCore_Stage& Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_get_ApplyAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyAfter;
}
constexpr ::GlobalNamespace::CinemachineCore_Stage const& Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_get_ApplyAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApplyAfter;
}
constexpr void Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_set_ApplyAfter(::GlobalNamespace::CinemachineCore_Stage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApplyAfter = value;
}
constexpr bool& Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_get_PreserveComposition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreserveComposition;
}
constexpr bool const& Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_get_PreserveComposition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreserveComposition;
}
constexpr void Unity::Cinemachine::CinemachineCameraOffset::__cordl_internal_set_PreserveComposition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreserveComposition = value;
}
inline void Unity::Cinemachine::CinemachineCameraOffset::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraOffset*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraOffset::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraOffset*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineCameraOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraOffset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCameraOffset* Unity::Cinemachine::CinemachineCameraOffset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCameraOffset*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCameraOffset::CinemachineCameraOffset()   {
}
