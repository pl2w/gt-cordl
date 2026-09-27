#pragma once
// IWYU pragma private; include "System/Net/WebRequestStream.hpp"
#include "System/Net/zzzz__WebConnectionStream_impl.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__WebRequestStream__FinishWriting_d__31_def.hpp"
#include "System/Net/zzzz__WebRequestStream__Initialize_d__36_def.hpp"
#include "System/Net/zzzz__WebRequestStream__ProcessWrite_d__34_def.hpp"
#include "System/Net/zzzz__WebRequestStream__SetHeadersAsync_d__37_def.hpp"
#include "System/Net/zzzz__WebRequestStream__WriteAsyncInner_d__33_def.hpp"
#include "System/Net/zzzz__WebRequestStream__WriteChunkTrailer_d__40_def.hpp"
#include "System/Net/zzzz__WebRequestStream__WriteChunkTrailer_inner_d__39_def.hpp"
#include "System/Net/zzzz__WebRequestStream__WriteRequestAsync_d__38_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Net::WebRequestStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)(::System::Net::WebConnection*, ::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::WebConnectionTunnel*)>(&::System::Net::WebRequestStream::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xacbacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebConnection*>(), ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebConnectionTunnel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_InnerStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_InnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacc03d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_InnerStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_KeepAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacc03dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_KeepAlive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacc03e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequestStream*>(),
                    {::i2c::class_of<::System::Net::WebRequestStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacc03ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequestStream*>(),
                    {::i2c::class_of<::System::Net::WebRequestStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_SendChunked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_SendChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacc03f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_SendChunked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.set_SendChunked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)(bool)>(&::System::Net::WebRequestStream::set_SendChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacc03fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"set_SendChunked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_HasWriteBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_HasWriteBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xacc0404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_HasWriteBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_WriteBufferLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_WriteBufferLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xacc0434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_WriteBufferLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.GetWriteBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::BufferOffsetSize* (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::GetWriteBuffer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xacc0478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"GetWriteBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.FinishWriting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::FinishWriting)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xacc0550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"FinishWriting", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteAsync)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xacc0648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequestStream*>(),
                    {::i2c::class_of<::System::Net::WebRequestStream*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteAsyncInner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::WebCompletionSource*, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteAsyncInner)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xacc08a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"WriteAsyncInner", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebCompletionSource*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.ProcessWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::ProcessWrite)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xacc09e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"ProcessWrite", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.CheckWriteOverflow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)(int64_t, int64_t, int64_t)>(&::System::Net::WebRequestStream::CheckWriteOverflow)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xacc0b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"CheckWriteOverflow", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::Initialize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xacbef78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.SetHeadersAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(bool, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::SetHeadersAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xacc0bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"SetHeadersAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteRequestAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteRequestAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xacc0cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"WriteRequestAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteChunkTrailer_inner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteChunkTrailer_inner)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xacc0db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"WriteChunkTrailer_inner", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteChunkTrailer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::WriteChunkTrailer)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xacc0eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"WriteChunkTrailer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.KillBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::KillBuffer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xacc0ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"KillBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::ReadAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xacc0f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequestStream*>(),
                    {::i2c::class_of<::System::Net::WebRequestStream*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.TryReadFromBufferedContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Net::WebRequestStream::TryReadFromBufferedContent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacc1048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequestStream*>(),
                    {::i2c::class_of<::System::Net::WebRequestStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.Close_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestStream::*)(::by_ref<bool>)>(&::System::Net::WebRequestStream::Close_internal)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xacc1080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebRequestStream*>(),
                    {::i2c::class_of<::System::Net::WebRequestStream*>(), 43}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::MemoryStream*& System::Net::WebRequestStream::__cordl_internal_get_writeBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeBuffer;
}
constexpr ::System::IO::MemoryStream* const& System::Net::WebRequestStream::__cordl_internal_get_writeBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeBuffer;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_writeBuffer(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writeBuffer = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get_requestWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestWritten;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get_requestWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestWritten;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_requestWritten(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestWritten = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get_allowBuffering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowBuffering;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get_allowBuffering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowBuffering;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_allowBuffering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowBuffering = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get_sendChunked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendChunked;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get_sendChunked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendChunked;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_sendChunked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendChunked = value;
}
constexpr ::System::Net::WebCompletionSource*& System::Net::WebRequestStream::__cordl_internal_get_pendingWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingWrite;
}
constexpr ::System::Net::WebCompletionSource* const& System::Net::WebRequestStream::__cordl_internal_get_pendingWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingWrite;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_pendingWrite(::System::Net::WebCompletionSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingWrite = value;
}
constexpr int64_t& System::Net::WebRequestStream::__cordl_internal_get_totalWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalWritten;
}
constexpr int64_t const& System::Net::WebRequestStream::__cordl_internal_get_totalWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalWritten;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_totalWritten(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalWritten = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::WebRequestStream::__cordl_internal_get_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr ::ArrayW<uint8_t> const& System::Net::WebRequestStream::__cordl_internal_get_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_headers(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headers = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get_headersSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headersSent;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get_headersSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headersSent;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_headersSent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headersSent = value;
}
constexpr int32_t& System::Net::WebRequestStream::__cordl_internal_get_completeRequestWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completeRequestWritten;
}
constexpr int32_t const& System::Net::WebRequestStream::__cordl_internal_get_completeRequestWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completeRequestWritten;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_completeRequestWritten(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completeRequestWritten = value;
}
constexpr int32_t& System::Net::WebRequestStream::__cordl_internal_get_chunkTrailerWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkTrailerWritten;
}
constexpr int32_t const& System::Net::WebRequestStream::__cordl_internal_get_chunkTrailerWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkTrailerWritten;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_chunkTrailerWritten(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkTrailerWritten = value;
}
constexpr ::StringW& System::Net::WebRequestStream::__cordl_internal_get_ME()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ME;
}
constexpr ::StringW const& System::Net::WebRequestStream::__cordl_internal_get_ME() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ME;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set_ME(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ME = value;
}
constexpr ::System::IO::Stream*& System::Net::WebRequestStream::__cordl_internal_get__InnerStream_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InnerStream_k__BackingField;
}
constexpr ::System::IO::Stream* const& System::Net::WebRequestStream::__cordl_internal_get__InnerStream_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InnerStream_k__BackingField;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set__InnerStream_k__BackingField(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InnerStream_k__BackingField = value;
}
constexpr bool& System::Net::WebRequestStream::__cordl_internal_get__KeepAlive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KeepAlive_k__BackingField;
}
constexpr bool const& System::Net::WebRequestStream::__cordl_internal_get__KeepAlive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____KeepAlive_k__BackingField;
}
constexpr void System::Net::WebRequestStream::__cordl_internal_set__KeepAlive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____KeepAlive_k__BackingField = value;
}
inline void System::Net::WebRequestStream::setStaticF_crlf(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "crlf", ::System::Net::WebRequestStream*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Net::WebRequestStream::getStaticF_crlf()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "crlf", ::System::Net::WebRequestStream*>();
}
inline void System::Net::WebRequestStream::_ctor(::System::Net::WebConnection*  connection, ::System::Net::WebOperation*  operation, ::System::IO::Stream*  stream, ::System::Net::WebConnectionTunnel*  tunnel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebConnection*>(), ::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebConnectionTunnel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, operation, stream, tunnel);
}
inline ::System::IO::Stream* System::Net::WebRequestStream::get_InnerStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_InnerStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_KeepAlive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequestStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequestStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_SendChunked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_SendChunked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebRequestStream::set_SendChunked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"set_SendChunked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebRequestStream::get_HasWriteBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_HasWriteBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::WebRequestStream::get_WriteBufferLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"get_WriteBufferLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Net::BufferOffsetSize* System::Net::WebRequestStream::GetWriteBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"GetWriteBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::BufferOffsetSize*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::FinishWriting(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"FinishWriting", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequestStream*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteAsyncInner(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Net::WebCompletionSource*  completion, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"WriteAsyncInner", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebCompletionSource*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, size, completion, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::ProcessWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"ProcessWrite", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline void System::Net::WebRequestStream::CheckWriteOverflow(int64_t  contentLength, int64_t  totalWritten, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"CheckWriteOverflow", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentLength, totalWritten, size);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::Initialize(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::SetHeadersAsync(bool  setInternalLength, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"SetHeadersAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, setInternalLength, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteRequestAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"WriteRequestAsync", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteChunkTrailer_inner(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"WriteChunkTrailer_inner", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteChunkTrailer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"WriteChunkTrailer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void System::Net::WebRequestStream::KillBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebRequestStream*>(),
                        {"KillBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::WebRequestStream::ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequestStream*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline bool System::Net::WebRequestStream::TryReadFromBufferedContent(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::by_ref<int32_t>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequestStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset, count, result);
}
inline void System::Net::WebRequestStream::Close_internal(::by_ref<bool>  disposed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebRequestStream*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposed);
}
inline ::System::Net::WebRequestStream* System::Net::WebRequestStream::New_ctor(::System::Net::WebConnection*  connection, ::System::Net::WebOperation*  operation, ::System::IO::Stream*  stream, ::System::Net::WebConnectionTunnel*  tunnel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequestStream*>(connection, operation, stream, tunnel));
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream::WebRequestStream()   {
}
