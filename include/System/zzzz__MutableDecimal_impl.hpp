#pragma once
// IWYU pragma private; include "System/MutableDecimal.hpp"
#include "System/zzzz__MutableDecimal_def.hpp"
//  Writing Method size for method: ::System::MutableDecimal.get_IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::MutableDecimal::*)()>(&::System::MutableDecimal::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2ffac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MutableDecimal>(),
                        {"get_IsNegative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MutableDecimal.set_IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MutableDecimal::*)(bool)>(&::System::MutableDecimal::set_IsNegative)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa2ffad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MutableDecimal>(),
                        {"set_IsNegative", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MutableDecimal.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::MutableDecimal::*)()>(&::System::MutableDecimal::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2ffaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MutableDecimal>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MutableDecimal.set_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MutableDecimal::*)(int32_t)>(&::System::MutableDecimal::set_Scale)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2ffaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MutableDecimal>(),
                        {"set_Scale", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::MutableDecimal::get_IsNegative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MutableDecimal>(),
                        {"get_IsNegative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::MutableDecimal::set_IsNegative(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MutableDecimal>(),
                        {"set_IsNegative", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t System::MutableDecimal::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MutableDecimal>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::MutableDecimal::set_Scale(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::MutableDecimal>(),
                        {"set_Scale", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "Flags", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "High", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Low", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Mid", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::MutableDecimal::MutableDecimal(uint32_t  Flags, uint32_t  High, uint32_t  Low, uint32_t  Mid) noexcept  {
this->Flags = Flags;
this->High = High;
this->Low = Low;
this->Mid = Mid;
}
// Ctor Parameters []
constexpr ::System::MutableDecimal::MutableDecimal()   {
}
