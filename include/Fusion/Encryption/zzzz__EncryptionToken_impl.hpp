#pragma once
// IWYU pragma private; include "Fusion/Encryption/EncryptionToken.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Encryption/zzzz__EncryptionToken_def.hpp"
//  Writing Method size for method: ::Fusion::Encryption::EncryptionToken.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Encryption::EncryptionToken::*)()>(&::Fusion::Encryption::EncryptionToken::ToString)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x603de38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Encryption::EncryptionToken*>(),
                    {::i2c::class_of<::Fusion::Encryption::EncryptionToken*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::EncryptionToken._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Encryption::EncryptionToken::*)()>(&::Fusion::Encryption::EncryptionToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6035df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionToken*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Fusion::Encryption::EncryptionToken::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Encryption::EncryptionToken::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr void Fusion::Encryption::EncryptionToken::__cordl_internal_set_Key(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Encryption::EncryptionToken::__cordl_internal_get_KeyEncrypted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyEncrypted;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Encryption::EncryptionToken::__cordl_internal_get_KeyEncrypted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyEncrypted;
}
constexpr void Fusion::Encryption::EncryptionToken::__cordl_internal_set_KeyEncrypted(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyEncrypted = value;
}
inline ::StringW Fusion::Encryption::EncryptionToken::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Encryption::EncryptionToken*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Encryption::EncryptionToken::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::EncryptionToken*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Encryption::EncryptionToken* Fusion::Encryption::EncryptionToken::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Encryption::EncryptionToken*>());
}
// Ctor Parameters []
constexpr ::Fusion::Encryption::EncryptionToken::EncryptionToken()   {
}
