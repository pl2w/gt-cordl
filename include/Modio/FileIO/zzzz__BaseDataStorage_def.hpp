#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage)
namespace GlobalNamespace {
struct BaseDataStorage__CalculateMd5Hash_d__30;
}
namespace GlobalNamespace {
struct BaseDataStorage__CompressStream_d__75;
}
namespace GlobalNamespace {
struct BaseDataStorage__CompressToZip_d__74;
}
namespace GlobalNamespace {
struct BaseDataStorage__DownloadModFileFromStream_d__28;
}
namespace GlobalNamespace {
struct BaseDataStorage__ExtractFileFromZipStream_d__36;
}
namespace GlobalNamespace {
struct BaseDataStorage__InstallModFromStream_d__34;
}
namespace GlobalNamespace {
struct BaseDataStorage__InstallMod_d__33;
}
namespace GlobalNamespace {
struct BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50;
}
namespace GlobalNamespace {
struct BaseDataStorage__ReadAllSavedUserData_d__26;
}
namespace GlobalNamespace {
struct BaseDataStorage__ReadCachedImage_d__42;
}
namespace GlobalNamespace {
template<typename T>
struct BaseDataStorage__ReadData_d__13_1;
}
namespace GlobalNamespace {
struct BaseDataStorage__ReadFile_d__60;
}
namespace GlobalNamespace {
struct BaseDataStorage__ReadLegacyUserData_d__23;
}
namespace GlobalNamespace {
struct BaseDataStorage__ReadTextFile_d__62;
}
namespace GlobalNamespace {
struct BaseDataStorage__Shutdown_d__10;
}
namespace GlobalNamespace {
struct BaseDataStorage__WriteCachedImage_d__43;
}
namespace GlobalNamespace {
template<typename T>
struct BaseDataStorage__WriteData_d__14_1;
}
namespace GlobalNamespace {
struct BaseDataStorage__WriteFile_d__59;
}
namespace GlobalNamespace {
struct BaseDataStorage__WriteTextFile_d__61;
}
namespace GlobalNamespace {
struct BaseDataStorage___c__DisplayClass34_0;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipInputStream;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipOutputStream;
}
namespace Modio::FileIO {
class BaseDataStorage__IterateDirectoriesInDirectory_d__77;
}
namespace Modio::FileIO {
class BaseDataStorage__IterateFilesInDirectory_d__76;
}
namespace Modio::FileIO {
class BaseDataStorage___c;
}
namespace Modio::FileIO {
class BaseDataStorage___c__DisplayClass34_1;
}
namespace Modio::FileIO {
class IModioDataStorage;
}
namespace Modio::FileIO {
class MD5ComputingStreamWrapper;
}
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
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
struct FileMode;
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
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
class BaseDataStorage;
}
namespace Modio::FileIO {
class BaseDataStorage__IterateDirectoriesInDirectory_d__77;
}
namespace Modio::FileIO {
class BaseDataStorage__IterateFilesInDirectory_d__76;
}
namespace Modio::FileIO {
class BaseDataStorage___c;
}
namespace Modio::FileIO {
class BaseDataStorage___c__DisplayClass34_1;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::BaseDataStorage*);
MARK_REF_T(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*);
MARK_REF_T(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*);
MARK_REF_T(::Modio::FileIO::BaseDataStorage___c*);
MARK_REF_T(::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::BaseDataStorage*, "Modio.FileIO", "BaseDataStorage");
DEFINE_IL2CPP_CLASS(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77*, "Modio.FileIO", "BaseDataStorage/<IterateDirectoriesInDirectory>d__77");
DEFINE_IL2CPP_CLASS(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76*, "Modio.FileIO", "BaseDataStorage/<IterateFilesInDirectory>d__76");
DEFINE_IL2CPP_CLASS(::Modio::FileIO::BaseDataStorage___c*, "Modio.FileIO", "BaseDataStorage/<>c");
DEFINE_IL2CPP_CLASS(::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*, "Modio.FileIO", "BaseDataStorage/<>c__DisplayClass34_1");
// Dependencies System.Object, System.Threading.CancellationToken
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.BaseDataStorage
class CORDL_TYPE BaseDataStorage : public ::System::Object {
public:
// Declarations
using _CalculateMd5Hash_d__30 = ::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30;

using _CompressStream_d__75 = ::GlobalNamespace::BaseDataStorage__CompressStream_d__75;

using _CompressToZip_d__74 = ::GlobalNamespace::BaseDataStorage__CompressToZip_d__74;

using _DownloadModFileFromStream_d__28 = ::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28;

using _ExtractFileFromZipStream_d__36 = ::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36;

using _InstallModFromStream_d__34 = ::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34;

using _InstallMod_d__33 = ::GlobalNamespace::BaseDataStorage__InstallMod_d__33;

using _IsThereEnoughSpaceForExtracting_d__50 = ::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50;

using _ReadAllSavedUserData_d__26 = ::GlobalNamespace::BaseDataStorage__ReadAllSavedUserData_d__26;

using _ReadCachedImage_d__42 = ::GlobalNamespace::BaseDataStorage__ReadCachedImage_d__42;

template<typename T>
using _ReadData_d__13_1 = ::GlobalNamespace::BaseDataStorage__ReadData_d__13_1<T>;

using _ReadFile_d__60 = ::GlobalNamespace::BaseDataStorage__ReadFile_d__60;

using _ReadLegacyUserData_d__23 = ::GlobalNamespace::BaseDataStorage__ReadLegacyUserData_d__23;

using _ReadTextFile_d__62 = ::GlobalNamespace::BaseDataStorage__ReadTextFile_d__62;

using _Shutdown_d__10 = ::GlobalNamespace::BaseDataStorage__Shutdown_d__10;

using _WriteCachedImage_d__43 = ::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43;

template<typename T>
using _WriteData_d__14_1 = ::GlobalNamespace::BaseDataStorage__WriteData_d__14_1<T>;

using _WriteFile_d__59 = ::GlobalNamespace::BaseDataStorage__WriteFile_d__59;

using _WriteTextFile_d__61 = ::GlobalNamespace::BaseDataStorage__WriteTextFile_d__61;

using __c__DisplayClass34_0 = ::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0;

using _IterateDirectoriesInDirectory_d__77 = ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77;

using _IterateFilesInDirectory_d__76 = ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76;

using __c = ::Modio::FileIO::BaseDataStorage___c;

using __c__DisplayClass34_1 = ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1;

/// @brief Field GameId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameId, put=__cordl_internal_set_GameId)) int64_t  GameId;

/// @brief Field Initialized, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Initialized, put=__cordl_internal_set_Initialized)) bool  Initialized;

/// @brief Field IsShuttingDown, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsShuttingDown, put=__cordl_internal_set_IsShuttingDown)) bool  IsShuttingDown;

/// @brief Field OngoingTaskCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_OngoingTaskCount, put=__cordl_internal_set_OngoingTaskCount)) int32_t  OngoingTaskCount;

/// @brief Field Root, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::StringW  Root;

/// @brief Field ShutdownToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShutdownToken, put=__cordl_internal_set_ShutdownToken)) ::System::Threading::CancellationToken  ShutdownToken;

/// @brief Field ShutdownTokenSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShutdownTokenSource, put=__cordl_internal_set_ShutdownTokenSource)) ::System::Threading::CancellationTokenSource*  ShutdownTokenSource;

/// @brief Field UserRoot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserRoot, put=__cordl_internal_set_UserRoot)) ::StringW  UserRoot;

/// @brief Convert operator to "::Modio::FileIO::IModioDataStorage"
constexpr operator  ::Modio::FileIO::IModioDataStorage*() noexcept;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<CalculateMd5Hash>d__30))]
/// @brief Method CalculateMd5Hash, addr 0xa041e7c, size 0x124, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* CalculateMd5Hash(::StringW  filePath, ::ArrayW<uint8_t>  buffer) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<CompressStream>d__75))]
/// @brief Method CompressStream, addr 0xa0469a8, size 0x108, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* CompressStream(::StringW  entryName, ::System::IO::Stream*  stream, ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  zipStream) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<CompressToZip>d__74))]
/// @brief Method CompressToZip, addr 0xa046864, size 0x144, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* CompressToZip(::StringW  filePath, ::System::IO::Stream*  outputTo) ;

/// @brief Method ConvertUTF8Data, addr 0xa045edc, size 0x2d4, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>> ConvertUTF8Data(::StringW  data) ;

/// @brief Method CreateDirectory, addr 0xa045374, size 0x180, virtual true, abstract: false, final false
inline ::Modio::Error* CreateDirectory(::StringW  filePath) ;

/// @brief Method CreateFileStream, addr 0xa041dfc, size 0x80, virtual true, abstract: false, final false
inline ::System::IO::Stream* CreateFileStream(::StringW  filePath, ::System::IO::FileMode  mode) ;

/// [ModioDebugMenu]
/// @brief Method DebugDeleteAllGameData, addr 0xa040ec8, size 0xa8, virtual false, abstract: false, final false
static inline void DebugDeleteAllGameData() ;

/// @brief Method DeleteAllGameData, addr 0xa040f70, size 0x164, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteAllGameData() ;

/// @brief Method DeleteCachedImage, addr 0xa044a60, size 0x210, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteCachedImage(::System::Uri*  serverPath) ;

/// @brief Method DeleteData, addr 0xa0410d4, size 0x1b4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteData(::StringW  filePath) ;

/// @brief Method DeleteDirectoryAndContents, addr 0xa0454f4, size 0x160, virtual true, abstract: false, final false
inline ::Modio::Error* DeleteDirectoryAndContents(::StringW  filePath) ;

/// @brief Method DeleteFile, addr 0xa045654, size 0x15c, virtual true, abstract: false, final false
inline ::Modio::Error* DeleteFile(::StringW  filePath) ;

/// @brief Method DeleteGameData, addr 0xa0413a0, size 0x28, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteGameData() ;

/// @brief Method DeleteIndexData, addr 0xa0414e0, size 0x28, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteIndexData() ;

/// @brief Method DeleteInstalledMod, addr 0xa042e74, size 0x1b0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteInstalledMod(::Modio::Mods::Mod*  mod, int64_t  modfileId) ;

/// @brief Method DeleteLegacyUserData, addr 0xa041870, size 0x40c, virtual true, abstract: false, final false
inline ::Modio::Error* DeleteLegacyUserData() ;

/// @brief Method DeleteModfile, addr 0xa041fa0, size 0x1d4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteModfile(int64_t  modId, int64_t  modfileId) ;

/// @brief Method DeleteUserData, addr 0xa04173c, size 0x28, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DeleteUserData(::StringW  localUserId) ;

/// @brief Method DoesDirectoryExist, addr 0xa04535c, size 0xc, virtual true, abstract: false, final false
inline bool DoesDirectoryExist(::StringW  filePath) ;

/// @brief Method DoesFileExist, addr 0xa045368, size 0xc, virtual true, abstract: false, final false
inline bool DoesFileExist(::StringW  filePath) ;

/// @brief Method DoesInstallExist, addr 0xa046830, size 0x34, virtual true, abstract: false, final false
inline bool DoesInstallExist(int64_t  modId, int64_t  modfileId) ;

/// @brief Method DoesModfileExist, addr 0xa0467fc, size 0x34, virtual true, abstract: false, final false
inline bool DoesModfileExist(int64_t  modId, int64_t  modfileId) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<DownloadModFileFromStream>d__28))]
/// @brief Method DownloadModFileFromStream, addr 0xa041c7c, size 0x180, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* DownloadModFileFromStream(int64_t  modId, int64_t  modfileId, ::System::IO::Stream*  downloadStream, ::StringW  md5Hash, ::System::Threading::CancellationToken  token, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<ExtractFileFromZipStream>d__36))]
/// @brief Method ExtractFileFromZipStream, addr 0xa042cec, size 0x188, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* ExtractFileFromZipStream(::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  zipStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  filePath, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker, ::System::Threading::CancellationToken  token) ;

/// @brief Method GetAvailableFreeSpace, addr 0xa0450a4, size 0x104, virtual true, abstract: false, final false
inline int64_t GetAvailableFreeSpace() ;

/// @brief Method GetAvailableFreeSpaceForModInstall, addr 0xa044ec4, size 0x88, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int64_t>* GetAvailableFreeSpaceForModInstall() ;

/// @brief Method GetAvailableFreeSpaceForModfile, addr 0xa044da4, size 0x88, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int64_t>* GetAvailableFreeSpaceForModfile() ;

/// @brief Method GetGameDataFilePath, addr 0xa04654c, size 0xb4, virtual true, abstract: false, final false
inline ::StringW GetGameDataFilePath() ;

/// @brief Method GetImageDataFilePath, addr 0xa04674c, size 0xb0, virtual true, abstract: false, final false
inline ::StringW GetImageDataFilePath(::System::Uri*  serverPath) ;

/// @brief Method GetIndexFilePath, addr 0xa046600, size 0xb4, virtual true, abstract: false, final false
inline ::StringW GetIndexFilePath() ;

/// @brief Method GetInstallPath, addr 0xa0462ac, size 0x150, virtual true, abstract: false, final false
inline ::StringW GetInstallPath(int64_t  modId, int64_t  modfileId) ;

/// @brief Method GetModfilePath, addr 0xa0461b0, size 0xfc, virtual true, abstract: false, final false
inline ::StringW GetModfilePath(int64_t  modId, int64_t  modfileId) ;

/// @brief Method GetTemporaryInstallPath, addr 0xa0463fc, size 0x150, virtual true, abstract: false, final false
inline ::StringW GetTemporaryInstallPath(int64_t  modId, int64_t  modfileId) ;

/// @brief Method GetUserDataFilePath, addr 0xa0466b4, size 0x98, virtual true, abstract: false, final false
inline ::StringW GetUserDataFilePath(::StringW  localUserId) ;

/// @brief Method Init, addr 0xa0409e4, size 0x138, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Init() ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<InstallMod>d__33))]
/// @brief Method InstallMod, addr 0xa0427f8, size 0x140, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* InstallMod(::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::Threading::CancellationToken  token) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<InstallModFromStream>d__34))]
/// @brief Method InstallModFromStream, addr 0xa042938, size 0x178, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* InstallModFromStream(::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::IO::Stream*  stream, ::StringW  md5Hash, ::System::Threading::CancellationToken  token) ;

/// @brief Method IsThereAvailableFreeSpaceFor, addr 0xa044c70, size 0x9c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsThereAvailableFreeSpaceFor(int64_t  tempBytes, int64_t  persistentBytes) ;

/// @brief Method IsThereAvailableFreeSpaceForModInstall, addr 0xa044e2c, size 0x98, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsThereAvailableFreeSpaceForModInstall(int64_t  bytes) ;

/// @brief Method IsThereAvailableFreeSpaceForModfile, addr 0xa044d0c, size 0x98, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsThereAvailableFreeSpaceForModfile(int64_t  bytes) ;

/// @brief Method IsThereEnoughDiskSpaceFor, addr 0xa045074, size 0x30, virtual true, abstract: false, final false
inline bool IsThereEnoughDiskSpaceFor(int64_t  bytes) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<IsThereEnoughSpaceForExtracting>d__50))]
/// @brief Method IsThereEnoughSpaceForExtracting, addr 0xa044f4c, size 0x128, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsThereEnoughSpaceForExtracting(::StringW  archiveFilePath) ;

/// @brief Method IsValidPath, addr 0xa0451a8, size 0x1b4, virtual true, abstract: false, final false
inline bool IsValidPath(::StringW  filePath) ;

/// [IteratorStateMachine(typeof(Modio.FileIO.BaseDataStorage::<IterateDirectoriesInDirectory>d__77))]
/// @brief Method IterateDirectoriesInDirectory, addr 0xa046b80, size 0x9c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* IterateDirectoriesInDirectory(::StringW  directoryPath) ;

/// [IteratorStateMachine(typeof(Modio.FileIO.BaseDataStorage::<IterateFilesInDirectory>d__76))]
/// @brief Method IterateFilesInDirectory, addr 0xa046ab0, size 0x9c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* IterateFilesInDirectory(::StringW  directoryPath) ;

/// @brief Method MigrateLegacyModInstalls, addr 0xa043fec, size 0x80, virtual true, abstract: false, final false
inline void MigrateLegacyModInstalls() ;

/// @brief Method MigrateLegacyModInstalls, addr 0xa04406c, size 0x79c, virtual false, abstract: false, final false
inline void MigrateLegacyModInstalls(::StringW  legacyDirectoryPath) ;

/// @brief Method MoveTempInstallToCorrectLocation, addr 0xa042ab0, size 0x23c, virtual true, abstract: false, final false
inline ::Modio::Error* MoveTempInstallToCorrectLocation(::Modio::Mods::Mod*  mod, ::StringW  installDirectoryPath, ::StringW  temporaryDirectoryPath) ;

static inline ::Modio::FileIO::BaseDataStorage* New_ctor() ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<ReadAllSavedUserData>d__26))]
/// @brief Method ReadAllSavedUserData, addr 0xa041764, size 0x10c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Users::UserSaveObject*>>>* ReadAllSavedUserData() ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<ReadCachedImage>d__42))]
/// @brief Method ReadCachedImage, addr 0xa044808, size 0x11c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* ReadCachedImage(::System::Uri*  serverPath) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<ReadData>d__13`1<T>))]
/// @brief Method ReadData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* ReadData(::StringW  filePath) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<ReadFile>d__60))]
/// @brief Method ReadFile, addr 0xa0458fc, size 0x128, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>* ReadFile(::StringW  path) ;

/// @brief Method ReadGameData, addr 0xa041288, size 0x84, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::GameData*>>* ReadGameData() ;

/// @brief Method ReadIndexData, addr 0xa0413c8, size 0x84, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* ReadIndexData() ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<ReadLegacyUserData>d__23))]
/// @brief Method ReadLegacyUserData, addr 0xa04159c, size 0x108, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::LegacyUserSaveObject*>>* ReadLegacyUserData(::StringW  localUserId) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<ReadTextFile>d__62))]
/// @brief Method ReadTextFile, addr 0xa045b5c, size 0x11c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* ReadTextFile(::StringW  path) ;

/// @brief Method ReadUserData, addr 0xa041508, size 0x94, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Users::UserSaveObject*>>* ReadUserData(::StringW  localUserId) ;

/// @brief Method ScanForInstalledMod, addr 0xa043804, size 0x7e8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,bool,int64_t>>* ScanForInstalledMod(::Modio::Mods::Mod*  mod) ;

/// @brief Method ScanForInstalledMods, addr 0xa043024, size 0x7e0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* ScanForInstalledMods() ;

/// @brief Method ScanForModfiles, addr 0xa042174, size 0x684, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::System::ValueTuple_2<int64_t,int64_t>>*>>* ScanForModfiles() ;

/// @brief Method SetupRootPaths, addr 0xa040b1c, size 0x2d0, virtual true, abstract: false, final false
inline void SetupRootPaths() ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<Shutdown>d__10))]
/// @brief Method Shutdown, addr 0xa040dec, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* Shutdown() ;

/// @brief Method TryParseUTF8Data, addr 0xa045c78, size 0x264, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<::Modio::Error*,::StringW> TryParseUTF8Data(::ArrayW<uint8_t>  data) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<WriteCachedImage>d__43))]
/// @brief Method WriteCachedImage, addr 0xa044924, size 0x13c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteCachedImage(::System::Uri*  serverPath, ::ArrayW<uint8_t>  data) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<WriteData>d__14`1<T>))]
/// @brief Method WriteData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteData(T  data, ::StringW  filePath) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<WriteFile>d__59))]
/// @brief Method WriteFile, addr 0xa0457b0, size 0x14c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteFile(::StringW  path, ::ArrayW<uint8_t>  data, int32_t  bytesToWrite) ;

/// @brief Method WriteGameData, addr 0xa04130c, size 0x94, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteGameData(::Modio::Mods::GameData*  gameData) ;

/// @brief Method WriteIndexData, addr 0xa04144c, size 0x94, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteIndexData(::Modio::ModIndex*  index) ;

/// [AsyncStateMachine(typeof(Modio.FileIO.BaseDataStorage::<WriteTextFile>d__61))]
/// @brief Method WriteTextFile, addr 0xa045a24, size 0x138, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteTextFile(::StringW  path, ::StringW  data) ;

/// @brief Method WriteUserData, addr 0xa0416a4, size 0x98, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* WriteUserData(::Modio::Users::UserSaveObject*  userObject) ;

/// [CompilerGenerated]
/// @brief Method <InstallModFromStream>g__LogTaskCancelAndCleanup|34_0, addr 0xa046c58, size 0x314, virtual false, abstract: false, final false
inline ::Modio::Error* _InstallModFromStream_g__LogTaskCancelAndCleanup_34_0(::by_ref<::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr int64_t const& __cordl_internal_get_GameId() const;

constexpr int64_t& __cordl_internal_get_GameId() ;

constexpr bool const& __cordl_internal_get_Initialized() const;

constexpr bool& __cordl_internal_get_Initialized() ;

constexpr bool const& __cordl_internal_get_IsShuttingDown() const;

constexpr bool& __cordl_internal_get_IsShuttingDown() ;

constexpr int32_t const& __cordl_internal_get_OngoingTaskCount() const;

constexpr int32_t& __cordl_internal_get_OngoingTaskCount() ;

constexpr ::StringW const& __cordl_internal_get_Root() const;

constexpr ::StringW& __cordl_internal_get_Root() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_ShutdownToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_ShutdownToken() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_ShutdownTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_ShutdownTokenSource() ;

constexpr ::StringW const& __cordl_internal_get_UserRoot() const;

constexpr ::StringW& __cordl_internal_get_UserRoot() ;

constexpr void __cordl_internal_set_GameId(int64_t  value) ;

constexpr void __cordl_internal_set_Initialized(bool  value) ;

constexpr void __cordl_internal_set_IsShuttingDown(bool  value) ;

constexpr void __cordl_internal_set_OngoingTaskCount(int32_t  value) ;

constexpr void __cordl_internal_set_Root(::StringW  value) ;

constexpr void __cordl_internal_set_ShutdownToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_ShutdownTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_UserRoot(::StringW  value) ;

/// @brief Method .ctor, addr 0xa046c50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::FileIO::IModioDataStorage"
constexpr ::Modio::FileIO::IModioDataStorage* i___Modio__FileIO__IModioDataStorage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDataStorage(BaseDataStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDataStorage(BaseDataStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17668};

/// @brief Field Initialized, offset: 0x10, size: 0x1, def value: None
 bool  ___Initialized;

/// @brief Field IsShuttingDown, offset: 0x11, size: 0x1, def value: None
 bool  ___IsShuttingDown;

/// @brief Field GameId, offset: 0x18, size: 0x8, def value: None
 int64_t  ___GameId;

/// @brief Field Root, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Root;

/// @brief Field UserRoot, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___UserRoot;

/// @brief Field OngoingTaskCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___OngoingTaskCount;

/// @brief Field ShutdownTokenSource, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___ShutdownTokenSource;

/// @brief Field ShutdownToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___ShutdownToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::FileIO::BaseDataStorage, ___Initialized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage, ___IsShuttingDown) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage, ___GameId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage, ___Root) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage, ___UserRoot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage, ___OngoingTaskCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage, ___ShutdownTokenSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage, ___ShutdownToken) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::FileIO::BaseDataStorage) == 0x48, "Size mismatch!");

} // namespace end def Modio::FileIO
// [CompilerGenerated]
// Dependencies System.Object, System.ValueTuple`2<T1, T2>
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.BaseDataStorage/<IterateFilesInDirectory>d__76
class CORDL_TYPE BaseDataStorage__IterateFilesInDirectory_d__76 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringfileName___get_Current)) ::System::ValueTuple_2<::Modio::Error*,::StringW>  System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringfileName___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::ValueTuple_2<::Modio::Error*,::StringW>  __2__current;

/// @brief Field <>3__directoryPath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__directoryPath, put=__cordl_internal_set___3__directoryPath)) ::StringW  __3__directoryPath;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field <>7__wrap1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::StringW>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field directoryPath, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_directoryPath, put=__cordl_internal_set_directoryPath)) ::StringW  directoryPath;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa04eb5c, size 0x47c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<(Modio.Errorerror,System.StringfileName)>.GetEnumerator, addr 0xa04f128, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* System_Collections_Generic_IEnumerable__Modio_Errorerror_System_StringfileName___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<(Modio.Errorerror,System.StringfileName)>.get_Current, addr 0xa04f088, size 0xc, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::Modio::Error*,::StringW> System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringfileName___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa04f1dc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa04f094, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa04f0cc, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa04eb40, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::ValueTuple_2<::Modio::Error*,::StringW> const& __cordl_internal_get___2__current() const;

constexpr ::System::ValueTuple_2<::Modio::Error*,::StringW>& __cordl_internal_get___2__current() ;

constexpr ::StringW const& __cordl_internal_get___3__directoryPath() const;

constexpr ::StringW& __cordl_internal_get___3__directoryPath() ;

constexpr ::Modio::FileIO::BaseDataStorage* const& __cordl_internal_get___4__this() const;

constexpr ::Modio::FileIO::BaseDataStorage*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::StringW const& __cordl_internal_get_directoryPath() const;

constexpr ::StringW& __cordl_internal_get_directoryPath() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<::Modio::Error*,::StringW>  value) ;

constexpr void __cordl_internal_set___3__directoryPath(::StringW  value) ;

constexpr void __cordl_internal_set___4__this(::Modio::FileIO::BaseDataStorage*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_directoryPath(::StringW  value) ;

/// @brief Method <>m__Finally1, addr 0xa04efd8, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa046b4c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Modio__Error____StringW__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Modio__Error____StringW__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__IterateFilesInDirectory_d__76() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage__IterateFilesInDirectory_d__76", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDataStorage__IterateFilesInDirectory_d__76(BaseDataStorage__IterateFilesInDirectory_d__76 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage__IterateFilesInDirectory_d__76", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDataStorage__IterateFilesInDirectory_d__76(BaseDataStorage__IterateFilesInDirectory_d__76 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17656};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// [TupleElementNames(new[] { "error", "fileName" })]
/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<::Modio::Error*,::StringW>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  _____4__this;

/// @brief Field directoryPath, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___directoryPath;

/// @brief Field <>3__directoryPath, offset: 0x40, size: 0x8, def value: None
 ::StringW  _____3__directoryPath;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::StringW>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76, ___directoryPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76, _____3__directoryPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76, _____7__wrap1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::FileIO::BaseDataStorage__IterateFilesInDirectory_d__76) == 0x50, "Size mismatch!");

} // namespace end def Modio::FileIO
// [CompilerGenerated]
// Dependencies System.Object, System.ValueTuple`2<T1, T2>
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.BaseDataStorage/<IterateDirectoriesInDirectory>d__77
class CORDL_TYPE BaseDataStorage__IterateDirectoriesInDirectory_d__77 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringdirectoryPath___get_Current)) ::System::ValueTuple_2<::Modio::Error*,::StringW>  System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringdirectoryPath___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::ValueTuple_2<::Modio::Error*,::StringW>  __2__current;

/// @brief Field <>3__directoryPath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__directoryPath, put=__cordl_internal_set___3__directoryPath)) ::StringW  __3__directoryPath;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field <>7__wrap1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::StringW>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field directoryPath, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_directoryPath, put=__cordl_internal_set_directoryPath)) ::StringW  directoryPath;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa04e580, size 0x3b8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<(Modio.Errorerror,System.StringdirectoryPath)>.GetEnumerator, addr 0xa04ea88, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* System_Collections_Generic_IEnumerable__Modio_Errorerror_System_StringdirectoryPath___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<(Modio.Errorerror,System.StringdirectoryPath)>.get_Current, addr 0xa04e9e8, size 0xc, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<::Modio::Error*,::StringW> System_Collections_Generic_IEnumerator__Modio_Errorerror_System_StringdirectoryPath___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa04eb3c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa04e9f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa04ea2c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa04e564, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::ValueTuple_2<::Modio::Error*,::StringW> const& __cordl_internal_get___2__current() const;

constexpr ::System::ValueTuple_2<::Modio::Error*,::StringW>& __cordl_internal_get___2__current() ;

constexpr ::StringW const& __cordl_internal_get___3__directoryPath() const;

constexpr ::StringW& __cordl_internal_get___3__directoryPath() ;

constexpr ::Modio::FileIO::BaseDataStorage* const& __cordl_internal_get___4__this() const;

constexpr ::Modio::FileIO::BaseDataStorage*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::StringW const& __cordl_internal_get_directoryPath() const;

constexpr ::StringW& __cordl_internal_get_directoryPath() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::ValueTuple_2<::Modio::Error*,::StringW>  value) ;

constexpr void __cordl_internal_set___3__directoryPath(::StringW  value) ;

constexpr void __cordl_internal_set___4__this(::Modio::FileIO::BaseDataStorage*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_directoryPath(::StringW  value) ;

/// @brief Method <>m__Finally1, addr 0xa04e938, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa046c1c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* i___System__Collections__Generic__IEnumerable_1___System__ValueTuple_2___Modio__Error____StringW__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* i___System__Collections__Generic__IEnumerator_1___System__ValueTuple_2___Modio__Error____StringW__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__IterateDirectoriesInDirectory_d__77() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage__IterateDirectoriesInDirectory_d__77", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDataStorage__IterateDirectoriesInDirectory_d__77(BaseDataStorage__IterateDirectoriesInDirectory_d__77 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage__IterateDirectoriesInDirectory_d__77", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDataStorage__IterateDirectoriesInDirectory_d__77(BaseDataStorage__IterateDirectoriesInDirectory_d__77 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17655};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// [TupleElementNames(new[] { "error", "directoryPath" })]
/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::ValueTuple_2<::Modio::Error*,::StringW>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  _____4__this;

/// @brief Field directoryPath, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___directoryPath;

/// @brief Field <>3__directoryPath, offset: 0x40, size: 0x8, def value: None
 ::StringW  _____3__directoryPath;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::StringW>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77, ___directoryPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77, _____3__directoryPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77, _____7__wrap1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::FileIO::BaseDataStorage__IterateDirectoriesInDirectory_d__77) == 0x50, "Size mismatch!");

} // namespace end def Modio::FileIO
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.BaseDataStorage/<>c__DisplayClass34_1
class CORDL_TYPE BaseDataStorage___c__DisplayClass34_1 : public ::System::Object {
public:
// Declarations
/// @brief Field md5Stream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_md5Stream, put=__cordl_internal_set_md5Stream)) ::Modio::FileIO::MD5ComputingStreamWrapper*  md5Stream;

static inline ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1* New_ctor() ;

/// @brief Method <InstallModFromStream>b__1, addr 0xa047074, size 0x18, virtual false, abstract: false, final false
inline int64_t _InstallModFromStream_b__1() ;

constexpr ::Modio::FileIO::MD5ComputingStreamWrapper* const& __cordl_internal_get_md5Stream() const;

constexpr ::Modio::FileIO::MD5ComputingStreamWrapper*& __cordl_internal_get_md5Stream() ;

constexpr void __cordl_internal_set_md5Stream(::Modio::FileIO::MD5ComputingStreamWrapper*  value) ;

/// @brief Method .ctor, addr 0xa04706c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage___c__DisplayClass34_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage___c__DisplayClass34_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDataStorage___c__DisplayClass34_1(BaseDataStorage___c__DisplayClass34_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage___c__DisplayClass34_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDataStorage___c__DisplayClass34_1(BaseDataStorage___c__DisplayClass34_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17646};

/// @brief Field md5Stream, offset: 0x10, size: 0x8, def value: None
 ::Modio::FileIO::MD5ComputingStreamWrapper*  ___md5Stream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1, ___md5Stream) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1) == 0x18, "Size mismatch!");

} // namespace end def Modio::FileIO
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.BaseDataStorage/<>c
class CORDL_TYPE BaseDataStorage___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::FileIO::BaseDataStorage___c*  __9;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Func_2<::StringW,bool>*  __9__26_0;

/// @brief Field <>9__26_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_1, put=setStaticF___9__26_1)) ::System::Func_2<::StringW,::StringW>*  __9__26_1;

static inline ::Modio::FileIO::BaseDataStorage___c* New_ctor() ;

/// @brief Method <ReadAllSavedUserData>b__26_0, addr 0xa046fdc, size 0x54, virtual false, abstract: false, final false
inline bool _ReadAllSavedUserData_b__26_0(::StringW  fileName) ;

/// @brief Method <ReadAllSavedUserData>b__26_1, addr 0xa047030, size 0x3c, virtual false, abstract: false, final false
inline ::StringW _ReadAllSavedUserData_b__26_1(::StringW  fileName) ;

/// @brief Method .ctor, addr 0xa046fd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::FileIO::BaseDataStorage___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__26_0() ;

static inline ::System::Func_2<::StringW,::StringW>* getStaticF___9__26_1() ;

static inline void setStaticF___9(::Modio::FileIO::BaseDataStorage___c*  value) ;

static inline void setStaticF___9__26_0(::System::Func_2<::StringW,bool>*  value) ;

static inline void setStaticF___9__26_1(::System::Func_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDataStorage___c(BaseDataStorage___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDataStorage___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDataStorage___c(BaseDataStorage___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17644};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::FileIO::BaseDataStorage___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::FileIO
