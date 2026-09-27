#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/Spectrum_Point.hpp"
#include "Meta/XR/Acoustics/zzzz__Spectrum_Point_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Spectrum_Point._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Spectrum_Point::*)(float_t, float_t)>(&::GlobalNamespace::Spectrum_Point::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebef14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrum_Point.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Spectrum_Point::*)(::GlobalNamespace::Spectrum_Point)>(&::GlobalNamespace::Spectrum_Point::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebf590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::Spectrum_Point>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrum_Point.op_Implicit___GlobalNamespace__Spectrum_Point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Spectrum_Point (*)(::UnityEngine::Vector2)>(&::GlobalNamespace::Spectrum_Point::op_Implicit___GlobalNamespace__Spectrum_Point)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ebf598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrum_Point.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::Spectrum_Point)>(&::GlobalNamespace::Spectrum_Point::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ebf59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Spectrum_Point>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Spectrum_Point.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Spectrum_Point::*)()>(&::GlobalNamespace::Spectrum_Point::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ebf5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                    {::i2c::class_of<::GlobalNamespace::Spectrum_Point>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Spectrum_Point::_ctor(float_t  frequency, float_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, frequency, data);
}
inline int32_t GlobalNamespace::Spectrum_Point::CompareTo(::GlobalNamespace::Spectrum_Point  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::Spectrum_Point>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::Spectrum_Point GlobalNamespace::Spectrum_Point::op_Implicit___GlobalNamespace__Spectrum_Point(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Spectrum_Point>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GlobalNamespace::Spectrum_Point::op_Implicit___UnityEngine__Vector2(::GlobalNamespace::Spectrum_Point  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Spectrum_Point>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::Spectrum_Point>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, point);
}
inline ::StringW GlobalNamespace::Spectrum_Point::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Spectrum_Point>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::Spectrum_Point>"
constexpr  GlobalNamespace::Spectrum_Point::operator ::System::IComparable_1<::GlobalNamespace::Spectrum_Point>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::Spectrum_Point>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::Spectrum_Point>"
constexpr ::System::IComparable_1<::GlobalNamespace::Spectrum_Point>* GlobalNamespace::Spectrum_Point::i___System__IComparable_1___GlobalNamespace__Spectrum_Point_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::Spectrum_Point>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "frequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Spectrum_Point::Spectrum_Point(float_t  frequency, float_t  data) noexcept  {
this->frequency = frequency;
this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Spectrum_Point::Spectrum_Point()   {
}
