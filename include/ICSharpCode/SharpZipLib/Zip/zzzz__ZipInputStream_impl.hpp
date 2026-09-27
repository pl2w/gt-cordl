#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipInputStream.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__InflaterInputStream_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipInputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__Crc32_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fcb36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fcb62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.get_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::get_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fcb8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"get_Password", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.set_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::set_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fcb8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.get_CanDecompressEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::get_CanDecompressEntry)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fcb8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"get_CanDecompressEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.IsEntryCompressionMethodSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::IsEntryCompressionMethodSupported)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fcb940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"IsEntryCompressionMethodSupported", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.GetNextEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::ZipEntry* (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::GetNextEntry)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x9fcb964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"GetNextEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.ReadDataDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::ReadDataDescriptor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9fcc294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"ReadDataDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.CompleteCloseEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::CompleteCloseEntry)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fcc41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"CompleteCloseEntry", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.CloseEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::CloseEntry)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9fcbfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"CloseEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.get_Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::get_Available)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fcc74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::get_Length)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9fcc75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9fcc80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.ReadingNotAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::ReadingNotAvailable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fcc8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"ReadingNotAvailable", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.ReadingNotSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::ReadingNotSupported)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fcc8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"ReadingNotSupported", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.StoredDescriptorEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::StoredDescriptorEntry)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fcc93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"StoredDescriptorEntry", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.InitialRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::InitialRead)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x9fcc988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"InitialRead", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::Read)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9fcd5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.BodyRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::BodyRead)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x9fcd168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"BodyRead", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipInputStream::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fcd880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 22}
                ));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_internalReader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalReader;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler* const& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_internalReader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalReader;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_set_internalReader(::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalReader = value;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32*& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_crc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32* const& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_crc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_set_crc(::ICSharpCode::SharpZipLib::Checksum::Crc32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_entry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entry;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_entry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entry;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_set_entry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entry = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_set_size(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_set_method(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_set_flags(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_get_password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipInputStream::__cordl_internal_set_password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___password = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipInputStream::_ctor(::System::IO::Stream*  baseInputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInputStream);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipInputStream::_ctor(::System::IO::Stream*  baseInputStream, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseInputStream, bufferSize);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipInputStream::get_Password()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"get_Password", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipInputStream::set_Password(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipInputStream::get_CanDecompressEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"get_CanDecompressEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipInputStream::IsEntryCompressionMethodSupported(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"IsEntryCompressionMethodSupported", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, entry);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* ICSharpCode::SharpZipLib::Zip::ZipInputStream::GetNextEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"GetNextEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipInputStream::ReadDataDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"ReadDataDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipInputStream::CompleteCloseEntry(bool  testCrc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"CompleteCloseEntry", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, testCrc);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipInputStream::CloseEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"CloseEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::get_Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::ReadingNotAvailable(::ArrayW<uint8_t>  destination, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"ReadingNotAvailable", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, destination, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::ReadingNotSupported(::ArrayW<uint8_t>  destination, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"ReadingNotSupported", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, destination, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::StoredDescriptorEntry(::ArrayW<uint8_t>  destination, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"StoredDescriptorEntry", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, destination, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::InitialRead(::ArrayW<uint8_t>  destination, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"InitialRead", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, destination, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream::BodyRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(),
                        {"BodyRead", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipInputStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipInputStream* ICSharpCode::SharpZipLib::Zip::ZipInputStream::New_ctor(::System::IO::Stream*  baseInputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(baseInputStream));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipInputStream* ICSharpCode::SharpZipLib::Zip::ZipInputStream::New_ctor(::System::IO::Stream*  baseInputStream, int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipInputStream*>(baseInputStream, bufferSize));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipInputStream::ZipInputStream()   {
}
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::*)(::System::Object*, ::System::IntPtr)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fcb578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fcd960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9fcd974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::*)(::System::IAsyncResult*)>(&::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fcd9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::Invoke(::ArrayW<uint8_t>  b, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, b, offset, length);
}
inline ::System::IAsyncResult* ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::BeginInvoke(::ArrayW<uint8_t>  b, int32_t  offset, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, b, offset, length, callback, object);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler* ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler::ZipInputStream_ReadDataHandler()   {
}
