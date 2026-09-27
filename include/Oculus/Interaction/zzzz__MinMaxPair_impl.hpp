#pragma once
// IWYU pragma private; include "Oculus/Interaction/MinMaxPair.hpp"
#include "Oculus/Interaction/zzzz__MinMaxPair_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::MinMaxPair.get_UseRandomRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::MinMaxPair::*)()>(&::Oculus::Interaction::MinMaxPair::get_UseRandomRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MinMaxPair>(),
                        {"get_UseRandomRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MinMaxPair.get_Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::MinMaxPair::*)()>(&::Oculus::Interaction::MinMaxPair::get_Min)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MinMaxPair>(),
                        {"get_Min", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MinMaxPair.get_Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::MinMaxPair::*)()>(&::Oculus::Interaction::MinMaxPair::get_Max)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MinMaxPair>(),
                        {"get_Max", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::MinMaxPair::get_UseRandomRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MinMaxPair>(),
                        {"get_UseRandomRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline float_t Oculus::Interaction::MinMaxPair::get_Min()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MinMaxPair>(),
                        {"get_Min", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t Oculus::Interaction::MinMaxPair::get_Max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MinMaxPair>(),
                        {"get_Max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_useRandomRange", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_min", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_max", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::MinMaxPair::MinMaxPair(bool  _useRandomRange, float_t  _min, float_t  _max) noexcept  {
this->_useRandomRange = _useRandomRange;
this->_min = _min;
this->_max = _max;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MinMaxPair::MinMaxPair()   {
}
