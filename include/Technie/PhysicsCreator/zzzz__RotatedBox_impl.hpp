#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RotatedBox.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__RotatedBox_def.hpp"
#include "Technie/PhysicsCreator/zzzz__ConstructionPlane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBox.get_VolumeCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Technie::PhysicsCreator::RotatedBox::*)()>(&::Technie::PhysicsCreator::RotatedBox::get_VolumeCm3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xadc62b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBox*>(),
                        {"get_VolumeCm3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RotatedBox::*)(::Technie::PhysicsCreator::ConstructionPlane*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::RotatedBox::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xadc62c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBox*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RotatedBox.DrawWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RotatedBox::*)()>(&::Technie::PhysicsCreator::RotatedBox::DrawWireframe)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xadc635c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBox*>(),
                        {"DrawWireframe", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Technie::PhysicsCreator::ConstructionPlane*& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_plane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plane;
}
constexpr ::Technie::PhysicsCreator::ConstructionPlane* const& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_plane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plane;
}
constexpr void Technie::PhysicsCreator::RotatedBox::__cordl_internal_set_plane(::Technie::PhysicsCreator::ConstructionPlane*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plane = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_localCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCenter;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_localCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCenter;
}
constexpr void Technie::PhysicsCreator::RotatedBox::__cordl_internal_set_localCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localCenter = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void Technie::PhysicsCreator::RotatedBox::__cordl_internal_set_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void Technie::PhysicsCreator::RotatedBox::__cordl_internal_set_size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr float_t& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr float_t const& Technie::PhysicsCreator::RotatedBox::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void Technie::PhysicsCreator::RotatedBox::__cordl_internal_set_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
inline float_t Technie::PhysicsCreator::RotatedBox::get_VolumeCm3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBox*>(),
                        {"get_VolumeCm3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::RotatedBox::_ctor(::Technie::PhysicsCreator::ConstructionPlane*  p, ::UnityEngine::Vector3  localCenter, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBox*>(),
                        {".ctor", {}, {::i2c::type_of<::Technie::PhysicsCreator::ConstructionPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, localCenter, c, s);
}
inline void Technie::PhysicsCreator::RotatedBox::DrawWireframe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RotatedBox*>(),
                        {"DrawWireframe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::RotatedBox* Technie::PhysicsCreator::RotatedBox::New_ctor(::Technie::PhysicsCreator::ConstructionPlane*  p, ::UnityEngine::Vector3  localCenter, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  s)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::RotatedBox*>(p, localCenter, c, s));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::RotatedBox::RotatedBox()   {
}
