#pragma once
// IWYU pragma private; include "System/Net/Base64Stream.hpp"
#include "System/Net/zzzz__DelegatedStream_impl.hpp"
#include "System/Net/zzzz__LazyAsyncResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Base64Stream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Mime/zzzz__Base64WriteStateInfo_def.hpp"
#include "System/Net/Mime/zzzz__IEncodableStream_def.hpp"
#include "System/Net/zzzz__Base64Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Base64Stream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream::*)(::System::IO::Stream*, ::System::Net::Mime::Base64WriteStateInfo*)>(&::System::Net::Base64Stream::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xadad5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::Mime::Base64WriteStateInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream::*)(::System::Net::Mime::Base64WriteStateInfo*)>(&::System::Net::Base64Stream::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadad778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Mime::Base64WriteStateInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.get_ReadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Base64Stream_ReadStateInfo* (::System::Net::Base64Stream::*)()>(&::System::Net::Base64Stream::get_ReadState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadad800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"get_ReadState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.get_WriteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Mime::Base64WriteStateInfo* (::System::Net::Base64Stream::*)()>(&::System::Net::Base64Stream::get_WriteState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadad878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"get_WriteState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.BeginRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Base64Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Base64Stream::BeginRead)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xadad880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Base64Stream*>(),
                    {::i2c::class_of<::System::Net::Base64Stream*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.BeginWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Base64Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Base64Stream::BeginWrite)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xadadb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Base64Stream*>(),
                    {::i2c::class_of<::System::Net::Base64Stream*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream::*)()>(&::System::Net::Base64Stream::Close)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xadadedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Base64Stream*>(),
                    {::i2c::class_of<::System::Net::Base64Stream*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.DecodeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Base64Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Base64Stream::DecodeBytes)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xadae158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"DecodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.EncodeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Base64Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Base64Stream::EncodeBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadae3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"EncodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.EncodeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Base64Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool, bool)>(&::System::Net::Base64Stream::EncodeBytes)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0xadae3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"EncodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.GetStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::Base64Stream::*)()>(&::System::Net::Base64Stream::GetStream)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadaec6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"GetStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.GetEncodedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Base64Stream::*)()>(&::System::Net::Base64Stream::GetEncodedString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xadaec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"GetEncodedString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.EndRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Base64Stream::*)(::System::IAsyncResult*)>(&::System::Net::Base64Stream::EndRead)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xadaecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Base64Stream*>(),
                    {::i2c::class_of<::System::Net::Base64Stream*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.EndWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream::*)(::System::IAsyncResult*)>(&::System::Net::Base64Stream::EndWrite)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xadaedc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Base64Stream*>(),
                    {::i2c::class_of<::System::Net::Base64Stream*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream::*)()>(&::System::Net::Base64Stream::Flush)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xadaeec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Base64Stream*>(),
                    {::i2c::class_of<::System::Net::Base64Stream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.FlushInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream::*)()>(&::System::Net::Base64Stream::FlushInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadae100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"FlushInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Base64Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Base64Stream::Read)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xadaefd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Base64Stream*>(),
                    {::i2c::class_of<::System::Net::Base64Stream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Base64Stream::Write)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xadaf19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Base64Stream*>(),
                    {::i2c::class_of<::System::Net::Base64Stream*>(), 38}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::Base64Stream::__cordl_internal_get__lineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineLength;
}
constexpr int32_t const& System::Net::Base64Stream::__cordl_internal_get__lineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineLength;
}
constexpr void System::Net::Base64Stream::__cordl_internal_set__lineLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineLength = value;
}
constexpr ::System::Net::Mime::Base64WriteStateInfo*& System::Net::Base64Stream::__cordl_internal_get__writeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeState;
}
constexpr ::System::Net::Mime::Base64WriteStateInfo* const& System::Net::Base64Stream::__cordl_internal_get__writeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeState;
}
constexpr void System::Net::Base64Stream::__cordl_internal_set__writeState(::System::Net::Mime::Base64WriteStateInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeState = value;
}
constexpr ::System::Net::Base64Stream_ReadStateInfo*& System::Net::Base64Stream::__cordl_internal_get__readState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readState;
}
constexpr ::System::Net::Base64Stream_ReadStateInfo* const& System::Net::Base64Stream::__cordl_internal_get__readState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readState;
}
constexpr void System::Net::Base64Stream::__cordl_internal_set__readState(::System::Net::Base64Stream_ReadStateInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readState = value;
}
inline void System::Net::Base64Stream::setStaticF_s_base64DecodeMap(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_base64DecodeMap", ::System::Net::Base64Stream*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Net::Base64Stream::getStaticF_s_base64DecodeMap()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_base64DecodeMap", ::System::Net::Base64Stream*>();
}
inline void System::Net::Base64Stream::setStaticF_s_base64EncodeMap(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_base64EncodeMap", ::System::Net::Base64Stream*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Net::Base64Stream::getStaticF_s_base64EncodeMap()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_base64EncodeMap", ::System::Net::Base64Stream*>();
}
inline void System::Net::Base64Stream::_ctor(::System::IO::Stream*  stream, ::System::Net::Mime::Base64WriteStateInfo*  writeStateInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::Mime::Base64WriteStateInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, writeStateInfo);
}
inline void System::Net::Base64Stream::_ctor(::System::Net::Mime::Base64WriteStateInfo*  writeStateInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Mime::Base64WriteStateInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writeStateInfo);
}
inline ::System::Net::Base64Stream_ReadStateInfo* System::Net::Base64Stream::get_ReadState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"get_ReadState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Base64Stream_ReadStateInfo*>(this, ___internal_method);
}
inline ::System::Net::Mime::Base64WriteStateInfo* System::Net::Base64Stream::get_WriteState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"get_WriteState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Mime::Base64WriteStateInfo*>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::Base64Stream::BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Base64Stream*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline ::System::IAsyncResult* System::Net::Base64Stream::BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Base64Stream*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::Net::Base64Stream::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Base64Stream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::Base64Stream::DecodeBytes(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"DecodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Net::Base64Stream::EncodeBytes(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"EncodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Net::Base64Stream::EncodeBytes(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, bool  dontDeferFinalBytes, bool  shouldAppendSpaceToCRLF)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"EncodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count, dontDeferFinalBytes, shouldAppendSpaceToCRLF);
}
inline ::System::IO::Stream* System::Net::Base64Stream::GetStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"GetStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::StringW System::Net::Base64Stream::GetEncodedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"GetEncodedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Net::Base64Stream::EndRead(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Base64Stream*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline void System::Net::Base64Stream::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Base64Stream*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline void System::Net::Base64Stream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Base64Stream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Base64Stream::FlushInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream*>(),
                        {"FlushInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::Base64Stream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Base64Stream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void System::Net::Base64Stream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Base64Stream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Net::Base64Stream* System::Net::Base64Stream::New_ctor(::System::IO::Stream*  stream, ::System::Net::Mime::Base64WriteStateInfo*  writeStateInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Base64Stream*>(stream, writeStateInfo));
}
inline ::System::Net::Base64Stream* System::Net::Base64Stream::New_ctor(::System::Net::Mime::Base64WriteStateInfo*  writeStateInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Base64Stream*>(writeStateInfo));
}
/// @brief Convert operator to "::System::Net::Mime::IEncodableStream"
constexpr  System::Net::Base64Stream::operator ::System::Net::Mime::IEncodableStream*() noexcept {
return static_cast<::System::Net::Mime::IEncodableStream*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::Mime::IEncodableStream"
constexpr ::System::Net::Mime::IEncodableStream* System::Net::Base64Stream::i___System__Net__Mime__IEncodableStream() noexcept {
return static_cast<::System::Net::Mime::IEncodableStream*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Base64Stream::Base64Stream()   {
}
//  Writing Method size for method: ::System::Net::Base64Stream_ReadStateInfo.get_Val
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Net::Base64Stream_ReadStateInfo::*)()>(&::System::Net::Base64Stream_ReadStateInfo::get_Val)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadaf9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {"get_Val", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_ReadStateInfo.set_Val
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream_ReadStateInfo::*)(uint8_t)>(&::System::Net::Base64Stream_ReadStateInfo::set_Val)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadaf9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {"set_Val", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_ReadStateInfo.get_Pos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Net::Base64Stream_ReadStateInfo::*)()>(&::System::Net::Base64Stream_ReadStateInfo::get_Pos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadaf9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {"get_Pos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_ReadStateInfo.set_Pos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream_ReadStateInfo::*)(uint8_t)>(&::System::Net::Base64Stream_ReadStateInfo::set_Pos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadaf9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {"set_Pos", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_ReadStateInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream_ReadStateInfo::*)()>(&::System::Net::Base64Stream_ReadStateInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadad870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& System::Net::Base64Stream_ReadStateInfo::__cordl_internal_get__Val_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Val_k__BackingField;
}
constexpr uint8_t const& System::Net::Base64Stream_ReadStateInfo::__cordl_internal_get__Val_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Val_k__BackingField;
}
constexpr void System::Net::Base64Stream_ReadStateInfo::__cordl_internal_set__Val_k__BackingField(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Val_k__BackingField = value;
}
constexpr uint8_t& System::Net::Base64Stream_ReadStateInfo::__cordl_internal_get__Pos_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pos_k__BackingField;
}
constexpr uint8_t const& System::Net::Base64Stream_ReadStateInfo::__cordl_internal_get__Pos_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pos_k__BackingField;
}
constexpr void System::Net::Base64Stream_ReadStateInfo::__cordl_internal_set__Pos_k__BackingField(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Pos_k__BackingField = value;
}
inline uint8_t System::Net::Base64Stream_ReadStateInfo::get_Val()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {"get_Val", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void System::Net::Base64Stream_ReadStateInfo::set_Val(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {"set_Val", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t System::Net::Base64Stream_ReadStateInfo::get_Pos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {"get_Pos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void System::Net::Base64Stream_ReadStateInfo::set_Pos(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {"set_Pos", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Base64Stream_ReadStateInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadStateInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Base64Stream_ReadStateInfo* System::Net::Base64Stream_ReadStateInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Base64Stream_ReadStateInfo*>());
}
// Ctor Parameters []
constexpr ::System::Net::Base64Stream_ReadStateInfo::Base64Stream_ReadStateInfo()   {
}
//  Writing Method size for method: ::System::Net::Base64Stream_WriteAsyncResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream_WriteAsyncResult::*)(::System::Net::Base64Stream*, ::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Base64Stream_WriteAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xadadcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Base64Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_WriteAsyncResult.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream_WriteAsyncResult::*)()>(&::System::Net::Base64Stream_WriteAsyncResult::Write)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xadadd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {"Write", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_WriteAsyncResult.CompleteWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream_WriteAsyncResult::*)(::System::IAsyncResult*)>(&::System::Net::Base64Stream_WriteAsyncResult::CompleteWrite)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xadaf6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {"CompleteWrite", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_WriteAsyncResult.OnWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::Base64Stream_WriteAsyncResult::OnWrite)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xadaf71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {"OnWrite", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_WriteAsyncResult.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::Base64Stream_WriteAsyncResult::End)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadaee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {"End", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Base64Stream*& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::System::Net::Base64Stream* const& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_set__parent(::System::Net::Base64Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_set__buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr int32_t& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr int32_t const& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_set__offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr int32_t& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
constexpr int32_t& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__written()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____written;
}
constexpr int32_t const& System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_get__written() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____written;
}
constexpr void System::Net::Base64Stream_WriteAsyncResult::__cordl_internal_set__written(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____written = value;
}
inline void System::Net::Base64Stream_WriteAsyncResult::setStaticF_s_onWrite(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "s_onWrite", ::System::Net::Base64Stream_WriteAsyncResult*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Base64Stream_WriteAsyncResult::getStaticF_s_onWrite()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_onWrite", ::System::Net::Base64Stream_WriteAsyncResult*>();
}
inline void System::Net::Base64Stream_WriteAsyncResult::_ctor(::System::Net::Base64Stream*  parent, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Base64Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, buffer, offset, count, callback, state);
}
inline void System::Net::Base64Stream_WriteAsyncResult::Write()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {"Write", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Base64Stream_WriteAsyncResult::CompleteWrite(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {"CompleteWrite", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void System::Net::Base64Stream_WriteAsyncResult::OnWrite(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {"OnWrite", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline void System::Net::Base64Stream_WriteAsyncResult::End(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_WriteAsyncResult*>(),
                        {"End", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline ::System::Net::Base64Stream_WriteAsyncResult* System::Net::Base64Stream_WriteAsyncResult::New_ctor(::System::Net::Base64Stream*  parent, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Base64Stream_WriteAsyncResult*>(parent, buffer, offset, count, callback, state));
}
// Ctor Parameters []
constexpr ::System::Net::Base64Stream_WriteAsyncResult::Base64Stream_WriteAsyncResult()   {
}
//  Writing Method size for method: ::System::Net::Base64Stream_ReadAsyncResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream_ReadAsyncResult::*)(::System::Net::Base64Stream*, ::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Base64Stream_ReadAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xadad9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Base64Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_ReadAsyncResult.CompleteRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Base64Stream_ReadAsyncResult::*)(::System::IAsyncResult*)>(&::System::Net::Base64Stream_ReadAsyncResult::CompleteRead)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xadaf3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {"CompleteRead", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_ReadAsyncResult.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Base64Stream_ReadAsyncResult::*)()>(&::System::Net::Base64Stream_ReadAsyncResult::Read)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xadada44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {"Read", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_ReadAsyncResult.OnRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::Base64Stream_ReadAsyncResult::OnRead)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xadaf434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {"OnRead", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Base64Stream_ReadAsyncResult.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IAsyncResult*)>(&::System::Net::Base64Stream_ReadAsyncResult::End)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadaed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {"End", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Base64Stream*& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::System::Net::Base64Stream* const& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_set__parent(::System::Net::Base64Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_set__buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr int32_t& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr int32_t const& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_set__offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr int32_t& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
constexpr int32_t& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__read()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____read;
}
constexpr int32_t const& System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_get__read() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____read;
}
constexpr void System::Net::Base64Stream_ReadAsyncResult::__cordl_internal_set__read(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____read = value;
}
inline void System::Net::Base64Stream_ReadAsyncResult::setStaticF_s_onRead(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "s_onRead", ::System::Net::Base64Stream_ReadAsyncResult*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Base64Stream_ReadAsyncResult::getStaticF_s_onRead()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_onRead", ::System::Net::Base64Stream_ReadAsyncResult*>();
}
inline void System::Net::Base64Stream_ReadAsyncResult::_ctor(::System::Net::Base64Stream*  parent, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Base64Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, buffer, offset, count, callback, state);
}
inline bool System::Net::Base64Stream_ReadAsyncResult::CompleteRead(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {"CompleteRead", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline void System::Net::Base64Stream_ReadAsyncResult::Read()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {"Read", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Base64Stream_ReadAsyncResult::OnRead(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {"OnRead", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline int32_t System::Net::Base64Stream_ReadAsyncResult::End(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Base64Stream_ReadAsyncResult*>(),
                        {"End", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, result);
}
inline ::System::Net::Base64Stream_ReadAsyncResult* System::Net::Base64Stream_ReadAsyncResult::New_ctor(::System::Net::Base64Stream*  parent, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Base64Stream_ReadAsyncResult*>(parent, buffer, offset, count, callback, state));
}
// Ctor Parameters []
constexpr ::System::Net::Base64Stream_ReadAsyncResult::Base64Stream_ReadAsyncResult()   {
}
