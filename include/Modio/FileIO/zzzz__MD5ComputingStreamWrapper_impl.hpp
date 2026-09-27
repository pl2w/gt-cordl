#pragma once
// IWYU pragma private; include "Modio/FileIO/MD5ComputingStreamWrapper.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Modio/FileIO/zzzz__MD5ComputingStreamWrapper_def.hpp"
#include "Modio/FileIO/zzzz__MD5ComputingStreamWrapper__GetMD5HashAsync_d__10_def.hpp"
#include "Modio/FileIO/zzzz__MD5ComputingStreamWrapper__ReadAsync_d__11_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__MD5_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.get_TotalBytesRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::FileIO::MD5ComputingStreamWrapper::*)()>(&::Modio::FileIO::MD5ComputingStreamWrapper::get_TotalBytesRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa053c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                        {"get_TotalBytesRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.set_TotalBytesRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::MD5ComputingStreamWrapper::*)(int32_t)>(&::Modio::FileIO::MD5ComputingStreamWrapper::set_TotalBytesRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa053c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                        {"set_TotalBytesRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::MD5ComputingStreamWrapper::*)(::System::IO::Stream*)>(&::Modio::FileIO::MD5ComputingStreamWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa053c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::MD5ComputingStreamWrapper::*)()>(&::Modio::FileIO::MD5ComputingStreamWrapper::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa053cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::MD5ComputingStreamWrapper::*)(bool)>(&::Modio::FileIO::MD5ComputingStreamWrapper::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa053cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.GetMD5HashAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::FileIO::MD5ComputingStreamWrapper::*)()>(&::Modio::FileIO::MD5ComputingStreamWrapper::GetMD5HashAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa053d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                        {"GetMD5HashAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::Modio::FileIO::MD5ComputingStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::Modio::FileIO::MD5ComputingStreamWrapper::ReadAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa053e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::FileIO::MD5ComputingStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Modio::FileIO::MD5ComputingStreamWrapper::Read)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa053fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::FileIO::MD5ComputingStreamWrapper::*)(int64_t, ::System::IO::SeekOrigin)>(&::Modio::FileIO::MD5ComputingStreamWrapper::Seek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa054054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::MD5ComputingStreamWrapper::*)(int64_t)>(&::Modio::FileIO::MD5ComputingStreamWrapper::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa054074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::MD5ComputingStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Modio::FileIO::MD5ComputingStreamWrapper::Write)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa0540ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::MD5ComputingStreamWrapper::*)()>(&::Modio::FileIO::MD5ComputingStreamWrapper::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0540e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::MD5ComputingStreamWrapper::*)()>(&::Modio::FileIO::MD5ComputingStreamWrapper::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0540ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::MD5ComputingStreamWrapper::*)()>(&::Modio::FileIO::MD5ComputingStreamWrapper::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0540f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::FileIO::MD5ComputingStreamWrapper::*)()>(&::Modio::FileIO::MD5ComputingStreamWrapper::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa0540fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::FileIO::MD5ComputingStreamWrapper::*)()>(&::Modio::FileIO::MD5ComputingStreamWrapper::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa054118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MD5ComputingStreamWrapper.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::MD5ComputingStreamWrapper::*)(int64_t)>(&::Modio::FileIO::MD5ComputingStreamWrapper::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa054138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                    {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 14}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_get__TotalBytesRead_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesRead_k__BackingField;
}
constexpr int32_t const& Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_get__TotalBytesRead_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesRead_k__BackingField;
}
constexpr void Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_set__TotalBytesRead_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalBytesRead_k__BackingField = value;
}
constexpr ::System::IO::Stream*& Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_get__baseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr ::System::IO::Stream* const& Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_get__baseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr void Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_set__baseStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseStream = value;
}
constexpr ::System::Security::Cryptography::MD5*& Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_get__md5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____md5;
}
constexpr ::System::Security::Cryptography::MD5* const& Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_get__md5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____md5;
}
constexpr void Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_set__md5(::System::Security::Cryptography::MD5*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____md5 = value;
}
constexpr bool& Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_get__hasTransformedFinalBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasTransformedFinalBlock;
}
constexpr bool const& Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_get__hasTransformedFinalBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasTransformedFinalBlock;
}
constexpr void Modio::FileIO::MD5ComputingStreamWrapper::__cordl_internal_set__hasTransformedFinalBlock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasTransformedFinalBlock = value;
}
inline int32_t Modio::FileIO::MD5ComputingStreamWrapper::get_TotalBytesRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                        {"get_TotalBytesRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::FileIO::MD5ComputingStreamWrapper::set_TotalBytesRead(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                        {"set_TotalBytesRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::FileIO::MD5ComputingStreamWrapper::_ctor(::System::IO::Stream*  baseStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseStream);
}
inline void Modio::FileIO::MD5ComputingStreamWrapper::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::FileIO::MD5ComputingStreamWrapper::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::FileIO::MD5ComputingStreamWrapper::GetMD5HashAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(),
                        {"GetMD5HashAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Modio::FileIO::MD5ComputingStreamWrapper::ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline int32_t Modio::FileIO::MD5ComputingStreamWrapper::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Modio::FileIO::MD5ComputingStreamWrapper::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Modio::FileIO::MD5ComputingStreamWrapper::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::FileIO::MD5ComputingStreamWrapper::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline bool Modio::FileIO::MD5ComputingStreamWrapper::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Modio::FileIO::MD5ComputingStreamWrapper::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Modio::FileIO::MD5ComputingStreamWrapper::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Modio::FileIO::MD5ComputingStreamWrapper::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Modio::FileIO::MD5ComputingStreamWrapper::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::FileIO::MD5ComputingStreamWrapper::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MD5ComputingStreamWrapper*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::FileIO::MD5ComputingStreamWrapper* Modio::FileIO::MD5ComputingStreamWrapper::New_ctor(::System::IO::Stream*  baseStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::MD5ComputingStreamWrapper*>(baseStream));
}
// Ctor Parameters []
constexpr ::Modio::FileIO::MD5ComputingStreamWrapper::MD5ComputingStreamWrapper()   {
}
