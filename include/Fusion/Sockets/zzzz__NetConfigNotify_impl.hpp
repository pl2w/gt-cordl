#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfigNotify.hpp"
#include "Fusion/Sockets/zzzz__NetConfigNotify_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetConfigNotify.get_SequenceBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetConfigNotify::*)()>(&::Fusion::Sockets::NetConfigNotify::get_SequenceBounds)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6029f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigNotify>(),
                        {"get_SequenceBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConfigNotify.get_AckMaskBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetConfigNotify::*)()>(&::Fusion::Sockets::NetConfigNotify::get_AckMaskBits)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6029f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigNotify>(),
                        {"get_AckMaskBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConfigNotify.get_Defaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConfigNotify (*)()>(&::Fusion::Sockets::NetConfigNotify::get_Defaults)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6029ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigNotify>(),
                        {"get_Defaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::Sockets::NetConfigNotify::get_SequenceBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigNotify>(),
                        {"get_SequenceBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::Sockets::NetConfigNotify::get_AckMaskBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigNotify>(),
                        {"get_AckMaskBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetConfigNotify Fusion::Sockets::NetConfigNotify::get_Defaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConfigNotify>(),
                        {"get_Defaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConfigNotify>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "AckMaskBytes", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AckForceCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AckForceTimeout", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "WindowSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SequenceBytes", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConfigNotify::NetConfigNotify(int32_t  AckMaskBytes, int32_t  AckForceCount, double_t  AckForceTimeout, int32_t  WindowSize, int32_t  SequenceBytes) noexcept  {
this->AckMaskBytes = AckMaskBytes;
this->AckForceCount = AckForceCount;
this->AckForceTimeout = AckForceTimeout;
this->WindowSize = WindowSize;
this->SequenceBytes = SequenceBytes;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConfigNotify::NetConfigNotify()   {
}
