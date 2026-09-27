#pragma once
// IWYU pragma private; include "Ionic/Zlib/ParallelDeflateOutputStream.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_impl.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_impl.hpp"
#include "Ionic/Zlib/zzzz__ParallelDeflateOutputStream_TraceBits_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Ionic/Zlib/zzzz__ParallelDeflateOutputStream_def.hpp"
#include "Ionic/Crc/zzzz__CRC32_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Ionic/Zlib/zzzz__ParallelDeflateOutputStream_TraceBits_def.hpp"
#include "Ionic/Zlib/zzzz__WorkItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::IO::Stream*)>(&::Ionic::Zlib::ParallelDeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7994bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionLevel)>(&::Ionic::Zlib::ParallelDeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa799638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::IO::Stream*, bool)>(&::Ionic::Zlib::ParallelDeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa799644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionLevel, bool)>(&::Ionic::Zlib::ParallelDeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa799654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::IO::Stream*, ::Ionic::Zlib::CompressionLevel, ::Ionic::Zlib::CompressionStrategy, bool)>(&::Ionic::Zlib::ParallelDeflateOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa7994cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Ionic::Zlib::CompressionStrategy (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_Strategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7996d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_Strategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.set_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::Ionic::Zlib::CompressionStrategy)>(&::Ionic::Zlib::ParallelDeflateOutputStream::set_Strategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7996e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_MaxBufferPairs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_MaxBufferPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7996e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_MaxBufferPairs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.set_MaxBufferPairs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(int32_t)>(&::Ionic::Zlib::ParallelDeflateOutputStream::set_MaxBufferPairs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa799664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_MaxBufferPairs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_BufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7996f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.set_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(int32_t)>(&::Ionic::Zlib::ParallelDeflateOutputStream::set_BufferSize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7996f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_Crc32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_Crc32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79976c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_Crc32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_BytesProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_BytesProcessed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa799774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_BytesProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._InitializePoolOfWorkItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::_InitializePoolOfWorkItems)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xa79977c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_InitializePoolOfWorkItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::ParallelDeflateOutputStream::Write)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa799a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._FlushFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::_FlushFinish)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa79a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_FlushFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(bool)>(&::Ionic::Zlib::ParallelDeflateOutputStream::_Flush)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa79a274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_Flush", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::Flush)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa79a754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::Close)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa79a7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa79a880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(bool)>(&::Ionic::Zlib::ParallelDeflateOutputStream::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79a8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::IO::Stream*)>(&::Ionic::Zlib::ParallelDeflateOutputStream::Reset)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa79a8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"Reset", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.EmitPendingBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(bool, bool)>(&::Ionic::Zlib::ParallelDeflateOutputStream::EmitPendingBuffers)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xa799d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"EmitPendingBuffers", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream._DeflateOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::System::Object*)>(&::Ionic::Zlib::ParallelDeflateOutputStream::_DeflateOne)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xa79a368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_DeflateOne", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.DeflateOneSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::Ionic::Zlib::WorkItem*)>(&::Ionic::Zlib::ParallelDeflateOutputStream::DeflateOneSegment)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa79aae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"DeflateOneSegment", {}, {::i2c::type_of<::Ionic::Zlib::WorkItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.TraceOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits, ::StringW, ::ArrayW<::System::Object*>)>(&::Ionic::Zlib::ParallelDeflateOutputStream::TraceOutput)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa79ab74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"TraceOutput", {}, {::i2c::type_of<::GlobalNamespace::ParallelDeflateOutputStream_TraceBits>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79ad08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79ad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa79ad18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79ad34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ParallelDeflateOutputStream::*)()>(&::Ionic::Zlib::ParallelDeflateOutputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa79ad6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(int64_t)>(&::Ionic::Zlib::ParallelDeflateOutputStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79ad8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::ParallelDeflateOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Zlib::ParallelDeflateOutputStream::Read)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79adc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Zlib::ParallelDeflateOutputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Ionic::Zlib::ParallelDeflateOutputStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79adfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::ParallelDeflateOutputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::ParallelDeflateOutputStream::*)(int64_t)>(&::Ionic::Zlib::ParallelDeflateOutputStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79ae34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                    {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Ionic::Zlib::WorkItem*>*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr ::System::Collections::Generic::List_1<::Ionic::Zlib::WorkItem*>* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__pool(::System::Collections::Generic::List_1<::Ionic::Zlib::WorkItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
constexpr bool& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__leaveOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr bool const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__leaveOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__leaveOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leaveOpen = value;
}
constexpr bool& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get_emitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitting;
}
constexpr bool const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get_emitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitting;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set_emitting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitting = value;
}
constexpr ::System::IO::Stream*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__outStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outStream;
}
constexpr ::System::IO::Stream* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__outStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outStream;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__outStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outStream = value;
}
constexpr int32_t& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__maxBufferPairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferPairs;
}
constexpr int32_t const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__maxBufferPairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferPairs;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__maxBufferPairs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxBufferPairs = value;
}
constexpr int32_t& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr int32_t const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferSize = value;
}
constexpr ::System::Threading::AutoResetEvent*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__newlyCompressedBlob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newlyCompressedBlob;
}
constexpr ::System::Threading::AutoResetEvent* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__newlyCompressedBlob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newlyCompressedBlob;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__newlyCompressedBlob(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newlyCompressedBlob = value;
}
constexpr ::System::Object*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__outputLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputLock;
}
constexpr ::System::Object* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__outputLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputLock;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__outputLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputLock = value;
}
constexpr bool& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__isClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClosed;
}
constexpr bool const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__isClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClosed;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__isClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isClosed = value;
}
constexpr bool& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__firstWriteDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstWriteDone;
}
constexpr bool const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__firstWriteDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstWriteDone;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__firstWriteDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstWriteDone = value;
}
constexpr int32_t& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__currentlyFilling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyFilling;
}
constexpr int32_t const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__currentlyFilling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyFilling;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__currentlyFilling(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentlyFilling = value;
}
constexpr int32_t& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__lastFilled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFilled;
}
constexpr int32_t const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__lastFilled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFilled;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__lastFilled(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFilled = value;
}
constexpr int32_t& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__lastWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWritten;
}
constexpr int32_t const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__lastWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWritten;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__lastWritten(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWritten = value;
}
constexpr int32_t& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__latestCompressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestCompressed;
}
constexpr int32_t const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__latestCompressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestCompressed;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__latestCompressed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestCompressed = value;
}
constexpr int32_t& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__Crc32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr int32_t const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__Crc32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__Crc32(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Crc32 = value;
}
constexpr ::Ionic::Crc::CRC32*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__runningCrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningCrc;
}
constexpr ::Ionic::Crc::CRC32* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__runningCrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningCrc;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__runningCrc(::Ionic::Crc::CRC32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningCrc = value;
}
constexpr ::System::Object*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__latestLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestLock;
}
constexpr ::System::Object* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__latestLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestLock;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__latestLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestLock = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__toWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toWrite;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__toWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toWrite;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__toWrite(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toWrite = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__toFill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toFill;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__toFill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toFill;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__toFill(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toFill = value;
}
constexpr int64_t& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__totalBytesProcessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalBytesProcessed;
}
constexpr int64_t const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__totalBytesProcessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalBytesProcessed;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__totalBytesProcessed(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalBytesProcessed = value;
}
constexpr ::Ionic::Zlib::CompressionLevel& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__compressLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressLevel;
}
constexpr ::Ionic::Zlib::CompressionLevel const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__compressLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressLevel;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__compressLevel(::Ionic::Zlib::CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressLevel = value;
}
constexpr ::System::Exception*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__pendingException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingException;
}
constexpr ::System::Exception* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__pendingException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingException;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__pendingException(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingException = value;
}
constexpr bool& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__handlingException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handlingException;
}
constexpr bool const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__handlingException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handlingException;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__handlingException(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handlingException = value;
}
constexpr ::System::Object*& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__eLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eLock;
}
constexpr ::System::Object* const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__eLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eLock;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__eLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eLock = value;
}
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__DesiredTrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DesiredTrace;
}
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__DesiredTrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DesiredTrace;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__DesiredTrace(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DesiredTrace = value;
}
constexpr ::Ionic::Zlib::CompressionStrategy& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__Strategy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Strategy_k__BackingField;
}
constexpr ::Ionic::Zlib::CompressionStrategy const& Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_get__Strategy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Strategy_k__BackingField;
}
constexpr void Ionic::Zlib::ParallelDeflateOutputStream::__cordl_internal_set__Strategy_k__BackingField(::Ionic::Zlib::CompressionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Strategy_k__BackingField = value;
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::setStaticF_IO_BUFFER_SIZE_DEFAULT(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "IO_BUFFER_SIZE_DEFAULT", ::Ionic::Zlib::ParallelDeflateOutputStream*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::ParallelDeflateOutputStream::getStaticF_IO_BUFFER_SIZE_DEFAULT()  {
return ::cordl_internals::getStaticField<int32_t, "IO_BUFFER_SIZE_DEFAULT", ::Ionic::Zlib::ParallelDeflateOutputStream*>();
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::setStaticF_BufferPairsPerCore(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BufferPairsPerCore", ::Ionic::Zlib::ParallelDeflateOutputStream*>(std::forward<int32_t>(value));
}
inline int32_t Ionic::Zlib::ParallelDeflateOutputStream::getStaticF_BufferPairsPerCore()  {
return ::cordl_internals::getStaticField<int32_t, "BufferPairsPerCore", ::Ionic::Zlib::ParallelDeflateOutputStream*>();
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, level);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_ctor(::System::IO::Stream*  stream, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, leaveOpen);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, level, leaveOpen);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::CompressionStrategy  strategy, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Ionic::Zlib::CompressionLevel>(), ::i2c::type_of<::Ionic::Zlib::CompressionStrategy>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, level, strategy, leaveOpen);
}
inline ::Ionic::Zlib::CompressionStrategy Ionic::Zlib::ParallelDeflateOutputStream::get_Strategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_Strategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Ionic::Zlib::CompressionStrategy>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::set_Strategy(::Ionic::Zlib::CompressionStrategy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::Ionic::Zlib::CompressionStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::ParallelDeflateOutputStream::get_MaxBufferPairs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_MaxBufferPairs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::set_MaxBufferPairs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_MaxBufferPairs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::ParallelDeflateOutputStream::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::set_BufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::ParallelDeflateOutputStream::get_Crc32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_Crc32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ParallelDeflateOutputStream::get_BytesProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"get_BytesProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_InitializePoolOfWorkItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_InitializePoolOfWorkItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_FlushFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_FlushFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_Flush(bool  lastInput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_Flush", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastInput);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::Reset(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"Reset", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::EmitPendingBuffers(bool  doAll, bool  mustWait)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"EmitPendingBuffers", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doAll, mustWait);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::_DeflateOne(::System::Object*  wi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"_DeflateOne", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wi);
}
inline bool Ionic::Zlib::ParallelDeflateOutputStream::DeflateOneSegment(::Ionic::Zlib::WorkItem*  workitem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"DeflateOneSegment", {}, {::i2c::type_of<::Ionic::Zlib::WorkItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, workitem);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::TraceOutput(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  bits, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  varParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(),
                        {"TraceOutput", {}, {::i2c::type_of<::GlobalNamespace::ParallelDeflateOutputStream_TraceBits>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bits, format, varParams);
}
inline bool Ionic::Zlib::ParallelDeflateOutputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::ParallelDeflateOutputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Ionic::Zlib::ParallelDeflateOutputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ParallelDeflateOutputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Ionic::Zlib::ParallelDeflateOutputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Ionic::Zlib::ParallelDeflateOutputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Ionic::Zlib::ParallelDeflateOutputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Ionic::Zlib::ParallelDeflateOutputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Ionic::Zlib::ParallelDeflateOutputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Ionic::Zlib::ParallelDeflateOutputStream* Ionic::Zlib::ParallelDeflateOutputStream::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ParallelDeflateOutputStream*>(stream));
}
inline ::Ionic::Zlib::ParallelDeflateOutputStream* Ionic::Zlib::ParallelDeflateOutputStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ParallelDeflateOutputStream*>(stream, level));
}
inline ::Ionic::Zlib::ParallelDeflateOutputStream* Ionic::Zlib::ParallelDeflateOutputStream::New_ctor(::System::IO::Stream*  stream, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ParallelDeflateOutputStream*>(stream, leaveOpen));
}
inline ::Ionic::Zlib::ParallelDeflateOutputStream* Ionic::Zlib::ParallelDeflateOutputStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ParallelDeflateOutputStream*>(stream, level, leaveOpen));
}
inline ::Ionic::Zlib::ParallelDeflateOutputStream* Ionic::Zlib::ParallelDeflateOutputStream::New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::CompressionStrategy  strategy, bool  leaveOpen)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::ParallelDeflateOutputStream*>(stream, level, strategy, leaveOpen));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::ParallelDeflateOutputStream::ParallelDeflateOutputStream()   {
}
