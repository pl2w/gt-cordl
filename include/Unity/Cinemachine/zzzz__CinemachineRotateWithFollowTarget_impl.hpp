#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineRotateWithFollowTarget.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineRotateWithFollowTarget_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotateWithFollowTarget.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineRotateWithFollowTarget::*)()>(&::Unity::Cinemachine::CinemachineRotateWithFollowTarget::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea46fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotateWithFollowTarget.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineRotateWithFollowTarget::*)()>(&::Unity::Cinemachine::CinemachineRotateWithFollowTarget::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea478c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotateWithFollowTarget.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineRotateWithFollowTarget::*)()>(&::Unity::Cinemachine::CinemachineRotateWithFollowTarget::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea4794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotateWithFollowTarget.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotateWithFollowTarget::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineRotateWithFollowTarget::MutateCameraState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xaea479c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotateWithFollowTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotateWithFollowTarget::*)()>(&::Unity::Cinemachine::CinemachineRotateWithFollowTarget::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaea48e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineRotateWithFollowTarget::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineRotateWithFollowTarget::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachineRotateWithFollowTarget::__cordl_internal_set_Damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachineRotateWithFollowTarget::__cordl_internal_get_m_PreviousReferenceOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousReferenceOrientation;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachineRotateWithFollowTarget::__cordl_internal_get_m_PreviousReferenceOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousReferenceOrientation;
}
constexpr void Unity::Cinemachine::CinemachineRotateWithFollowTarget::__cordl_internal_set_m_PreviousReferenceOrientation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousReferenceOrientation = value;
}
inline bool Unity::Cinemachine::CinemachineRotateWithFollowTarget::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineRotateWithFollowTarget::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineRotateWithFollowTarget::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineRotateWithFollowTarget::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineRotateWithFollowTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineRotateWithFollowTarget* Unity::Cinemachine::CinemachineRotateWithFollowTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineRotateWithFollowTarget*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineRotateWithFollowTarget::CinemachineRotateWithFollowTarget()   {
}
