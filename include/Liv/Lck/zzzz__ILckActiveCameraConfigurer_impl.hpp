#pragma once
// IWYU pragma private; include "Liv/Lck/ILckActiveCameraConfigurer.hpp"
#include "Liv/Lck/zzzz__ILckActiveCameraConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckActiveCameraConfigurer.GetActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* (::Liv::Lck::ILckActiveCameraConfigurer::*)()>(&::Liv::Lck::ILckActiveCameraConfigurer::GetActiveCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckActiveCameraConfigurer.ActivateCameraById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckActiveCameraConfigurer::*)(::StringW, ::StringW)>(&::Liv::Lck::ILckActiveCameraConfigurer::ActivateCameraById)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckActiveCameraConfigurer.StopActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckActiveCameraConfigurer::*)()>(&::Liv::Lck::ILckActiveCameraConfigurer::StopActiveCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* Liv::Lck::ILckActiveCameraConfigurer::GetActiveCamera()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckActiveCameraConfigurer::ActivateCameraById(::StringW  cameraId, ::StringW  monitorId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraId, monitorId);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckActiveCameraConfigurer::StopActiveCamera()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckActiveCameraConfigurer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
