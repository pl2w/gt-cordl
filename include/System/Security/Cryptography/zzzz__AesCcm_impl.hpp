#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AesCcm.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AesCcm_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCcm::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCcm::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa188950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCcm::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Security::Cryptography::AesCcm::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa188990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm.get_NonceByteSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::KeySizes* (*)()>(&::System::Security::Cryptography::AesCcm::get_NonceByteSizes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa1889d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"get_NonceByteSizes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm.get_TagByteSizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::KeySizes* (*)()>(&::System::Security::Cryptography::AesCcm::get_TagByteSizes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"get_TagByteSizes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCcm::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCcm::Decrypt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Decrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCcm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>)>(&::System::Security::Cryptography::AesCcm::Decrypt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Decrypt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCcm::*)()>(&::System::Security::Cryptography::AesCcm::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa188ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCcm::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCcm::Encrypt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Encrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCcm.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCcm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>)>(&::System::Security::Cryptography::AesCcm::Encrypt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa188aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Encrypt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::AesCcm::_ctor(::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::AesCcm::_ctor(::System::ReadOnlySpan_1<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::KeySizes* System::Security::Cryptography::AesCcm::get_NonceByteSizes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"get_NonceByteSizes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::KeySizes*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::KeySizes* System::Security::Cryptography::AesCcm::get_TagByteSizes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"get_TagByteSizes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::KeySizes*>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::AesCcm::Decrypt(::ArrayW<uint8_t>  nonce, ::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  tag, ::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  associatedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Decrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, ciphertext, tag, plaintext, associatedData);
}
inline void System::Security::Cryptography::AesCcm::Decrypt(::System::ReadOnlySpan_1<uint8_t>  nonce, ::System::ReadOnlySpan_1<uint8_t>  ciphertext, ::System::ReadOnlySpan_1<uint8_t>  tag, ::System::Span_1<uint8_t>  plaintext, ::System::ReadOnlySpan_1<uint8_t>  associatedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Decrypt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, ciphertext, tag, plaintext, associatedData);
}
inline void System::Security::Cryptography::AesCcm::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCcm::Encrypt(::ArrayW<uint8_t>  nonce, ::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  tag, ::ArrayW<uint8_t>  associatedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Encrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, plaintext, ciphertext, tag, associatedData);
}
inline void System::Security::Cryptography::AesCcm::Encrypt(::System::ReadOnlySpan_1<uint8_t>  nonce, ::System::ReadOnlySpan_1<uint8_t>  plaintext, ::System::Span_1<uint8_t>  ciphertext, ::System::Span_1<uint8_t>  tag, ::System::ReadOnlySpan_1<uint8_t>  associatedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AesCcm*>(),
                        {"Encrypt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nonce, plaintext, ciphertext, tag, associatedData);
}
inline ::System::Security::Cryptography::AesCcm* System::Security::Cryptography::AesCcm::New_ctor(::ArrayW<uint8_t>  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AesCcm*>(key));
}
inline ::System::Security::Cryptography::AesCcm* System::Security::Cryptography::AesCcm::New_ctor(::System::ReadOnlySpan_1<uint8_t>  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AesCcm*>(key));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::AesCcm::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::AesCcm::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AesCcm::AesCcm()   {
}
