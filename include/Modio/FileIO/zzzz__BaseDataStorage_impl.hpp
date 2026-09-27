#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipInputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipOutputStream_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__CalculateMd5Hash_d__30_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__CompressStream_d__75_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__CompressToZip_d__74_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__DownloadModFileFromStream_d__28_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__ExtractFileFromZipStream_d__36_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__InstallModFromStream_d__34_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__InstallMod_d__33_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__ReadAllSavedUserData_d__26_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__ReadCachedImage_d__42_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__ReadData_d__13_1_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__ReadFile_d__60_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__ReadLegacyUserData_d__23_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__ReadTextFile_d__62_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__Shutdown_d__10_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__WriteCachedImage_d__43_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__WriteData_d__14_1_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__WriteFile_d__59_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__WriteTextFile_d__61_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage___c__DisplayClass34_0_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include "Modio/FileIO/zzzz__IModioDataStorage_def.hpp"
#include "Modio/FileIO/zzzz__MD5ComputingStreamWrapper_def.hpp"
#include "Modio/FileIO/zzzz__ModInstallProgressTracker_def.hpp"
#include "Modio/Mods/zzzz__GameData_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Users/zzzz__LegacyUserSaveObject_def.hpp"
#include "Modio/Users/zzzz__UserSaveObject_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModIndex_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa0409e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.SetupRootPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::SetupRootPaths)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xa040b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::Shutdown)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa040dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DebugDeleteAllGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::FileIO::BaseDataStorage::DebugDeleteAllGameData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa040ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"DebugDeleteAllGameData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteAllGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::DeleteAllGameData)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa040f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"DeleteAllGameData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::DeleteData)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa0410d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"DeleteData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ReadGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::GameData*>>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::ReadGameData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa041288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.WriteGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::Modio::Mods::GameData*)>(&::Modio::FileIO::BaseDataStorage::WriteGameData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa04130c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::DeleteGameData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa0413a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ReadIndexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::ReadIndexData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa0413c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.WriteIndexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::Modio::ModIndex*)>(&::Modio::FileIO::BaseDataStorage::WriteIndexData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa04144c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteIndexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::DeleteIndexData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa0414e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ReadUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::UserSaveObject*>>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::ReadUserData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa041508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ReadLegacyUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::LegacyUserSaveObject*>>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::ReadLegacyUserData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa04159c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.WriteUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::Modio::Users::UserSaveObject*)>(&::Modio::FileIO::BaseDataStorage::WriteUserData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa0416a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::DeleteUserData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa04173c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ReadAllSavedUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::ReadAllSavedUserData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa041764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteLegacyUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::DeleteLegacyUserData)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0xa041870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DownloadModFileFromStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(int64_t, int64_t, ::System::IO::Stream*, ::StringW, ::System::Threading::CancellationToken, ::Modio::FileIO::ModInstallProgressTracker*)>(&::Modio::FileIO::BaseDataStorage::DownloadModFileFromStream)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa041c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.CreateFileStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Modio::FileIO::BaseDataStorage::*)(::StringW, ::System::IO::FileMode)>(&::Modio::FileIO::BaseDataStorage::CreateFileStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa041dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.CalculateMd5Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (*)(::StringW, ::ArrayW<uint8_t>)>(&::Modio::FileIO::BaseDataStorage::CalculateMd5Hash)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa041e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"CalculateMd5Hash", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::BaseDataStorage::DeleteModfile)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa041fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ScanForModfiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::ScanForModfiles)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0xa042174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.InstallMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::Modio::Mods::Mod*, int64_t, ::System::Threading::CancellationToken)>(&::Modio::FileIO::BaseDataStorage::InstallMod)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa0427f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.InstallModFromStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::Modio::Mods::Mod*, int64_t, ::System::IO::Stream*, ::StringW, ::System::Threading::CancellationToken)>(&::Modio::FileIO::BaseDataStorage::InstallModFromStream)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa042938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.MoveTempInstallToCorrectLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::FileIO::BaseDataStorage::*)(::Modio::Mods::Mod*, ::StringW, ::StringW)>(&::Modio::FileIO::BaseDataStorage::MoveTempInstallToCorrectLocation)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xa042ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ExtractFileFromZipStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::ICSharpCode::SharpZipLib::Zip::ZipInputStream*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::StringW, ::Modio::FileIO::ModInstallProgressTracker*, ::System::Threading::CancellationToken)>(&::Modio::FileIO::BaseDataStorage::ExtractFileFromZipStream)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa042cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteInstalledMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::Modio::Mods::Mod*, int64_t)>(&::Modio::FileIO::BaseDataStorage::DeleteInstalledMod)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa042e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ScanForInstalledMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::ScanForInstalledMods)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0xa043024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ScanForInstalledMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,int64_t>>* (::Modio::FileIO::BaseDataStorage::*)(::Modio::Mods::Mod*)>(&::Modio::FileIO::BaseDataStorage::ScanForInstalledMod)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0xa043804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.MigrateLegacyModInstalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::MigrateLegacyModInstalls)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa043fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.MigrateLegacyModInstalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::MigrateLegacyModInstalls)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0xa04406c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"MigrateLegacyModInstalls", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ReadCachedImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* (::Modio::FileIO::BaseDataStorage::*)(::System::Uri*)>(&::Modio::FileIO::BaseDataStorage::ReadCachedImage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa044808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.WriteCachedImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::System::Uri*, ::ArrayW<uint8_t>)>(&::Modio::FileIO::BaseDataStorage::WriteCachedImage)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa044924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteCachedImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::System::Uri*)>(&::Modio::FileIO::BaseDataStorage::DeleteCachedImage)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa044a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.IsThereAvailableFreeSpaceFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Modio::FileIO::BaseDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::BaseDataStorage::IsThereAvailableFreeSpaceFor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa044c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.IsThereAvailableFreeSpaceForModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Modio::FileIO::BaseDataStorage::*)(int64_t)>(&::Modio::FileIO::BaseDataStorage::IsThereAvailableFreeSpaceForModfile)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa044d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetAvailableFreeSpaceForModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::GetAvailableFreeSpaceForModfile)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa044da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.IsThereAvailableFreeSpaceForModInstall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Modio::FileIO::BaseDataStorage::*)(int64_t)>(&::Modio::FileIO::BaseDataStorage::IsThereAvailableFreeSpaceForModInstall)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa044e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetAvailableFreeSpaceForModInstall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::GetAvailableFreeSpaceForModInstall)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa044ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.IsThereEnoughSpaceForExtracting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::IsThereEnoughSpaceForExtracting)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa044f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.IsThereEnoughDiskSpaceFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage::*)(int64_t)>(&::Modio::FileIO::BaseDataStorage::IsThereEnoughDiskSpaceFor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa045074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetAvailableFreeSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::GetAvailableFreeSpace)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa0450a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.IsValidPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::IsValidPath)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa0451a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DoesDirectoryExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::DoesDirectoryExist)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa04535c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DoesFileExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::DoesFileExist)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa045368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.CreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::CreateDirectory)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa045374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteDirectoryAndContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::DeleteDirectoryAndContents)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa0454f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::DeleteFile)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa045654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 85}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.WriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::Modio::FileIO::BaseDataStorage::WriteFile)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa0457b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::ReadFile)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa0458fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.WriteTextFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::StringW, ::StringW)>(&::Modio::FileIO::BaseDataStorage::WriteTextFile)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa045a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ReadTextFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::ReadTextFile)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa045b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.TryParseUTF8Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Modio::Error*,::StringW> (::Modio::FileIO::BaseDataStorage::*)(::ArrayW<uint8_t>)>(&::Modio::FileIO::BaseDataStorage::TryParseUTF8Data)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xa045c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.ConvertUTF8Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>> (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::ConvertUTF8Data)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xa045edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetModfilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::BaseDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::BaseDataStorage::GetModfilePath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa0461b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetInstallPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::BaseDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::BaseDataStorage::GetInstallPath)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa0462ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetTemporaryInstallPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::BaseDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::BaseDataStorage::GetTemporaryInstallPath)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa0463fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetGameDataFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::GetGameDataFilePath)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa04654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetIndexFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::GetIndexFilePath)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa046600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetUserDataFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::GetUserDataFilePath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa0466b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.GetImageDataFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::BaseDataStorage::*)(::System::Uri*)>(&::Modio::FileIO::BaseDataStorage::GetImageDataFilePath)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa04674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 98}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DoesModfileExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::BaseDataStorage::DoesModfileExist)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa0467fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 99}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.DoesInstallExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::BaseDataStorage::DoesInstallExist)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa046830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 100}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.CompressToZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::BaseDataStorage::*)(::StringW, ::System::IO::Stream*)>(&::Modio::FileIO::BaseDataStorage::CompressToZip)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa046864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.CompressStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::FileIO::BaseDataStorage::*)(::StringW, ::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*)>(&::Modio::FileIO::BaseDataStorage::CompressStream)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa0469a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.IterateFilesInDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::IterateFilesInDirectory)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa046ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage.IterateDirectoriesInDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* (::Modio::FileIO::BaseDataStorage::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage::IterateDirectoriesInDirectory)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa046b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage::*)()>(&::Modio::FileIO::BaseDataStorage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa046c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage._InstallModFromStream_g__LogTaskCancelAndCleanup_34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::FileIO::BaseDataStorage::*)(::by_ref<::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0>)>(&::Modio::FileIO::BaseDataStorage::_InstallModFromStream_g__LogTaskCancelAndCleanup_34_0)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xa046c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"<InstallModFromStream>g__LogTaskCancelAndCleanup|34_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::FileIO::BaseDataStorage::__cordl_internal_get_Initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Initialized;
}
constexpr bool const& Modio::FileIO::BaseDataStorage::__cordl_internal_get_Initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Initialized;
}
constexpr void Modio::FileIO::BaseDataStorage::__cordl_internal_set_Initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Initialized = value;
}
constexpr bool& Modio::FileIO::BaseDataStorage::__cordl_internal_get_IsShuttingDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsShuttingDown;
}
constexpr bool const& Modio::FileIO::BaseDataStorage::__cordl_internal_get_IsShuttingDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsShuttingDown;
}
constexpr void Modio::FileIO::BaseDataStorage::__cordl_internal_set_IsShuttingDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsShuttingDown = value;
}
constexpr int64_t& Modio::FileIO::BaseDataStorage::__cordl_internal_get_GameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameId;
}
constexpr int64_t const& Modio::FileIO::BaseDataStorage::__cordl_internal_get_GameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameId;
}
constexpr void Modio::FileIO::BaseDataStorage::__cordl_internal_set_GameId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameId = value;
}
constexpr ::StringW& Modio::FileIO::BaseDataStorage::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr ::StringW const& Modio::FileIO::BaseDataStorage::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr void Modio::FileIO::BaseDataStorage::__cordl_internal_set_Root(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
constexpr ::StringW& Modio::FileIO::BaseDataStorage::__cordl_internal_get_UserRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserRoot;
}
constexpr ::StringW const& Modio::FileIO::BaseDataStorage::__cordl_internal_get_UserRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserRoot;
}
constexpr void Modio::FileIO::BaseDataStorage::__cordl_internal_set_UserRoot(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserRoot = value;
}
constexpr int32_t& Modio::FileIO::BaseDataStorage::__cordl_internal_get_OngoingTaskCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OngoingTaskCount;
}
constexpr int32_t const& Modio::FileIO::BaseDataStorage::__cordl_internal_get_OngoingTaskCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OngoingTaskCount;
}
constexpr void Modio::FileIO::BaseDataStorage::__cordl_internal_set_OngoingTaskCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OngoingTaskCount = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Modio::FileIO::BaseDataStorage::__cordl_internal_get_ShutdownTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShutdownTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Modio::FileIO::BaseDataStorage::__cordl_internal_get_ShutdownTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShutdownTokenSource;
}
constexpr void Modio::FileIO::BaseDataStorage::__cordl_internal_set_ShutdownTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShutdownTokenSource = value;
}
constexpr ::System::Threading::CancellationToken& Modio::FileIO::BaseDataStorage::__cordl_internal_get_ShutdownToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShutdownToken;
}
constexpr ::System::Threading::CancellationToken const& Modio::FileIO::BaseDataStorage::__cordl_internal_get_ShutdownToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShutdownToken;
}
constexpr void Modio::FileIO::BaseDataStorage::__cordl_internal_set_ShutdownToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShutdownToken = value;
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::FileIO::BaseDataStorage::SetupRootPaths()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::FileIO::BaseDataStorage::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Modio::FileIO::BaseDataStorage::DebugDeleteAllGameData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"DebugDeleteAllGameData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DeleteAllGameData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"DeleteAllGameData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* Modio::FileIO::BaseDataStorage::ReadData(::StringW  filePath)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 43}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>(this, ___internal_method, filePath);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::WriteData(T  data, ::StringW  filePath)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 44}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, data, filePath);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DeleteData(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"DeleteData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, filePath);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::GameData*>>* Modio::FileIO::BaseDataStorage::ReadGameData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::GameData*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::WriteGameData(::Modio::Mods::GameData*  gameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, gameData);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DeleteGameData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* Modio::FileIO::BaseDataStorage::ReadIndexData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::WriteIndexData(::Modio::ModIndex*  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, index);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DeleteIndexData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::UserSaveObject*>>* Modio::FileIO::BaseDataStorage::ReadUserData(::StringW  localUserId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::UserSaveObject*>>*>(this, ___internal_method, localUserId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::LegacyUserSaveObject*>>* Modio::FileIO::BaseDataStorage::ReadLegacyUserData(::StringW  localUserId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::LegacyUserSaveObject*>>*>(this, ___internal_method, localUserId);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::WriteUserData(::Modio::Users::UserSaveObject*  userObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, userObject);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DeleteUserData(::StringW  localUserId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, localUserId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>* Modio::FileIO::BaseDataStorage::ReadAllSavedUserData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>*>(this, ___internal_method);
}
inline ::Modio::Error* Modio::FileIO::BaseDataStorage::DeleteLegacyUserData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DownloadModFileFromStream(int64_t  modId, int64_t  modfileId, ::System::IO::Stream*  downloadStream, ::StringW  md5Hash, ::System::Threading::CancellationToken  token, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, modId, modfileId, downloadStream, md5Hash, token, progressTracker);
}
inline ::System::IO::Stream* Modio::FileIO::BaseDataStorage::CreateFileStream(::StringW  filePath, ::System::IO::FileMode  mode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, filePath, mode);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* Modio::FileIO::BaseDataStorage::CalculateMd5Hash(::StringW  filePath, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"CalculateMd5Hash", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(nullptr, ___internal_method, filePath, buffer);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DeleteModfile(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, modId, modfileId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* Modio::FileIO::BaseDataStorage::ScanForModfiles()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::InstallMod(::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, mod, modfileId, token);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::InstallModFromStream(::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::IO::Stream*  stream, ::StringW  md5Hash, ::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, mod, modfileId, stream, md5Hash, token);
}
inline ::Modio::Error* Modio::FileIO::BaseDataStorage::MoveTempInstallToCorrectLocation(::Modio::Mods::Mod*  mod, ::StringW  installDirectoryPath, ::StringW  temporaryDirectoryPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, mod, installDirectoryPath, temporaryDirectoryPath);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::ExtractFileFromZipStream(::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  zipStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  filePath, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker, ::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, zipStream, entry, filePath, progressTracker, token);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DeleteInstalledMod(::Modio::Mods::Mod*  mod, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, mod, modfileId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* Modio::FileIO::BaseDataStorage::ScanForInstalledMods()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,int64_t>>* Modio::FileIO::BaseDataStorage::ScanForInstalledMod(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,int64_t>>*>(this, ___internal_method, mod);
}
inline void Modio::FileIO::BaseDataStorage::MigrateLegacyModInstalls()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::FileIO::BaseDataStorage::MigrateLegacyModInstalls(::StringW  legacyDirectoryPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"MigrateLegacyModInstalls", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, legacyDirectoryPath);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* Modio::FileIO::BaseDataStorage::ReadCachedImage(::System::Uri*  serverPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>*>(this, ___internal_method, serverPath);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::WriteCachedImage(::System::Uri*  serverPath, ::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, serverPath, data);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::DeleteCachedImage(::System::Uri*  serverPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, serverPath);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::FileIO::BaseDataStorage::IsThereAvailableFreeSpaceFor(int64_t  tempBytes, int64_t  persistentBytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, tempBytes, persistentBytes);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::FileIO::BaseDataStorage::IsThereAvailableFreeSpaceForModfile(int64_t  bytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, bytes);
}
inline ::System::Threading::Tasks::Task_1<int64_t>* Modio::FileIO::BaseDataStorage::GetAvailableFreeSpaceForModfile()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::FileIO::BaseDataStorage::IsThereAvailableFreeSpaceForModInstall(int64_t  bytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, bytes);
}
inline ::System::Threading::Tasks::Task_1<int64_t>* Modio::FileIO::BaseDataStorage::GetAvailableFreeSpaceForModInstall()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::FileIO::BaseDataStorage::IsThereEnoughSpaceForExtracting(::StringW  archiveFilePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, archiveFilePath);
}
inline bool Modio::FileIO::BaseDataStorage::IsThereEnoughDiskSpaceFor(int64_t  bytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytes);
}
inline int64_t Modio::FileIO::BaseDataStorage::GetAvailableFreeSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Modio::FileIO::BaseDataStorage::IsValidPath(::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filePath);
}
inline bool Modio::FileIO::BaseDataStorage::DoesDirectoryExist(::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filePath);
}
inline bool Modio::FileIO::BaseDataStorage::DoesFileExist(::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filePath);
}
inline ::Modio::Error* Modio::FileIO::BaseDataStorage::CreateDirectory(::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, filePath);
}
inline ::Modio::Error* Modio::FileIO::BaseDataStorage::DeleteDirectoryAndContents(::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, filePath);
}
inline ::Modio::Error* Modio::FileIO::BaseDataStorage::DeleteFile(::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 85}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, filePath);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::WriteFile(::StringW  path, ::ArrayW<uint8_t>  data, int32_t  bytesToWrite)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, path, data, bytesToWrite);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* Modio::FileIO::BaseDataStorage::ReadFile(::StringW  path)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>*>(this, ___internal_method, path);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::WriteTextFile(::StringW  path, ::StringW  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, path, data);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage::ReadTextFile(::StringW  path)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(this, ___internal_method, path);
}
inline ::System::ValueTuple_2<::Modio::Error*,::StringW> Modio::FileIO::BaseDataStorage::TryParseUTF8Data(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Modio::Error*,::StringW>>(this, ___internal_method, data);
}
inline ::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>> Modio::FileIO::BaseDataStorage::ConvertUTF8Data(::StringW  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>(this, ___internal_method, data);
}
inline ::StringW Modio::FileIO::BaseDataStorage::GetModfilePath(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, modId, modfileId);
}
inline ::StringW Modio::FileIO::BaseDataStorage::GetInstallPath(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, modId, modfileId);
}
inline ::StringW Modio::FileIO::BaseDataStorage::GetTemporaryInstallPath(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, modId, modfileId);
}
inline ::StringW Modio::FileIO::BaseDataStorage::GetGameDataFilePath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::FileIO::BaseDataStorage::GetIndexFilePath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::FileIO::BaseDataStorage::GetUserDataFilePath(::StringW  localUserId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, localUserId);
}
inline ::StringW Modio::FileIO::BaseDataStorage::GetImageDataFilePath(::System::Uri*  serverPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 98}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, serverPath);
}
inline bool Modio::FileIO::BaseDataStorage::DoesModfileExist(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 99}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId, modfileId);
}
inline bool Modio::FileIO::BaseDataStorage::DoesInstallExist(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 100}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId, modfileId);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::BaseDataStorage::CompressToZip(::StringW  filePath, ::System::IO::Stream*  outputTo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, filePath, outputTo);
}
inline ::System::Threading::Tasks::Task* Modio::FileIO::BaseDataStorage::CompressStream(::StringW  entryName, ::System::IO::Stream*  stream, ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  zipStream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, entryName, stream, zipStream);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage::IterateFilesInDirectory(::StringW  directoryPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(this, ___internal_method, directoryPath);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage::IterateDirectoriesInDirectory(::StringW  directoryPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(this, ___internal_method, directoryPath);
}
inline void Modio::FileIO::BaseDataStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Error* Modio::FileIO::BaseDataStorage::_InstallModFromStream_g__LogTaskCancelAndCleanup_34_0(::by_ref<::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage*>(),
                        {"<InstallModFromStream>g__LogTaskCancelAndCleanup|34_0", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Modio::FileIO::BaseDataStorage* Modio::FileIO::BaseDataStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::BaseDataStorage*>());
}
/// @brief Convert operator to "::Modio::FileIO::IModioDataStorage"
constexpr  Modio::FileIO::BaseDataStorage::operator ::Modio::FileIO::IModioDataStorage*() noexcept {
return static_cast<::Modio::FileIO::IModioDataStorage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::FileIO::IModioDataStorage"
constexpr ::Modio::FileIO::IModioDataStorage* Modio::FileIO::BaseDataStorage::i___Modio__FileIO__IModioDataStorage() noexcept {
return static_cast<::Modio::FileIO::IModioDataStorage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::FileIO::BaseDataStorage::BaseDataStorage()   {
}
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)(int32_t)>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa046b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)()>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa04eb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)()>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::MoveNext)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0xa04eb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)()>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa04efd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76.System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringfileName___get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Modio::Error*,::StringW> (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)()>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringfileName___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa04f088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.Generic.IEnumerator<(Modio.Errorerror,System.StringfileName)>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)()>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa04f094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)()>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa04f0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76.System_Collections_Generic_IEnumerable__Modio_Errorerror_System_StringfileName___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)()>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_Generic_IEnumerable__Modio_Errorerror_System_StringfileName___GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa04f128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.Generic.IEnumerable<(Modio.Errorerror,System.StringfileName)>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::*)()>(&::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa04f1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::ValueTuple_2<::Modio::Error*,::StringW>& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::ValueTuple_2<::Modio::Error*,::StringW> const& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_set___2__current(::System::ValueTuple_2<::Modio::Error*,::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Modio::FileIO::BaseDataStorage*& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Modio::FileIO::BaseDataStorage* const& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_set___4__this(::Modio::FileIO::BaseDataStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get_directoryPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directoryPath;
}
constexpr ::StringW const& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get_directoryPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directoryPath;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_set_directoryPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directoryPath = value;
}
constexpr ::StringW& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___3__directoryPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__directoryPath;
}
constexpr ::StringW const& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___3__directoryPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__directoryPath;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_set___3__directoryPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__directoryPath = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* const& Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::Modio::Error*,::StringW> Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringfileName___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.Generic.IEnumerator<(Modio.Errorerror,System.StringfileName)>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Modio::Error*,::StringW>>(this, ___internal_method);
}
inline void Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_Generic_IEnumerable__Modio_Errorerror_System_StringfileName___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.Generic.IEnumerable<(Modio.Errorerror,System.StringfileName)>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr  Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Modio__Error____StringW__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr  Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Modio__Error____StringW__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76::BaseDataStorage__IterateFilesInDirectory_d__76()   {
}
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)(int32_t)>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa046c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)()>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa04e564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)()>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::MoveNext)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xa04e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)()>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa04e938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77.System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringdirectoryPath___get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Modio::Error*,::StringW> (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)()>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringdirectoryPath___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa04e9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.Generic.IEnumerator<(Modio.Errorerror,System.StringdirectoryPath)>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)()>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa04e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)()>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa04ea2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77.System_Collections_Generic_IEnumerable__Modio_Errorerror_System_StringdirectoryPath___GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)()>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_Generic_IEnumerable__Modio_Errorerror_System_StringdirectoryPath___GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa04ea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.Generic.IEnumerable<(Modio.Errorerror,System.StringdirectoryPath)>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::*)()>(&::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa04eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::ValueTuple_2<::Modio::Error*,::StringW>& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::ValueTuple_2<::Modio::Error*,::StringW> const& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_set___2__current(::System::ValueTuple_2<::Modio::Error*,::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Modio::FileIO::BaseDataStorage*& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Modio::FileIO::BaseDataStorage* const& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_set___4__this(::Modio::FileIO::BaseDataStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get_directoryPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directoryPath;
}
constexpr ::StringW const& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get_directoryPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directoryPath;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_set_directoryPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directoryPath = value;
}
constexpr ::StringW& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___3__directoryPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__directoryPath;
}
constexpr ::StringW const& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___3__directoryPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__directoryPath;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_set___3__directoryPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__directoryPath = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* const& Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::Modio::Error*,::StringW> Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringdirectoryPath___get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.Generic.IEnumerator<(Modio.Errorerror,System.StringdirectoryPath)>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Modio::Error*,::StringW>>(this, ___internal_method);
}
inline void Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_Generic_IEnumerable__Modio_Errorerror_System_StringdirectoryPath___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.Generic.IEnumerable<(Modio.Errorerror,System.StringdirectoryPath)>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr  Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Modio__Error____StringW__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr  Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Modio__Error____StringW__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77::BaseDataStorage__IterateDirectoriesInDirectory_d__77()   {
}
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::*)()>(&::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa04706c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1._InstallModFromStream_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::*)()>(&::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::_InstallModFromStream_b__1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa047074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*>(),
                        {"<InstallModFromStream>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::FileIO::MD5ComputingStreamWrapper*& Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::__cordl_internal_get_md5Stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___md5Stream;
}
constexpr ::Modio::FileIO::MD5ComputingStreamWrapper* const& Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::__cordl_internal_get_md5Stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___md5Stream;
}
constexpr void Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::__cordl_internal_set_md5Stream(::Modio::FileIO::MD5ComputingStreamWrapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___md5Stream = value;
}
inline void Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::_InstallModFromStream_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*>(),
                        {"<InstallModFromStream>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1* Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*>());
}
// Ctor Parameters []
constexpr ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1::BaseDataStorage___c__DisplayClass34_1()   {
}
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::BaseDataStorage___c::*)()>(&::Modio::FileIO::BaseDataStorage___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa046fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage___c._ReadAllSavedUserData_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::BaseDataStorage___c::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage___c::_ReadAllSavedUserData_b__26_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa046fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c*>(),
                        {"<ReadAllSavedUserData>b__26_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::BaseDataStorage___c._ReadAllSavedUserData_b__26_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::BaseDataStorage___c::*)(::StringW)>(&::Modio::FileIO::BaseDataStorage___c::_ReadAllSavedUserData_b__26_1)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa047030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c*>(),
                        {"<ReadAllSavedUserData>b__26_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::FileIO::BaseDataStorage___c::setStaticF___9(::Modio::FileIO::BaseDataStorage___c*  value)  {
::cordl_internals::setStaticField<::Modio::FileIO::BaseDataStorage___c*, "<>9", ::Modio::FileIO::BaseDataStorage___c*>(std::forward<::Modio::FileIO::BaseDataStorage___c*>(value));
}
inline ::Modio::FileIO::BaseDataStorage___c* Modio::FileIO::BaseDataStorage___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::FileIO::BaseDataStorage___c*, "<>9", ::Modio::FileIO::BaseDataStorage___c*>();
}
inline void Modio::FileIO::BaseDataStorage___c::setStaticF___9__26_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__26_0", ::Modio::FileIO::BaseDataStorage___c*>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* Modio::FileIO::BaseDataStorage___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__26_0", ::Modio::FileIO::BaseDataStorage___c*>();
}
inline void Modio::FileIO::BaseDataStorage___c::setStaticF___9__26_1(::System::Func_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__26_1", ::Modio::FileIO::BaseDataStorage___c*>(std::forward<::System::Func_2<::StringW,::StringW>*>(value));
}
inline ::System::Func_2<::StringW,::StringW>* Modio::FileIO::BaseDataStorage___c::getStaticF___9__26_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__26_1", ::Modio::FileIO::BaseDataStorage___c*>();
}
inline void Modio::FileIO::BaseDataStorage___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::FileIO::BaseDataStorage___c::_ReadAllSavedUserData_b__26_0(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c*>(),
                        {"<ReadAllSavedUserData>b__26_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fileName);
}
inline ::StringW Modio::FileIO::BaseDataStorage___c::_ReadAllSavedUserData_b__26_1(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::BaseDataStorage___c*>(),
                        {"<ReadAllSavedUserData>b__26_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, fileName);
}
inline ::Modio::FileIO::BaseDataStorage___c* Modio::FileIO::BaseDataStorage___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::BaseDataStorage___c*>());
}
// Ctor Parameters []
constexpr ::Modio::FileIO::BaseDataStorage___c::BaseDataStorage___c()   {
}
