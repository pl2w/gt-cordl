#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/SubjectKeyIdentifierExtension.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__SubjectKeyIdentifierExtension_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa0f5c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::Decode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa0f8c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(),
                    {::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::Encode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa0f8d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(),
                    {::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::get_Name)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa0f8e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(),
                    {::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::get_Identifier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa0f5c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::*)()>(&::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::ToString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa0f8e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(),
                    {::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::__cordl_internal_get_ski()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ski;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::__cordl_internal_get_ski() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ski;
}
constexpr void Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::__cordl_internal_set_ski(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ski = value;
}
inline void Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::_ctor(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::Decode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::Encode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension* Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::New_ctor(::Mono::Security::X509::X509Extension*  extension)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*>(extension));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension::SubjectKeyIdentifierExtension()   {
}
