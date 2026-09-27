#pragma once
// IWYU pragma private; include "Fusion/Encryption/IDataEncryption.hpp"
#include "Fusion/Encryption/zzzz__IDataEncryption_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Fusion::Encryption::IDataEncryption.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Encryption::IDataEncryption::*)(::ArrayW<uint8_t>)>(&::Fusion::Encryption::IDataEncryption::Setup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(),
                    {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::IDataEncryption.EncryptData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Encryption::IDataEncryption::*)(uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Fusion::Encryption::IDataEncryption::EncryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(),
                    {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::IDataEncryption.DecryptData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Encryption::IDataEncryption::*)(uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Fusion::Encryption::IDataEncryption::DecryptData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(),
                    {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::IDataEncryption.ComputeHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Encryption::IDataEncryption::*)(uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Fusion::Encryption::IDataEncryption::ComputeHash)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(),
                    {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::IDataEncryption.VerifyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Encryption::IDataEncryption::*)(uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Fusion::Encryption::IDataEncryption::VerifyHash)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(),
                    {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Fusion::Encryption::IDataEncryption::Setup(::ArrayW<uint8_t>  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline bool Fusion::Encryption::IDataEncryption::EncryptData(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bufferLength, capacity);
}
inline bool Fusion::Encryption::IDataEncryption::DecryptData(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bufferLength, capacity);
}
inline bool Fusion::Encryption::IDataEncryption::ComputeHash(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bufferLength, capacity);
}
inline bool Fusion::Encryption::IDataEncryption::VerifyHash(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Encryption::IDataEncryption*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bufferLength, capacity);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Encryption::IDataEncryption::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Encryption::IDataEncryption::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
