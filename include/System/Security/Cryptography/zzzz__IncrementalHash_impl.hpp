#pragma once
// IWYU pragma private; include "System/Security/Cryptography/IncrementalHash.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__IncrementalHash_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::IncrementalHash._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::IncrementalHash::*)(::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::HashAlgorithm*)>(&::System::Security::Cryptography::IncrementalHash::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa84f15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::IncrementalHash.AppendData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::IncrementalHash::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::IncrementalHash::AppendData)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa84f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"AppendData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::IncrementalHash.GetHashAndReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::IncrementalHash::*)()>(&::System::Security::Cryptography::IncrementalHash::GetHashAndReset)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa84f3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"GetHashAndReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::IncrementalHash.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::IncrementalHash::*)()>(&::System::Security::Cryptography::IncrementalHash::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa84f538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::IncrementalHash.CreateHMAC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::IncrementalHash* (*)(::System::Security::Cryptography::HashAlgorithmName, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::IncrementalHash::CreateHMAC)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa84f574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"CreateHMAC", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::IncrementalHash.GetHMAC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(::System::Security::Cryptography::HashAlgorithmName, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::IncrementalHash::GetHMAC)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa84f68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"GetHMAC", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::HashAlgorithmName& System::Security::Cryptography::IncrementalHash::__cordl_internal_get__algorithmName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____algorithmName;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName const& System::Security::Cryptography::IncrementalHash::__cordl_internal_get__algorithmName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____algorithmName;
}
constexpr void System::Security::Cryptography::IncrementalHash::__cordl_internal_set__algorithmName(::System::Security::Cryptography::HashAlgorithmName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____algorithmName = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithm*& System::Security::Cryptography::IncrementalHash::__cordl_internal_get__hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hash;
}
constexpr ::System::Security::Cryptography::HashAlgorithm* const& System::Security::Cryptography::IncrementalHash::__cordl_internal_get__hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hash;
}
constexpr void System::Security::Cryptography::IncrementalHash::__cordl_internal_set__hash(::System::Security::Cryptography::HashAlgorithm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hash = value;
}
constexpr bool& System::Security::Cryptography::IncrementalHash::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& System::Security::Cryptography::IncrementalHash::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void System::Security::Cryptography::IncrementalHash::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr bool& System::Security::Cryptography::IncrementalHash::__cordl_internal_get__resetPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetPending;
}
constexpr bool const& System::Security::Cryptography::IncrementalHash::__cordl_internal_get__resetPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetPending;
}
constexpr void System::Security::Cryptography::IncrementalHash::__cordl_internal_set__resetPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetPending = value;
}
inline void System::Security::Cryptography::IncrementalHash::_ctor(::System::Security::Cryptography::HashAlgorithmName  name, ::System::Security::Cryptography::HashAlgorithm*  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, hash);
}
inline void System::Security::Cryptography::IncrementalHash::AppendData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"AppendData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, count);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::IncrementalHash::GetHashAndReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"GetHashAndReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::IncrementalHash::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::IncrementalHash* System::Security::Cryptography::IncrementalHash::CreateHMAC(::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"CreateHMAC", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::IncrementalHash*>(nullptr, ___internal_method, hashAlgorithm, key);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::IncrementalHash::GetHMAC(::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::IncrementalHash*>(),
                        {"GetHMAC", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(nullptr, ___internal_method, hashAlgorithm, key);
}
inline ::System::Security::Cryptography::IncrementalHash* System::Security::Cryptography::IncrementalHash::New_ctor(::System::Security::Cryptography::HashAlgorithmName  name, ::System::Security::Cryptography::HashAlgorithm*  hash)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::IncrementalHash*>(name, hash));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::IncrementalHash::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::IncrementalHash::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::IncrementalHash::IncrementalHash()   {
}
