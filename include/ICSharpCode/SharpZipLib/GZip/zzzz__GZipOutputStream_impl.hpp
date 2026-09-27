#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipOutputStream.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipFlags_impl.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipOutputStream_OutputState_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__DeflaterOutputStream_impl.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipOutputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__Crc32_def.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipOutputStream_OutputState_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff74f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9ff6358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.SetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::SetLevel)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ff6420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.GetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::GetLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ff74fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"GetLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff7514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.set_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)(::StringW)>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::set_FileName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9ff751c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"set_FileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::Write)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9ff75a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9ff78d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::Flush)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ff7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::Finish)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9ff79b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.CleanFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::CleanFilename)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ff756c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"CleanFilename", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream.WriteHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::WriteHeader)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9ff76ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"WriteHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32*& ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_get_crc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32* const& ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_get_crc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_set_crc(::ICSharpCode::SharpZipLib::Checksum::Crc32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc = value;
}
constexpr ::GlobalNamespace::GZipOutputStream_OutputState& ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_get_state_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state_;
}
constexpr ::GlobalNamespace::GZipOutputStream_OutputState const& ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_get_state_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state_;
}
constexpr void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_set_state_(::GlobalNamespace::GZipOutputStream_OutputState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_get_fileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_get_fileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_set_fileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileName = value;
}
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags& ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags const& ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::__cordl_internal_set_flags(::ICSharpCode::SharpZipLib::GZip::GZipFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::_ctor(::System::IO::Stream*  baseOutputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseOutputStream);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::_ctor(::System::IO::Stream*  baseOutputStream, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseOutputStream, size);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::SetLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline int32_t ICSharpCode::SharpZipLib::GZip::GZipOutputStream::GetLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"GetLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::GZip::GZipOutputStream::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::set_FileName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"set_FileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::Finish()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW ICSharpCode::SharpZipLib::GZip::GZipOutputStream::CleanFilename(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"CleanFilename", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipOutputStream::WriteHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(),
                        {"WriteHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream* ICSharpCode::SharpZipLib::GZip::GZipOutputStream::New_ctor(::System::IO::Stream*  baseOutputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(baseOutputStream));
}
inline ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream* ICSharpCode::SharpZipLib::GZip::GZipOutputStream::New_ctor(::System::IO::Stream*  baseOutputStream, int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::GZip::GZipOutputStream*>(baseOutputStream, size));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipOutputStream::GZipOutputStream()   {
}
