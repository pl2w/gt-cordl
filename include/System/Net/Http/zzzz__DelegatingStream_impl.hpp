#pragma once
// IWYU pragma private; include "System/Net/Http/DelegatingStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/Http/zzzz__DelegatingStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xace44d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xace44ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xace4508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xace4524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(int64_t)>(&::System::Net::Http::DelegatingStream::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.get_ReadTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.set_ReadTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(int32_t)>(&::System::Net::Http::DelegatingStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace45a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.get_CanTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xace45c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.get_WriteTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace45dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.set_WriteTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(int32_t)>(&::System::Net::Http::DelegatingStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace45fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(::System::IO::Stream*)>(&::System::Net::Http::DelegatingStream::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xace461c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(bool)>(&::System::Net::Http::DelegatingStream::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xace4690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Http::DelegatingStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Net::Http::DelegatingStream::Seek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace46d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Http::DelegatingStream::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace46f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::DelegatingStream::*)(::System::Span_1<uint8_t>)>(&::System::Net::Http::DelegatingStream::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::ReadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::Http::DelegatingStream::ReadAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Http::DelegatingStream::*)(::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::Http::DelegatingStream::ReadAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.BeginRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Http::DelegatingStream::BeginRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.EndRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::DelegatingStream::*)(::System::IAsyncResult*)>(&::System::Net::Http::DelegatingStream::EndRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace47b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)()>(&::System::Net::Http::DelegatingStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace47d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.FlushAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Http::DelegatingStream::*)(::System::Threading::CancellationToken)>(&::System::Net::Http::DelegatingStream::FlushAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace47f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(int64_t)>(&::System::Net::Http::DelegatingStream::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Http::DelegatingStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Net::Http::DelegatingStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(uint8_t)>(&::System::Net::Http::DelegatingStream::WriteByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::Http::DelegatingStream::WriteAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Http::DelegatingStream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::Http::DelegatingStream::WriteAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace48b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.BeginWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Http::DelegatingStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Http::DelegatingStream::BeginWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace48d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.EndWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::DelegatingStream::*)(::System::IAsyncResult*)>(&::System::Net::Http::DelegatingStream::EndWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace48f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::DelegatingStream.CopyToAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Http::DelegatingStream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::Http::DelegatingStream::CopyToAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xace4910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                    {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 19}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::Http::DelegatingStream::__cordl_internal_get__innerStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr ::System::IO::Stream* const& System::Net::Http::DelegatingStream::__cordl_internal_get__innerStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr void System::Net::Http::DelegatingStream::__cordl_internal_set__innerStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____innerStream = value;
}
inline bool System::Net::Http::DelegatingStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::Http::DelegatingStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::Http::DelegatingStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Net::Http::DelegatingStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::Http::DelegatingStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::Http::DelegatingStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::Http::DelegatingStream::get_ReadTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Http::DelegatingStream::set_ReadTimeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::DelegatingStream::get_CanTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::Http::DelegatingStream::get_WriteTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Http::DelegatingStream::set_WriteTimeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::DelegatingStream::_ctor(::System::IO::Stream*  innerStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Http::DelegatingStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerStream);
}
inline void System::Net::Http::DelegatingStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int64_t System::Net::Http::DelegatingStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline int32_t System::Net::Http::DelegatingStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Net::Http::DelegatingStream::Read(::System::Span_1<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline int32_t System::Net::Http::DelegatingStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Http::DelegatingStream::ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Http::DelegatingStream::ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::IAsyncResult* System::Net::Http::DelegatingStream::BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::Net::Http::DelegatingStream::EndRead(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline void System::Net::Http::DelegatingStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::DelegatingStream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void System::Net::Http::DelegatingStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::DelegatingStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::Net::Http::DelegatingStream::Write(::System::ReadOnlySpan_1<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::Net::Http::DelegatingStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::DelegatingStream::WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Http::DelegatingStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::IAsyncResult* System::Net::Http::DelegatingStream::BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::Net::Http::DelegatingStream::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task* System::Net::Http::DelegatingStream::CopyToAsync(::System::IO::Stream*  destination, int32_t  bufferSize, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Http::DelegatingStream*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline ::System::Net::Http::DelegatingStream* System::Net::Http::DelegatingStream::New_ctor(::System::IO::Stream*  innerStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::DelegatingStream*>(innerStream));
}
// Ctor Parameters []
constexpr ::System::Net::Http::DelegatingStream::DelegatingStream()   {
}
