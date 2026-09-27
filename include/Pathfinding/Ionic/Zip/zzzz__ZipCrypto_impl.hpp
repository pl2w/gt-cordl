#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipCrypto.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipCrypto_def.hpp"
#include "Pathfinding/Ionic/Crc/zzzz__CRC32_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCrypto._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipCrypto::*)()>(&::Pathfinding::Ionic::Zip::ZipCrypto::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa68e8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCrypto.ForWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipCrypto* (*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipCrypto::ForWrite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa68e998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"ForWrite", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCrypto.ForRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipCrypto* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipCrypto::ForRead)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa68eafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"ForRead", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCrypto.get_MagicByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Pathfinding::Ionic::Zip::ZipCrypto::*)()>(&::Pathfinding::Ionic::Zip::ZipCrypto::get_MagicByte)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa68eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"get_MagicByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCrypto.DecryptMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Ionic::Zip::ZipCrypto::*)(::ArrayW<uint8_t>, int32_t)>(&::Pathfinding::Ionic::Zip::ZipCrypto::DecryptMessage)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa68ed64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"DecryptMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCrypto.EncryptMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Ionic::Zip::ZipCrypto::*)(::ArrayW<uint8_t>, int32_t)>(&::Pathfinding::Ionic::Zip::ZipCrypto::EncryptMessage)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa68efdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"EncryptMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCrypto.InitCipher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipCrypto::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipCrypto::InitCipher)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa68ea48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"InitCipher", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCrypto.UpdateKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipCrypto::*)(uint8_t)>(&::Pathfinding::Ionic::Zip::ZipCrypto::UpdateKeys)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa68ef24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"UpdateKeys", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& Pathfinding::Ionic::Zip::ZipCrypto::__cordl_internal_get__Keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Keys;
}
constexpr ::ArrayW<uint32_t> const& Pathfinding::Ionic::Zip::ZipCrypto::__cordl_internal_get__Keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Keys;
}
constexpr void Pathfinding::Ionic::Zip::ZipCrypto::__cordl_internal_set__Keys(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Keys = value;
}
constexpr ::Pathfinding::Ionic::Crc::CRC32*& Pathfinding::Ionic::Zip::ZipCrypto::__cordl_internal_get_crc32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc32;
}
constexpr ::Pathfinding::Ionic::Crc::CRC32* const& Pathfinding::Ionic::Zip::ZipCrypto::__cordl_internal_get_crc32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc32;
}
constexpr void Pathfinding::Ionic::Zip::ZipCrypto::__cordl_internal_set_crc32(::Pathfinding::Ionic::Crc::CRC32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc32 = value;
}
inline void Pathfinding::Ionic::Zip::ZipCrypto::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipCrypto* Pathfinding::Ionic::Zip::ZipCrypto::ForWrite(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"ForWrite", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipCrypto*>(nullptr, ___internal_method, password);
}
inline ::Pathfinding::Ionic::Zip::ZipCrypto* Pathfinding::Ionic::Zip::ZipCrypto::ForRead(::StringW  password, ::Pathfinding::Ionic::Zip::ZipEntry*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"ForRead", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipCrypto*>(nullptr, ___internal_method, password, e);
}
inline uint8_t Pathfinding::Ionic::Zip::ZipCrypto::get_MagicByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"get_MagicByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zip::ZipCrypto::DecryptMessage(::ArrayW<uint8_t>  cipherText, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"DecryptMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, cipherText, length);
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zip::ZipCrypto::EncryptMessage(::ArrayW<uint8_t>  plainText, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"EncryptMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, plainText, length);
}
inline void Pathfinding::Ionic::Zip::ZipCrypto::InitCipher(::StringW  passphrase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"InitCipher", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passphrase);
}
inline void Pathfinding::Ionic::Zip::ZipCrypto::UpdateKeys(uint8_t  byteValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(),
                        {"UpdateKeys", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteValue);
}
inline ::Pathfinding::Ionic::Zip::ZipCrypto* Pathfinding::Ionic::Zip::ZipCrypto::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipCrypto*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipCrypto::ZipCrypto()   {
}
