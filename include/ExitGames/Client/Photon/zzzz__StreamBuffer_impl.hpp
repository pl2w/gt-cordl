#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StreamBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(int32_t)>(&::ExitGames::Client::Photon::StreamBuffer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa6e2360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(::ArrayW<uint8_t>)>(&::ExitGames::Client::Photon::StreamBuffer::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa6e8f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::ToArray)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6e24cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.ToArrayFromPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::ToArrayFromPos)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa6e8f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"ToArrayFromPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.Compact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::Compact)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6e8ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Compact", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.GetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::GetBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6e24a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"GetBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.GetBufferAndAdvance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ExitGames::Client::Photon::StreamBuffer::*)(int32_t, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::StreamBuffer::GetBufferAndAdvance)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6e9070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"GetBufferAndAdvance", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6e90ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_CanRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6e90b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_CanSeek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6e90bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_CanWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6e2540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6e24a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(int32_t)>(&::ExitGames::Client::Photon::StreamBuffer::set_Position)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6e24b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"set_Position", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.get_Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::get_Available)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6e9188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_Available", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6e9198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ExitGames::Client::Photon::StreamBuffer::*)(int64_t, ::System::IO::SeekOrigin)>(&::ExitGames::Client::Photon::StreamBuffer::Seek)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa6e919c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Seek", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::SeekOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(int64_t)>(&::ExitGames::Client::Photon::StreamBuffer::SetLength)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6e23d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"SetLength", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.SetCapacityMinimum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(int32_t)>(&::ExitGames::Client::Photon::StreamBuffer::SetCapacityMinimum)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6e2430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"SetCapacityMinimum", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::StreamBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ExitGames::Client::Photon::StreamBuffer::Read)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6e9270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ExitGames::Client::Photon::StreamBuffer::Write)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6e2434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ExitGames::Client::Photon::StreamBuffer::*)()>(&::ExitGames::Client::Photon::StreamBuffer::ReadByte)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa6e92d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"ReadByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(uint8_t)>(&::ExitGames::Client::Photon::StreamBuffer::WriteByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6e93c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.WriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(uint8_t, uint8_t)>(&::ExitGames::Client::Photon::StreamBuffer::WriteBytes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa6e9428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteBytes", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.WriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(uint8_t, uint8_t, uint8_t)>(&::ExitGames::Client::Photon::StreamBuffer::WriteBytes)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa6e94c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteBytes", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.WriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(uint8_t, uint8_t, uint8_t, uint8_t)>(&::ExitGames::Client::Photon::StreamBuffer::WriteBytes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa6e958c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteBytes", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.WriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StreamBuffer::*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(&::ExitGames::Client::Photon::StreamBuffer::WriteBytes)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa6e9684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteBytes", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StreamBuffer.CheckSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::StreamBuffer::*)(int32_t)>(&::ExitGames::Client::Photon::StreamBuffer::CheckSize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa6e90c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"CheckSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ExitGames::Client::Photon::StreamBuffer::__cordl_internal_get_pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr int32_t const& ExitGames::Client::Photon::StreamBuffer::__cordl_internal_get_pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr void ExitGames::Client::Photon::StreamBuffer::__cordl_internal_set_pos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos = value;
}
constexpr int32_t& ExitGames::Client::Photon::StreamBuffer::__cordl_internal_get_len()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr int32_t const& ExitGames::Client::Photon::StreamBuffer::__cordl_internal_get_len() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___len;
}
constexpr void ExitGames::Client::Photon::StreamBuffer::__cordl_internal_set_len(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___len = value;
}
constexpr ::ArrayW<uint8_t>& ExitGames::Client::Photon::StreamBuffer::__cordl_internal_get_buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
constexpr ::ArrayW<uint8_t> const& ExitGames::Client::Photon::StreamBuffer::__cordl_internal_get_buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
constexpr void ExitGames::Client::Photon::StreamBuffer::__cordl_internal_set_buf(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buf = value;
}
inline void ExitGames::Client::Photon::StreamBuffer::_ctor(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void ExitGames::Client::Photon::StreamBuffer::_ctor(::ArrayW<uint8_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::StreamBuffer::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::StreamBuffer::ToArrayFromPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"ToArrayFromPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::StreamBuffer::Compact()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Compact", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::StreamBuffer::GetBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"GetBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ExitGames::Client::Photon::StreamBuffer::GetBufferAndAdvance(int32_t  length, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"GetBufferAndAdvance", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, length, offset);
}
inline bool ExitGames::Client::Photon::StreamBuffer::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_CanRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::StreamBuffer::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_CanSeek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::StreamBuffer::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_CanWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::StreamBuffer::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::StreamBuffer::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::StreamBuffer::set_Position(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"set_Position", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::StreamBuffer::get_Available()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"get_Available", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::StreamBuffer::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ExitGames::Client::Photon::StreamBuffer::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Seek", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::SeekOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ExitGames::Client::Photon::StreamBuffer::SetLength(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"SetLength", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::StreamBuffer::SetCapacityMinimum(int32_t  neededSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"SetCapacityMinimum", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, neededSize);
}
inline int32_t ExitGames::Client::Photon::StreamBuffer::Read(::ArrayW<uint8_t>  buffer, int32_t  dstOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, dstOffset, count);
}
inline void ExitGames::Client::Photon::StreamBuffer::Write(::ArrayW<uint8_t>  buffer, int32_t  srcOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, srcOffset, count);
}
inline uint8_t ExitGames::Client::Photon::StreamBuffer::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"ReadByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::StreamBuffer::WriteByte(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::StreamBuffer::WriteBytes(uint8_t  v0, uint8_t  v1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteBytes", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v0, v1);
}
inline void ExitGames::Client::Photon::StreamBuffer::WriteBytes(uint8_t  v0, uint8_t  v1, uint8_t  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteBytes", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v0, v1, v2);
}
inline void ExitGames::Client::Photon::StreamBuffer::WriteBytes(uint8_t  v0, uint8_t  v1, uint8_t  v2, uint8_t  v3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteBytes", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v0, v1, v2, v3);
}
inline void ExitGames::Client::Photon::StreamBuffer::WriteBytes(uint8_t  v0, uint8_t  v1, uint8_t  v2, uint8_t  v3, uint8_t  v4, uint8_t  v5, uint8_t  v6, uint8_t  v7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"WriteBytes", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v0, v1, v2, v3, v4, v5, v6, v7);
}
inline bool ExitGames::Client::Photon::StreamBuffer::CheckSize(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StreamBuffer*>(),
                        {"CheckSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, size);
}
inline ::ExitGames::Client::Photon::StreamBuffer* ExitGames::Client::Photon::StreamBuffer::New_ctor(int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::StreamBuffer*>(size));
}
inline ::ExitGames::Client::Photon::StreamBuffer* ExitGames::Client::Photon::StreamBuffer::New_ctor(::ArrayW<uint8_t>  buf)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::StreamBuffer*>(buf));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::StreamBuffer::StreamBuffer()   {
}
