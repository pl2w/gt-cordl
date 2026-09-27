#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipOutputStream.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__DeflaterOutputStream_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipOutputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__Crc32_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__INameTransform_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipExtraData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9fce384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9fce668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.get_IsFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::get_IsFinished)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fce9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"get_IsFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.SetComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::SetComment)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9fce9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"SetComment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.SetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::SetLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fceabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.GetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::GetLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fceb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"GetLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.get_UseZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::UseZip64 (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::get_UseZip64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fceb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"get_UseZip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.set_UseZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::ICSharpCode::SharpZipLib::Zip::UseZip64)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::set_UseZip64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fceb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"set_UseZip64", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::UseZip64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.get_NameTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Core::INameTransform* (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::get_NameTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fceba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"get_NameTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.set_NameTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::ICSharpCode::SharpZipLib::Core::INameTransform*)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::set_NameTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fcebac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"set_NameTransform", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.get_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::get_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fcebb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"get_Password", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.set_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::set_Password)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fcebbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.WriteLeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteLeShort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9fcebdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteLeShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.WriteLeInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteLeInt)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fcec2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteLeInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.WriteLeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteLeLong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9fcec54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteLeLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.TransformEntryName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::TransformEntryName)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9fcec94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"TransformEntryName", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.PutNextEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::PutNextEntry)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0x9fcedd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"PutNextEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.CloseEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::CloseEntry)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x9fcf704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"CloseEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.InitializePassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::InitializePassword)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9fd04f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"InitializePassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.InitializeAESPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::StringW, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<::ArrayW<uint8_t>>)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::InitializeAESPassword)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9fd05b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"InitializeAESPassword", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.WriteEncryptionHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteEncryptionHeader)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9fd0028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteEncryptionHeader", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.AddExtraDataAES
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::ZipExtraData*)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::AddExtraDataAES)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9fcfee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"AddExtraDataAES", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.WriteAESHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteAESHeader)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9fcffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteAESHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::Write)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9fd0800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.CopyAndEncrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::CopyAndEncrypt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9fd0a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"CopyAndEncrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::Finish)> {
  constexpr static std::size_t size = 0x96c;
  constexpr static std::size_t addrs = 0x9fd0b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::*)()>(&::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::Flush)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9fd14c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(), 23}
                ));
    return ___internal_method;
  }
};
constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform*& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get__NameTransform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NameTransform_k__BackingField;
}
constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get__NameTransform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NameTransform_k__BackingField;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set__NameTransform_k__BackingField(::ICSharpCode::SharpZipLib::Core::INameTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NameTransform_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>*& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>* const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_entries(::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32*& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_crc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32* const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_crc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_crc(::ICSharpCode::SharpZipLib::Checksum::Crc32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_curEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curEntry;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_curEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curEntry;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_curEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curEntry = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_defaultCompressionLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCompressionLevel;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_defaultCompressionLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCompressionLevel;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_defaultCompressionLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultCompressionLevel = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_curMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curMethod;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_curMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curMethod;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_curMethod(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curMethod = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_size(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_offset(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_zipComment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipComment;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_zipComment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zipComment;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_zipComment(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zipComment = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_patchEntryHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchEntryHeader;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_patchEntryHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchEntryHeader;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_patchEntryHeader(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patchEntryHeader = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_crcPatchPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crcPatchPos;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_crcPatchPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crcPatchPos;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_crcPatchPos(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crcPatchPos = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_sizePatchPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizePatchPos;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_sizePatchPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizePatchPos;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_sizePatchPos(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizePatchPos = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_useZip64_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useZip64_;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64 const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_useZip64_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useZip64_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_useZip64_(::ICSharpCode::SharpZipLib::Zip::UseZip64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useZip64_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_get_password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::__cordl_internal_set_password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___password = value;
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::setStaticF__aesRnd(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "_aesRnd", ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* ICSharpCode::SharpZipLib::Zip::ZipOutputStream::getStaticF__aesRnd()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "_aesRnd", ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>();
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::_ctor(::System::IO::Stream*  baseOutputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseOutputStream);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::_ctor(::System::IO::Stream*  baseOutputStream, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseOutputStream, bufferSize);
}
inline bool ICSharpCode::SharpZipLib::Zip::ZipOutputStream::get_IsFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"get_IsFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::SetComment(::StringW  comment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"SetComment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comment);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::SetLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::ZipOutputStream::GetLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"GetLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::UseZip64 ICSharpCode::SharpZipLib::Zip::ZipOutputStream::get_UseZip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"get_UseZip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::UseZip64>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"set_UseZip64", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::UseZip64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Core::INameTransform* ICSharpCode::SharpZipLib::Zip::ZipOutputStream::get_NameTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"get_NameTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Core::INameTransform*>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"set_NameTransform", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::INameTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW ICSharpCode::SharpZipLib::Zip::ZipOutputStream::get_Password()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"get_Password", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::set_Password(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteLeShort(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteLeShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteLeInt(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteLeInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteLeLong(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteLeLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::TransformEntryName(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"TransformEntryName", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::PutNextEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"PutNextEntry", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::CloseEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"CloseEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::InitializePassword(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"InitializePassword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::InitializeAESPassword(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  rawPassword, ::by_ref<::ArrayW<uint8_t>>  salt, ::by_ref<::ArrayW<uint8_t>>  pwdVerifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"InitializeAESPassword", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry, rawPassword, salt, pwdVerifier);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteEncryptionHeader(int64_t  crcValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteEncryptionHeader", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crcValue);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::AddExtraDataAES(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::ICSharpCode::SharpZipLib::Zip::ZipExtraData*  extraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"AddExtraDataAES", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipExtraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry, extraData);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::WriteAESHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"WriteAESHeader", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::CopyAndEncrypt(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(),
                        {"CopyAndEncrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::Finish()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ZipOutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream* ICSharpCode::SharpZipLib::Zip::ZipOutputStream::New_ctor(::System::IO::Stream*  baseOutputStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(baseOutputStream));
}
inline ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream* ICSharpCode::SharpZipLib::Zip::ZipOutputStream::New_ctor(::System::IO::Stream*  baseOutputStream, int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*>(baseOutputStream, bufferSize));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream::ZipOutputStream()   {
}
