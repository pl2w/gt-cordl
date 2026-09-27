#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Lzw/LzwInputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "ICSharpCode/SharpZipLib/Lzw/zzzz__LzwInputStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.get_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff4bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.set_IsStreamOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::set_IsStreamOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff4bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9ff4c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9ff4d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Read)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x9ff4d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.ResetBuf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::ResetBuf)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff5960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"ResetBuf", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Fill)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9ff5904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"Fill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.ParseHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::ParseHeader)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x9ff5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"ParseHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff59ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff59c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff59d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff59e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff5a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff5a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff5a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff5ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Write)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff5b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(uint8_t)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::WriteByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ff5b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ff5b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
constexpr bool& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get__IsStreamOwner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr bool const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get__IsStreamOwner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStreamOwner_k__BackingField;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set__IsStreamOwner_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStreamOwner_k__BackingField = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_baseInputStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseInputStream;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_baseInputStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseInputStream;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_baseInputStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseInputStream = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_isClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClosed;
}
constexpr bool const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_isClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isClosed;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_isClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isClosed = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_one()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___one;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_one() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___one;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_one(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___one = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_headerParsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headerParsed;
}
constexpr bool const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_headerParsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headerParsed;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_headerParsed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headerParsed = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_tabPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tabPrefix;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_tabPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tabPrefix;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_tabPrefix(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tabPrefix = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_tabSuffix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tabSuffix;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_tabSuffix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tabSuffix;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_tabSuffix(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tabSuffix = value;
}
constexpr ::ArrayW<int32_t>& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_zeros()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeros;
}
constexpr ::ArrayW<int32_t> const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_zeros() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeros;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_zeros(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zeros = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stack;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stack;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_stack(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stack = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_blockMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockMode;
}
constexpr bool const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_blockMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockMode;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_blockMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockMode = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_nBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBits;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_nBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nBits;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_nBits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nBits = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_maxBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBits;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_maxBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBits;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_maxBits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxBits = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_maxMaxCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMaxCode;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_maxMaxCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMaxCode;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_maxMaxCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMaxCode = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_maxCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCode;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_maxCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCode;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_maxCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCode = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_bitMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitMask;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_bitMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitMask;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_bitMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitMask = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_oldCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldCode;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_oldCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldCode;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_oldCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldCode = value;
}
constexpr uint8_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_finChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finChar;
}
constexpr uint8_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_finChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finChar;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_finChar(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finChar = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_stackP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stackP;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_stackP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stackP;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_stackP(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stackP = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_freeEnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeEnt;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_freeEnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeEnt;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_freeEnt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freeEnt = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_bitPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitPos;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_bitPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitPos;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_bitPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitPos = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_end(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_got()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___got;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_got() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___got;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_got(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___got = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_eof()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eof;
}
constexpr bool const& ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_get_eof() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eof;
}
constexpr void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::__cordl_internal_set_eof(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eof = value;
}
inline bool ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_IsStreamOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"get_IsStreamOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::set_IsStreamOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"set_IsStreamOwner", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::_ctor(::System::IO::Stream*  baseInputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInputStream);
}
inline int32_t ICSharpCode::SharpZipLib::Lzw::LzwInputStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Lzw::LzwInputStream::ResetBuf(int32_t  bitPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"ResetBuf", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bitPosition);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Fill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"Fill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::ParseHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(),
                        {"ParseHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Lzw::LzwInputStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Lzw::LzwInputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream* ICSharpCode::SharpZipLib::Lzw::LzwInputStream::New_ctor(::System::IO::Stream*  baseInputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Lzw::LzwInputStream*>(baseInputStream));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Lzw::LzwInputStream::LzwInputStream()   {
}
