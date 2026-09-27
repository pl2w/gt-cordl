#pragma once
// IWYU pragma private; include "Modio/FileIO/IModioDataStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IModioDataStorage)
namespace Modio::FileIO {
class ModInstallProgressTracker;
}
namespace Modio::Mods {
class GameData;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Users {
class LegacyUserSaveObject;
}
namespace Modio::Users {
class UserSaveObject;
}
namespace Modio {
class Error;
}
namespace Modio {
class ModIndex;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Uri;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
// Forward declare root types
namespace Modio::FileIO {
class IModioDataStorage;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::IModioDataStorage*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::IModioDataStorage*, "Modio.FileIO", "IModioDataStorage");
// Dependencies 
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.IModioDataStorage
class CORDL_TYPE IModioDataStorage {
public:
// Declarations
/// @brief Method CompressToZip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* CompressToZip(::StringW  filePath, ::System::IO::Stream*  outputTo) ;

/// @brief Method DeleteAllGameData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteAllGameData() ;

/// @brief Method DeleteCachedImage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteCachedImage(::System::Uri*  serverPath) ;

/// @brief Method DeleteGameData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteGameData() ;

/// @brief Method DeleteIndexData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteIndexData() ;

/// @brief Method DeleteInstalledMod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteInstalledMod(::Modio::Mods::Mod*  mod, int64_t  modfileId) ;

/// @brief Method DeleteLegacyUserData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Modio::Error* DeleteLegacyUserData() ;

/// @brief Method DeleteModfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteModfile(int64_t  modId, int64_t  modfileId) ;

/// @brief Method DeleteUserData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteUserData(::StringW  localUserId) ;

/// @brief Method DoesInstallExist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool DoesInstallExist(int64_t  modId, int64_t  modfileId) ;

/// @brief Method DoesModfileExist, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool DoesModfileExist(int64_t  modId, int64_t  modfileId) ;

/// @brief Method DownloadModFileFromStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DownloadModFileFromStream(int64_t  modId, int64_t  modfileId, ::System::IO::Stream*  downloadStream, ::StringW  md5Hash, ::System::Threading::CancellationToken  token, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker) ;

/// @brief Method GetAvailableFreeSpaceForModInstall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<int64_t>* GetAvailableFreeSpaceForModInstall() ;

/// @brief Method GetAvailableFreeSpaceForModfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<int64_t>* GetAvailableFreeSpaceForModfile() ;

/// @brief Method GetInstallPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetInstallPath(int64_t  modId, int64_t  modfileId) ;

/// @brief Method GetModfilePath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetModfilePath(int64_t  modId, int64_t  modfileId) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Init() ;

/// @brief Method InstallMod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* InstallMod(::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::Threading::CancellationToken  token) ;

/// @brief Method InstallModFromStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* InstallModFromStream(::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::IO::Stream*  stream, ::StringW  md5Hash, ::System::Threading::CancellationToken  token) ;

/// @brief Method IsThereAvailableFreeSpaceFor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsThereAvailableFreeSpaceFor(int64_t  tempBytes, int64_t  persistentBytes) ;

/// @brief Method IsThereAvailableFreeSpaceForModInstall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsThereAvailableFreeSpaceForModInstall(int64_t  bytes) ;

/// @brief Method IsThereAvailableFreeSpaceForModfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsThereAvailableFreeSpaceForModfile(int64_t  bytes) ;

/// @brief Method ReadAllSavedUserData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>* ReadAllSavedUserData() ;

/// @brief Method ReadCachedImage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* ReadCachedImage(::System::Uri*  serverPath) ;

/// @brief Method ReadGameData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::GameData*>>* ReadGameData() ;

/// @brief Method ReadIndexData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* ReadIndexData() ;

/// @brief Method ReadLegacyUserData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::LegacyUserSaveObject*>>* ReadLegacyUserData(::StringW  localUserId) ;

/// @brief Method ReadUserData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::UserSaveObject*>>* ReadUserData(::StringW  localUserId) ;

/// @brief Method ScanForInstalledMod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,int64_t>>* ScanForInstalledMod(::Modio::Mods::Mod*  mod) ;

/// @brief Method ScanForInstalledMods, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* ScanForInstalledMods() ;

/// @brief Method ScanForModfiles, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* ScanForModfiles() ;

/// @brief Method Shutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* Shutdown() ;

/// @brief Method WriteCachedImage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteCachedImage(::System::Uri*  serverPath, ::ArrayW<uint8_t>  data) ;

/// @brief Method WriteGameData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteGameData(::Modio::Mods::GameData*  gameData) ;

/// @brief Method WriteIndexData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteIndexData(::Modio::ModIndex*  index) ;

/// @brief Method WriteUserData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteUserData(::Modio::Users::UserSaveObject*  userObject) ;

// Ctor Parameters [CppParam { name: "", ty: "IModioDataStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioDataStorage(IModioDataStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::FileIO
