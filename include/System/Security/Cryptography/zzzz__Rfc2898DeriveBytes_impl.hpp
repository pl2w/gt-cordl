#pragma once
// IWYU pragma private; include "System/Security/Cryptography/Rfc2898DeriveBytes.hpp"
#include "System/Security/Cryptography/zzzz__DeriveBytes_impl.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_impl.hpp"
#include "System/Security/Cryptography/zzzz__Rfc2898DeriveBytes_def.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.get_HashAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithmName (::System::Security::Cryptography::Rfc2898DeriveBytes::*)()>(&::System::Security::Cryptography::Rfc2898DeriveBytes::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15ad34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"get_HashAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa15ad3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa15ad84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::StringW, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa15b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa15b23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::StringW, ::ArrayW<uint8_t>, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa15b284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::StringW, int32_t)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa15b2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::StringW, int32_t, int32_t)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa15b324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::StringW, int32_t, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa15b36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.get_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::Rfc2898DeriveBytes::*)()>(&::System::Security::Cryptography::Rfc2898DeriveBytes::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15b52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"get_IterationCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.set_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(int32_t)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::set_IterationCount)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa15b534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"set_IterationCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.get_Salt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::Rfc2898DeriveBytes::*)()>(&::System::Security::Cryptography::Rfc2898DeriveBytes::get_Salt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa15b5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"get_Salt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.set_Salt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::set_Salt)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa15b5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"set_Salt", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(bool)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa15b670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                    {::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(int32_t)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::GetBytes)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa15b708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                    {::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.CryptDeriveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::Rfc2898DeriveBytes::*)(::StringW, ::StringW, int32_t, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Rfc2898DeriveBytes::CryptDeriveKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa15bd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"CryptDeriveKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)()>(&::System::Security::Cryptography::Rfc2898DeriveBytes::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa15bda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                    {::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.OpenHmac
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HMAC* (::System::Security::Cryptography::Rfc2898DeriveBytes::*)()>(&::System::Security::Cryptography::Rfc2898DeriveBytes::OpenHmac)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa15af5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"OpenHmac", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::Rfc2898DeriveBytes::*)()>(&::System::Security::Cryptography::Rfc2898DeriveBytes::Initialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa15b178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Rfc2898DeriveBytes.Func
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::Rfc2898DeriveBytes::*)()>(&::System::Security::Cryptography::Rfc2898DeriveBytes::Func)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xa15b8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"Func", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__password(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____password = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__salt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____salt;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__salt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____salt;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__salt(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____salt = value;
}
constexpr uint32_t& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr uint32_t const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__iterations(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iterations = value;
}
constexpr ::System::Security::Cryptography::HMAC*& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__hmac()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmac;
}
constexpr ::System::Security::Cryptography::HMAC* const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__hmac() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmac;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__hmac(::System::Security::Cryptography::HMAC*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmac = value;
}
constexpr int32_t& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__blockSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockSize;
}
constexpr int32_t const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__blockSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockSize;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__blockSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockSize = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr uint32_t& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__block()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____block;
}
constexpr uint32_t const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__block() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____block;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__block(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____block = value;
}
constexpr int32_t& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__startIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startIndex;
}
constexpr int32_t const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__startIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startIndex;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__startIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startIndex = value;
}
constexpr int32_t& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__endIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endIndex;
}
constexpr int32_t const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__endIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endIndex;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__endIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endIndex = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__HashAlgorithm_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HashAlgorithm_k__BackingField;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName const& System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_get__HashAlgorithm_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HashAlgorithm_k__BackingField;
}
constexpr void System::Security::Cryptography::Rfc2898DeriveBytes::__cordl_internal_set__HashAlgorithm_k__BackingField(::System::Security::Cryptography::HashAlgorithmName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HashAlgorithm_k__BackingField = value;
}
inline ::System::Security::Cryptography::HashAlgorithmName System::Security::Cryptography::Rfc2898DeriveBytes::get_HashAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"get_HashAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithmName>(this, ___internal_method);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::_ctor(::ArrayW<uint8_t>  password, ::ArrayW<uint8_t>  salt, int32_t  iterations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt, iterations);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::_ctor(::ArrayW<uint8_t>  password, ::ArrayW<uint8_t>  salt, int32_t  iterations, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt, iterations, hashAlgorithm);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::_ctor(::StringW  password, ::ArrayW<uint8_t>  salt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::_ctor(::StringW  password, ::ArrayW<uint8_t>  salt, int32_t  iterations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt, iterations);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::_ctor(::StringW  password, ::ArrayW<uint8_t>  salt, int32_t  iterations, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, salt, iterations, hashAlgorithm);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::_ctor(::StringW  password, int32_t  saltSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, saltSize);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::_ctor(::StringW  password, int32_t  saltSize, int32_t  iterations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, saltSize, iterations);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::_ctor(::StringW  password, int32_t  saltSize, int32_t  iterations, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, saltSize, iterations, hashAlgorithm);
}
inline int32_t System::Security::Cryptography::Rfc2898DeriveBytes::get_IterationCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"get_IterationCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::set_IterationCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"set_IterationCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Rfc2898DeriveBytes::get_Salt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"get_Salt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::set_Salt(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"set_Salt", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Rfc2898DeriveBytes::GetBytes(int32_t  cb)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, cb);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Rfc2898DeriveBytes::CryptDeriveKey(::StringW  algname, ::StringW  alghashname, int32_t  keySize, ::ArrayW<uint8_t>  rgbIV)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"CryptDeriveKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, algname, alghashname, keySize, rgbIV);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HMAC* System::Security::Cryptography::Rfc2898DeriveBytes::OpenHmac()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"OpenHmac", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HMAC*>(this, ___internal_method);
}
inline void System::Security::Cryptography::Rfc2898DeriveBytes::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Rfc2898DeriveBytes::Func()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Rfc2898DeriveBytes*>(),
                        {"Func", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Security::Cryptography::Rfc2898DeriveBytes* System::Security::Cryptography::Rfc2898DeriveBytes::New_ctor(::ArrayW<uint8_t>  password, ::ArrayW<uint8_t>  salt, int32_t  iterations)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rfc2898DeriveBytes*>(password, salt, iterations));
}
inline ::System::Security::Cryptography::Rfc2898DeriveBytes* System::Security::Cryptography::Rfc2898DeriveBytes::New_ctor(::ArrayW<uint8_t>  password, ::ArrayW<uint8_t>  salt, int32_t  iterations, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rfc2898DeriveBytes*>(password, salt, iterations, hashAlgorithm));
}
inline ::System::Security::Cryptography::Rfc2898DeriveBytes* System::Security::Cryptography::Rfc2898DeriveBytes::New_ctor(::StringW  password, ::ArrayW<uint8_t>  salt)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rfc2898DeriveBytes*>(password, salt));
}
inline ::System::Security::Cryptography::Rfc2898DeriveBytes* System::Security::Cryptography::Rfc2898DeriveBytes::New_ctor(::StringW  password, ::ArrayW<uint8_t>  salt, int32_t  iterations)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rfc2898DeriveBytes*>(password, salt, iterations));
}
inline ::System::Security::Cryptography::Rfc2898DeriveBytes* System::Security::Cryptography::Rfc2898DeriveBytes::New_ctor(::StringW  password, ::ArrayW<uint8_t>  salt, int32_t  iterations, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rfc2898DeriveBytes*>(password, salt, iterations, hashAlgorithm));
}
inline ::System::Security::Cryptography::Rfc2898DeriveBytes* System::Security::Cryptography::Rfc2898DeriveBytes::New_ctor(::StringW  password, int32_t  saltSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rfc2898DeriveBytes*>(password, saltSize));
}
inline ::System::Security::Cryptography::Rfc2898DeriveBytes* System::Security::Cryptography::Rfc2898DeriveBytes::New_ctor(::StringW  password, int32_t  saltSize, int32_t  iterations)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rfc2898DeriveBytes*>(password, saltSize, iterations));
}
inline ::System::Security::Cryptography::Rfc2898DeriveBytes* System::Security::Cryptography::Rfc2898DeriveBytes::New_ctor(::StringW  password, int32_t  saltSize, int32_t  iterations, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::Rfc2898DeriveBytes*>(password, saltSize, iterations, hashAlgorithm));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::Rfc2898DeriveBytes::Rfc2898DeriveBytes()   {
}
