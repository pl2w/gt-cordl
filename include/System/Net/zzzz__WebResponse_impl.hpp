#pragma once
// IWYU pragma private; include "System/Net/WebResponse.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6d358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac6d360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebResponse::GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac6d36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac6d370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac6d374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)(bool)>(&::System::Net::WebResponse::Dispose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xac6d3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.get_IsFromCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::get_IsFromCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6d46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.set_InternalSetFromCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)(bool)>(&::System::Net::WebResponse::set_InternalSetFromCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6d474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {"set_InternalSetFromCache", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.get_IsCacheFresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::get_IsCacheFresh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6d47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.set_InternalSetIsCacheFresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)(bool)>(&::System::Net::WebResponse::set_InternalSetIsCacheFresh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6d484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {"set_InternalSetIsCacheFresh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.get_IsMutuallyAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::get_IsMutuallyAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6d48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.get_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::get_ContentLength)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6d494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.set_ContentLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)(int64_t)>(&::System::Net::WebResponse::set_ContentLength)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6d4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.get_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::get_ContentType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6d4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.set_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebResponse::*)(::StringW)>(&::System::Net::WebResponse::set_ContentType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6d50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.GetResponseStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.get_ResponseUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6d55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac6d584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponse.get_SupportsHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebResponse::*)()>(&::System::Net::WebResponse::get_SupportsHeaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac6d5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebResponse*>(),
                    {::i2c::class_of<::System::Net::WebResponse*>(), 21}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::Net::WebResponse::__cordl_internal_get_m_IsCacheFresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsCacheFresh;
}
constexpr bool const& System::Net::WebResponse::__cordl_internal_get_m_IsCacheFresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsCacheFresh;
}
constexpr void System::Net::WebResponse::__cordl_internal_set_m_IsCacheFresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsCacheFresh = value;
}
constexpr bool& System::Net::WebResponse::__cordl_internal_get_m_IsFromCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsFromCache;
}
constexpr bool const& System::Net::WebResponse::__cordl_internal_get_m_IsFromCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsFromCache;
}
constexpr void System::Net::WebResponse::__cordl_internal_set_m_IsFromCache(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsFromCache = value;
}
inline void System::Net::WebResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebResponse::_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebResponse::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebResponse::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebResponse::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebResponse::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool System::Net::WebResponse::get_IsFromCache()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebResponse::set_InternalSetFromCache(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {"set_InternalSetFromCache", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebResponse::get_IsCacheFresh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebResponse::set_InternalSetIsCacheFresh(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebResponse*>(),
                        {"set_InternalSetIsCacheFresh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebResponse::get_IsMutuallyAuthenticated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Net::WebResponse::get_ContentLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::WebResponse::set_ContentLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::WebResponse::get_ContentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::WebResponse::set_ContentType(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::Stream* System::Net::WebResponse::GetResponseStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::Uri* System::Net::WebResponse::get_ResponseUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebResponse::get_Headers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline bool System::Net::WebResponse::get_SupportsHeaders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebResponse*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::WebResponse* System::Net::WebResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebResponse*>());
}
inline ::System::Net::WebResponse* System::Net::WebResponse::New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebResponse*>(serializationInfo, streamingContext));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Net::WebResponse::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::WebResponse::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::WebResponse::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::WebResponse::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebResponse::WebResponse()   {
}
