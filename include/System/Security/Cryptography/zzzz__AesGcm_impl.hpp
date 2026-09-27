#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AesGcm.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AesGcm_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesGcm::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesGcm::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa188b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesGcm::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Security::Cryptography::AesGcm::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa188b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm.get_NonceByteSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::KeySizes* (*)()>(&::System::Security::Cryptography::AesGcm::get_NonceByteSizes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"get_NonceByteSizes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm.get_TagByteSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::KeySizes* (*)()>(&::System::Security::Cryptography::AesGcm::get_TagByteSizes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"get_TagByteSizes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesGcm::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesGcm::Decrypt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Decrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesGcm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>)>(&::System::Security::Cryptography::AesGcm::Decrypt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Decrypt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesGcm::*)()>(&::System::Security::Cryptography::AesGcm::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa188c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesGcm::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesGcm::Encrypt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Encrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesGcm.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesGcm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>)>(&::System::Security::Cryptography::AesGcm::Encrypt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Encrypt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::AesGcm::_ctor(::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::AesGcm::_ctor(::System::ReadOnlySpan_1<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::KeySizes* System::Security::Cryptography::AesGcm::get_NonceByteSizes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"get_NonceByteSizes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::KeySizes*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::KeySizes* System::Security::Cryptography::AesGcm::get_TagByteSizes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"get_TagByteSizes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::KeySizes*>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::AesGcm::Decrypt(::ArrayW<uint8_t>  nonce, ::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  tag, ::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  associatedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Decrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, ciphertext, tag, plaintext, associatedData);
}
inline void System::Security::Cryptography::AesGcm::Decrypt(::System::ReadOnlySpan_1<uint8_t>  nonce, ::System::ReadOnlySpan_1<uint8_t>  ciphertext, ::System::ReadOnlySpan_1<uint8_t>  tag, ::System::Span_1<uint8_t>  plaintext, ::System::ReadOnlySpan_1<uint8_t>  associatedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Decrypt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, ciphertext, tag, plaintext, associatedData);
}
inline void System::Security::Cryptography::AesGcm::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesGcm::Encrypt(::ArrayW<uint8_t>  nonce, ::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  tag, ::ArrayW<uint8_t>  associatedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Encrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, plaintext, ciphertext, tag, associatedData);
}
inline void System::Security::Cryptography::AesGcm::Encrypt(::System::ReadOnlySpan_1<uint8_t>  nonce, ::System::ReadOnlySpan_1<uint8_t>  plaintext, ::System::Span_1<uint8_t>  ciphertext, ::System::Span_1<uint8_t>  tag, ::System::ReadOnlySpan_1<uint8_t>  associatedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesGcm*>(),
                        {"Encrypt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, plaintext, ciphertext, tag, associatedData);
}
inline ::System::Security::Cryptography::AesGcm* System::Security::Cryptography::AesGcm::New_ctor(::ArrayW<uint8_t>  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AesGcm*>(key));
}
inline ::System::Security::Cryptography::AesGcm* System::Security::Cryptography::AesGcm::New_ctor(::System::ReadOnlySpan_1<uint8_t>  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AesGcm*>(key));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::AesGcm::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::AesGcm::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AesGcm::AesGcm()   {
}
