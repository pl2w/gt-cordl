#pragma once
// IWYU pragma private; include "Fusion/EncryptionConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__EncryptionConfig_def.hpp"
//  Writing Method size for method: ::Fusion::EncryptionConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::EncryptionConfig::*)()>(&::Fusion::EncryptionConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EncryptionConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::EncryptionConfig::__cordl_internal_get_EnableEncryption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableEncryption;
}
constexpr bool const& Fusion::EncryptionConfig::__cordl_internal_get_EnableEncryption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableEncryption;
}
constexpr void Fusion::EncryptionConfig::__cordl_internal_set_EnableEncryption(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableEncryption = value;
}
inline void Fusion::EncryptionConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EncryptionConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::EncryptionConfig* Fusion::EncryptionConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::EncryptionConfig*>());
}
// Ctor Parameters []
constexpr ::Fusion::EncryptionConfig::EncryptionConfig()   {
}
