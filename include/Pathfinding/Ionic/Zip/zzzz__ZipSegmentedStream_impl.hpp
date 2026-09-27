#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipSegmentedStream.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipSegmentedStream_RwMode_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipSegmentedStream_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipSegmentedStream_RwMode_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa69fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.ForReading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipSegmentedStream* (*)(::StringW, uint32_t, uint32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::ForReading)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa69fc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"ForReading", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.ForWriting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipSegmentedStream* (*)(::StringW, int32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::ForWriting)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa69fd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"ForWriting", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.ForUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(::StringW, uint32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::ForUpdate)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa69ffbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"ForUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_ContiguousWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_ContiguousWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a00f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"get_ContiguousWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.set_ContiguousWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::set_ContiguousWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a00fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"set_ContiguousWrite", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_CurrentSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CurrentSegment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a0104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"get_CurrentSegment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.set_CurrentSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(uint32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::set_CurrentSegment)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa69fcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"set_CurrentSegment", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_CurrentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CurrentName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa6a010c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"get_CurrentName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_CurrentTempName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CurrentTempName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a0284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"get_CurrentTempName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream._NameForSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(uint32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::_NameForSegment)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa6a0150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"_NameForSegment", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.ComputeSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(int32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::ComputeSegment)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa69ed7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"ComputeSegment", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::ToString)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa6a028c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream._SetReadStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::_SetReadStream)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa69fce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"_SetReadStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::Read)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa6a047c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream._SetWriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(uint32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::_SetWriteStream)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa69fe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"_SetWriteStream", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::Write)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6a0650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.TruncateBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(uint32_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::TruncateBackward)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa6a07bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"TruncateBackward", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6a0a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa6a0ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6a0ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6a0af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6a0b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)()>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6a0b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6a0b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::Seek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa6a0b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::SetLength)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6a0b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipSegmentedStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipSegmentedStream::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipSegmentedStream::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6a0bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 22}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get_rwMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rwMode;
}
constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get_rwMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rwMode;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set_rwMode(::GlobalNamespace::ZipSegmentedStream_RwMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rwMode = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__exceptionPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionPending;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__exceptionPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionPending;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__exceptionPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exceptionPending = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__baseName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseName;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__baseName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseName;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__baseName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseName = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__baseDir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseDir;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__baseDir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseDir;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__baseDir(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseDir = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__currentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentName;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__currentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentName;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__currentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentName = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__currentTempName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTempName;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__currentTempName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTempName;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__currentTempName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTempName = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__currentDiskNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDiskNumber;
}
constexpr uint32_t const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__currentDiskNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDiskNumber;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__currentDiskNumber(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDiskNumber = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__maxDiskNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDiskNumber;
}
constexpr uint32_t const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__maxDiskNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDiskNumber;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__maxDiskNumber(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDiskNumber = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__maxSegmentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSegmentSize;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__maxSegmentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSegmentSize;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__maxSegmentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSegmentSize = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__innerStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__innerStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__innerStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____innerStream = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__ContiguousWrite_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContiguousWrite_k__BackingField;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_get__ContiguousWrite_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContiguousWrite_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipSegmentedStream::__cordl_internal_set__ContiguousWrite_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ContiguousWrite_k__BackingField = value;
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipSegmentedStream* Pathfinding::Ionic::Zip::ZipSegmentedStream::ForReading(::StringW  name, uint32_t  initialDiskNumber, uint32_t  maxDiskNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"ForReading", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(nullptr, ___internal_method, name, initialDiskNumber, maxDiskNumber);
}
inline ::Pathfinding::Ionic::Zip::ZipSegmentedStream* Pathfinding::Ionic::Zip::ZipSegmentedStream::ForWriting(::StringW  name, int32_t  maxSegmentSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"ForWriting", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(nullptr, ___internal_method, name, maxSegmentSize);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipSegmentedStream::ForUpdate(::StringW  name, uint32_t  diskNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"ForUpdate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, name, diskNumber);
}
inline bool Pathfinding::Ionic::Zip::ZipSegmentedStream::get_ContiguousWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"get_ContiguousWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::set_ContiguousWrite(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"set_ContiguousWrite", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CurrentSegment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"get_CurrentSegment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::set_CurrentSegment(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"set_CurrentSegment", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CurrentName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"get_CurrentName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CurrentTempName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"get_CurrentTempName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipSegmentedStream::_NameForSegment(uint32_t  diskNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"_NameForSegment", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, diskNumber);
}
inline uint32_t Pathfinding::Ionic::Zip::ZipSegmentedStream::ComputeSegment(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"ComputeSegment", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, length);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipSegmentedStream::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::_SetReadStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"_SetReadStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipSegmentedStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::_SetWriteStream(uint32_t  increment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"_SetWriteStream", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, increment);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Pathfinding::Ionic::Zip::ZipSegmentedStream::TruncateBackward(uint32_t  diskNumber, int64_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(),
                        {"TruncateBackward", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, diskNumber, offset);
}
inline bool Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipSegmentedStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipSegmentedStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipSegmentedStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Pathfinding::Ionic::Zip::ZipSegmentedStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipSegmentedStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Pathfinding::Ionic::Zip::ZipSegmentedStream* Pathfinding::Ionic::Zip::ZipSegmentedStream::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipSegmentedStream*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipSegmentedStream::ZipSegmentedStream()   {
}
