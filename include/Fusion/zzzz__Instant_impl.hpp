#pragma once
// IWYU pragma private; include "Fusion/Instant.hpp"
#include "Fusion/zzzz__Instant_def.hpp"
//  Writing Method size for method: ::Fusion::Instant.get_Input
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Instant::*)()>(&::Fusion::Instant::get_Input)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"get_Input", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Instant.set_Input
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Instant::*)(double_t)>(&::Fusion::Instant::set_Input)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600af84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"set_Input", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Instant.get_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Instant::*)()>(&::Fusion::Instant::get_Local)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600af8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"get_Local", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Instant.set_Local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Instant::*)(double_t)>(&::Fusion::Instant::set_Local)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600af94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"set_Local", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Instant.get_Remote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Instant::*)()>(&::Fusion::Instant::get_Remote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600af9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"get_Remote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Instant.set_Remote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Instant::*)(double_t)>(&::Fusion::Instant::set_Remote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600afa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"set_Remote", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Fusion::Instant::get_Input()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"get_Input", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Fusion::Instant::set_Input(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"set_Input", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t Fusion::Instant::get_Local()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"get_Local", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Fusion::Instant::set_Local(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"set_Local", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t Fusion::Instant::get_Remote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"get_Remote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void Fusion::Instant::set_Remote(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Instant>(),
                        {"set_Remote", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Input_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Local_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Remote_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Instant::Instant(double_t  _Input_k__BackingField, double_t  _Local_k__BackingField, double_t  _Remote_k__BackingField) noexcept  {
this->_Input_k__BackingField = _Input_k__BackingField;
this->_Local_k__BackingField = _Local_k__BackingField;
this->_Remote_k__BackingField = _Remote_k__BackingField;
}
// Ctor Parameters []
constexpr ::Fusion::Instant::Instant()   {
}
