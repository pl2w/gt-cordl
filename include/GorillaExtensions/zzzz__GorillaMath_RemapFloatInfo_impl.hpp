#pragma once
// IWYU pragma private; include "GorillaExtensions/GorillaMath_RemapFloatInfo.hpp"
#include "GorillaExtensions/zzzz__GorillaMath_RemapFloatInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaMath_RemapFloatInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMath_RemapFloatInfo::*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::GorillaMath_RemapFloatInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cf8014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMath_RemapFloatInfo>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMath_RemapFloatInfo.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaMath_RemapFloatInfo::*)()>(&::GlobalNamespace::GorillaMath_RemapFloatInfo::OnValidate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cf8020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMath_RemapFloatInfo>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMath_RemapFloatInfo.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaMath_RemapFloatInfo::*)()>(&::GlobalNamespace::GorillaMath_RemapFloatInfo::IsValid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cf8064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMath_RemapFloatInfo>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaMath_RemapFloatInfo.Remap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaMath_RemapFloatInfo::*)(float_t)>(&::GlobalNamespace::GorillaMath_RemapFloatInfo::Remap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cf8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMath_RemapFloatInfo>(),
                        {"Remap", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaMath_RemapFloatInfo::_ctor(float_t  fromMin, float_t  toMin, float_t  fromMax, float_t  toMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMath_RemapFloatInfo>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fromMin, toMin, fromMax, toMax);
}
inline void GlobalNamespace::GorillaMath_RemapFloatInfo::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMath_RemapFloatInfo>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::GorillaMath_RemapFloatInfo::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMath_RemapFloatInfo>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t GlobalNamespace::GorillaMath_RemapFloatInfo::Remap(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaMath_RemapFloatInfo>(),
                        {"Remap", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "fromMin", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "toMin", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fromMax", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "toMax", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaMath_RemapFloatInfo::GorillaMath_RemapFloatInfo(float_t  fromMin, float_t  toMin, float_t  fromMax, float_t  toMax) noexcept  {
this->fromMin = fromMin;
this->toMin = toMin;
this->fromMax = fromMax;
this->toMax = toMax;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaMath_RemapFloatInfo::GorillaMath_RemapFloatInfo()   {
}
