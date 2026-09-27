#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineMixingCamera.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineMixingCamera_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixingCamera::*)()>(&::Unity::Cinemachine::CinemachineMixingCamera::OnValidate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xae95ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixingCamera::*)()>(&::Unity::Cinemachine::CinemachineMixingCamera::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae96194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineMixingCamera::*)()>(&::Unity::Cinemachine::CinemachineMixingCamera::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae961f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CinemachineMixingCamera::*)()>(&::Unity::Cinemachine::CinemachineMixingCamera::get_Description)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xae96200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.GetWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineMixingCamera::*)(int32_t)>(&::Unity::Cinemachine::CinemachineMixingCamera::GetWeight)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xae95f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"GetWeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.SetWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixingCamera::*)(int32_t, float_t)>(&::Unity::Cinemachine::CinemachineMixingCamera::SetWeight)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xae96054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"SetWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.GetWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineMixingCamera::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineMixingCamera::GetWeight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae96464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"GetWeight", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.SetWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixingCamera::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, float_t)>(&::Unity::Cinemachine::CinemachineMixingCamera::SetWeight)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xae964f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"SetWeight", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.IsLiveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineMixingCamera::*)(::Unity::Cinemachine::ICinemachineCamera*, bool)>(&::Unity::Cinemachine::CinemachineMixingCamera::IsLiveChild)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xae96658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.UpdateCameraCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineMixingCamera::*)()>(&::Unity::Cinemachine::CinemachineMixingCamera::UpdateCameraCache)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xae96768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixingCamera::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineMixingCamera::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xae968ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.InternalUpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixingCamera::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineMixingCamera::InternalUpdateCameraState)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xae969b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera.ChooseCurrentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineMixingCamera::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineMixingCamera::ChooseCurrentCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae96c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineMixingCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineMixingCamera::*)()>(&::Unity::Cinemachine::CinemachineMixingCamera::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae96c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight0;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight0;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_Weight0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight0 = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight1;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight1;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_Weight1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight1 = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight2;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight2;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_Weight2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight2 = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight3;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight3;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_Weight3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight3 = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight4;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight4;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_Weight4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight4 = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight5;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight5;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_Weight5(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight5 = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight6;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight6;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_Weight6(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight6 = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight7;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_Weight7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight7;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_Weight7(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight7 = value;
}
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_m_CameraState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraState;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_m_CameraState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraState;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_m_CameraState(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraState = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,int32_t>*& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_m_IndexMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndexMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,int32_t>* const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_m_IndexMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndexMap;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_m_IndexMap(::System::Collections::Generic::Dictionary_2<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IndexMap = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_m_LiveChildPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LiveChildPercent;
}
constexpr float_t const& Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_get_m_LiveChildPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LiveChildPercent;
}
constexpr void Unity::Cinemachine::CinemachineMixingCamera::__cordl_internal_set_m_LiveChildPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LiveChildPercent = value;
}
inline void Unity::Cinemachine::CinemachineMixingCamera::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineMixingCamera::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineMixingCamera::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::CinemachineMixingCamera::get_Description()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineMixingCamera::GetWeight(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"GetWeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline void Unity::Cinemachine::CinemachineMixingCamera::SetWeight(int32_t  index, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"SetWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, w);
}
inline float_t Unity::Cinemachine::CinemachineMixingCamera::GetWeight(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"GetWeight", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CinemachineMixingCamera::SetWeight(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {"SetWeight", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, w);
}
inline bool Unity::Cinemachine::CinemachineMixingCamera::IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  vcam, bool  dominantChildOnly)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam, dominantChildOnly);
}
inline bool Unity::Cinemachine::CinemachineMixingCamera::UpdateCameraCache()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineMixingCamera::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineMixingCamera::InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineMixingCamera::ChooseCurrentCamera(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineMixingCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineMixingCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineMixingCamera* Unity::Cinemachine::CinemachineMixingCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineMixingCamera*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineMixingCamera::CinemachineMixingCamera()   {
}
