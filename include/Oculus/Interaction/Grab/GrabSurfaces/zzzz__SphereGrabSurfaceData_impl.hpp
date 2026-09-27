#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/SphereGrabSurfaceData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__SphereGrabSurfaceData_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::Clone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4eda6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData.Mirror
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData* (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::Mirror)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4edb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(),
                        {"Mirror", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4edad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::__cordl_internal_get_centre()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centre;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::__cordl_internal_get_centre() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centre;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::__cordl_internal_set_centre(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centre = value;
}
inline ::System::Object* Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData* Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::Mirror()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(),
                        {"Mirror", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData* Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData::SphereGrabSurfaceData()   {
}
