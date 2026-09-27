#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipEntry.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__EncryptionAlgorithm_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractExistingFileAction_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntrySource_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntryTimestamp_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorAction_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Crc/zzzz__CrcCalculatorStream_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CloseDelegate_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CompressionMethod_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CountingStream_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__EncryptionAlgorithm_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractExistingFileAction_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__OpenDelegate_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__SetCompressionCallback_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__WriteDelegate_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipContainer_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipCrypto_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntrySource_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorAction_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipFile_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa68f674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_AttributesIndicateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_AttributesIndicateDirectory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa68f844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_AttributesIndicateDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ResetDirEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::ResetDirEntry)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa68f860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ResetDirEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ReadDirEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (*)(::Pathfinding::Ionic::Zip::ZipFile*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Pathfinding::Ionic::Zip::ZipEntry::ReadDirEntry)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0xa68f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReadDirEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.IsNotValidZipDirEntrySig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::IsNotValidZipDirEntrySig)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa69013c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"IsNotValidZipDirEntrySig", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.Extract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::Extract)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa690740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"Extract", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.InternalOpenReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Crc::CrcCalculatorStream* (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::InternalOpenReader)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa690f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"InternalOpenReader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.OnExtractProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(int64_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::OnExtractProgress)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa691480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnExtractProgress", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.OnBeforeExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::OnBeforeExtract)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa69157c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnBeforeExtract", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.OnAfterExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::OnAfterExtract)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6916b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnAfterExtract", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.OnExtractExisting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::OnExtractExisting)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa6916f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnExtractExisting", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ReallyDelete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::ReallyDelete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6917e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReallyDelete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.WriteStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Pathfinding::Ionic::Zip::ZipEntry::WriteStatus)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa6917e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WriteStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.InternalExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW, ::System::IO::Stream*, ::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::InternalExtract)> {
  constexpr static std::size_t size = 0x7f4;
  constexpr static std::size_t addrs = 0xa690750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"InternalExtract", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.VerifyCrcAfterExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(int32_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::VerifyCrcAfterExtract)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa6926c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"VerifyCrcAfterExtract", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.CheckExtractExistingFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW, ::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::CheckExtractExistingFile)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa6920c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CheckExtractExistingFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry._CheckRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(int32_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::_CheckRead)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa6928b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"_CheckRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ExtractOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::ExtractOne)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0xa6922b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ExtractOne", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.GetExtractDecompressor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::GetExtractDecompressor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6913fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"GetExtractDecompressor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.GetExtractDecryptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::GetExtractDecryptor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa691384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"GetExtractDecryptor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry._SetTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW, bool)>(&::Pathfinding::Ionic::Zip::ZipEntry::_SetTimes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa692780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"_SetTimes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_UnsupportedAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_UnsupportedAlgorithm)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa692934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_UnsupportedAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_UnsupportedCompressionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_UnsupportedCompressionMethod)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa692b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_UnsupportedCompressionMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ValidateEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::ValidateEncryption)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa691164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ValidateEncryption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ValidateCompression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::ValidateCompression)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6910b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ValidateCompression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.SetupCryptoForExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::SetupCryptoForExtract)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa691214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetupCryptoForExtract", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ValidateOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW, ::System::IO::Stream*, ::by_ref<::StringW>)>(&::Pathfinding::Ionic::Zip::ZipEntry::ValidateOutput)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa691e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ValidateOutput", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ReadHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Ionic::Zip::ZipEntry*, ::System::Text::Encoding*)>(&::Pathfinding::Ionic::Zip::ZipEntry::ReadHeader)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0xa692cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReadHeader", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ReadWeakEncryptionHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IO::Stream*, ::ArrayW<uint8_t>)>(&::Pathfinding::Ionic::Zip::ZipEntry::ReadWeakEncryptionHeader)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa68ec98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReadWeakEncryptionHeader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.IsNotValidSig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::IsNotValidSig)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa693568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"IsNotValidSig", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ReadEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (*)(::Pathfinding::Ionic::Zip::ZipContainer*, bool)>(&::Pathfinding::Ionic::Zip::ZipEntry::ReadEntry)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa693644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReadEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipContainer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.HandlePK00Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::HandlePK00Prefix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa69390c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"HandlePK00Prefix", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.HandleUnexpectedDataDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipEntry::HandleUnexpectedDataDescriptor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa6939a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"HandleUnexpectedDataDescriptor", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ProcessExtraField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*, int16_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraField)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa69053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraField", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ProcessExtraFieldPkwareStrongEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::ArrayW<uint8_t>, int32_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldPkwareStrongEncryption)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa693fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldPkwareStrongEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ProcessExtraFieldZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::ArrayW<uint8_t>, int32_t, int16_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldZip64)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa693f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldZip64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ProcessExtraFieldInfoZipTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::ArrayW<uint8_t>, int32_t, int16_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldInfoZipTimes)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa693d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldInfoZipTimes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ProcessExtraFieldUnixTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::ArrayW<uint8_t>, int32_t, int16_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldUnixTimes)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa693c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldUnixTimes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ProcessExtraFieldWindowsTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::ArrayW<uint8_t>, int32_t, int16_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldWindowsTimes)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa693aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldWindowsTimes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.WriteCentralDirectoryEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::WriteCentralDirectoryEntry)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0xa694018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WriteCentralDirectoryEntry", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ConstructExtraField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Ionic::Zip::ZipEntry::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipEntry::ConstructExtraField)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0xa69499c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ConstructExtraField", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.NormalizeFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::NormalizeFileName)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa695198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"NormalizeFileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.GetEncodedFileNameBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::GetEncodedFileNameBytes)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xa6945f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"GetEncodedFileNameBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.WantReadAgain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::WantReadAgain)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa695390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WantReadAgain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.MaybeUnsetCompressionMethodForWriting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(int32_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::MaybeUnsetCompressionMethodForWriting)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa695418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"MaybeUnsetCompressionMethodForWriting", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.WriteHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*, int32_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::WriteHeader)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0xa6955a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WriteHeader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.FigureCrc32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::FigureCrc32)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa695f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"FigureCrc32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.PrepSourceStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::PrepSourceStream)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa6960f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"PrepSourceStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.CopyMetaData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipEntry::CopyMetaData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6962a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CopyMetaData", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.OnWriteBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(int64_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::OnWriteBlock)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6963e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnWriteBlock", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry._WriteEntryData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::_WriteEntryData)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0xa6964dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"_WriteEntryData", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.SetInputAndFigureFileLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipEntry::*)(::by_ref<::System::IO::Stream*>)>(&::Pathfinding::Ionic::Zip::ZipEntry::SetInputAndFigureFileLength)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xa6968d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetInputAndFigureFileLength", {}, {::i2c::type_of<::by_ref<::System::IO::Stream*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.FinishOutputStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*, ::Pathfinding::Ionic::Zip::CountingStream*, ::System::IO::Stream*, ::System::IO::Stream*, ::Pathfinding::Ionic::Crc::CrcCalculatorStream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::FinishOutputStream)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa696e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"FinishOutputStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::CountingStream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Crc::CrcCalculatorStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.PostProcessOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::PostProcessOutput)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0xa696fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"PostProcessOutput", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.SetZip64Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::SetZip64Flags)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa695d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetZip64Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.PrepOutputStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*, int64_t, ::by_ref<::Pathfinding::Ionic::Zip::CountingStream*>, ::by_ref<::System::IO::Stream*>, ::by_ref<::System::IO::Stream*>, ::by_ref<::Pathfinding::Ionic::Crc::CrcCalculatorStream*>)>(&::Pathfinding::Ionic::Zip::ZipEntry::PrepOutputStream)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa697980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"PrepOutputStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::Pathfinding::Ionic::Zip::CountingStream*>>(), ::i2c::type_of<::by_ref<::System::IO::Stream*>>(), ::i2c::type_of<::by_ref<::System::IO::Stream*>>(), ::i2c::type_of<::by_ref<::Pathfinding::Ionic::Crc::CrcCalculatorStream*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.MaybeApplyCompression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*, int64_t)>(&::Pathfinding::Ionic::Zip::ZipEntry::MaybeApplyCompression)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa696bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"MaybeApplyCompression", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.MaybeApplyEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::MaybeApplyEncryption)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa696b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"MaybeApplyEncryption", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.OnZipErrorWhileSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::Exception*)>(&::Pathfinding::Ionic::Zip::ZipEntry::OnZipErrorWhileSaving)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa697ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnZipErrorWhileSaving", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::Write)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0xa697bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"Write", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.StoreRelativeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::StoreRelativeOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa697974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"StoreRelativeOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.NotifySaveComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::NotifySaveComplete)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa69859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"NotifySaveComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.WriteSecurityMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::WriteSecurityMetadata)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa6983bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WriteSecurityMetadata", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.CopyThroughOneEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::CopyThroughOneEntry)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa698188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CopyThroughOneEntry", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.CopyThroughWithRecompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::CopyThroughWithRecompute)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xa6985e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CopyThroughWithRecompute", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.CopyThroughWithNoChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::CopyThroughWithNoChange)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa698a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CopyThroughWithNoChange", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_LastModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_LastModified)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa695ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_LastModified", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_LastModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::DateTime)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_LastModified)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa698c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_LastModified", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_BufferSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa69291c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_ModifiedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::DateTime)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_ModifiedTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa698d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_ModifiedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_AccessedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::DateTime)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_AccessedTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa699090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_AccessedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_CreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::DateTime)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_CreationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6990a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_CreationTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.SetEntryTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::DateTime, ::System::DateTime, ::System::DateTime)>(&::Pathfinding::Ionic::Zip::ZipEntry::SetEntryTimes)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xa698d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetEntryTimes", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_EmitTimesInWindowsFormatWhenSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_EmitTimesInWindowsFormatWhenSaving)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6990ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_EmitTimesInWindowsFormatWhenSaving", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_EmitTimesInUnixFormatWhenSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_EmitTimesInUnixFormatWhenSaving)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6990bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_EmitTimesInUnixFormatWhenSaving", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_LocalFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_LocalFileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6990cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_LocalFileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6990d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_VersionNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_VersionNeeded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6990dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_VersionNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6990e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_Comment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_OutputUsedZip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_OutputUsedZip64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6990ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_OutputUsedZip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_CompressionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::CompressionMethod (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_CompressionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6990f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_CompressionMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_CompressionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::Pathfinding::Ionic::Zip::CompressionMethod)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_CompressionMethod)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa69632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_CompressionMethod", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::CompressionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_CompressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zlib::CompressionLevel (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_CompressionLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_CompressionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_CompressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::Pathfinding::Ionic::Zlib::CompressionLevel)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_CompressionLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa695528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_CompressionLevel", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_CompressedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_CompressedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_CompressedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_UncompressedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_UncompressedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_UncompressedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_IsDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_IsDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_IsDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_Encryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::EncryptionAlgorithm (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_Encryption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_Encryption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_Encryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::Pathfinding::Ionic::Zip::EncryptionAlgorithm)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_Encryption)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa695c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_Encryption", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::EncryptionAlgorithm>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_Password)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa695d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_ExtractExistingFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ExtractExistingFileAction (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_ExtractExistingFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_ExtractExistingFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_ExtractExistingFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::Pathfinding::Ionic::Zip::ExtractExistingFileAction)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_ExtractExistingFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_ExtractExistingFile", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ExtractExistingFileAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_ZipErrorAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipErrorAction (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_ZipErrorAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_ZipErrorAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_ZipErrorAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::Pathfinding::Ionic::Zip::ZipErrorAction)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_ZipErrorAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_ZipErrorAction", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipErrorAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_IncludedInMostRecentSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_IncludedInMostRecentSave)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa699150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_IncludedInMostRecentSave", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_SetCompression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::SetCompressionCallback* (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_SetCompression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_SetCompression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_SetCompression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::Pathfinding::Ionic::Zip::SetCompressionCallback*)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_SetCompression)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa699168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_SetCompression", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::SetCompressionCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_AlternateEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_AlternateEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_AlternateEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_AlternateEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::System::Text::Encoding*)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_AlternateEncoding)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa699180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_AlternateEncoding", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_AlternateEncodingUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipOption (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_AlternateEncodingUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_AlternateEncodingUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_AlternateEncodingUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(::Pathfinding::Ionic::Zip::ZipOption)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_AlternateEncodingUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa699198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_AlternateEncodingUsage", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.CreateForStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (*)(::StringW, ::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipEntry::CreateForStream)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6991a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CreateForStream", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntrySource, ::System::Object*, ::System::Object*)>(&::Pathfinding::Ionic::Zip::ZipEntry::Create)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xa69920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntrySource>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.MarkAsDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::MarkAsDirectory)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6904b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"MarkAsDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.set_IsText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipEntry::set_IsText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6996a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_IsText", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6996ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_ArchiveStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_ArchiveStream)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa6912ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_ArchiveStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.SetFdpLoh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::SetFdpLoh)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xa69972c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetFdpLoh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.GetLengthOfCryptoHeaderBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Pathfinding::Ionic::Zip::EncryptionAlgorithm)>(&::Pathfinding::Ionic::Zip::ZipEntry::GetLengthOfCryptoHeaderBytes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa698bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"GetLengthOfCryptoHeaderBytes", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::EncryptionAlgorithm>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_FileDataPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_FileDataPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa69135c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_FileDataPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry.get_LengthOfHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipEntry::*)()>(&::Pathfinding::Ionic::Zip::ZipEntry::get_LengthOfHeader)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6985bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_LengthOfHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__VersionMadeBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VersionMadeBy;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__VersionMadeBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VersionMadeBy;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__VersionMadeBy(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VersionMadeBy = value;
}
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__InternalFileAttrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InternalFileAttrs;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__InternalFileAttrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InternalFileAttrs;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__InternalFileAttrs(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InternalFileAttrs = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ExternalFileAttrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExternalFileAttrs;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ExternalFileAttrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExternalFileAttrs;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__ExternalFileAttrs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExternalFileAttrs = value;
}
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__filenameLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filenameLength;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__filenameLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filenameLength;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__filenameLength(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filenameLength = value;
}
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__extraFieldLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraFieldLength;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__extraFieldLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraFieldLength;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__extraFieldLength(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extraFieldLength = value;
}
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__commentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commentLength;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__commentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____commentLength;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__commentLength(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____commentLength = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__inputDecryptorStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputDecryptorStream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__inputDecryptorStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputDecryptorStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__inputDecryptorStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputDecryptorStream = value;
}
constexpr ::System::Object*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__outputLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputLock;
}
constexpr ::System::Object* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__outputLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputLock;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__outputLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputLock = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipCrypto*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__zipCrypto_forExtract()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipCrypto_forExtract;
}
constexpr ::Pathfinding::Ionic::Zip::ZipCrypto* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__zipCrypto_forExtract() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipCrypto_forExtract;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__zipCrypto_forExtract(::Pathfinding::Ionic::Zip::ZipCrypto*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zipCrypto_forExtract = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipCrypto*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__zipCrypto_forWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipCrypto_forWrite;
}
constexpr ::Pathfinding::Ionic::Zip::ZipCrypto* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__zipCrypto_forWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipCrypto_forWrite;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__zipCrypto_forWrite(::Pathfinding::Ionic::Zip::ZipCrypto*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zipCrypto_forWrite = value;
}
constexpr ::System::DateTime& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__LastModified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastModified;
}
constexpr ::System::DateTime const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__LastModified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastModified;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__LastModified(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastModified = value;
}
constexpr ::System::DateTime& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Mtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mtime;
}
constexpr ::System::DateTime const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Mtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mtime;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Mtime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mtime = value;
}
constexpr ::System::DateTime& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Atime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Atime;
}
constexpr ::System::DateTime const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Atime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Atime;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Atime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Atime = value;
}
constexpr ::System::DateTime& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Ctime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ctime;
}
constexpr ::System::DateTime const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Ctime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ctime;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Ctime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Ctime = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ntfsTimesAreSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ntfsTimesAreSet;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ntfsTimesAreSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ntfsTimesAreSet;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__ntfsTimesAreSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ntfsTimesAreSet = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__emitNtfsTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitNtfsTimes;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__emitNtfsTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitNtfsTimes;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__emitNtfsTimes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emitNtfsTimes = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__emitUnixTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitUnixTimes;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__emitUnixTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitUnixTimes;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__emitUnixTimes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emitUnixTimes = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__TrimVolumeFromFullyQualifiedPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrimVolumeFromFullyQualifiedPaths;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__TrimVolumeFromFullyQualifiedPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrimVolumeFromFullyQualifiedPaths;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__TrimVolumeFromFullyQualifiedPaths(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrimVolumeFromFullyQualifiedPaths = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__LocalFileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalFileName;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__LocalFileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalFileName;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__LocalFileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalFileName = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__FileNameInArchive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileNameInArchive;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__FileNameInArchive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileNameInArchive;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__FileNameInArchive(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileNameInArchive = value;
}
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__VersionNeeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VersionNeeded;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__VersionNeeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VersionNeeded;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__VersionNeeded(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VersionNeeded = value;
}
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__BitField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BitField;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__BitField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BitField;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__BitField(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BitField = value;
}
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressionMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressionMethod;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressionMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressionMethod;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__CompressionMethod(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CompressionMethod = value;
}
constexpr int16_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressionMethod_FromZipFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressionMethod_FromZipFile;
}
constexpr int16_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressionMethod_FromZipFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressionMethod_FromZipFile;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__CompressionMethod_FromZipFile(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CompressionMethod_FromZipFile = value;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressionLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressionLevel;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressionLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressionLevel;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__CompressionLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CompressionLevel = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comment;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comment;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Comment = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__IsDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDirectory;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__IsDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDirectory;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__IsDirectory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDirectory = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CommentBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommentBytes;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CommentBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommentBytes;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__CommentBytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CommentBytes = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressedSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressedSize;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressedSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressedSize;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__CompressedSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CompressedSize = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressedFileDataSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressedFileDataSize;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CompressedFileDataSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressedFileDataSize;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__CompressedFileDataSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CompressedFileDataSize = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__UncompressedSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UncompressedSize;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__UncompressedSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UncompressedSize;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__UncompressedSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UncompressedSize = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__TimeBlob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeBlob;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__TimeBlob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeBlob;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__TimeBlob(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeBlob = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__crcCalculated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crcCalculated;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__crcCalculated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crcCalculated;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__crcCalculated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crcCalculated = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Crc32()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Crc32() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Crc32;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Crc32(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Crc32 = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Extra()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Extra;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Extra() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Extra;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Extra(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Extra = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__metadataChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataChanged;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__metadataChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataChanged;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__metadataChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metadataChanged = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__restreamRequiredOnSave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restreamRequiredOnSave;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__restreamRequiredOnSave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restreamRequiredOnSave;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__restreamRequiredOnSave(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____restreamRequiredOnSave = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__sourceIsEncrypted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceIsEncrypted;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__sourceIsEncrypted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceIsEncrypted;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__sourceIsEncrypted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceIsEncrypted = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__skippedDuringSave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skippedDuringSave;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__skippedDuringSave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skippedDuringSave;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__skippedDuringSave(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skippedDuringSave = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__diskNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diskNumber;
}
constexpr uint32_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__diskNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diskNumber;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__diskNumber(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diskNumber = value;
}
constexpr ::System::Text::Encoding*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__actualEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actualEncoding;
}
constexpr ::System::Text::Encoding* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__actualEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actualEncoding;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__actualEncoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actualEncoding = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipContainer*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____container;
}
constexpr ::Pathfinding::Ionic::Zip::ZipContainer* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____container;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__container(::Pathfinding::Ionic::Zip::ZipContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____container = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get___FileDataPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____FileDataPosition;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get___FileDataPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____FileDataPosition;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set___FileDataPosition(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____FileDataPosition = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__EntryHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EntryHeader;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__EntryHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EntryHeader;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__EntryHeader(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EntryHeader = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__RelativeOffsetOfLocalHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RelativeOffsetOfLocalHeader;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__RelativeOffsetOfLocalHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RelativeOffsetOfLocalHeader;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__RelativeOffsetOfLocalHeader(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RelativeOffsetOfLocalHeader = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__future_ROLH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____future_ROLH;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__future_ROLH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____future_ROLH;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__future_ROLH(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____future_ROLH = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__TotalEntrySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalEntrySize;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__TotalEntrySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalEntrySize;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__TotalEntrySize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalEntrySize = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__LengthOfHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LengthOfHeader;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__LengthOfHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LengthOfHeader;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__LengthOfHeader(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LengthOfHeader = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__LengthOfTrailer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LengthOfTrailer;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__LengthOfTrailer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LengthOfTrailer;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__LengthOfTrailer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LengthOfTrailer = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__InputUsesZip64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputUsesZip64;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__InputUsesZip64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputUsesZip64;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__InputUsesZip64(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InputUsesZip64 = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__UnsupportedAlgorithmId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnsupportedAlgorithmId;
}
constexpr uint32_t const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__UnsupportedAlgorithmId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnsupportedAlgorithmId;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__UnsupportedAlgorithmId(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnsupportedAlgorithmId = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Password;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Password;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Password = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Source(::Pathfinding::Ionic::Zip::ZipEntrySource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Source = value;
}
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Encryption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encryption;
}
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Encryption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encryption;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Encryption(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Encryption = value;
}
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Encryption_FromZipFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encryption_FromZipFile;
}
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__Encryption_FromZipFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encryption_FromZipFile;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__Encryption_FromZipFile(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Encryption_FromZipFile = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__WeakEncryptionHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeakEncryptionHeader;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__WeakEncryptionHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeakEncryptionHeader;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__WeakEncryptionHeader(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WeakEncryptionHeader = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__archiveStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveStream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__archiveStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__archiveStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____archiveStream = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__sourceStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceStream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__sourceStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__sourceStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceStream = value;
}
constexpr ::System::Nullable_1<int64_t>& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__sourceStreamOriginalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceStreamOriginalPosition;
}
constexpr ::System::Nullable_1<int64_t> const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__sourceStreamOriginalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceStreamOriginalPosition;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__sourceStreamOriginalPosition(::System::Nullable_1<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceStreamOriginalPosition = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ioOperationCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ioOperationCanceled;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ioOperationCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ioOperationCanceled;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__ioOperationCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ioOperationCanceled = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__presumeZip64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____presumeZip64;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__presumeZip64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____presumeZip64;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__presumeZip64(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____presumeZip64 = value;
}
constexpr ::System::Nullable_1<bool>& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__entryRequiresZip64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryRequiresZip64;
}
constexpr ::System::Nullable_1<bool> const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__entryRequiresZip64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryRequiresZip64;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__entryRequiresZip64(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryRequiresZip64 = value;
}
constexpr ::System::Nullable_1<bool>& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__OutputUsesZip64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutputUsesZip64;
}
constexpr ::System::Nullable_1<bool> const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__OutputUsesZip64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutputUsesZip64;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__OutputUsesZip64(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OutputUsesZip64 = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__IsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsText;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__IsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsText;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__IsText(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsText = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timestamp;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timestamp;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__timestamp(::Pathfinding::Ionic::Zip::ZipEntryTimestamp  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timestamp = value;
}
constexpr ::Pathfinding::Ionic::Zip::WriteDelegate*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__WriteDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteDelegate;
}
constexpr ::Pathfinding::Ionic::Zip::WriteDelegate* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__WriteDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteDelegate;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__WriteDelegate(::Pathfinding::Ionic::Zip::WriteDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WriteDelegate = value;
}
constexpr ::Pathfinding::Ionic::Zip::OpenDelegate*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__OpenDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OpenDelegate;
}
constexpr ::Pathfinding::Ionic::Zip::OpenDelegate* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__OpenDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OpenDelegate;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__OpenDelegate(::Pathfinding::Ionic::Zip::OpenDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OpenDelegate = value;
}
constexpr ::Pathfinding::Ionic::Zip::CloseDelegate*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CloseDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseDelegate;
}
constexpr ::Pathfinding::Ionic::Zip::CloseDelegate* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__CloseDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseDelegate;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__CloseDelegate(::Pathfinding::Ionic::Zip::CloseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CloseDelegate = value;
}
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ExtractExistingFile_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtractExistingFile_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ExtractExistingFile_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtractExistingFile_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__ExtractExistingFile_k__BackingField(::Pathfinding::Ionic::Zip::ExtractExistingFileAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExtractExistingFile_k__BackingField = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ZipErrorAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ZipErrorAction_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__ZipErrorAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ZipErrorAction_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__ZipErrorAction_k__BackingField(::Pathfinding::Ionic::Zip::ZipErrorAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ZipErrorAction_k__BackingField = value;
}
constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__SetCompression_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetCompression_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__SetCompression_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetCompression_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__SetCompression_k__BackingField(::Pathfinding::Ionic::Zip::SetCompressionCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SetCompression_k__BackingField = value;
}
constexpr ::System::Text::Encoding*& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__AlternateEncoding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlternateEncoding_k__BackingField;
}
constexpr ::System::Text::Encoding* const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__AlternateEncoding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlternateEncoding_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__AlternateEncoding_k__BackingField(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AlternateEncoding_k__BackingField = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipOption& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__AlternateEncodingUsage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlternateEncodingUsage_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zip::ZipOption const& Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_get__AlternateEncodingUsage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AlternateEncodingUsage_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipEntry::__cordl_internal_set__AlternateEncodingUsage_k__BackingField(::Pathfinding::Ionic::Zip::ZipOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AlternateEncodingUsage_k__BackingField = value;
}
inline void Pathfinding::Ionic::Zip::ZipEntry::setStaticF_ibm437(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "ibm437", ::Pathfinding::Ionic::Zip::ZipEntry*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipEntry::getStaticF_ibm437()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "ibm437", ::Pathfinding::Ionic::Zip::ZipEntry*>();
}
inline void Pathfinding::Ionic::Zip::ZipEntry::setStaticF__unixEpoch(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "_unixEpoch", ::Pathfinding::Ionic::Zip::ZipEntry*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Pathfinding::Ionic::Zip::ZipEntry::getStaticF__unixEpoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "_unixEpoch", ::Pathfinding::Ionic::Zip::ZipEntry*>();
}
inline void Pathfinding::Ionic::Zip::ZipEntry::setStaticF__win32Epoch(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "_win32Epoch", ::Pathfinding::Ionic::Zip::ZipEntry*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Pathfinding::Ionic::Zip::ZipEntry::getStaticF__win32Epoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "_win32Epoch", ::Pathfinding::Ionic::Zip::ZipEntry*>();
}
inline void Pathfinding::Ionic::Zip::ZipEntry::setStaticF__zeroHour(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "_zeroHour", ::Pathfinding::Ionic::Zip::ZipEntry*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Pathfinding::Ionic::Zip::ZipEntry::getStaticF__zeroHour()  {
return ::cordl_internals::getStaticField<::System::DateTime, "_zeroHour", ::Pathfinding::Ionic::Zip::ZipEntry*>();
}
inline void Pathfinding::Ionic::Zip::ZipEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipEntry::get_AttributesIndicateDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_AttributesIndicateDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::ResetDirEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ResetDirEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipEntry::ReadDirEntry(::Pathfinding::Ionic::Zip::ZipFile*  zf, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  previouslySeen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReadDirEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(nullptr, ___internal_method, zf, previouslySeen);
}
inline bool Pathfinding::Ionic::Zip::ZipEntry::IsNotValidZipDirEntrySig(int32_t  signature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"IsNotValidZipDirEntrySig", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, signature);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::Extract(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"Extract", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::Pathfinding::Ionic::Crc::CrcCalculatorStream* Pathfinding::Ionic::Zip::ZipEntry::InternalOpenReader(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"InternalOpenReader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Crc::CrcCalculatorStream*>(this, ___internal_method, password);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::OnExtractProgress(int64_t  bytesWritten, int64_t  totalBytesToWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnExtractProgress", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesWritten, totalBytesToWrite);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::OnBeforeExtract(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnBeforeExtract", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::OnAfterExtract(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnAfterExtract", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::OnExtractExisting(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnExtractExisting", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::ReallyDelete(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReallyDelete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fileName);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::WriteStatus(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WriteStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, args);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::InternalExtract(::StringW  baseDir, ::System::IO::Stream*  outstream, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"InternalExtract", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseDir, outstream, password);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::VerifyCrcAfterExtract(int32_t  actualCrc32)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"VerifyCrcAfterExtract", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actualCrc32);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::CheckExtractExistingFile(::StringW  baseDir, ::StringW  targetFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CheckExtractExistingFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, baseDir, targetFileName);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::_CheckRead(int32_t  nbytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"_CheckRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nbytes);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::ExtractOne(::System::IO::Stream*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ExtractOne", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipEntry::GetExtractDecompressor(::System::IO::Stream*  input2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"GetExtractDecompressor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, input2);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipEntry::GetExtractDecryptor(::System::IO::Stream*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"GetExtractDecryptor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, input);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::_SetTimes(::StringW  fileOrDirectory, bool  isFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"_SetTimes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileOrDirectory, isFile);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipEntry::get_UnsupportedAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_UnsupportedAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipEntry::get_UnsupportedCompressionMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_UnsupportedCompressionMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::ValidateEncryption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ValidateEncryption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::ValidateCompression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ValidateCompression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::SetupCryptoForExtract(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetupCryptoForExtract", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password);
}
inline bool Pathfinding::Ionic::Zip::ZipEntry::ValidateOutput(::StringW  basedir, ::System::IO::Stream*  outstream, ::by_ref<::StringW>  outFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ValidateOutput", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, basedir, outstream, outFileName);
}
inline bool Pathfinding::Ionic::Zip::ZipEntry::ReadHeader(::Pathfinding::Ionic::Zip::ZipEntry*  ze, ::System::Text::Encoding*  defaultEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReadHeader", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ze, defaultEncoding);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::ReadWeakEncryptionHeader(::System::IO::Stream*  s, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReadWeakEncryptionHeader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, buffer);
}
inline bool Pathfinding::Ionic::Zip::ZipEntry::IsNotValidSig(int32_t  signature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"IsNotValidSig", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, signature);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipEntry::ReadEntry(::Pathfinding::Ionic::Zip::ZipContainer*  zc, bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ReadEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipContainer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(nullptr, ___internal_method, zc, first);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::HandlePK00Prefix(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"HandlePK00Prefix", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::HandleUnexpectedDataDescriptor(::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"HandleUnexpectedDataDescriptor", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraField(::System::IO::Stream*  s, int16_t  extraFieldLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraField", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, extraFieldLength);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldPkwareStrongEncryption(::ArrayW<uint8_t>  Buffer, int32_t  j)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldPkwareStrongEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, Buffer, j);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldZip64(::ArrayW<uint8_t>  buffer, int32_t  j, int16_t  dataSize, int64_t  posn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldZip64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, j, dataSize, posn);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldInfoZipTimes(::ArrayW<uint8_t>  buffer, int32_t  j, int16_t  dataSize, int64_t  posn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldInfoZipTimes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, j, dataSize, posn);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldUnixTimes(::ArrayW<uint8_t>  buffer, int32_t  j, int16_t  dataSize, int64_t  posn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldUnixTimes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, j, dataSize, posn);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::ProcessExtraFieldWindowsTimes(::ArrayW<uint8_t>  buffer, int32_t  j, int16_t  dataSize, int64_t  posn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ProcessExtraFieldWindowsTimes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, j, dataSize, posn);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::WriteCentralDirectoryEntry(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WriteCentralDirectoryEntry", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zip::ZipEntry::ConstructExtraField(bool  forCentralDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"ConstructExtraField", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, forCentralDirectory);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipEntry::NormalizeFileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"NormalizeFileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zip::ZipEntry::GetEncodedFileNameBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"GetEncodedFileNameBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipEntry::WantReadAgain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WantReadAgain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::MaybeUnsetCompressionMethodForWriting(int32_t  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"MaybeUnsetCompressionMethodForWriting", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cycle);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::WriteHeader(::System::IO::Stream*  s, int32_t  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WriteHeader", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, cycle);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::FigureCrc32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"FigureCrc32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::PrepSourceStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"PrepSourceStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::CopyMetaData(::Pathfinding::Ionic::Zip::ZipEntry*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CopyMetaData", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::OnWriteBlock(int64_t  bytesXferred, int64_t  totalBytesToXfer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnWriteBlock", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesXferred, totalBytesToXfer);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::_WriteEntryData(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"_WriteEntryData", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline int64_t Pathfinding::Ionic::Zip::ZipEntry::SetInputAndFigureFileLength(::by_ref<::System::IO::Stream*>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetInputAndFigureFileLength", {}, {::i2c::type_of<::by_ref<::System::IO::Stream*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, input);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::FinishOutputStream(::System::IO::Stream*  s, ::Pathfinding::Ionic::Zip::CountingStream*  entryCounter, ::System::IO::Stream*  encryptor, ::System::IO::Stream*  compressor, ::Pathfinding::Ionic::Crc::CrcCalculatorStream*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"FinishOutputStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::CountingStream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Pathfinding::Ionic::Crc::CrcCalculatorStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, entryCounter, encryptor, compressor, output);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::PostProcessOutput(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"PostProcessOutput", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::SetZip64Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetZip64Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::PrepOutputStream(::System::IO::Stream*  s, int64_t  streamLength, ::by_ref<::Pathfinding::Ionic::Zip::CountingStream*>  outputCounter, ::by_ref<::System::IO::Stream*>  encryptor, ::by_ref<::System::IO::Stream*>  compressor, ::by_ref<::Pathfinding::Ionic::Crc::CrcCalculatorStream*>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"PrepOutputStream", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::Pathfinding::Ionic::Zip::CountingStream*>>(), ::i2c::type_of<::by_ref<::System::IO::Stream*>>(), ::i2c::type_of<::by_ref<::System::IO::Stream*>>(), ::i2c::type_of<::by_ref<::Pathfinding::Ionic::Crc::CrcCalculatorStream*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, streamLength, outputCounter, encryptor, compressor, output);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipEntry::MaybeApplyCompression(::System::IO::Stream*  s, int64_t  streamLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"MaybeApplyCompression", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, s, streamLength);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipEntry::MaybeApplyEncryption(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"MaybeApplyEncryption", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, s);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::OnZipErrorWhileSaving(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"OnZipErrorWhileSaving", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::Write(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"Write", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::StoreRelativeOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"StoreRelativeOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::NotifySaveComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"NotifySaveComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::WriteSecurityMetadata(::System::IO::Stream*  outstream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"WriteSecurityMetadata", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outstream);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::CopyThroughOneEntry(::System::IO::Stream*  outStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CopyThroughOneEntry", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::CopyThroughWithRecompute(::System::IO::Stream*  outstream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CopyThroughWithRecompute", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outstream);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::CopyThroughWithNoChange(::System::IO::Stream*  outstream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CopyThroughWithNoChange", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outstream);
}
inline ::System::DateTime Pathfinding::Ionic::Zip::ZipEntry::get_LastModified()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_LastModified", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_LastModified(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_LastModified", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_ModifiedTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_ModifiedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_AccessedTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_AccessedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_CreationTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_CreationTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::SetEntryTimes(::System::DateTime  created, ::System::DateTime  accessed, ::System::DateTime  modified)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetEntryTimes", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, created, accessed, modified);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_EmitTimesInWindowsFormatWhenSaving(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_EmitTimesInWindowsFormatWhenSaving", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_EmitTimesInUnixFormatWhenSaving(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_EmitTimesInUnixFormatWhenSaving", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipEntry::get_LocalFileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_LocalFileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipEntry::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int16_t Pathfinding::Ionic::Zip::ZipEntry::get_VersionNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_VersionNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipEntry::get_Comment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_Comment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> Pathfinding::Ionic::Zip::ZipEntry::get_OutputUsedZip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_OutputUsedZip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::CompressionMethod Pathfinding::Ionic::Zip::ZipEntry::get_CompressionMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_CompressionMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::CompressionMethod>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_CompressionMethod(::Pathfinding::Ionic::Zip::CompressionMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_CompressionMethod", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::CompressionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zlib::CompressionLevel Pathfinding::Ionic::Zip::ZipEntry::get_CompressionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_CompressionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zlib::CompressionLevel>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_CompressionLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_CompressionLevel", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Pathfinding::Ionic::Zip::ZipEntry::get_CompressedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_CompressedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Pathfinding::Ionic::Zip::ZipEntry::get_UncompressedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_UncompressedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipEntry::get_IsDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_IsDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::EncryptionAlgorithm Pathfinding::Ionic::Zip::ZipEntry::get_Encryption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_Encryption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::EncryptionAlgorithm>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_Encryption(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_Encryption", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::EncryptionAlgorithm>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_Password(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zip::ExtractExistingFileAction Pathfinding::Ionic::Zip::ZipEntry::get_ExtractExistingFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_ExtractExistingFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ExtractExistingFileAction>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_ExtractExistingFile(::Pathfinding::Ionic::Zip::ExtractExistingFileAction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_ExtractExistingFile", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ExtractExistingFileAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zip::ZipErrorAction Pathfinding::Ionic::Zip::ZipEntry::get_ZipErrorAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_ZipErrorAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipErrorAction>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_ZipErrorAction(::Pathfinding::Ionic::Zip::ZipErrorAction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_ZipErrorAction", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipErrorAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Ionic::Zip::ZipEntry::get_IncludedInMostRecentSave()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_IncludedInMostRecentSave", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::SetCompressionCallback* Pathfinding::Ionic::Zip::ZipEntry::get_SetCompression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_SetCompression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::SetCompressionCallback*>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_SetCompression(::Pathfinding::Ionic::Zip::SetCompressionCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_SetCompression", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::SetCompressionCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipEntry::get_AlternateEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_AlternateEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_AlternateEncoding(::System::Text::Encoding*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_AlternateEncoding", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zip::ZipOption Pathfinding::Ionic::Zip::ZipEntry::get_AlternateEncodingUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_AlternateEncodingUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipOption>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_AlternateEncodingUsage(::Pathfinding::Ionic::Zip::ZipOption  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_AlternateEncodingUsage", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipEntry::CreateForStream(::StringW  entryName, ::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"CreateForStream", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(nullptr, ___internal_method, entryName, s);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipEntry::Create(::StringW  nameInArchive, ::Pathfinding::Ionic::Zip::ZipEntrySource  source, ::System::Object*  arg1, ::System::Object*  arg2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntrySource>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(nullptr, ___internal_method, nameInArchive, source, arg1, arg2);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::MarkAsDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"MarkAsDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::set_IsText(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"set_IsText", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipEntry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipEntry::get_ArchiveStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_ArchiveStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipEntry::SetFdpLoh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"SetFdpLoh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::GetLengthOfCryptoHeaderBytes(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"GetLengthOfCryptoHeaderBytes", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::EncryptionAlgorithm>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a);
}
inline int64_t Pathfinding::Ionic::Zip::ZipEntry::get_FileDataPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_FileDataPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry::get_LengthOfHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry*>(),
                        {"get_LengthOfHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipEntry*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipEntry::ZipEntry()   {
}
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper.AppendCopyToFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper::AppendCopyToFileName)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xa690150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper*>(),
                        {"AppendCopyToFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::ZipEntry_CopyHelper::setStaticF_re(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "re", ::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Pathfinding::Ionic::Zip::ZipEntry_CopyHelper::getStaticF_re()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "re", ::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper*>();
}
inline void Pathfinding::Ionic::Zip::ZipEntry_CopyHelper::setStaticF_callCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "callCount", ::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper*>(std::forward<int32_t>(value));
}
inline int32_t Pathfinding::Ionic::Zip::ZipEntry_CopyHelper::getStaticF_callCount()  {
return ::cordl_internals::getStaticField<int32_t, "callCount", ::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper*>();
}
inline ::StringW Pathfinding::Ionic::Zip::ZipEntry_CopyHelper::AppendCopyToFileName(::StringW  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper*>(),
                        {"AppendCopyToFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, f);
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper::ZipEntry_CopyHelper()   {
}
