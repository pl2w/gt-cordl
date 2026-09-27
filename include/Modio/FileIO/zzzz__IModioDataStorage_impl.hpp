#pragma once
// IWYU pragma private; include "Modio/FileIO/IModioDataStorage.hpp"
#include "Modio/FileIO/zzzz__IModioDataStorage_def.hpp"
#include "Modio/FileIO/zzzz__ModInstallProgressTracker_def.hpp"
#include "Modio/Mods/zzzz__GameData_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Users/zzzz__LegacyUserSaveObject_def.hpp"
#include "Modio/Users/zzzz__UserSaveObject_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModIndex_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::Shutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DeleteAllGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::DeleteAllGameData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ReadGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::GameData*>>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::ReadGameData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.WriteGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::Modio::Mods::GameData*)>(&::Modio::FileIO::IModioDataStorage::WriteGameData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DeleteGameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::DeleteGameData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ReadIndexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::ReadIndexData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.WriteIndexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::Modio::ModIndex*)>(&::Modio::FileIO::IModioDataStorage::WriteIndexData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DeleteIndexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::DeleteIndexData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ReadAllSavedUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::ReadAllSavedUserData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ReadUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::UserSaveObject*>>* (::Modio::FileIO::IModioDataStorage::*)(::StringW)>(&::Modio::FileIO::IModioDataStorage::ReadUserData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ReadLegacyUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::LegacyUserSaveObject*>>* (::Modio::FileIO::IModioDataStorage::*)(::StringW)>(&::Modio::FileIO::IModioDataStorage::ReadLegacyUserData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.WriteUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::Modio::Users::UserSaveObject*)>(&::Modio::FileIO::IModioDataStorage::WriteUserData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DeleteUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::StringW)>(&::Modio::FileIO::IModioDataStorage::DeleteUserData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DeleteLegacyUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::DeleteLegacyUserData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DownloadModFileFromStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(int64_t, int64_t, ::System::IO::Stream*, ::StringW, ::System::Threading::CancellationToken, ::Modio::FileIO::ModInstallProgressTracker*)>(&::Modio::FileIO::IModioDataStorage::DownloadModFileFromStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DeleteModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::IModioDataStorage::DeleteModfile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ScanForModfiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::ScanForModfiles)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.InstallMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::Modio::Mods::Mod*, int64_t, ::System::Threading::CancellationToken)>(&::Modio::FileIO::IModioDataStorage::InstallMod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.InstallModFromStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::Modio::Mods::Mod*, int64_t, ::System::IO::Stream*, ::StringW, ::System::Threading::CancellationToken)>(&::Modio::FileIO::IModioDataStorage::InstallModFromStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DeleteInstalledMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::Modio::Mods::Mod*, int64_t)>(&::Modio::FileIO::IModioDataStorage::DeleteInstalledMod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ScanForInstalledMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::ScanForInstalledMods)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ScanForInstalledMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,int64_t>>* (::Modio::FileIO::IModioDataStorage::*)(::Modio::Mods::Mod*)>(&::Modio::FileIO::IModioDataStorage::ScanForInstalledMod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.ReadCachedImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* (::Modio::FileIO::IModioDataStorage::*)(::System::Uri*)>(&::Modio::FileIO::IModioDataStorage::ReadCachedImage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.WriteCachedImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::System::Uri*, ::ArrayW<uint8_t>)>(&::Modio::FileIO::IModioDataStorage::WriteCachedImage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DeleteCachedImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::System::Uri*)>(&::Modio::FileIO::IModioDataStorage::DeleteCachedImage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.IsThereAvailableFreeSpaceFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Modio::FileIO::IModioDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::IModioDataStorage::IsThereAvailableFreeSpaceFor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.IsThereAvailableFreeSpaceForModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Modio::FileIO::IModioDataStorage::*)(int64_t)>(&::Modio::FileIO::IModioDataStorage::IsThereAvailableFreeSpaceForModfile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.GetAvailableFreeSpaceForModfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::GetAvailableFreeSpaceForModfile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.IsThereAvailableFreeSpaceForModInstall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Modio::FileIO::IModioDataStorage::*)(int64_t)>(&::Modio::FileIO::IModioDataStorage::IsThereAvailableFreeSpaceForModInstall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.GetAvailableFreeSpaceForModInstall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (::Modio::FileIO::IModioDataStorage::*)()>(&::Modio::FileIO::IModioDataStorage::GetAvailableFreeSpaceForModInstall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.GetModfilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::IModioDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::IModioDataStorage::GetModfilePath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.GetInstallPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::IModioDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::IModioDataStorage::GetInstallPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DoesModfileExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::IModioDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::IModioDataStorage::DoesModfileExist)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.DoesInstallExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::FileIO::IModioDataStorage::*)(int64_t, int64_t)>(&::Modio::FileIO::IModioDataStorage::DoesInstallExist)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioDataStorage.CompressToZip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::FileIO::IModioDataStorage::*)(::StringW, ::System::IO::Stream*)>(&::Modio::FileIO::IModioDataStorage::CompressToZip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 35}
                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::FileIO::IModioDataStorage::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::DeleteAllGameData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::GameData*>>* Modio::FileIO::IModioDataStorage::ReadGameData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::GameData*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::WriteGameData(::Modio::Mods::GameData*  gameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, gameData);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::DeleteGameData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* Modio::FileIO::IModioDataStorage::ReadIndexData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::WriteIndexData(::Modio::ModIndex*  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, index);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::DeleteIndexData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>* Modio::FileIO::IModioDataStorage::ReadAllSavedUserData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::UserSaveObject*>>* Modio::FileIO::IModioDataStorage::ReadUserData(::StringW  localUserId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::UserSaveObject*>>*>(this, ___internal_method, localUserId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::LegacyUserSaveObject*>>* Modio::FileIO::IModioDataStorage::ReadLegacyUserData(::StringW  localUserId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::LegacyUserSaveObject*>>*>(this, ___internal_method, localUserId);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::WriteUserData(::Modio::Users::UserSaveObject*  userObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, userObject);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::DeleteUserData(::StringW  localUserId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, localUserId);
}
inline ::Modio::Error* Modio::FileIO::IModioDataStorage::DeleteLegacyUserData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::DownloadModFileFromStream(int64_t  modId, int64_t  modfileId, ::System::IO::Stream*  downloadStream, ::StringW  md5Hash, ::System::Threading::CancellationToken  token, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, modId, modfileId, downloadStream, md5Hash, token, progressTracker);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::DeleteModfile(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, modId, modfileId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* Modio::FileIO::IModioDataStorage::ScanForModfiles()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::InstallMod(::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, mod, modfileId, token);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::InstallModFromStream(::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::IO::Stream*  stream, ::StringW  md5Hash, ::System::Threading::CancellationToken  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, mod, modfileId, stream, md5Hash, token);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::DeleteInstalledMod(::Modio::Mods::Mod*  mod, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, mod, modfileId);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* Modio::FileIO::IModioDataStorage::ScanForInstalledMods()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,int64_t>>* Modio::FileIO::IModioDataStorage::ScanForInstalledMod(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,int64_t>>*>(this, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* Modio::FileIO::IModioDataStorage::ReadCachedImage(::System::Uri*  serverPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>*>(this, ___internal_method, serverPath);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::WriteCachedImage(::System::Uri*  serverPath, ::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, serverPath, data);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::DeleteCachedImage(::System::Uri*  serverPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, serverPath);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::FileIO::IModioDataStorage::IsThereAvailableFreeSpaceFor(int64_t  tempBytes, int64_t  persistentBytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, tempBytes, persistentBytes);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::FileIO::IModioDataStorage::IsThereAvailableFreeSpaceForModfile(int64_t  bytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, bytes);
}
inline ::System::Threading::Tasks::Task_1<int64_t>* Modio::FileIO::IModioDataStorage::GetAvailableFreeSpaceForModfile()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::FileIO::IModioDataStorage::IsThereAvailableFreeSpaceForModInstall(int64_t  bytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, bytes);
}
inline ::System::Threading::Tasks::Task_1<int64_t>* Modio::FileIO::IModioDataStorage::GetAvailableFreeSpaceForModInstall()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*>(this, ___internal_method);
}
inline ::StringW Modio::FileIO::IModioDataStorage::GetModfilePath(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, modId, modfileId);
}
inline ::StringW Modio::FileIO::IModioDataStorage::GetInstallPath(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, modId, modfileId);
}
inline bool Modio::FileIO::IModioDataStorage::DoesModfileExist(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId, modfileId);
}
inline bool Modio::FileIO::IModioDataStorage::DoesInstallExist(int64_t  modId, int64_t  modfileId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId, modfileId);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::FileIO::IModioDataStorage::CompressToZip(::StringW  filePath, ::System::IO::Stream*  outputTo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioDataStorage*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, filePath, outputTo);
}
