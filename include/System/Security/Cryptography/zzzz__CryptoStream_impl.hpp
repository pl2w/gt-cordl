#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream__ReadAsyncCore_d__42_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream__ReadAsyncInternal_d__37_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream__WriteAsyncCore_d__49_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream__WriteAsyncInternal_d__46_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::System::IO::Stream*, ::System::Security::Cryptography::ICryptoTransform*, ::System::Security::Cryptography::CryptoStreamMode)>(&::System::Security::Cryptography::CryptoStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15bda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Security::Cryptography::ICryptoTransform*>(), ::i2c::type_of<::System::Security::Cryptography::CryptoStreamMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::System::IO::Stream*, ::System::Security::Cryptography::ICryptoTransform*, ::System::Security::Cryptography::CryptoStreamMode, bool)>(&::System::Security::Cryptography::CryptoStream::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa15bdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Security::Cryptography::ICryptoTransform*>(), ::i2c::type_of<::System::Security::Cryptography::CryptoStreamMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15c10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15c114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15c11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::get_Length)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa15c124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::get_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa15c170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(int64_t)>(&::System::Security::Cryptography::CryptoStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa15c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_HasFlushedFinalBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15c208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"get_HasFlushedFinalBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.FlushFinalBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::FlushFinalBlock)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa15c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"FlushFinalBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa15c438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.FlushAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Security::Cryptography::CryptoStream::*)(::System::Threading::CancellationToken)>(&::System::Security::Cryptography::CryptoStream::FlushAsync)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa15c43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Security::Cryptography::CryptoStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Security::Cryptography::CryptoStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa15c5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(int64_t)>(&::System::Security::Cryptography::CryptoStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa15c604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Security::Cryptography::CryptoStream::ReadAsync)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa15c650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.BeginRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Security::Cryptography::CryptoStream::BeginRead)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa15c934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.EndRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::CryptoStream::*)(::System::IAsyncResult*)>(&::System::Security::Cryptography::CryptoStream::EndRead)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa15c9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.ReadAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Security::Cryptography::CryptoStream::ReadAsyncInternal)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa15c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"ReadAsyncInternal", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::ReadByte)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa15ca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(uint8_t)>(&::System::Security::Cryptography::CryptoStream::WriteByte)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa15caac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::CryptoStream::Read)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa15cb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.CheckReadArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::CryptoStream::CheckReadArguments)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa15c698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"CheckReadArguments", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.ReadAsyncCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken, bool)>(&::System::Security::Cryptography::CryptoStream::ReadAsyncCore)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa15cbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"ReadAsyncCore", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Security::Cryptography::CryptoStream::WriteAsync)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa15cd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.BeginWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Security::Cryptography::CryptoStream::BeginWrite)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa15cfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.EndWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::System::IAsyncResult*)>(&::System::Security::Cryptography::CryptoStream::EndWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa15d098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.WriteAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Security::Cryptography::CryptoStream::WriteAsyncInternal)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa15ceb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"WriteAsyncInternal", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::CryptoStream::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa15d0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.CheckWriteArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::CryptoStream::CheckWriteArguments)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa15cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"CheckWriteArguments", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.WriteAsyncCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken, bool)>(&::System::Security::Cryptography::CryptoStream::WriteAsyncCore)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa15d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"WriteAsyncCore", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa15d250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(bool)>(&::System::Security::Cryptography::CryptoStream::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa15d260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                    {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.InitializeBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::InitializeBuffer)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa15bf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"InitializeBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_AsyncActiveSemaphore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SemaphoreSlim* (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::get_AsyncActiveSemaphore)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa15d304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"get_AsyncActiveSemaphore", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Security::Cryptography::CryptoStream::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stream = value;
}
constexpr ::System::Security::Cryptography::ICryptoTransform*& System::Security::Cryptography::CryptoStream::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::System::Security::Cryptography::ICryptoTransform* const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__transform(::System::Security::Cryptography::ICryptoTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transform = value;
}
constexpr ::System::Security::Cryptography::CryptoStreamMode& System::Security::Cryptography::CryptoStream::__cordl_internal_get__transformMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformMode;
}
constexpr ::System::Security::Cryptography::CryptoStreamMode const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__transformMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformMode;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__transformMode(::System::Security::Cryptography::CryptoStreamMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformMode = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::CryptoStream::__cordl_internal_get__inputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__inputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__inputBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputBuffer = value;
}
constexpr int32_t& System::Security::Cryptography::CryptoStream::__cordl_internal_get__inputBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBufferIndex;
}
constexpr int32_t const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__inputBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBufferIndex;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__inputBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputBufferIndex = value;
}
constexpr int32_t& System::Security::Cryptography::CryptoStream::__cordl_internal_get__inputBlockSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBlockSize;
}
constexpr int32_t const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__inputBlockSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBlockSize;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__inputBlockSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputBlockSize = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::CryptoStream::__cordl_internal_get__outputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__outputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputBuffer;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__outputBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputBuffer = value;
}
constexpr int32_t& System::Security::Cryptography::CryptoStream::__cordl_internal_get__outputBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputBufferIndex;
}
constexpr int32_t const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__outputBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputBufferIndex;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__outputBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputBufferIndex = value;
}
constexpr int32_t& System::Security::Cryptography::CryptoStream::__cordl_internal_get__outputBlockSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputBlockSize;
}
constexpr int32_t const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__outputBlockSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputBlockSize;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__outputBlockSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputBlockSize = value;
}
constexpr bool& System::Security::Cryptography::CryptoStream::__cordl_internal_get__canRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canRead;
}
constexpr bool const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__canRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canRead;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__canRead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canRead = value;
}
constexpr bool& System::Security::Cryptography::CryptoStream::__cordl_internal_get__canWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canWrite;
}
constexpr bool const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__canWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canWrite;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__canWrite(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canWrite = value;
}
constexpr bool& System::Security::Cryptography::CryptoStream::__cordl_internal_get__finalBlockTransformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalBlockTransformed;
}
constexpr bool const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__finalBlockTransformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalBlockTransformed;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__finalBlockTransformed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finalBlockTransformed = value;
}
constexpr ::System::Threading::SemaphoreSlim*& System::Security::Cryptography::CryptoStream::__cordl_internal_get__lazyAsyncActiveSemaphore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lazyAsyncActiveSemaphore;
}
constexpr ::System::Threading::SemaphoreSlim* const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__lazyAsyncActiveSemaphore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lazyAsyncActiveSemaphore;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__lazyAsyncActiveSemaphore(::System::Threading::SemaphoreSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lazyAsyncActiveSemaphore = value;
}
constexpr bool& System::Security::Cryptography::CryptoStream::__cordl_internal_get__leaveOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr bool const& System::Security::Cryptography::CryptoStream::__cordl_internal_get__leaveOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr void System::Security::Cryptography::CryptoStream::__cordl_internal_set__leaveOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leaveOpen = value;
}
inline void System::Security::Cryptography::CryptoStream::_ctor(::System::IO::Stream*  stream, ::System::Security::Cryptography::ICryptoTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Security::Cryptography::ICryptoTransform*>(), ::i2c::type_of<::System::Security::Cryptography::CryptoStreamMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, transform, mode);
}
inline void System::Security::Cryptography::CryptoStream::_ctor(::System::IO::Stream*  stream, ::System::Security::Cryptography::ICryptoTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Security::Cryptography::ICryptoTransform*>(), ::i2c::type_of<::System::Security::Cryptography::CryptoStreamMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, transform, mode, leaveOpen);
}
inline bool System::Security::Cryptography::CryptoStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CryptoStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CryptoStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Security::Cryptography::CryptoStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Security::Cryptography::CryptoStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"get_HasFlushedFinalBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::FlushFinalBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"FlushFinalBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Security::Cryptography::CryptoStream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline int64_t System::Security::Cryptography::CryptoStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::Security::Cryptography::CryptoStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Security::Cryptography::CryptoStream::ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::IAsyncResult* System::Security::Cryptography::CryptoStream::BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::Security::Cryptography::CryptoStream::EndRead(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Security::Cryptography::CryptoStream::ReadAsyncInternal(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"ReadAsyncInternal", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline int32_t System::Security::Cryptography::CryptoStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Security::Cryptography::CryptoStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void System::Security::Cryptography::CryptoStream::CheckReadArguments(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"CheckReadArguments", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Security::Cryptography::CryptoStream::ReadAsyncCore(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, bool  useAsync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"ReadAsyncCore", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken, useAsync);
}
inline ::System::Threading::Tasks::Task* System::Security::Cryptography::CryptoStream::WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::IAsyncResult* System::Security::Cryptography::CryptoStream::BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::Security::Cryptography::CryptoStream::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task* System::Security::Cryptography::CryptoStream::WriteAsyncInternal(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"WriteAsyncInternal", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline void System::Security::Cryptography::CryptoStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::Security::Cryptography::CryptoStream::CheckWriteArguments(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"CheckWriteArguments", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task* System::Security::Cryptography::CryptoStream::WriteAsyncCore(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, bool  useAsync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"WriteAsyncCore", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken, useAsync);
}
inline void System::Security::Cryptography::CryptoStream::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::CryptoStream::InitializeBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"InitializeBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::Security::Cryptography::CryptoStream::get_AsyncActiveSemaphore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream*>(),
                        {"get_AsyncActiveSemaphore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::CryptoStream* System::Security::Cryptography::CryptoStream::New_ctor(::System::IO::Stream*  stream, ::System::Security::Cryptography::ICryptoTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptoStream*>(stream, transform, mode));
}
inline ::System::Security::Cryptography::CryptoStream* System::Security::Cryptography::CryptoStream::New_ctor(::System::IO::Stream*  stream, ::System::Security::Cryptography::ICryptoTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptoStream*>(stream, transform, mode, leaveOpen));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::CryptoStream::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::CryptoStream::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptoStream::CryptoStream()   {
}
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::CryptoStream___c::*)()>(&::System::Security::Cryptography::CryptoStream___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15ffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream___c._get_AsyncActiveSemaphore_b__54_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SemaphoreSlim* (::System::Security::Cryptography::CryptoStream___c::*)()>(&::System::Security::Cryptography::CryptoStream___c::_get_AsyncActiveSemaphore_b__54_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa15ffb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream___c*>(),
                        {"<get_AsyncActiveSemaphore>b__54_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::CryptoStream___c::setStaticF___9(::System::Security::Cryptography::CryptoStream___c*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::CryptoStream___c*, "<>9", ::System::Security::Cryptography::CryptoStream___c*>(std::forward<::System::Security::Cryptography::CryptoStream___c*>(value));
}
inline ::System::Security::Cryptography::CryptoStream___c* System::Security::Cryptography::CryptoStream___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::CryptoStream___c*, "<>9", ::System::Security::Cryptography::CryptoStream___c*>();
}
inline void System::Security::Cryptography::CryptoStream___c::setStaticF___9__54_0(::System::Func_1<::System::Threading::SemaphoreSlim*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__54_0", ::System::Security::Cryptography::CryptoStream___c*>(std::forward<::System::Func_1<::System::Threading::SemaphoreSlim*>*>(value));
}
inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* System::Security::Cryptography::CryptoStream___c::getStaticF___9__54_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__54_0", ::System::Security::Cryptography::CryptoStream___c*>();
}
inline void System::Security::Cryptography::CryptoStream___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::Security::Cryptography::CryptoStream___c::_get_AsyncActiveSemaphore_b__54_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::CryptoStream___c*>(),
                        {"<get_AsyncActiveSemaphore>b__54_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::CryptoStream___c* System::Security::Cryptography::CryptoStream___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::CryptoStream___c*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptoStream___c::CryptoStream___c()   {
}
