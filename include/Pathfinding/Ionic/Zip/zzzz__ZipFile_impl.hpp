#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipFile.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CompressionMethod_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__EncryptionAlgorithm_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractExistingFileAction_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorAction_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_ValueCollection_Enumerator_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipFile_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__AddProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CompressionMethod_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__EncryptionAlgorithm_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractExistingFileAction_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ReadProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__SaveProgressEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__SetCompressionCallback_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorAction_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipFile_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ParallelDeflateOutputStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa699ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.add_ReadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*)>(&::Pathfinding::Ionic::Zip::ZipFile::add_ReadProgress)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa699d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"add_ReadProgress", {}, {::i2c::type_of<::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.remove_ReadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*)>(&::Pathfinding::Ionic::Zip::ZipFile::remove_ReadProgress)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa699dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"remove_ReadProgress", {}, {::i2c::type_of<::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa699e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (::Pathfinding::Ionic::Zip::ZipFile::*)(::StringW, ::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipFile::AddEntry)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa699f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"AddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile._InternalAddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipFile::_InternalAddEntry)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa69a014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"_InternalAddEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (::Pathfinding::Ionic::Zip::ZipFile::*)(::StringW, ::ArrayW<uint8_t>)>(&::Pathfinding::Ionic::Zip::ZipFile::AddEntry)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa69a2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"AddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.InternalAddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipFile::InternalAddEntry)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa69a15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"InternalAddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_ArchiveNameForEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_ArchiveNameForEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa69a398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ArchiveNameForEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnSaveBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipEntry*, int64_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipFile::OnSaveBlock)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa69641c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveBlock", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnSaveEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(int32_t, ::Pathfinding::Ionic::Zip::ZipEntry*, bool)>(&::Pathfinding::Ionic::Zip::ZipFile::OnSaveEntry)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa69a3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveEntry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnSaveEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipProgressEventType)>(&::Pathfinding::Ionic::Zip::ZipFile::OnSaveEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa69a51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveEvent", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnSaveStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::OnSaveStarted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa69a5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnSaveCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::OnSaveCompleted)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa69a694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnReadStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::OnReadStarted)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa69a71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnReadStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnReadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::OnReadCompleted)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa69a7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnReadCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnReadBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipFile::OnReadBytes)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa69357c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnReadBytes", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnReadEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(bool, ::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipFile::OnReadEntry)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa6937d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnReadEntry", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_LengthOfReadStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_LengthOfReadStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa69a82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_LengthOfReadStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnExtractBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipEntry*, int64_t, int64_t)>(&::Pathfinding::Ionic::Zip::ZipFile::OnExtractBlock)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa6914bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnExtractBlock", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnSingleEntryExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipEntry*, ::StringW, bool)>(&::Pathfinding::Ionic::Zip::ZipFile::OnSingleEntryExtract)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa6915c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSingleEntryExtract", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnExtractExisting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipEntry*, ::StringW)>(&::Pathfinding::Ionic::Zip::ZipFile::OnExtractExisting)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa691728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnExtractExisting", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.AfterAddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipEntry*)>(&::Pathfinding::Ionic::Zip::ZipFile::AfterAddEntry)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa69a1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"AfterAddEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.OnZipErrorSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipEntry*, ::System::Exception*)>(&::Pathfinding::Ionic::Zip::ZipFile::OnZipErrorSaving)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa697af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnZipErrorSaving", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipFile* (*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipFile::Read)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa69a8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Read", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipFile* (*)(::System::IO::Stream*, ::System::IO::TextWriter*, ::System::Text::Encoding*, ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*)>(&::Pathfinding::Ionic::Zip::ZipFile::Read)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa69a908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Read", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.ReadIntoInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Ionic::Zip::ZipFile*)>(&::Pathfinding::Ionic::Zip::ZipFile::ReadIntoInstance)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0xa69aafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadIntoInstance", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.Zip64SeekToCentralDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Ionic::Zip::ZipFile*)>(&::Pathfinding::Ionic::Zip::ZipFile::Zip64SeekToCentralDirectory)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa69b474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Zip64SeekToCentralDirectory", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.ReadFirstFourBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipFile::ReadFirstFourBytes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa69b420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadFirstFourBytes", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.ReadCentralDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Ionic::Zip::ZipFile*)>(&::Pathfinding::Ionic::Zip::ZipFile::ReadCentralDirectory)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa69b6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadCentralDirectory", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.ReadIntoInstance_Orig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Ionic::Zip::ZipFile*)>(&::Pathfinding::Ionic::Zip::ZipFile::ReadIntoInstance_Orig)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0xa69afe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadIntoInstance_Orig", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.ReadCentralDirectoryFooter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Ionic::Zip::ZipFile*)>(&::Pathfinding::Ionic::Zip::ZipFile::ReadCentralDirectoryFooter)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xa69b9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadCentralDirectoryFooter", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.ReadZipFileComment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Ionic::Zip::ZipFile*)>(&::Pathfinding::Ionic::Zip::ZipFile::ReadZipFileComment)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa69bd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadZipFileComment", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.DeleteFileWithRetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipFile::DeleteFileWithRetry)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa69bea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"DeleteFileWithRetry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::Save)> {
  constexpr static std::size_t size = 0xbd4;
  constexpr static std::size_t addrs = 0xa69bfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.NotifyEntriesSaveComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*)>(&::Pathfinding::Ionic::Zip::ZipFile::NotifyEntriesSaveComplete)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xa69d034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"NotifyEntriesSaveComplete", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.RemoveTempFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::RemoveTempFile)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa69d2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"RemoveTempFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.CleanupAfterSaveOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::CleanupAfterSaveOperation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa69d3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"CleanupAfterSaveOperation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::ZipFile::Save)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa69d4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Save", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_FullScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_FullScan)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_FullScan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_SortEntriesBeforeSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_SortEntriesBeforeSaving)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_SortEntriesBeforeSaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.set_AddDirectoryWillTraverseReparsePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipFile::set_AddDirectoryWillTraverseReparsePoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_AddDirectoryWillTraverseReparsePoints", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_BufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_CodecBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_CodecBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_CodecBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_FlattenFoldersOnExtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_FlattenFoldersOnExtract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_FlattenFoldersOnExtract", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zlib::CompressionStrategy (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_Strategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Strategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_CompressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zlib::CompressionLevel (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_CompressionLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_CompressionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.set_CompressionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zlib::CompressionLevel)>(&::Pathfinding::Ionic::Zip::ZipFile::set_CompressionLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_CompressionLevel", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_CompressionMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::CompressionMethod (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_CompressionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_CompressionMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Comment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.set_Comment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipFile::set_Comment)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa69be84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_Verbose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa69181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Verbose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_CaseSensitiveRetrieval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_CaseSensitiveRetrieval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_CaseSensitiveRetrieval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_UseZip64WhenSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::Zip64Option (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_UseZip64WhenSaving)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_UseZip64WhenSaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.set_UseZip64WhenSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::Zip64Option)>(&::Pathfinding::Ionic::Zip::ZipFile::set_UseZip64WhenSaving)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_UseZip64WhenSaving", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::Zip64Option>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_AlternateEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_AlternateEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_AlternateEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.set_AlternateEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::System::Text::Encoding*)>(&::Pathfinding::Ionic::Zip::ZipFile::set_AlternateEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_AlternateEncoding", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_AlternateEncodingUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipOption (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_AlternateEncodingUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_AlternateEncodingUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.set_AlternateEncodingUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::Pathfinding::Ionic::Zip::ZipOption)>(&::Pathfinding::Ionic::Zip::ZipFile::set_AlternateEncodingUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_AlternateEncodingUsage", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_DefaultEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_DefaultEncoding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa69d690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_DefaultEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_StatusMessageTextWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::TextWriter* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_StatusMessageTextWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_StatusMessageTextWriter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_TempFileFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_TempFileFolder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_TempFileFolder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_ExtractExistingFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ExtractExistingFileAction (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_ExtractExistingFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ExtractExistingFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_ZipErrorAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipErrorAction (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_ZipErrorAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa69a13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ZipErrorAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_Encryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::EncryptionAlgorithm (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_Encryption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Encryption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_SetCompression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::SetCompressionCallback* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_SetCompression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_SetCompression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_MaxOutputSegmentSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_MaxOutputSegmentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_MaxOutputSegmentSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.set_ParallelDeflateThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(int64_t)>(&::Pathfinding::Ionic::Zip::ZipFile::set_ParallelDeflateThreshold)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa69d718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_ParallelDeflateThreshold", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_ParallelDeflateThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_ParallelDeflateThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ParallelDeflateThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_ParallelDeflateMaxBufferPairs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_ParallelDeflateMaxBufferPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69d788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ParallelDeflateMaxBufferPairs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa69d790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.NotifyEntryChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::NotifyEntryChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6990fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"NotifyEntryChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.StreamForDiskNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipFile::*)(uint32_t)>(&::Pathfinding::Ionic::Zip::ZipFile::StreamForDiskNumber)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa6996f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"StreamForDiskNumber", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipFile::Reset)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0xa69182c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Reset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile._initEntriesDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::_initEntriesDictionary)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa69d7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"_initEntriesDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile._InitInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(::StringW, ::System::IO::TextWriter*)>(&::Pathfinding::Ionic::Zip::ZipFile::_InitInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa699bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"_InitInstance", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (::Pathfinding::Ionic::Zip::ZipFile::*)(::StringW)>(&::Pathfinding::Ionic::Zip::ZipFile::get_Item)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa692784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_Entries)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa69cfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_EntriesSorted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_EntriesSorted)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xa69cc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_EntriesSorted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa69d948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile::*)(bool)>(&::Pathfinding::Ionic::Zip::ZipFile::Dispose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa69d9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_ReadStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_ReadStream)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa6900d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ReadStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.get_WriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::get_WriteStream)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa69cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_WriteStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>* (::Pathfinding::Ionic::Zip::ZipFile::*)()>(&::Pathfinding::Ionic::Zip::ZipFile::GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa699e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__lengthOfReadStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthOfReadStream;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__lengthOfReadStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lengthOfReadStream;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__lengthOfReadStream(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lengthOfReadStream = value;
}
constexpr ::System::IO::TextWriter*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__StatusMessageTextWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusMessageTextWriter;
}
constexpr ::System::IO::TextWriter* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__StatusMessageTextWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StatusMessageTextWriter;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__StatusMessageTextWriter(::System::IO::TextWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StatusMessageTextWriter = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__CaseSensitiveRetrieval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CaseSensitiveRetrieval;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__CaseSensitiveRetrieval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CaseSensitiveRetrieval;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__CaseSensitiveRetrieval(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CaseSensitiveRetrieval = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__readstream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readstream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__readstream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readstream;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__readstream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readstream = value;
}
constexpr ::System::IO::Stream*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__writestream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writestream;
}
constexpr ::System::IO::Stream* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__writestream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writestream;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__writestream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writestream = value;
}
constexpr uint16_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__versionMadeBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____versionMadeBy;
}
constexpr uint16_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__versionMadeBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____versionMadeBy;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__versionMadeBy(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____versionMadeBy = value;
}
constexpr uint16_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__versionNeededToExtract()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____versionNeededToExtract;
}
constexpr uint16_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__versionNeededToExtract() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____versionNeededToExtract;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__versionNeededToExtract(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____versionNeededToExtract = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__diskNumberWithCd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diskNumberWithCd;
}
constexpr uint32_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__diskNumberWithCd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diskNumberWithCd;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__diskNumberWithCd(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diskNumberWithCd = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__maxOutputSegmentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxOutputSegmentSize;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__maxOutputSegmentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxOutputSegmentSize;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__maxOutputSegmentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxOutputSegmentSize = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__numberOfSegmentsForMostRecentSave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfSegmentsForMostRecentSave;
}
constexpr uint32_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__numberOfSegmentsForMostRecentSave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfSegmentsForMostRecentSave;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__numberOfSegmentsForMostRecentSave(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numberOfSegmentsForMostRecentSave = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__zipErrorAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipErrorAction;
}
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__zipErrorAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipErrorAction;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__zipErrorAction(::Pathfinding::Ionic::Zip::ZipErrorAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zipErrorAction = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__entries(::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entries = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zip::ZipEntry*>*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__zipEntriesAsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipEntriesAsList;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zip::ZipEntry*>* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__zipEntriesAsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zipEntriesAsList;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__zipEntriesAsList(::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zipEntriesAsList = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__readName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readName;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__readName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readName;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__readName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readName = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__Comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comment;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__Comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Comment;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__Comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Comment = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Password;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Password;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Password = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__emitNtfsTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitNtfsTimes;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__emitNtfsTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitNtfsTimes;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__emitNtfsTimes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emitNtfsTimes = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__emitUnixTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitUnixTimes;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__emitUnixTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitUnixTimes;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__emitUnixTimes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emitUnixTimes = value;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__Strategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Strategy;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__Strategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Strategy;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__Strategy(::Pathfinding::Ionic::Zlib::CompressionStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Strategy = value;
}
constexpr ::Pathfinding::Ionic::Zip::CompressionMethod& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__compressionMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressionMethod;
}
constexpr ::Pathfinding::Ionic::Zip::CompressionMethod const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__compressionMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressionMethod;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__compressionMethod(::Pathfinding::Ionic::Zip::CompressionMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compressionMethod = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__fileAlreadyExists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileAlreadyExists;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__fileAlreadyExists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileAlreadyExists;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__fileAlreadyExists(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fileAlreadyExists = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__temporaryFileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temporaryFileName;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__temporaryFileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temporaryFileName;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__temporaryFileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____temporaryFileName = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__contentsChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentsChanged;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__contentsChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentsChanged;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__contentsChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contentsChanged = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__hasBeenSaved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasBeenSaved;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__hasBeenSaved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasBeenSaved;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__hasBeenSaved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasBeenSaved = value;
}
constexpr ::StringW& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__TempFileFolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TempFileFolder;
}
constexpr ::StringW const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__TempFileFolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TempFileFolder;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__TempFileFolder(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TempFileFolder = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__ReadStreamIsOurs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReadStreamIsOurs;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__ReadStreamIsOurs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReadStreamIsOurs;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__ReadStreamIsOurs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReadStreamIsOurs = value;
}
constexpr ::System::Object*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_LOCK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOCK;
}
constexpr ::System::Object* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_LOCK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOCK;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set_LOCK(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOCK = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__saveOperationCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveOperationCanceled;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__saveOperationCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveOperationCanceled;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__saveOperationCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____saveOperationCanceled = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__extractOperationCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extractOperationCanceled;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__extractOperationCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extractOperationCanceled;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__extractOperationCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extractOperationCanceled = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__addOperationCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addOperationCanceled;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__addOperationCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addOperationCanceled;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__addOperationCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addOperationCanceled = value;
}
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__Encryption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encryption;
}
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__Encryption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Encryption;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__Encryption(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Encryption = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__JustSaved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JustSaved;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__JustSaved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____JustSaved;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__JustSaved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____JustSaved = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__locEndOfCDS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locEndOfCDS;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__locEndOfCDS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locEndOfCDS;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__locEndOfCDS(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locEndOfCDS = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__OffsetOfCentralDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OffsetOfCentralDirectory;
}
constexpr uint32_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__OffsetOfCentralDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OffsetOfCentralDirectory;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__OffsetOfCentralDirectory(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OffsetOfCentralDirectory = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__OffsetOfCentralDirectory64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OffsetOfCentralDirectory64;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__OffsetOfCentralDirectory64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OffsetOfCentralDirectory64;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__OffsetOfCentralDirectory64(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OffsetOfCentralDirectory64 = value;
}
constexpr ::System::Nullable_1<bool>& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__OutputUsesZip64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutputUsesZip64;
}
constexpr ::System::Nullable_1<bool> const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__OutputUsesZip64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OutputUsesZip64;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__OutputUsesZip64(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OutputUsesZip64 = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__inExtractAll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inExtractAll;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__inExtractAll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inExtractAll;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__inExtractAll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inExtractAll = value;
}
constexpr ::System::Text::Encoding*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__alternateEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateEncoding;
}
constexpr ::System::Text::Encoding* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__alternateEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateEncoding;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__alternateEncoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alternateEncoding = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipOption& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__alternateEncodingUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateEncodingUsage;
}
constexpr ::Pathfinding::Ionic::Zip::ZipOption const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__alternateEncodingUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateEncodingUsage;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__alternateEncodingUsage(::Pathfinding::Ionic::Zip::ZipOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alternateEncodingUsage = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__BufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferSize;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__BufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BufferSize;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__BufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BufferSize = value;
}
constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_ParallelDeflater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParallelDeflater;
}
constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_ParallelDeflater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParallelDeflater;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set_ParallelDeflater(::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParallelDeflater = value;
}
constexpr int64_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__ParallelDeflateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParallelDeflateThreshold;
}
constexpr int64_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__ParallelDeflateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParallelDeflateThreshold;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__ParallelDeflateThreshold(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParallelDeflateThreshold = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__maxBufferPairs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferPairs;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__maxBufferPairs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxBufferPairs;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__maxBufferPairs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxBufferPairs = value;
}
constexpr ::Pathfinding::Ionic::Zip::Zip64Option& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__zip64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zip64;
}
constexpr ::Pathfinding::Ionic::Zip::Zip64Option const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__zip64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zip64;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__zip64(::Pathfinding::Ionic::Zip::Zip64Option  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zip64 = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__SavingSfx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SavingSfx;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__SavingSfx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SavingSfx;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__SavingSfx(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SavingSfx = value;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_SaveProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SaveProgress;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_SaveProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SaveProgress;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set_SaveProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SaveProgress = value;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_ReadProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadProgress;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_ReadProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadProgress;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set_ReadProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReadProgress = value;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_ExtractProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtractProgress;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_ExtractProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtractProgress;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set_ExtractProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExtractProgress = value;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_AddProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddProgress;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_AddProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddProgress;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set_AddProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddProgress = value;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_ZipError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZipError;
}
constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get_ZipError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZipError;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set_ZipError(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZipError = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__FullScan_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FullScan_k__BackingField;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__FullScan_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FullScan_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__FullScan_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FullScan_k__BackingField = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__SortEntriesBeforeSaving_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortEntriesBeforeSaving_k__BackingField;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__SortEntriesBeforeSaving_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortEntriesBeforeSaving_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__SortEntriesBeforeSaving_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SortEntriesBeforeSaving_k__BackingField = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__AddDirectoryWillTraverseReparsePoints_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddDirectoryWillTraverseReparsePoints_k__BackingField;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__AddDirectoryWillTraverseReparsePoints_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddDirectoryWillTraverseReparsePoints_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__AddDirectoryWillTraverseReparsePoints_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AddDirectoryWillTraverseReparsePoints_k__BackingField = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__CodecBufferSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecBufferSize_k__BackingField;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__CodecBufferSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecBufferSize_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__CodecBufferSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CodecBufferSize_k__BackingField = value;
}
constexpr bool& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__FlattenFoldersOnExtract_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlattenFoldersOnExtract_k__BackingField;
}
constexpr bool const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__FlattenFoldersOnExtract_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlattenFoldersOnExtract_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__FlattenFoldersOnExtract_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FlattenFoldersOnExtract_k__BackingField = value;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__CompressionLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressionLevel_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__CompressionLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompressionLevel_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__CompressionLevel_k__BackingField(::Pathfinding::Ionic::Zlib::CompressionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CompressionLevel_k__BackingField = value;
}
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__ExtractExistingFile_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtractExistingFile_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__ExtractExistingFile_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtractExistingFile_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__ExtractExistingFile_k__BackingField(::Pathfinding::Ionic::Zip::ExtractExistingFileAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExtractExistingFile_k__BackingField = value;
}
constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback*& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__SetCompression_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetCompression_k__BackingField;
}
constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback* const& Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_get__SetCompression_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SetCompression_k__BackingField;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile::__cordl_internal_set__SetCompression_k__BackingField(::Pathfinding::Ionic::Zip::SetCompressionCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SetCompression_k__BackingField = value;
}
inline void Pathfinding::Ionic::Zip::ZipFile::setStaticF__defaultEncoding(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "_defaultEncoding", ::Pathfinding::Ionic::Zip::ZipFile*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipFile::getStaticF__defaultEncoding()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "_defaultEncoding", ::Pathfinding::Ionic::Zip::ZipFile*>();
}
inline void Pathfinding::Ionic::Zip::ZipFile::setStaticF_BufferSizeDefault(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BufferSizeDefault", ::Pathfinding::Ionic::Zip::ZipFile*>(std::forward<int32_t>(value));
}
inline int32_t Pathfinding::Ionic::Zip::ZipFile::getStaticF_BufferSizeDefault()  {
return ::cordl_internals::getStaticField<int32_t, "BufferSizeDefault", ::Pathfinding::Ionic::Zip::ZipFile*>();
}
inline void Pathfinding::Ionic::Zip::ZipFile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::add_ReadProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"add_ReadProgress", {}, {::i2c::type_of<::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Ionic::Zip::ZipFile::remove_ReadProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"remove_ReadProgress", {}, {::i2c::type_of<::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* Pathfinding::Ionic::Zip::ZipFile::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipFile::AddEntry(::StringW  entryName, ::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"AddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(this, ___internal_method, entryName, stream);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipFile::_InternalAddEntry(::Pathfinding::Ionic::Zip::ZipEntry*  ze)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"_InternalAddEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(this, ___internal_method, ze);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipFile::AddEntry(::StringW  entryName, ::ArrayW<uint8_t>  byteContent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"AddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(this, ___internal_method, entryName, byteContent);
}
inline void Pathfinding::Ionic::Zip::ZipFile::InternalAddEntry(::StringW  name, ::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"InternalAddEntry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, entry);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipFile::get_ArchiveNameForEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ArchiveNameForEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::OnSaveBlock(::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesXferred, int64_t  totalBytesToXfer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveBlock", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry, bytesXferred, totalBytesToXfer);
}
inline void Pathfinding::Ionic::Zip::ZipFile::OnSaveEntry(int32_t  current, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, bool  before)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveEntry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, current, entry, before);
}
inline void Pathfinding::Ionic::Zip::ZipFile::OnSaveEvent(::Pathfinding::Ionic::Zip::ZipProgressEventType  eventFlavor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveEvent", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipProgressEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventFlavor);
}
inline void Pathfinding::Ionic::Zip::ZipFile::OnSaveStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::OnSaveCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSaveCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::OnReadStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnReadStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::OnReadCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnReadCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::OnReadBytes(::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnReadBytes", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void Pathfinding::Ionic::Zip::ZipFile::OnReadEntry(bool  before, ::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnReadEntry", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, before, entry);
}
inline int64_t Pathfinding::Ionic::Zip::ZipFile::get_LengthOfReadStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_LengthOfReadStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::OnExtractBlock(::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesWritten, int64_t  totalBytesToWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnExtractBlock", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry, bytesWritten, totalBytesToWrite);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::OnSingleEntryExtract(::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  path, bool  before)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnSingleEntryExtract", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry, path, before);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::OnExtractExisting(::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnExtractExisting", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry, path);
}
inline void Pathfinding::Ionic::Zip::ZipFile::AfterAddEntry(::Pathfinding::Ionic::Zip::ZipEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"AfterAddEntry", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::OnZipErrorSaving(::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::System::Exception*  exc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"OnZipErrorSaving", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry, exc);
}
inline ::Pathfinding::Ionic::Zip::ZipFile* Pathfinding::Ionic::Zip::ZipFile::Read(::System::IO::Stream*  zipStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Read", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipFile*>(nullptr, ___internal_method, zipStream);
}
inline ::Pathfinding::Ionic::Zip::ZipFile* Pathfinding::Ionic::Zip::ZipFile::Read(::System::IO::Stream*  zipStream, ::System::IO::TextWriter*  statusMessageWriter, ::System::Text::Encoding*  encoding, ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  readProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Read", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipFile*>(nullptr, ___internal_method, zipStream, statusMessageWriter, encoding, readProgress);
}
inline void Pathfinding::Ionic::Zip::ZipFile::ReadIntoInstance(::Pathfinding::Ionic::Zip::ZipFile*  zf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadIntoInstance", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zf);
}
inline void Pathfinding::Ionic::Zip::ZipFile::Zip64SeekToCentralDirectory(::Pathfinding::Ionic::Zip::ZipFile*  zf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Zip64SeekToCentralDirectory", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zf);
}
inline uint32_t Pathfinding::Ionic::Zip::ZipFile::ReadFirstFourBytes(::System::IO::Stream*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadFirstFourBytes", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, s);
}
inline void Pathfinding::Ionic::Zip::ZipFile::ReadCentralDirectory(::Pathfinding::Ionic::Zip::ZipFile*  zf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadCentralDirectory", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zf);
}
inline void Pathfinding::Ionic::Zip::ZipFile::ReadIntoInstance_Orig(::Pathfinding::Ionic::Zip::ZipFile*  zf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadIntoInstance_Orig", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zf);
}
inline void Pathfinding::Ionic::Zip::ZipFile::ReadCentralDirectoryFooter(::Pathfinding::Ionic::Zip::ZipFile*  zf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadCentralDirectoryFooter", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zf);
}
inline void Pathfinding::Ionic::Zip::ZipFile::ReadZipFileComment(::Pathfinding::Ionic::Zip::ZipFile*  zf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"ReadZipFileComment", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipFile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zf);
}
inline void Pathfinding::Ionic::Zip::ZipFile::DeleteFileWithRetry(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"DeleteFileWithRetry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filename);
}
inline void Pathfinding::Ionic::Zip::ZipFile::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::NotifyEntriesSaveComplete(::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"NotifyEntriesSaveComplete", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c);
}
inline void Pathfinding::Ionic::Zip::ZipFile::RemoveTempFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"RemoveTempFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::CleanupAfterSaveOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"CleanupAfterSaveOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::Save(::System::IO::Stream*  outputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Save", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputStream);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::get_FullScan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_FullScan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::get_SortEntriesBeforeSaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_SortEntriesBeforeSaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::set_AddDirectoryWillTraverseReparsePoints(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_AddDirectoryWillTraverseReparsePoints", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Ionic::Zip::ZipFile::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipFile::get_CodecBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_CodecBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::get_FlattenFoldersOnExtract()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_FlattenFoldersOnExtract", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zlib::CompressionStrategy Pathfinding::Ionic::Zip::ZipFile::get_Strategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Strategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zlib::CompressionStrategy>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipFile::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zlib::CompressionLevel Pathfinding::Ionic::Zip::ZipFile::get_CompressionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_CompressionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zlib::CompressionLevel>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::set_CompressionLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_CompressionLevel", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::CompressionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zip::CompressionMethod Pathfinding::Ionic::Zip::ZipFile::get_CompressionMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_CompressionMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::CompressionMethod>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipFile::get_Comment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Comment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::set_Comment(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_Comment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::get_Verbose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Verbose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipFile::get_CaseSensitiveRetrieval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_CaseSensitiveRetrieval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::Zip64Option Pathfinding::Ionic::Zip::ZipFile::get_UseZip64WhenSaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_UseZip64WhenSaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::Zip64Option>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::set_UseZip64WhenSaving(::Pathfinding::Ionic::Zip::Zip64Option  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_UseZip64WhenSaving", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::Zip64Option>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipFile::get_AlternateEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_AlternateEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::set_AlternateEncoding(::System::Text::Encoding*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_AlternateEncoding", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Ionic::Zip::ZipOption Pathfinding::Ionic::Zip::ZipFile::get_AlternateEncodingUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_AlternateEncodingUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipOption>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::set_AlternateEncodingUsage(::Pathfinding::Ionic::Zip::ZipOption  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_AlternateEncodingUsage", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipFile::get_DefaultEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_DefaultEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline ::System::IO::TextWriter* Pathfinding::Ionic::Zip::ZipFile::get_StatusMessageTextWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_StatusMessageTextWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::TextWriter*>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipFile::get_TempFileFolder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_TempFileFolder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ExtractExistingFileAction Pathfinding::Ionic::Zip::ZipFile::get_ExtractExistingFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ExtractExistingFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ExtractExistingFileAction>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipErrorAction Pathfinding::Ionic::Zip::ZipFile::get_ZipErrorAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ZipErrorAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipErrorAction>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::EncryptionAlgorithm Pathfinding::Ionic::Zip::ZipFile::get_Encryption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Encryption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::EncryptionAlgorithm>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::SetCompressionCallback* Pathfinding::Ionic::Zip::ZipFile::get_SetCompression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_SetCompression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::SetCompressionCallback*>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipFile::get_MaxOutputSegmentSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_MaxOutputSegmentSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::set_ParallelDeflateThreshold(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"set_ParallelDeflateThreshold", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Pathfinding::Ionic::Zip::ZipFile::get_ParallelDeflateThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ParallelDeflateThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipFile::get_ParallelDeflateMaxBufferPairs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ParallelDeflateMaxBufferPairs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipFile::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::NotifyEntryChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"NotifyEntryChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipFile::StreamForDiskNumber(uint32_t  diskNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"StreamForDiskNumber", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, diskNumber);
}
inline void Pathfinding::Ionic::Zip::ZipFile::Reset(bool  whileSaving)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Reset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, whileSaving);
}
inline void Pathfinding::Ionic::Zip::ZipFile::_initEntriesDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"_initEntriesDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::_InitInstance(::StringW  zipFileName, ::System::IO::TextWriter*  statusMessageWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"_InitInstance", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zipFileName, statusMessageWriter);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipFile::get_Item(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(this, ___internal_method, fileName);
}
inline ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>* Pathfinding::Ionic::Zip::ZipFile::get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>* Pathfinding::Ionic::Zip::ZipFile::get_EntriesSorted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_EntriesSorted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile::Dispose(bool  disposeManagedResources)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposeManagedResources);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipFile::get_ReadStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_ReadStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipFile::get_WriteStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"get_WriteStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>* Pathfinding::Ionic::Zip::ZipFile::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipFile* Pathfinding::Ionic::Zip::ZipFile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipFile*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>"
constexpr  Pathfinding::Ionic::Zip::ZipFile::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>* Pathfinding::Ionic::Zip::ZipFile::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Ionic__Zip__ZipEntry__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Ionic::Zip::ZipFile::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Ionic::Zip::ZipFile::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::Ionic::Zip::ZipFile::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::Ionic::Zip::ZipFile::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipFile::ZipFile()   {
}
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::*)()>(&::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69da68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0.System_Collections_Generic_IEnumerator_Pathfinding_Ionic_Zip_ZipEntry__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::*)()>(&::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::System_Collections_Generic_IEnumerator_Pathfinding_Ionic_Zip_ZipEntry__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69da70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Ionic.Zip.ZipEntry>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::*)()>(&::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69da78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::*)()>(&::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa69da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::*)()>(&::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa69dc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::*)()>(&::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa69dcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get___$$____0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____$$____0;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*> const& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get___$$____0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____$$____0;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_set___$$____0(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____$$____0 = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get__e___1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e___1;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get__e___1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____e___1;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_set__e___1(::Pathfinding::Ionic::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____e___1 = value;
}
constexpr int32_t& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get_$PC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$PC;
}
constexpr int32_t const& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get_$PC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$PC;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_set_$PC(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___$PC = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get_$current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$current;
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get_$current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$current;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_set_$current(::Pathfinding::Ionic::Zip::ZipEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___$current = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipFile*& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get___f__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____f__this;
}
constexpr ::Pathfinding::Ionic::Zip::ZipFile* const& Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_get___f__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____f__this;
}
constexpr void Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::__cordl_internal_set___f__this(::Pathfinding::Ionic::Zip::ZipFile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____f__this = value;
}
inline void Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipEntry* Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::System_Collections_Generic_IEnumerator_Pathfinding_Ionic_Zip_ZipEntry__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Ionic.Zip.ZipEntry>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipEntry*>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0* Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>"
constexpr  Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>* Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Ionic__Zip__ZipEntry__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0::ZipFile__GetEnumerator_c__Iterator0()   {
}
