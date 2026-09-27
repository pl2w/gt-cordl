#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipCipherStream.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CryptoMode_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipCipherStream_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CryptoMode_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipCrypto_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipCipherStream::*)(::System::IO::Stream*, ::Pathfinding::Ionic::Zip::ZipCrypto*, ::Pathfinding::Ionic::Zip::CryptoMode)>(&::Pathfinding::Ionic::Zip::ZipCipherStream::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa68f158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::CryptoMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipCipherStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::ZipCipherStream::Read)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa68f1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipCipherStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::ZipCipherStream::Write)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa68f38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipCipherStream::*)()>(&::Pathfinding::Ionic::Zip::ZipCipherStream::get_CanRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa68f530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipCipherStream::*)()>(&::Pathfinding::Ionic::Zip::ZipCipherStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68f540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipCipherStream::*)()>(&::Pathfinding::Ionic::Zip::ZipCipherStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa68f548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipCipherStream::*)()>(&::Pathfinding::Ionic::Zip::ZipCipherStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68f558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipCipherStream::*)()>(&::Pathfinding::Ionic::Zip::ZipCipherStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa68f55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipCipherStream::*)()>(&::Pathfinding::Ionic::Zip::ZipCipherStream::get_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa68f594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipCipherStream::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipCipherStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa68f5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipCipherStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Pathfinding::Ionic::Zip::ZipCipherStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa68f604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipCipherStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipCipherStream::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipCipherStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa68f63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 34}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Ionic::Zip::ZipCrypto*& Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_get__cipher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cipher;
}
constexpr ::Pathfinding::Ionic::Zip::ZipCrypto* const& Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_get__cipher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cipher;
}
constexpr void Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_set__cipher(::Pathfinding::Ionic::Zip::ZipCrypto*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cipher = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_get__s()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____s;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_get__s() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____s;
}
constexpr void Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_set__s(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____s = value;
}
constexpr ::Pathfinding::Ionic::Zip::CryptoMode& Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::Pathfinding::Ionic::Zip::CryptoMode const& Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void Pathfinding::Ionic::Zip::ZipCipherStream::__cordl_internal_set__mode(::Pathfinding::Ionic::Zip::CryptoMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
inline void Pathfinding::Ionic::Zip::ZipCipherStream::_ctor(::System::IO::Stream*  s, ::Pathfinding::Ionic::Zip::ZipCrypto*  cipher, ::Pathfinding::Ionic::Zip::CryptoMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipCrypto*>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::CryptoMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, cipher, mode);
}
inline int32_t Pathfinding::Ionic::Zip::ZipCipherStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void Pathfinding::Ionic::Zip::ZipCipherStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline bool Pathfinding::Ionic::Zip::ZipCipherStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipCipherStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipCipherStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipCipherStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipCipherStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipCipherStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipCipherStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Pathfinding::Ionic::Zip::ZipCipherStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Pathfinding::Ionic::Zip::ZipCipherStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipCipherStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zip::ZipCipherStream* Pathfinding::Ionic::Zip::ZipCipherStream::New_ctor(::System::IO::Stream*  s, ::Pathfinding::Ionic::Zip::ZipCrypto*  cipher, ::Pathfinding::Ionic::Zip::CryptoMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipCipherStream*>(s, cipher, mode));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipCipherStream::ZipCipherStream()   {
}
