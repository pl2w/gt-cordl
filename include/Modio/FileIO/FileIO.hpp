#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Modio/FileIO/BaseDataStorage.hpp"
#include "Modio/FileIO/BaseDataStorage__CalculateMd5Hash_d__30.hpp"
#include "Modio/FileIO/BaseDataStorage__CompressStream_d__75.hpp"
#include "Modio/FileIO/BaseDataStorage__CompressToZip_d__74.hpp"
#include "Modio/FileIO/BaseDataStorage__DownloadModFileFromStream_d__28.hpp"
#include "Modio/FileIO/BaseDataStorage__ExtractFileFromZipStream_d__36.hpp"
#include "Modio/FileIO/BaseDataStorage__InstallModFromStream_d__34.hpp"
#include "Modio/FileIO/BaseDataStorage__InstallMod_d__33.hpp"
#include "Modio/FileIO/BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50.hpp"
#include "Modio/FileIO/BaseDataStorage__ReadAllSavedUserData_d__26.hpp"
#include "Modio/FileIO/BaseDataStorage__ReadCachedImage_d__42.hpp"
#include "Modio/FileIO/BaseDataStorage__ReadData_d__13_1.hpp"
#include "Modio/FileIO/BaseDataStorage__ReadFile_d__60.hpp"
#include "Modio/FileIO/BaseDataStorage__ReadLegacyUserData_d__23.hpp"
#include "Modio/FileIO/BaseDataStorage__ReadTextFile_d__62.hpp"
#include "Modio/FileIO/BaseDataStorage__Shutdown_d__10.hpp"
#include "Modio/FileIO/BaseDataStorage__WriteCachedImage_d__43.hpp"
#include "Modio/FileIO/BaseDataStorage__WriteData_d__14_1.hpp"
#include "Modio/FileIO/BaseDataStorage__WriteFile_d__59.hpp"
#include "Modio/FileIO/BaseDataStorage__WriteTextFile_d__61.hpp"
#include "Modio/FileIO/BaseDataStorage___c__DisplayClass34_0.hpp"
#include "Modio/FileIO/DefaultRootPathProvider.hpp"
#include "Modio/FileIO/IModioDataStorage.hpp"
#include "Modio/FileIO/IModioRootPathProvider.hpp"
#include "Modio/FileIO/LinuxDataStorage.hpp"
#include "Modio/FileIO/LinuxDataStorage_UnixStatsFs.hpp"
#include "Modio/FileIO/MD5ComputingStreamWrapper.hpp"
#include "Modio/FileIO/MD5ComputingStreamWrapper__GetMD5HashAsync_d__10.hpp"
#include "Modio/FileIO/MD5ComputingStreamWrapper__ReadAsync_d__11.hpp"
#include "Modio/FileIO/MacDataStorage.hpp"
#include "Modio/FileIO/MacDataStorage_UnixStatsFs.hpp"
#include "Modio/FileIO/ModInstallProgressTracker.hpp"
#include "Modio/FileIO/ModioDiskTestSettings.hpp"
#include "Modio/FileIO/WindowsRootPathProvider.hpp"
#ifdef __cpp_modules
                    export module FileIO;
                    #endif
                
