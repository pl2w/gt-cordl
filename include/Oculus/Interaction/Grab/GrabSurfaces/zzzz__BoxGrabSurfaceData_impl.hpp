#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/BoxGrabSurfaceData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__BoxGrabSurfaceData_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::Clone)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4e8de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData.Mirror
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData* (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::Mirror)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa4e8eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(),
                        {"Mirror", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4e8e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_get_widthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthOffset;
}
constexpr float_t const& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_get_widthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthOffset;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_set_widthOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___widthOffset = value;
}
constexpr ::UnityEngine::Vector4& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_get_snapOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOffset;
}
constexpr ::UnityEngine::Vector4 const& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_get_snapOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOffset;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_set_snapOffset(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapOffset = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_set_size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_get_eulerAngles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eulerAngles;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_get_eulerAngles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eulerAngles;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::__cordl_internal_set_eulerAngles(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eulerAngles = value;
}
inline ::System::Object* Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData* Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::Mirror()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(),
                        {"Mirror", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData* Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData::BoxGrabSurfaceData()   {
}
