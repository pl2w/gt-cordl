#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BodyJointLocation.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationFlags_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointLocation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_BodyJointLocation.get_OrientationValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlugin_BodyJointLocation::*)()>(&::GlobalNamespace::OVRPlugin_BodyJointLocation::get_OrientationValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa60f5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_BodyJointLocation>(),
                        {"get_OrientationValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_BodyJointLocation.get_PositionValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlugin_BodyJointLocation::*)()>(&::GlobalNamespace::OVRPlugin_BodyJointLocation::get_PositionValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa60f608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_BodyJointLocation>(),
                        {"get_PositionValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_BodyJointLocation.get_OrientationTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlugin_BodyJointLocation::*)()>(&::GlobalNamespace::OVRPlugin_BodyJointLocation::get_OrientationTracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa60f614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_BodyJointLocation>(),
                        {"get_OrientationTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_BodyJointLocation.get_PositionTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlugin_BodyJointLocation::*)()>(&::GlobalNamespace::OVRPlugin_BodyJointLocation::get_PositionTracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa60f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_BodyJointLocation>(),
                        {"get_PositionTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_BodyJointLocation::setStaticF_invalid(::GlobalNamespace::OVRPlugin_BodyJointLocation  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_BodyJointLocation, "invalid", ::GlobalNamespace::OVRPlugin_BodyJointLocation>(std::forward<::GlobalNamespace::OVRPlugin_BodyJointLocation>(value));
}
inline ::GlobalNamespace::OVRPlugin_BodyJointLocation GlobalNamespace::OVRPlugin_BodyJointLocation::getStaticF_invalid()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_BodyJointLocation, "invalid", ::GlobalNamespace::OVRPlugin_BodyJointLocation>();
}
inline bool GlobalNamespace::OVRPlugin_BodyJointLocation::get_OrientationValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_BodyJointLocation>(),
                        {"get_OrientationValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRPlugin_BodyJointLocation::get_PositionValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_BodyJointLocation>(),
                        {"get_PositionValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRPlugin_BodyJointLocation::get_OrientationTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_BodyJointLocation>(),
                        {"get_OrientationTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRPlugin_BodyJointLocation::get_PositionTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_BodyJointLocation>(),
                        {"get_PositionTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "LocationFlags", ty: "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BodyJointLocation::OVRPlugin_BodyJointLocation(::GlobalNamespace::OVRPlugin_SpaceLocationFlags  LocationFlags, ::GlobalNamespace::OVRPlugin_Posef  Pose) noexcept  {
this->LocationFlags = LocationFlags;
this->Pose = Pose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BodyJointLocation::OVRPlugin_BodyJointLocation()   {
}
