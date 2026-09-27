#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraManagerEvents.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineMixerEventsBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerEvents_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCameraManagerBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerEvents.GetMixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineMixer* (::Unity::Cinemachine::CinemachineCameraManagerEvents::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerEvents::GetMixer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaedf330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerEvents::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerEvents::OnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaedf338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerEvents::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerEvents::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaedf3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCameraManagerEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCameraManagerEvents::*)()>(&::Unity::Cinemachine::CinemachineCameraManagerEvents::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaedf3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachineCameraManagerBase>& Unity::Cinemachine::CinemachineCameraManagerEvents::__cordl_internal_get_CameraManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraManager;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineCameraManagerBase> const& Unity::Cinemachine::CinemachineCameraManagerEvents::__cordl_internal_get_CameraManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraManager;
}
constexpr void Unity::Cinemachine::CinemachineCameraManagerEvents::__cordl_internal_set_CameraManager(::UnityW<::Unity::Cinemachine::CinemachineCameraManagerBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraManager = value;
}
inline ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CinemachineCameraManagerEvents::GetMixer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineMixer*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCameraManagerEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCameraManagerEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCameraManagerEvents* Unity::Cinemachine::CinemachineCameraManagerEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCameraManagerEvents*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCameraManagerEvents::CinemachineCameraManagerEvents()   {
}
