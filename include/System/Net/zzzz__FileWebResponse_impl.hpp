#pragma once
// IWYU pragma private; include "System/Net/FileWebResponse.hpp"
#include "System/IO/zzzz__FileAccess_impl.hpp"
#include "System/Net/zzzz__WebResponse_impl.hpp"
#include "System/Net/zzzz__FileWebResponse_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
#include "System/Net/zzzz__FileWebRequest_def.hpp"
#include "System/Net/zzzz__ICloseEx_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::FileWebResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Net::FileWebRequest*, ::System::Uri*, ::System::IO::FileAccess, bool)>(&::System::Net::FileWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xac84cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::FileWebRequest*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xac85c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac85ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebResponse::GetObjectData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xac85f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FileWebResponse*>(),
                    {::i2c::class_of<::System::Net::FileWebResponse*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.get_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::get_ContentLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac860b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FileWebResponse*>(),
                    {::i2c::class_of<::System::Net::FileWebResponse*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.get_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::get_ContentType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xac8613c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FileWebResponse*>(),
                    {::i2c::class_of<::System::Net::FileWebResponse*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac86188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FileWebResponse*>(),
                    {::i2c::class_of<::System::Net::FileWebResponse*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.get_SupportsHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::get_SupportsHeaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac861a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FileWebResponse*>(),
                    {::i2c::class_of<::System::Net::FileWebResponse*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.get_ResponseUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac861a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FileWebResponse*>(),
                    {::i2c::class_of<::System::Net::FileWebResponse*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.CheckDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::CheckDisposed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xac860c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {"CheckDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::Close)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xac861c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FileWebResponse*>(),
                    {::i2c::class_of<::System::Net::FileWebResponse*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.System_Net_ICloseEx_CloseEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Net::CloseExState)>(&::System::Net::FileWebResponse::System_Net_ICloseEx_CloseEx)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xac86258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {"System.Net.ICloseEx.CloseEx", {}, {::i2c::type_of<::System::Net::CloseExState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.GetResponseStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac863c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::FileWebResponse*>(),
                    {::i2c::class_of<::System::Net::FileWebResponse*>(), 18}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::Net::FileWebResponse::__cordl_internal_get_m_closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_closed;
}
constexpr bool const& System::Net::FileWebResponse::__cordl_internal_get_m_closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_closed;
}
constexpr void System::Net::FileWebResponse::__cordl_internal_set_m_closed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_closed = value;
}
constexpr int64_t& System::Net::FileWebResponse::__cordl_internal_get_m_contentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_contentLength;
}
constexpr int64_t const& System::Net::FileWebResponse::__cordl_internal_get_m_contentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_contentLength;
}
constexpr void System::Net::FileWebResponse::__cordl_internal_set_m_contentLength(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_contentLength = value;
}
constexpr ::System::IO::FileAccess& System::Net::FileWebResponse::__cordl_internal_get_m_fileAccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fileAccess;
}
constexpr ::System::IO::FileAccess const& System::Net::FileWebResponse::__cordl_internal_get_m_fileAccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fileAccess;
}
constexpr void System::Net::FileWebResponse::__cordl_internal_set_m_fileAccess(::System::IO::FileAccess  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fileAccess = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::FileWebResponse::__cordl_internal_get_m_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_headers;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::FileWebResponse::__cordl_internal_get_m_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_headers;
}
constexpr void System::Net::FileWebResponse::__cordl_internal_set_m_headers(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_headers = value;
}
constexpr ::System::IO::Stream*& System::Net::FileWebResponse::__cordl_internal_get_m_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_stream;
}
constexpr ::System::IO::Stream* const& System::Net::FileWebResponse::__cordl_internal_get_m_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_stream;
}
constexpr void System::Net::FileWebResponse::__cordl_internal_set_m_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_stream = value;
}
constexpr ::System::Uri*& System::Net::FileWebResponse::__cordl_internal_get_m_uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_uri;
}
constexpr ::System::Uri* const& System::Net::FileWebResponse::__cordl_internal_get_m_uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_uri;
}
constexpr void System::Net::FileWebResponse::__cordl_internal_set_m_uri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_uri = value;
}
inline void System::Net::FileWebResponse::_ctor(::System::Net::FileWebRequest*  request, ::System::Uri*  uri, ::System::IO::FileAccess  access, bool  asyncHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::FileWebRequest*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, uri, access, asyncHint);
}
inline void System::Net::FileWebResponse::_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::FileWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::FileWebResponse::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FileWebResponse*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline int64_t System::Net::FileWebResponse::get_ContentLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FileWebResponse*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW System::Net::FileWebResponse::get_ContentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FileWebResponse*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::FileWebResponse::get_Headers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FileWebResponse*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline bool System::Net::FileWebResponse::get_SupportsHeaders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FileWebResponse*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Uri* System::Net::FileWebResponse::get_ResponseUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FileWebResponse*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::FileWebResponse::CheckDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {"CheckDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::FileWebResponse::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FileWebResponse*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::FileWebResponse::System_Net_ICloseEx_CloseEx(::System::Net::CloseExState  closeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::FileWebResponse*>(),
                        {"System.Net.ICloseEx.CloseEx", {}, {::i2c::type_of<::System::Net::CloseExState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeState);
}
inline ::System::IO::Stream* System::Net::FileWebResponse::GetResponseStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::FileWebResponse*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::Net::FileWebResponse* System::Net::FileWebResponse::New_ctor(::System::Net::FileWebRequest*  request, ::System::Uri*  uri, ::System::IO::FileAccess  access, bool  asyncHint)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FileWebResponse*>(request, uri, access, asyncHint));
}
/// @brief [Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
inline ::System::Net::FileWebResponse* System::Net::FileWebResponse::New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FileWebResponse*>(serializationInfo, streamingContext));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Net::FileWebResponse::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::FileWebResponse::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Net::ICloseEx"
constexpr  System::Net::FileWebResponse::operator ::System::Net::ICloseEx*() noexcept {
return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICloseEx"
constexpr ::System::Net::ICloseEx* System::Net::FileWebResponse::i___System__Net__ICloseEx() noexcept {
return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::FileWebResponse::FileWebResponse()   {
}
