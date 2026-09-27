#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/InflaterInputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__InflaterInputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__InflaterInputBuffer_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Inflater_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9fda18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fcb570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9fcb738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fda1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fda204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Skip)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9fcc60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"Skip", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.StopDecrypting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::StopDecrypting)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fcc51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"StopDecrypting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.get_Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_Available)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9fda20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Fill)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9fda24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"Fill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fda2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fda2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fda2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_Length)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fda304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fda350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fda370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fda3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fda3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fda428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Write)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fda474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::WriteByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fda4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fcd92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Read)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9fcd700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get__IsStreamOwner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get__IsStreamOwner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_set__IsStreamOwner_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStreamOwner_k__BackingField = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_inf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inf;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_inf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inf;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_set_inf(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inf = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_inputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBuffer;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer* const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_inputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_set_inputBuffer(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputBuffer = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_baseInputStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseInputStream;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_baseInputStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseInputStream;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_set_baseInputStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseInputStream = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_csize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___csize;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_csize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___csize;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_set_csize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___csize = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_isClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClosed;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_get_isClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClosed;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::__cordl_internal_set_isClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isClosed = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::_ctor(::System::IO::Stream*  baseInputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInputStream);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::_ctor(::System::IO::Stream*  baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInputStream, inf);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::_ctor(::System::IO::Stream*  baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inflater, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInputStream, inflater, bufferSize);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Skip(int64_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"Skip", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, count);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::StopDecrypting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"StopDecrypting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Fill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(),
                        {"Fill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream* ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::New_ctor(::System::IO::Stream*  baseInputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(baseInputStream));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream* ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::New_ctor(::System::IO::Stream*  baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inf)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(baseInputStream, inf));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream* ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::New_ctor(::System::IO::Stream*  baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inflater, int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream*>(baseInputStream, inflater, bufferSize));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream::InflaterInputStream()   {
}
