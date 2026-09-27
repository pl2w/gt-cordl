#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsGorillaZipline.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaZipline_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsGorillaZipline_def.hpp"
#include "CustomMapSupport/zzzz__BezierControlPointMode_def.hpp"
#include "CustomMapSupport/zzzz__BezierSpline_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObjectPlaceholder_def.hpp"
#include "GlobalNamespace/zzzz__BezierControlPointMode_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbableRef_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaHandClimber_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGorillaZipline.GenerateZipline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsGorillaZipline::*)(::CustomMapSupport::BezierSpline*)>(&::GlobalNamespace::CustomMapsGorillaZipline::GenerateZipline)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x59a8ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                        {"GenerateZipline", {}, {::i2c::type_of<::CustomMapSupport::BezierSpline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGorillaZipline.OnBeforeClimb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGorillaZipline::*)(::GorillaLocomotion::Climbing::GorillaHandClimber*, ::GorillaLocomotion::Climbing::GorillaClimbableRef*)>(&::GlobalNamespace::CustomMapsGorillaZipline::OnBeforeClimb)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59a8ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGorillaZipline.ConvertControlPointModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BezierControlPointMode> (::GlobalNamespace::CustomMapsGorillaZipline::*)(::ArrayW<::CustomMapSupport::BezierControlPointMode>)>(&::GlobalNamespace::CustomMapsGorillaZipline::ConvertControlPointModes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a8e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                        {"ConvertControlPointModes", {}, {::i2c::type_of<::ArrayW<::CustomMapSupport::BezierControlPointMode>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGorillaZipline.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGorillaZipline::*)()>(&::GlobalNamespace::CustomMapsGorillaZipline::Start)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x59a8f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGorillaZipline.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGorillaZipline::*)(::GT_CustomMapSupportRuntime::GTObjectPlaceholder*)>(&::GlobalNamespace::CustomMapsGorillaZipline::Init)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x59a9018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                        {"Init", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsGorillaZipline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsGorillaZipline::*)()>(&::GlobalNamespace::CustomMapsGorillaZipline::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a9250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::CustomMapsGorillaZipline::GenerateZipline(::CustomMapSupport::BezierSpline*  splineRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                        {"GenerateZipline", {}, {::i2c::type_of<::CustomMapSupport::BezierSpline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, splineRef);
}
inline void GlobalNamespace::CustomMapsGorillaZipline::OnBeforeClimb(::GorillaLocomotion::Climbing::GorillaHandClimber*  hand, ::GorillaLocomotion::Climbing::GorillaClimbableRef*  climbRef)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, climbRef);
}
inline ::ArrayW<::GlobalNamespace::BezierControlPointMode> GlobalNamespace::CustomMapsGorillaZipline::ConvertControlPointModes(::ArrayW<::CustomMapSupport::BezierControlPointMode>  refModes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                        {"ConvertControlPointModes", {}, {::i2c::type_of<::ArrayW<::CustomMapSupport::BezierControlPointMode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BezierControlPointMode>>(this, ___internal_method, refModes);
}
inline void GlobalNamespace::CustomMapsGorillaZipline::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsGorillaZipline::Init(::GT_CustomMapSupportRuntime::GTObjectPlaceholder*  ziplinePlaceholder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                        {"Init", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ziplinePlaceholder);
}
inline void GlobalNamespace::CustomMapsGorillaZipline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsGorillaZipline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsGorillaZipline* GlobalNamespace::CustomMapsGorillaZipline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsGorillaZipline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsGorillaZipline::CustomMapsGorillaZipline()   {
}
