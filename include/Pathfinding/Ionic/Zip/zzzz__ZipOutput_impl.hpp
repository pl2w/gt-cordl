#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipOutput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOutput_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipContainer_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutput.WriteCentralDirectoryStructure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IO::Stream*, ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*, uint32_t, ::Pathfinding::Ionic::Zip::Zip64Option, ::StringW, ::Pathfinding::Ionic::Zip::ZipContainer*)>(&::Pathfinding::Ionic::Zip::ZipOutput::WriteCentralDirectoryStructure)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0xa69dd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"WriteCentralDirectoryStructure", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::Zip64Option>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutput.GetEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)(::Pathfinding::Ionic::Zip::ZipContainer*, ::StringW)>(&::Pathfinding::Ionic::Zip::ZipOutput::GetEncoding)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa69edc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"GetEncoding", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipContainer*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutput.GenCentralDirectoryFooter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int64_t, int64_t, ::Pathfinding::Ionic::Zip::Zip64Option, int32_t, ::StringW, ::Pathfinding::Ionic::Zip::ZipContainer*)>(&::Pathfinding::Ionic::Zip::ZipOutput::GenCentralDirectoryFooter)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xa69ea68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"GenCentralDirectoryFooter", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::Zip64Option>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutput.GenZip64EndOfCentralDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int64_t, int64_t, int32_t, uint32_t)>(&::Pathfinding::Ionic::Zip::ZipOutput::GenZip64EndOfCentralDirectory)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa69e818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"GenZip64EndOfCentralDirectory", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipOutput.CountEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*)>(&::Pathfinding::Ionic::Zip::ZipOutput::CountEntries)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa69e558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"CountEntries", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Pathfinding::Ionic::Zip::ZipOutput::WriteCentralDirectoryStructure(::System::IO::Stream*  s, ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  entries, uint32_t  numSegments, ::Pathfinding::Ionic::Zip::Zip64Option  zip64, ::StringW  comment, ::Pathfinding::Ionic::Zip::ZipContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"WriteCentralDirectoryStructure", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::Zip64Option>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, entries, numSegments, zip64, comment, container);
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipOutput::GetEncoding(::Pathfinding::Ionic::Zip::ZipContainer*  container, ::StringW  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"GetEncoding", {}, {::i2c::type_of<::Pathfinding::Ionic::Zip::ZipContainer*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method, container, t);
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zip::ZipOutput::GenCentralDirectoryFooter(int64_t  StartOfCentralDirectory, int64_t  EndOfCentralDirectory, ::Pathfinding::Ionic::Zip::Zip64Option  zip64, int32_t  entryCount, ::StringW  comment, ::Pathfinding::Ionic::Zip::ZipContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"GenCentralDirectoryFooter", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::Zip64Option>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, StartOfCentralDirectory, EndOfCentralDirectory, zip64, entryCount, comment, container);
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zip::ZipOutput::GenZip64EndOfCentralDirectory(int64_t  StartOfCentralDirectory, int64_t  EndOfCentralDirectory, int32_t  entryCount, uint32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"GenZip64EndOfCentralDirectory", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, StartOfCentralDirectory, EndOfCentralDirectory, entryCount, numSegments);
}
inline int32_t Pathfinding::Ionic::Zip::ZipOutput::CountEntries(::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  _entries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipOutput*>(),
                        {"CountEntries", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _entries);
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipOutput::ZipOutput()   {
}
