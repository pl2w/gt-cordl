#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectGuidUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectGuidUtils_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectGuidUtils.MangleGuidBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*)>(&::Fusion::NetworkObjectGuidUtils::MangleGuidBytes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fab250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuidUtils*>(),
                        {"MangleGuidBytes", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuidUtils.CopyAndMangleGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*)>(&::Fusion::NetworkObjectGuidUtils::CopyAndMangleGuid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5faa81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuidUtils*>(),
                        {"CopyAndMangleGuid", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuidUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectGuidUtils::*)()>(&::Fusion::NetworkObjectGuidUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fab294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuidUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectGuidUtils::MangleGuidBytes(uint8_t*  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuidUtils*>(),
                        {"MangleGuidBytes", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes);
}
inline void Fusion::NetworkObjectGuidUtils::CopyAndMangleGuid(uint8_t*  src, uint8_t*  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuidUtils*>(),
                        {"CopyAndMangleGuid", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst);
}
inline void Fusion::NetworkObjectGuidUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuidUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectGuidUtils* Fusion::NetworkObjectGuidUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectGuidUtils*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectGuidUtils::NetworkObjectGuidUtils()   {
}
