#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptographicOperations.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptographicOperations_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicOperations.FixedTimeEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>)>(&::System::Security::Cryptography::CryptographicOperations::FixedTimeEquals)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa160014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicOperations*>(),
                        {"FixedTimeEquals", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptographicOperations.ZeroMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<uint8_t>)>(&::System::Security::Cryptography::CryptographicOperations::ZeroMemory)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa15eb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicOperations*>(),
                        {"ZeroMemory", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Security::Cryptography::CryptographicOperations::FixedTimeEquals(::System::ReadOnlySpan_1<uint8_t>  left, ::System::ReadOnlySpan_1<uint8_t>  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicOperations*>(),
                        {"FixedTimeEquals", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline void System::Security::Cryptography::CryptographicOperations::ZeroMemory(::System::Span_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptographicOperations*>(),
                        {"ZeroMemory", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptographicOperations::CryptographicOperations()   {
}
