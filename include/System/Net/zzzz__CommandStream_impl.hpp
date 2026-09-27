#pragma once
// IWYU pragma private; include "System/Net/CommandStream.hpp"
#include "System/Net/zzzz__CommandStream_PipelineEntryFlags_impl.hpp"
#include "System/Net/zzzz__NetworkStreamWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/zzzz__CommandStream_PipelineEntryFlags_def.hpp"
#include "System/Net/zzzz__CommandStream_PipelineInstruction_def.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/Net/zzzz__ReceiveState_def.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::CommandStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::Sockets::TcpClient*)>(&::System::Net::CommandStream::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadb37ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::TcpClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)(::System::Exception*)>(&::System::Net::CommandStream::Abort)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xadb38cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CommandStream*>(),
                    {::i2c::class_of<::System::Net::CommandStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)(bool)>(&::System::Net::CommandStream::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xadb3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CommandStream*>(),
                    {::i2c::class_of<::System::Net::CommandStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.InvokeRequestCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)(::System::Object*)>(&::System::Net::CommandStream::InvokeRequestCallback)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadb3b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"InvokeRequestCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.get_RecoverableFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::get_RecoverableFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb3c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"get_RecoverableFailure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.MarkAsRecoverableFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::MarkAsRecoverableFailure)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xadb3c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"MarkAsRecoverableFailure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.SubmitRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::CommandStream::*)(::System::Net::WebRequest*, bool, bool)>(&::System::Net::CommandStream::SubmitRequest)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadb3c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"SubmitRequest", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ClearState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ClearState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadb424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CommandStream*>(),
                    {::i2c::class_of<::System::Net::CommandStream*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.BuildCommandsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::CommandStream_PipelineEntry*> (::System::Net::CommandStream::*)(::System::Net::WebRequest*)>(&::System::Net::CommandStream::BuildCommandsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb425c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CommandStream*>(),
                    {::i2c::class_of<::System::Net::CommandStream*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.GenerateException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Net::CommandStream::*)(::StringW, ::System::Net::WebExceptionStatus, ::System::Exception*)>(&::System::Net::CommandStream::GenerateException)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xadb4264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"GenerateException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.GenerateException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Net::CommandStream::*)(::System::Net::FtpStatusCode, ::StringW, ::System::Exception*)>(&::System::Net::CommandStream::GenerateException)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xadb42dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"GenerateException", {}, {::i2c::type_of<::System::Net::FtpStatusCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.InitCommandPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::WebRequest*, ::ArrayW<::System::Net::CommandStream_PipelineEntry*>, bool)>(&::System::Net::CommandStream::InitCommandPipeline)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadb3cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"InitCommandPipeline", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::ArrayW<::System::Net::CommandStream_PipelineEntry*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.CheckContinuePipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::CheckContinuePipeline)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xadb439c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"CheckContinuePipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ContinueCommandPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ContinueCommandPipeline)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0xadb3d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"ContinueCommandPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PostSendCommandProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CommandStream::*)(::by_ref<::System::IO::Stream*>)>(&::System::Net::CommandStream::PostSendCommandProcessing)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xadb4460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"PostSendCommandProcessing", {}, {::i2c::type_of<::by_ref<::System::IO::Stream*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PostReadCommandProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CommandStream::*)(::by_ref<::System::IO::Stream*>)>(&::System::Net::CommandStream::PostReadCommandProcessing)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xadb48c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"PostReadCommandProcessing", {}, {::i2c::type_of<::by_ref<::System::IO::Stream*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.PipelineCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandStream_PipelineInstruction (::System::Net::CommandStream::*)(::System::Net::CommandStream_PipelineEntry*, ::System::Net::ResponseDescription*, bool, ::by_ref<::System::IO::Stream*>)>(&::System::Net::CommandStream::PipelineCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb4afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CommandStream*>(),
                    {::i2c::class_of<::System::Net::CommandStream*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReadCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::CommandStream::ReadCallback)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xadb4b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"ReadCallback", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.WriteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::CommandStream::WriteCallback)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xadb53ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"WriteCallback", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.get_Encoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb567c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"get_Encoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.set_Encoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)(::System::Text::Encoding*)>(&::System::Net::CommandStream::set_Encoding)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadb5684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"set_Encoding", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.CheckValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CommandStream::*)(::System::Net::ResponseDescription*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Net::CommandStream::CheckValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb56d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CommandStream*>(),
                    {::i2c::class_of<::System::Net::CommandStream*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReceiveCommandResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ResponseDescription* (::System::Net::CommandStream::*)()>(&::System::Net::CommandStream::ReceiveCommandResponse)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xadb4594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"ReceiveCommandResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream.ReceiveCommandResponseCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream::*)(::System::Net::ReceiveState*, int32_t)>(&::System::Net::CommandStream::ReceiveCommandResponseCallback)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0xadb4e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"ReceiveCommandResponseCallback", {}, {::i2c::type_of<::System::Net::ReceiveState*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::CommandStream::__cordl_internal_get__recoverableFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recoverableFailure;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__recoverableFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recoverableFailure;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__recoverableFailure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recoverableFailure = value;
}
constexpr ::System::Net::WebRequest*& System::Net::CommandStream::__cordl_internal_get__request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr ::System::Net::WebRequest* const& System::Net::CommandStream::__cordl_internal_get__request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__request(::System::Net::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request = value;
}
constexpr bool& System::Net::CommandStream::__cordl_internal_get__isAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAsync;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__isAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAsync;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__isAsync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAsync = value;
}
constexpr bool& System::Net::CommandStream::__cordl_internal_get__aborted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aborted;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__aborted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aborted;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__aborted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aborted = value;
}
constexpr ::ArrayW<::System::Net::CommandStream_PipelineEntry*>& System::Net::CommandStream::__cordl_internal_get__commands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commands;
}
constexpr ::ArrayW<::System::Net::CommandStream_PipelineEntry*> const& System::Net::CommandStream::__cordl_internal_get__commands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commands;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__commands(::ArrayW<::System::Net::CommandStream_PipelineEntry*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____commands = value;
}
constexpr int32_t& System::Net::CommandStream::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr int32_t const& System::Net::CommandStream::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
constexpr bool& System::Net::CommandStream::__cordl_internal_get__doRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doRead;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__doRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doRead;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__doRead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doRead = value;
}
constexpr bool& System::Net::CommandStream::__cordl_internal_get__doSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doSend;
}
constexpr bool const& System::Net::CommandStream::__cordl_internal_get__doSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doSend;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__doSend(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doSend = value;
}
constexpr ::System::Net::ResponseDescription*& System::Net::CommandStream::__cordl_internal_get__currentResponseDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentResponseDescription;
}
constexpr ::System::Net::ResponseDescription* const& System::Net::CommandStream::__cordl_internal_get__currentResponseDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentResponseDescription;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__currentResponseDescription(::System::Net::ResponseDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentResponseDescription = value;
}
constexpr ::StringW& System::Net::CommandStream::__cordl_internal_get__abortReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abortReason;
}
constexpr ::StringW const& System::Net::CommandStream::__cordl_internal_get__abortReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____abortReason;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__abortReason(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____abortReason = value;
}
constexpr ::StringW& System::Net::CommandStream::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::StringW const& System::Net::CommandStream::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__buffer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr ::System::Text::Encoding*& System::Net::CommandStream::__cordl_internal_get__encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Net::CommandStream::__cordl_internal_get__encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__encoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoding = value;
}
constexpr ::System::Text::Decoder*& System::Net::CommandStream::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::System::Text::Decoder* const& System::Net::CommandStream::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void System::Net::CommandStream::__cordl_internal_set__decoder(::System::Text::Decoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
inline void System::Net::CommandStream::setStaticF_s_writeCallbackDelegate(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "s_writeCallbackDelegate", ::System::Net::CommandStream*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::CommandStream::getStaticF_s_writeCallbackDelegate()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_writeCallbackDelegate", ::System::Net::CommandStream*>();
}
inline void System::Net::CommandStream::setStaticF_s_readCallbackDelegate(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "s_readCallbackDelegate", ::System::Net::CommandStream*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::CommandStream::getStaticF_s_readCallbackDelegate()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_readCallbackDelegate", ::System::Net::CommandStream*>();
}
inline void System::Net::CommandStream::_ctor(::System::Net::Sockets::TcpClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::TcpClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void System::Net::CommandStream::Abort(::System::Exception*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CommandStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::CommandStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CommandStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::CommandStream::InvokeRequestCallback(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"InvokeRequestCallback", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool System::Net::CommandStream::get_RecoverableFailure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"get_RecoverableFailure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::CommandStream::MarkAsRecoverableFailure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"MarkAsRecoverableFailure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::CommandStream::SubmitRequest(::System::Net::WebRequest*  request, bool  isAsync, bool  readInitalResponseOnConnect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"SubmitRequest", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, request, isAsync, readInitalResponseOnConnect);
}
inline void System::Net::CommandStream::ClearState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CommandStream*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Net::CommandStream_PipelineEntry*> System::Net::CommandStream::BuildCommandsList(::System::Net::WebRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CommandStream*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::CommandStream_PipelineEntry*>>(this, ___internal_method, request);
}
inline ::System::Exception* System::Net::CommandStream::GenerateException(::StringW  message, ::System::Net::WebExceptionStatus  status, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"GenerateException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, message, status, innerException);
}
inline ::System::Exception* System::Net::CommandStream::GenerateException(::System::Net::FtpStatusCode  code, ::StringW  statusDescription, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"GenerateException", {}, {::i2c::type_of<::System::Net::FtpStatusCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, code, statusDescription, innerException);
}
inline void System::Net::CommandStream::InitCommandPipeline(::System::Net::WebRequest*  request, ::ArrayW<::System::Net::CommandStream_PipelineEntry*>  commands, bool  isAsync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"InitCommandPipeline", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::ArrayW<::System::Net::CommandStream_PipelineEntry*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, commands, isAsync);
}
inline void System::Net::CommandStream::CheckContinuePipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"CheckContinuePipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::CommandStream::ContinueCommandPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"ContinueCommandPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool System::Net::CommandStream::PostSendCommandProcessing(::by_ref<::System::IO::Stream*>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"PostSendCommandProcessing", {}, {::i2c::type_of<::by_ref<::System::IO::Stream*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline bool System::Net::CommandStream::PostReadCommandProcessing(::by_ref<::System::IO::Stream*>  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"PostReadCommandProcessing", {}, {::i2c::type_of<::by_ref<::System::IO::Stream*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline ::GlobalNamespace::CommandStream_PipelineInstruction System::Net::CommandStream::PipelineCallback(::System::Net::CommandStream_PipelineEntry*  entry, ::System::Net::ResponseDescription*  response, bool  timeout, ::by_ref<::System::IO::Stream*>  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CommandStream*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandStream_PipelineInstruction>(this, ___internal_method, entry, response, timeout, stream);
}
inline void System::Net::CommandStream::ReadCallback(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"ReadCallback", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncResult);
}
inline void System::Net::CommandStream::WriteCallback(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"WriteCallback", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncResult);
}
inline ::System::Text::Encoding* System::Net::CommandStream::get_Encoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"get_Encoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void System::Net::CommandStream::set_Encoding(::System::Text::Encoding*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"set_Encoding", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::CommandStream::CheckValid(::System::Net::ResponseDescription*  response, ::by_ref<int32_t>  validThrough, ::by_ref<int32_t>  completeLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CommandStream*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, validThrough, completeLength);
}
inline ::System::Net::ResponseDescription* System::Net::CommandStream::ReceiveCommandResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"ReceiveCommandResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ResponseDescription*>(this, ___internal_method);
}
inline void System::Net::CommandStream::ReceiveCommandResponseCallback(::System::Net::ReceiveState*  state, int32_t  bytesRead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream*>(),
                        {"ReceiveCommandResponseCallback", {}, {::i2c::type_of<::System::Net::ReceiveState*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, bytesRead);
}
inline ::System::Net::CommandStream* System::Net::CommandStream::New_ctor(::System::Net::Sockets::TcpClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CommandStream*>(client));
}
// Ctor Parameters []
constexpr ::System::Net::CommandStream::CommandStream()   {
}
//  Writing Method size for method: ::System::Net::CommandStream_PipelineEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream_PipelineEntry::*)(::StringW)>(&::System::Net::CommandStream_PipelineEntry::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xadb587c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream_PipelineEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream_PipelineEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CommandStream_PipelineEntry::*)(::StringW, ::GlobalNamespace::CommandStream_PipelineEntryFlags)>(&::System::Net::CommandStream_PipelineEntry::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xadb58ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream_PipelineEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::CommandStream_PipelineEntryFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CommandStream_PipelineEntry.HasFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CommandStream_PipelineEntry::*)(::GlobalNamespace::CommandStream_PipelineEntryFlags)>(&::System::Net::CommandStream_PipelineEntry::HasFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadb4450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream_PipelineEntry*>(),
                        {"HasFlag", {}, {::i2c::type_of<::GlobalNamespace::CommandStream_PipelineEntryFlags>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::CommandStream_PipelineEntry::__cordl_internal_get_Command()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Command;
}
constexpr ::StringW const& System::Net::CommandStream_PipelineEntry::__cordl_internal_get_Command() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Command;
}
constexpr void System::Net::CommandStream_PipelineEntry::__cordl_internal_set_Command(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Command = value;
}
constexpr ::GlobalNamespace::CommandStream_PipelineEntryFlags& System::Net::CommandStream_PipelineEntry::__cordl_internal_get_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr ::GlobalNamespace::CommandStream_PipelineEntryFlags const& System::Net::CommandStream_PipelineEntry::__cordl_internal_get_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr void System::Net::CommandStream_PipelineEntry::__cordl_internal_set_Flags(::GlobalNamespace::CommandStream_PipelineEntryFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flags = value;
}
inline void System::Net::CommandStream_PipelineEntry::_ctor(::StringW  command)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream_PipelineEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command);
}
inline void System::Net::CommandStream_PipelineEntry::_ctor(::StringW  command, ::GlobalNamespace::CommandStream_PipelineEntryFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream_PipelineEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::CommandStream_PipelineEntryFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, command, flags);
}
inline bool System::Net::CommandStream_PipelineEntry::HasFlag(::GlobalNamespace::CommandStream_PipelineEntryFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CommandStream_PipelineEntry*>(),
                        {"HasFlag", {}, {::i2c::type_of<::GlobalNamespace::CommandStream_PipelineEntryFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline ::System::Net::CommandStream_PipelineEntry* System::Net::CommandStream_PipelineEntry::New_ctor(::StringW  command)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CommandStream_PipelineEntry*>(command));
}
inline ::System::Net::CommandStream_PipelineEntry* System::Net::CommandStream_PipelineEntry::New_ctor(::StringW  command, ::GlobalNamespace::CommandStream_PipelineEntryFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CommandStream_PipelineEntry*>(command, flags));
}
// Ctor Parameters []
constexpr ::System::Net::CommandStream_PipelineEntry::CommandStream_PipelineEntry()   {
}
