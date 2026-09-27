#pragma once
// IWYU pragma private; include "Oculus/Interaction/ICurvedPlane.hpp"
#include "Oculus/Interaction/zzzz__ICurvedPlane_def.hpp"
#include "Oculus/Interaction/zzzz__Cylinder_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ICurvedPlane.get_Cylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Cylinder> (::Oculus::Interaction::ICurvedPlane::*)()>(&::Oculus::Interaction::ICurvedPlane::get_Cylinder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(),
                    {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ICurvedPlane.get_ArcDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ICurvedPlane::*)()>(&::Oculus::Interaction::ICurvedPlane::get_ArcDegrees)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(),
                    {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ICurvedPlane.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ICurvedPlane::*)()>(&::Oculus::Interaction::ICurvedPlane::get_Rotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(),
                    {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ICurvedPlane.get_Bottom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ICurvedPlane::*)()>(&::Oculus::Interaction::ICurvedPlane::get_Bottom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(),
                    {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ICurvedPlane.get_Top
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ICurvedPlane::*)()>(&::Oculus::Interaction::ICurvedPlane::get_Top)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(),
                    {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::Oculus::Interaction::Cylinder> Oculus::Interaction::ICurvedPlane::get_Cylinder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Cylinder>>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ICurvedPlane::get_ArcDegrees()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ICurvedPlane::get_Rotation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ICurvedPlane::get_Bottom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ICurvedPlane::get_Top()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ICurvedPlane*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
