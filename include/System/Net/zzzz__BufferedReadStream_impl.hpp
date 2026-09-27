#pragma once
// IWYU pragma private; include "System/Net/BufferedReadStream.hpp"
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/Net/zzzz__BufferedReadStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__BufferedReadStream__ProcessReadAsync_d__2_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Net::BufferedReadStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::BufferedReadStream::*)(::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::BufferOffsetSize*)>(&::System::Net::BufferedReadStream::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac8ba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::BufferedReadStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BufferedReadStream.ProcessReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::BufferedReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::BufferedReadStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xac8ba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::BufferedReadStream*>(),
                    {::i2c::class_of<::System::Net::BufferedReadStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BufferedReadStream.TryReadFromBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::BufferedReadStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Net::BufferedReadStream::TryReadFromBuffer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac8bbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::BufferedReadStream*>(),
                        {"TryReadFromBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::BufferOffsetSize*& System::Net::BufferedReadStream::__cordl_internal_get_readBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readBuffer;
}
constexpr ::System::Net::BufferOffsetSize* const& System::Net::BufferedReadStream::__cordl_internal_get_readBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readBuffer;
}
constexpr void System::Net::BufferedReadStream::__cordl_internal_set_readBuffer(::System::Net::BufferOffsetSize*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readBuffer = value;
}
inline void System::Net::BufferedReadStream::_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::BufferOffsetSize*  readBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::BufferedReadStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebOperation*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation, innerStream, readBuffer);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::BufferedReadStream::ProcessReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::BufferedReadStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline bool System::Net::BufferedReadStream::TryReadFromBuffer(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::BufferedReadStream*>(),
                        {"TryReadFromBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, offset, size, result);
}
inline ::System::Net::BufferedReadStream* System::Net::BufferedReadStream::New_ctor(::System::Net::WebOperation*  operation, ::System::IO::Stream*  innerStream, ::System::Net::BufferOffsetSize*  readBuffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::BufferedReadStream*>(operation, innerStream, readBuffer));
}
// Ctor Parameters []
constexpr ::System::Net::BufferedReadStream::BufferedReadStream()   {
}
