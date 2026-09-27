#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/KeyUsageExtension.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_impl.hpp"
#include "Mono/Security/X509/Extensions/zzzz__KeyUsageExtension_def.hpp"
#include "Mono/Security/X509/Extensions/zzzz__KeyUsages_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::Extensions::KeyUsageExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::KeyUsageExtension::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::Extensions::KeyUsageExtension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa0f8398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::KeyUsageExtension.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::KeyUsageExtension::*)()>(&::Mono::Security::X509::Extensions::KeyUsageExtension::Decode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa0f839c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(),
                    {::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::KeyUsageExtension.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::Extensions::KeyUsageExtension::*)()>(&::Mono::Security::X509::Extensions::KeyUsageExtension::Encode)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa0f84d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(),
                    {::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::KeyUsageExtension.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::Extensions::KeyUsageExtension::*)()>(&::Mono::Security::X509::Extensions::KeyUsageExtension::get_Name)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa0f86b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(),
                    {::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::KeyUsageExtension.Support
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::Extensions::KeyUsageExtension::*)(::Mono::Security::X509::Extensions::KeyUsages)>(&::Mono::Security::X509::Extensions::KeyUsageExtension::Support)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa0f86f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(),
                        {"Support", {}, {::i2c::type_of<::Mono::Security::X509::Extensions::KeyUsages>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::Extensions::KeyUsageExtension.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::Extensions::KeyUsageExtension::*)()>(&::Mono::Security::X509::Extensions::KeyUsageExtension::ToString)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0xa0f87d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(),
                    {::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Security::X509::Extensions::KeyUsageExtension::__cordl_internal_get_kubits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kubits;
}
constexpr int32_t const& Mono::Security::X509::Extensions::KeyUsageExtension::__cordl_internal_get_kubits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kubits;
}
constexpr void Mono::Security::X509::Extensions::KeyUsageExtension::__cordl_internal_set_kubits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kubits = value;
}
inline void Mono::Security::X509::Extensions::KeyUsageExtension::_ctor(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::Extensions::KeyUsageExtension::Decode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::Extensions::KeyUsageExtension::Encode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::Extensions::KeyUsageExtension::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Mono::Security::X509::Extensions::KeyUsageExtension::Support(::Mono::Security::X509::Extensions::KeyUsages  usage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(),
                        {"Support", {}, {::i2c::type_of<::Mono::Security::X509::Extensions::KeyUsages>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, usage);
}
inline ::StringW Mono::Security::X509::Extensions::KeyUsageExtension::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::Extensions::KeyUsageExtension*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::X509::Extensions::KeyUsageExtension* Mono::Security::X509::Extensions::KeyUsageExtension::New_ctor(::Mono::Security::X509::X509Extension*  extension)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::Extensions::KeyUsageExtension*>(extension));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::Extensions::KeyUsageExtension::KeyUsageExtension()   {
}
