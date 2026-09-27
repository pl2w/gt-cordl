#pragma once
// IWYU pragma private; include "System/Net/MonoChunkStream.hpp"
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/Net/zzzz__MonoChunkStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Net/zzzz__MonoChunkStream__FinishReading_d__8_def.hpp"
#include "System/Net/zzzz__MonoChunkStream__ProcessReadAsync_d__7_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Net::MonoChunkStream.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::MonoChunkStream::*)()>(&::System::Net::MonoChunkStream::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacab8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {"get_Headers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.get_Decoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::MonoChunkParser* (::System::Net::MonoChunkStream::*)()>(&::System::Net::MonoChunkStream::get_Decoder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacab8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {"get_Decoder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::MonoChunkStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::WebHeaderCollection*)>(&::System::Net::MonoChunkStream::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xacab8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.ProcessReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::MonoChunkStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::MonoChunkStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xacab96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                    {::i2c::class_of<::System::Net::MonoChunkStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.FinishReading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::MonoChunkStream::*)(::System::Threading::CancellationToken)>(&::System::Net::MonoChunkStream::FinishReading)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xacabad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                    {::i2c::class_of<::System::Net::MonoChunkStream*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.ThrowExpectingChunkTrailer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Net::MonoChunkStream::ThrowExpectingChunkTrailer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacabbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {"ThrowExpectingChunkTrailer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.__n__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::MonoChunkStream::*)(::System::Threading::CancellationToken)>(&::System::Net::MonoChunkStream::__n__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacabc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {"<>n__0", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebHeaderCollection*& System::Net::MonoChunkStream::__cordl_internal_get__Headers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Headers_k__BackingField;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::MonoChunkStream::__cordl_internal_get__Headers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Headers_k__BackingField;
}
constexpr void System::Net::MonoChunkStream::__cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Headers_k__BackingField = value;
}
constexpr ::System::Net::MonoChunkParser*& System::Net::MonoChunkStream::__cordl_internal_get__Decoder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Decoder_k__BackingField;
}
constexpr ::System::Net::MonoChunkParser* const& System::Net::MonoChunkStream::__cordl_internal_get__Decoder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Decoder_k__BackingField;
}
constexpr void System::Net::MonoChunkStream::__cordl_internal_set__Decoder_k__BackingField(::System::Net::MonoChunkParser*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Decoder_k__BackingField = value;
}
inline ::System::Net::WebHeaderCollection* System::Net::MonoChunkStream::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {"get_Headers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline ::System::Net::MonoChunkParser* System::Net::MonoChunkStream::get_Decoder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {"get_Decoder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::MonoChunkParser*>(this, ___internal_method);
}
inline void System::Net::MonoChunkStream::_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::WebHeaderCollection*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation, innerStream, headers);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::MonoChunkStream::ProcessReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::MonoChunkStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::MonoChunkStream::FinishReading(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::MonoChunkStream*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void System::Net::MonoChunkStream::ThrowExpectingChunkTrailer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {"ThrowExpectingChunkTrailer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::MonoChunkStream::__n__0(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkStream*>(),
                        {"<>n__0", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Net::MonoChunkStream* System::Net::MonoChunkStream::New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::WebHeaderCollection*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::MonoChunkStream*>(operation, innerStream, headers));
}
// Ctor Parameters []
constexpr ::System::Net::MonoChunkStream::MonoChunkStream()   {
}
