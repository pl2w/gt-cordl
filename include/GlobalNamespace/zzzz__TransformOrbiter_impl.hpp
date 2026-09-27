#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformOrbiter.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransformOrbiter_def.hpp"
#include "GlobalNamespace/zzzz__TransformOrbiter__Start_d__10_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformOrbiter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformOrbiter::*)()>(&::GlobalNamespace::TransformOrbiter::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b38af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformOrbiter.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformOrbiter::*)()>(&::GlobalNamespace::TransformOrbiter::LateUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b38b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformOrbiter.UpdatePosRot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformOrbiter::*)(double_t)>(&::GlobalNamespace::TransformOrbiter::UpdatePosRot)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b38c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"UpdatePosRot", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformOrbiter.GetPositionAtTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::TransformOrbiter::*)(double_t)>(&::GlobalNamespace::TransformOrbiter::GetPositionAtTime)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b38d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"GetPositionAtTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformOrbiter.validateBarycenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransformOrbiter::*)()>(&::GlobalNamespace::TransformOrbiter::validateBarycenter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b38eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"validateBarycenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformOrbiter.validateBarycenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransformOrbiter::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TransformOrbiter::validateBarycenter)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b38ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"validateBarycenter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformOrbiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformOrbiter::*)()>(&::GlobalNamespace::TransformOrbiter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b39054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransformOrbiter::__cordl_internal_get_barycenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___barycenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_barycenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___barycenter;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_barycenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___barycenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformOrbiter::__cordl_internal_get_orbit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbit;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_orbit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbit;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_orbit(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbit = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransformOrbiter::__cordl_internal_get_translation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_translation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translation;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_translation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___translation = value;
}
constexpr double_t& GlobalNamespace::TransformOrbiter::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr double_t const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_speed(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr double_t& GlobalNamespace::TransformOrbiter::__cordl_internal_get_orbitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitTime;
}
constexpr double_t const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_orbitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitTime;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_orbitTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitTime = value;
}
constexpr bool& GlobalNamespace::TransformOrbiter::__cordl_internal_get_faceBarycenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceBarycenter;
}
constexpr bool const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_faceBarycenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceBarycenter;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_faceBarycenter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceBarycenter = value;
}
constexpr bool& GlobalNamespace::TransformOrbiter::__cordl_internal_get_absoluteOrbitX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteOrbitX;
}
constexpr bool const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_absoluteOrbitX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteOrbitX;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_absoluteOrbitX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absoluteOrbitX = value;
}
constexpr bool& GlobalNamespace::TransformOrbiter::__cordl_internal_get_absoluteOrbitY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteOrbitY;
}
constexpr bool const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_absoluteOrbitY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteOrbitY;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_absoluteOrbitY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absoluteOrbitY = value;
}
constexpr bool& GlobalNamespace::TransformOrbiter::__cordl_internal_get_absoluteOrbitZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteOrbitZ;
}
constexpr bool const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_absoluteOrbitZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteOrbitZ;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_absoluteOrbitZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absoluteOrbitZ = value;
}
constexpr ::System::DateTime& GlobalNamespace::TransformOrbiter::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::System::DateTime const& GlobalNamespace::TransformOrbiter::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void GlobalNamespace::TransformOrbiter::__cordl_internal_set_anchor(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
inline void GlobalNamespace::TransformOrbiter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformOrbiter::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransformOrbiter::UpdatePosRot(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"UpdatePosRot", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::TransformOrbiter::GetPositionAtTime(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"GetPositionAtTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline bool GlobalNamespace::TransformOrbiter::validateBarycenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"validateBarycenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransformOrbiter::validateBarycenter(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {"validateBarycenter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline void GlobalNamespace::TransformOrbiter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformOrbiter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransformOrbiter* GlobalNamespace::TransformOrbiter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransformOrbiter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformOrbiter::TransformOrbiter()   {
}
