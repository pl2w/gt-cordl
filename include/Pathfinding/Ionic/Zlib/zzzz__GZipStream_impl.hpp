#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/GZipStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__GZipStream_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibBaseStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.get_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::get_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a5bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"get_Comment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.set_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::GZipStream::*)(::StringW)>(&::Pathfinding::Ionic::Zlib::GZipStream::set_Comment)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa6a5bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a5c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.set_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::GZipStream::*)(::StringW)>(&::Pathfinding::Ionic::Zlib::GZipStream::set_FileName)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa6a5c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"set_FileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::get_CanRead)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6a5ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a5e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6a5e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::Flush)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6a5ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6a5f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::get_Position)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6a5f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::GZipStream::*)(int64_t)>(&::Pathfinding::Ionic::Zlib::GZipStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6a5fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::GZipStream::Read)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa6a6018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::GZipStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Pathfinding::Ionic::Zlib::GZipStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6a60dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::GZipStream::*)(int64_t)>(&::Pathfinding::Ionic::Zlib::GZipStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6a6114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::GZipStream::Write)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa6a614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::GZipStream.EmitHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::GZipStream::*)()>(&::Pathfinding::Ionic::Zlib::GZipStream::EmitHeader)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xa6a6240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"EmitHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::DateTime>& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get_LastModified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastModified;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get_LastModified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastModified;
}
constexpr void Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_set_LastModified(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastModified = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__headerByteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerByteCount;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__headerByteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerByteCount;
}
constexpr void Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_set__headerByteCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerByteCount = value;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibBaseStream*& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__baseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibBaseStream* const& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__baseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseStream;
}
constexpr void Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_set__baseStream(::Pathfinding::Ionic::Zlib::ZlibBaseStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseStream = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__firstReadDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstReadDone;
}
constexpr bool const& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__firstReadDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstReadDone;
}
constexpr void Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_set__firstReadDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstReadDone = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileName;
}
constexpr ::StringW const& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileName;
}
constexpr void Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_set__FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileName = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__Comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comment;
}
constexpr ::StringW const& Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_get__Comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comment;
}
constexpr void Pathfinding::Ionic::Zlib::GZipStream::__cordl_internal_set__Comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Comment = value;
}
inline void Pathfinding::Ionic::Zlib::GZipStream::setStaticF__unixEpoch(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "_unixEpoch", ::Pathfinding::Ionic::Zlib::GZipStream*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Pathfinding::Ionic::Zlib::GZipStream::getStaticF__unixEpoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "_unixEpoch", ::Pathfinding::Ionic::Zlib::GZipStream*>();
}
inline void Pathfinding::Ionic::Zlib::GZipStream::setStaticF_iso8859dash1(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "iso8859dash1", ::Pathfinding::Ionic::Zlib::GZipStream*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zlib::GZipStream::getStaticF_iso8859dash1()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "iso8859dash1", ::Pathfinding::Ionic::Zlib::GZipStream*>();
}
inline ::StringW Pathfinding::Ionic::Zlib::GZipStream::get_Comment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"get_Comment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::GZipStream::set_Comment(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Pathfinding::Ionic::Zlib::GZipStream::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::GZipStream::set_FileName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"set_FileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Ionic::Zlib::GZipStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zlib::GZipStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zlib::GZipStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::GZipStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zlib::GZipStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zlib::GZipStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::GZipStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Ionic::Zlib::GZipStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Pathfinding::Ionic::Zlib::GZipStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Pathfinding::Ionic::Zlib::GZipStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zlib::GZipStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Pathfinding::Ionic::Zlib::GZipStream::EmitHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::GZipStream*>(),
                        {"EmitHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::GZipStream::GZipStream()   {
}
