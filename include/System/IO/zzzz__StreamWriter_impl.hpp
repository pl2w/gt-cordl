#pragma once
// IWYU pragma private; include "System/IO/StreamWriter.hpp"
#include "System/IO/zzzz__TextWriter_impl.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/IO/zzzz__StreamWriter__DisposeAsyncCore_d__33_def.hpp"
#include "System/IO/zzzz__StreamWriter__FlushAsyncInternal_d__74_def.hpp"
#include "System/IO/zzzz__StreamWriter__WriteAsyncInternal_d__57_def.hpp"
#include "System/IO/zzzz__StreamWriter__WriteAsyncInternal_d__59_def.hpp"
#include "System/IO/zzzz__StreamWriter__WriteAsyncInternal_d__62_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::StreamWriter.CheckAsyncTaskInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::CheckAsyncTaskInProgress)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa28bac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"CheckAsyncTaskInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.ThrowAsyncIOInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::IO::StreamWriter::ThrowAsyncIOInProgress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa28bb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"ThrowAsyncIOInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.get_UTF8NoBOM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::IO::StreamWriter::get_UTF8NoBOM)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa28bb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"get_UTF8NoBOM", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa28bbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa28bd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa28bfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, int32_t)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa28bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, int32_t, bool)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa28bdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa28c14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::StringW, bool)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa28c404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::StringW, bool, ::System::Text::Encoding*, int32_t)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xa28c1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, int32_t, bool)>(&::System::IO::StreamWriter::Init)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa28bfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"Init", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::Close)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa28c514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(bool)>(&::System::IO::StreamWriter::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa28c580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.DisposeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::DisposeAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa28c78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.DisposeAsyncCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::DisposeAsyncCore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa28c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"DisposeAsyncCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.CloseStreamFromDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(bool)>(&::System::IO::StreamWriter::CloseStreamFromDispose)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa28c9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"CloseStreamFromDispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa28cb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(bool, bool)>(&::System::IO::StreamWriter::Flush)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa28c610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"Flush", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.set_AutoFlush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(bool)>(&::System::IO::StreamWriter::set_AutoFlush)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa28cb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.get_BaseStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::get_BaseStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa28cb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.get_LeaveOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::get_LeaveOpen)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa28cb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"get_LeaveOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.get_Encoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa28cb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(char16_t)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa28cba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::ArrayW<char16_t>)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa28cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa28cca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa28ce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::StreamWriter::WriteSpan)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xa28d11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"WriteSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa28d3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::WriteLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa28d448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(char16_t)>(&::System::IO::StreamWriter::WriteAsync)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa28d4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::StreamWriter*, char16_t, ::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<char16_t>, bool, bool)>(&::System::IO::StreamWriter::WriteAsyncInternal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa28d898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"WriteAsyncInternal", {}, {::i2c::type_of<::System::IO::StreamWriter*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::WriteAsync)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa28d9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::StreamWriter*, ::StringW, ::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<char16_t>, bool, bool)>(&::System::IO::StreamWriter::WriteAsyncInternal)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa28de30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"WriteAsyncInternal", {}, {::i2c::type_of<::System::IO::StreamWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::StreamWriter::WriteAsync)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xa28df94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::StreamWriter*, ::System::ReadOnlyMemory_1<char16_t>, ::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<char16_t>, bool, bool, ::System::Threading::CancellationToken)>(&::System::IO::StreamWriter::WriteAsyncInternal)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa28e4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"WriteAsyncInternal", {}, {::i2c::type_of<::System::IO::StreamWriter*>(), ::i2c::type_of<::System::ReadOnlyMemory_1<char16_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteLineAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::WriteLineAsync)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa28e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteLineAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(char16_t)>(&::System::IO::StreamWriter::WriteLineAsync)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa28e83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteLineAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::WriteLineAsync)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa28ec18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteLineAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::StreamWriter::WriteLineAsync)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xa28f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.FlushAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::FlushAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa28f578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::StreamWriter*>(),
                    {::i2c::class_of<::System::IO::StreamWriter*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.set_CharPos_Prop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(int32_t)>(&::System::IO::StreamWriter::set_CharPos_Prop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa28fa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"set_CharPos_Prop", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.set_HaveWrittenPreamble_Prop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StreamWriter::*)(bool)>(&::System::IO::StreamWriter::set_HaveWrittenPreamble_Prop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa28fa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"set_HaveWrittenPreamble_Prop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.FlushAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(bool, bool, ::ArrayW<char16_t>, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::StreamWriter::FlushAsyncInternal)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa28f8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"FlushAsyncInternal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.FlushAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::StreamWriter*, bool, bool, ::ArrayW<char16_t>, int32_t, bool, ::System::Text::Encoding*, ::System::Text::Encoder*, ::ArrayW<uint8_t>, ::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::IO::StreamWriter::FlushAsyncInternal)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa28fa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"FlushAsyncInternal", {}, {::i2c::type_of<::System::IO::StreamWriter*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::Text::Encoder*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::StreamWriter::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& System::IO::StreamWriter::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stream = value;
}
constexpr ::System::Text::Encoding*& System::IO::StreamWriter::__cordl_internal_get__encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::IO::StreamWriter::__cordl_internal_get__encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__encoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoding = value;
}
constexpr ::System::Text::Encoder*& System::IO::StreamWriter::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::System::Text::Encoder* const& System::IO::StreamWriter::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__encoder(::System::Text::Encoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::StreamWriter::__cordl_internal_get__byteBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::StreamWriter::__cordl_internal_get__byteBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteBuffer;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____byteBuffer = value;
}
constexpr ::ArrayW<char16_t>& System::IO::StreamWriter::__cordl_internal_get__charBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charBuffer;
}
constexpr ::ArrayW<char16_t> const& System::IO::StreamWriter::__cordl_internal_get__charBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charBuffer;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__charBuffer(::ArrayW<char16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charBuffer = value;
}
constexpr int32_t& System::IO::StreamWriter::__cordl_internal_get__charPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charPos;
}
constexpr int32_t const& System::IO::StreamWriter::__cordl_internal_get__charPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charPos;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__charPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charPos = value;
}
constexpr int32_t& System::IO::StreamWriter::__cordl_internal_get__charLen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charLen;
}
constexpr int32_t const& System::IO::StreamWriter::__cordl_internal_get__charLen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charLen;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__charLen(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charLen = value;
}
constexpr bool& System::IO::StreamWriter::__cordl_internal_get__autoFlush()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoFlush;
}
constexpr bool const& System::IO::StreamWriter::__cordl_internal_get__autoFlush() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoFlush;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__autoFlush(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoFlush = value;
}
constexpr bool& System::IO::StreamWriter::__cordl_internal_get__haveWrittenPreamble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haveWrittenPreamble;
}
constexpr bool const& System::IO::StreamWriter::__cordl_internal_get__haveWrittenPreamble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haveWrittenPreamble;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__haveWrittenPreamble(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____haveWrittenPreamble = value;
}
constexpr bool& System::IO::StreamWriter::__cordl_internal_get__closable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closable;
}
constexpr bool const& System::IO::StreamWriter::__cordl_internal_get__closable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closable;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__closable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closable = value;
}
constexpr ::System::Threading::Tasks::Task*& System::IO::StreamWriter::__cordl_internal_get__asyncWriteTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncWriteTask;
}
constexpr ::System::Threading::Tasks::Task* const& System::IO::StreamWriter::__cordl_internal_get__asyncWriteTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncWriteTask;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__asyncWriteTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncWriteTask = value;
}
inline void System::IO::StreamWriter::setStaticF_Null(::System::IO::StreamWriter*  value)  {
::cordl_internals::setStaticField<::System::IO::StreamWriter*, "Null", ::System::IO::StreamWriter*>(std::forward<::System::IO::StreamWriter*>(value));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::System::IO::StreamWriter*, "Null", ::System::IO::StreamWriter*>();
}
inline void System::IO::StreamWriter::CheckAsyncTaskInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"CheckAsyncTaskInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StreamWriter::ThrowAsyncIOInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"ThrowAsyncIOInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::IO::StreamWriter::get_UTF8NoBOM()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"get_UTF8NoBOM", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline void System::IO::StreamWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StreamWriter::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void System::IO::StreamWriter::_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding);
}
inline void System::IO::StreamWriter::_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, bufferSize);
}
inline void System::IO::StreamWriter::_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, bufferSize, leaveOpen);
}
inline void System::IO::StreamWriter::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void System::IO::StreamWriter::_ctor(::StringW  path, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, append);
}
inline void System::IO::StreamWriter::_ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, append, encoding, bufferSize);
}
inline void System::IO::StreamWriter::Init(::System::IO::Stream*  streamArg, ::System::Text::Encoding*  encodingArg, int32_t  bufferSize, bool  shouldLeaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"Init", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, streamArg, encodingArg, bufferSize, shouldLeaveOpen);
}
inline void System::IO::StreamWriter::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StreamWriter::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::ValueTask System::IO::StreamWriter::DisposeAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask System::IO::StreamWriter::DisposeAsyncCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"DisposeAsyncCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline void System::IO::StreamWriter::CloseStreamFromDispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"CloseStreamFromDispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::IO::StreamWriter::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StreamWriter::Flush(bool  flushStream, bool  flushEncoder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"Flush", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flushStream, flushEncoder);
}
inline void System::IO::StreamWriter::set_AutoFlush(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::Stream* System::IO::StreamWriter::get_BaseStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool System::IO::StreamWriter::get_LeaveOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"get_LeaveOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::IO::StreamWriter::get_Encoding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void System::IO::StreamWriter::Write(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::StreamWriter::Write(::ArrayW<char16_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::IO::StreamWriter::Write(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::StreamWriter::Write(::System::ReadOnlySpan_1<char16_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::IO::StreamWriter::WriteSpan(::System::ReadOnlySpan_1<char16_t>  buffer, bool  appendNewLine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"WriteSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, appendNewLine);
}
inline void System::IO::StreamWriter::Write(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::StreamWriter::WriteLine(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteAsync(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteAsyncInternal(::System::IO::StreamWriter*  _this, char16_t  value, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, int32_t  charLen, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, bool  appendNewLine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"WriteAsyncInternal", {}, {::i2c::type_of<::System::IO::StreamWriter*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, _this, value, charBuffer, charPos, charLen, coreNewLine, autoFlush, appendNewLine);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteAsync(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteAsyncInternal(::System::IO::StreamWriter*  _this, ::StringW  value, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, int32_t  charLen, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, bool  appendNewLine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"WriteAsyncInternal", {}, {::i2c::type_of<::System::IO::StreamWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, _this, value, charBuffer, charPos, charLen, coreNewLine, autoFlush, appendNewLine);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, index, count);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteAsyncInternal(::System::IO::StreamWriter*  _this, ::System::ReadOnlyMemory_1<char16_t>  source, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, int32_t  charLen, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, bool  appendNewLine, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"WriteAsyncInternal", {}, {::i2c::type_of<::System::IO::StreamWriter*>(), ::i2c::type_of<::System::ReadOnlyMemory_1<char16_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, _this, source, charBuffer, charPos, charLen, coreNewLine, autoFlush, appendNewLine, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteLineAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteLineAsync(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteLineAsync(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteLineAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, index, count);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::FlushAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::StreamWriter*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void System::IO::StreamWriter::set_CharPos_Prop(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"set_CharPos_Prop", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::StreamWriter::set_HaveWrittenPreamble_Prop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"set_HaveWrittenPreamble_Prop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::FlushAsyncInternal(bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t>  sCharBuffer, int32_t  sCharPos, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"FlushAsyncInternal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, flushStream, flushEncoder, sCharBuffer, sCharPos, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::FlushAsyncInternal(::System::IO::StreamWriter*  _this, bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, bool  haveWrittenPreamble, ::System::Text::Encoding*  encoding, ::System::Text::Encoder*  encoder, ::ArrayW<uint8_t>  byteBuffer, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::StreamWriter*>(),
                        {"FlushAsyncInternal", {}, {::i2c::type_of<::System::IO::StreamWriter*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::Text::Encoder*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, _this, flushStream, flushEncoder, charBuffer, charPos, haveWrittenPreamble, encoding, encoder, byteBuffer, stream, cancellationToken);
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamWriter*>());
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamWriter*>(stream));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamWriter*>(stream, encoding));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamWriter*>(stream, encoding, bufferSize));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamWriter*>(stream, encoding, bufferSize, leaveOpen));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::StringW  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamWriter*>(path));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::StringW  path, bool  append)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamWriter*>(path, append));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StreamWriter*>(path, append, encoding, bufferSize));
}
// Ctor Parameters []
constexpr ::System::IO::StreamWriter::StreamWriter()   {
}
