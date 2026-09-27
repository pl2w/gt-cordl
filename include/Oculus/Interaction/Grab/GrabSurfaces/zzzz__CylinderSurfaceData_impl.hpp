#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/CylinderSurfaceData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__CylinderSurfaceData_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::Clone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4eb604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData.Mirror
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* (::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::Mirror)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4eb6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(),
                        {"Mirror", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4eb6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_get_startPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPoint;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_get_startPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPoint;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_set_startPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPoint = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_get_endPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPoint;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_get_endPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPoint;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_set_endPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPoint = value;
}
constexpr float_t& Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_get_arcOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcOffset;
}
constexpr float_t const& Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_get_arcOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcOffset;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_set_arcOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arcOffset = value;
}
constexpr float_t& Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_get_arcLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcLength;
}
constexpr float_t const& Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_get_arcLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcLength;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::__cordl_internal_set_arcLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arcLength = value;
}
inline ::System::Object* Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::Mirror()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(),
                        {"Mirror", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::CylinderSurfaceData()   {
}
