#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/ParallelDeflateOutputStream.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ParallelDeflateOutputStream_TraceBits_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ParallelDeflateOutputStream_def.hpp"
#include "Pathfinding/Ionic/Crc/zzzz__CRC32_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ParallelDeflateOutputStream_TraceBits_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__WorkItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::IO::Stream*, ::Pathfinding::Ionic::Zlib::CompressionLevel, ::Pathfinding::Ionic::Zlib::CompressionStrategy, bool)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6aaa74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionStrategy>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.get_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zlib::CompressionStrategy (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_Strategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6aaca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_Strategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.set_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(::Pathfinding::Ionic::Zlib::CompressionStrategy)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::set_Strategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6aacac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.set_MaxBufferPairs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(int32_t)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::set_MaxBufferPairs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6aabe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_MaxBufferPairs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.set_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(int32_t)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::set_BufferSize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6aacb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream._InitializePoolOfWorkItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_InitializePoolOfWorkItems)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xa6aad28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_InitializePoolOfWorkItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Write)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa6ab078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream._FlushFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_FlushFinish)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa6ab698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_FlushFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream._Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(bool)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_Flush)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa6ab904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_Flush", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Flush)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa6abd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Close)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6abda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa6abe54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(bool)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6abe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Reset)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa6abea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"Reset", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.EmitPendingBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(bool, bool)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::EmitPendingBuffers)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xa6ab318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"EmitPendingBuffers", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream._DeflateOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::Object*)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_DeflateOne)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xa6ab9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_DeflateOne", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.DeflateOneSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(::Pathfinding::Ionic::Zlib::WorkItem*)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::DeflateOneSegment)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6ac320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"DeflateOneSegment", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::WorkItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ac3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ac404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6ac40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6ac428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6ac460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(int64_t)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6ac480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Read)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6ac4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6ac4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::*)(int64_t)>(&::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6ac528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zlib::WorkItem*>*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zlib::WorkItem*>* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__pool(::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zlib::WorkItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__leaveOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr bool const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__leaveOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__leaveOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leaveOpen = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get_emitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitting;
}
constexpr bool const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get_emitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitting;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set_emitting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitting = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__outStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outStream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__outStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outStream;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__outStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outStream = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__maxBufferPairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferPairs;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__maxBufferPairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferPairs;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__maxBufferPairs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxBufferPairs = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferSize = value;
}
constexpr ::System::Threading::AutoResetEvent*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__newlyCompressedBlob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newlyCompressedBlob;
}
constexpr ::System::Threading::AutoResetEvent* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__newlyCompressedBlob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newlyCompressedBlob;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__newlyCompressedBlob(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newlyCompressedBlob = value;
}
constexpr ::System::Object*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__outputLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputLock;
}
constexpr ::System::Object* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__outputLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputLock;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__outputLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputLock = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__isClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClosed;
}
constexpr bool const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__isClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClosed;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__isClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isClosed = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__firstWriteDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstWriteDone;
}
constexpr bool const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__firstWriteDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstWriteDone;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__firstWriteDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstWriteDone = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__currentlyFilling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyFilling;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__currentlyFilling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyFilling;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__currentlyFilling(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentlyFilling = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__lastFilled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFilled;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__lastFilled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFilled;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__lastFilled(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFilled = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__lastWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWritten;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__lastWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWritten;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__lastWritten(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWritten = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__latestCompressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestCompressed;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__latestCompressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestCompressed;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__latestCompressed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestCompressed = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__Crc32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__Crc32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__Crc32(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Crc32 = value;
}
constexpr ::Pathfinding::Ionic::Crc::CRC32*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__runningCrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningCrc;
}
constexpr ::Pathfinding::Ionic::Crc::CRC32* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__runningCrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningCrc;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__runningCrc(::Pathfinding::Ionic::Crc::CRC32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningCrc = value;
}
constexpr ::System::Object*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__latestLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestLock;
}
constexpr ::System::Object* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__latestLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestLock;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__latestLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestLock = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__toWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toWrite;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__toWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toWrite;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__toWrite(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toWrite = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__toFill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toFill;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__toFill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toFill;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__toFill(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toFill = value;
}
constexpr int64_t& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__totalBytesProcessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalBytesProcessed;
}
constexpr int64_t const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__totalBytesProcessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalBytesProcessed;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__totalBytesProcessed(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalBytesProcessed = value;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__compressLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressLevel;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__compressLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressLevel;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__compressLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressLevel = value;
}
constexpr ::System::Exception*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__pendingException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingException;
}
constexpr ::System::Exception* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__pendingException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingException;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__pendingException(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingException = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__handlingException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handlingException;
}
constexpr bool const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__handlingException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handlingException;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__handlingException(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handlingException = value;
}
constexpr ::System::Object*& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__eLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eLock;
}
constexpr ::System::Object* const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__eLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eLock;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__eLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eLock = value;
}
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__DesiredTrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DesiredTrace;
}
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__DesiredTrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DesiredTrace;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__DesiredTrace(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DesiredTrace = value;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__Strategy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Strategy_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy const& Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__Strategy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Strategy_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__Strategy_k__BackingField(::Pathfinding::Ionic::Zlib::CompressionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Strategy_k__BackingField = value;
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::setStaticF_IO_BUFFER_SIZE_DEFAULT(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "IO_BUFFER_SIZE_DEFAULT", ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(std::forward<int32_t>(value));
}
inline int32_t Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::getStaticF_IO_BUFFER_SIZE_DEFAULT()  {
return ::cordl_internals::getStaticField<int32_t, "IO_BUFFER_SIZE_DEFAULT", ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>();
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::setStaticF_BufferPairsPerCore(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BufferPairsPerCore", ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(std::forward<int32_t>(value));
}
inline int32_t Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::getStaticF_BufferPairsPerCore()  {
return ::cordl_internals::getStaticField<int32_t, "BufferPairsPerCore", ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>();
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionLevel  level, ::Pathfinding::Ionic::Zlib::CompressionStrategy  strategy, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionStrategy>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, level, strategy, leaveOpen);
}
inline ::Pathfinding::Ionic::Zlib::CompressionStrategy Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_Strategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_Strategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zlib::CompressionStrategy>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::set_Strategy(::Pathfinding::Ionic::Zlib::CompressionStrategy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::set_MaxBufferPairs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_MaxBufferPairs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::set_BufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_InitializePoolOfWorkItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_InitializePoolOfWorkItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_FlushFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_FlushFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_Flush(bool  lastInput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_Flush", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastInput);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Reset(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"Reset", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::EmitPendingBuffers(bool  doAll, bool  mustWait)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"EmitPendingBuffers", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doAll, mustWait);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::_DeflateOne(::System::Object*  wi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_DeflateOne", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wi);
}
inline bool Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::DeflateOneSegment(::Pathfinding::Ionic::Zlib::WorkItem*  workitem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"DeflateOneSegment", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::WorkItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, workitem);
}
inline bool Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream* Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::New_ctor(::System::IO::Stream*  stream, ::Pathfinding::Ionic::Zlib::CompressionLevel  level, ::Pathfinding::Ionic::Zlib::CompressionStrategy  strategy, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(stream, level, strategy, leaveOpen));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream::ParallelDeflateOutputStream()   {
}
