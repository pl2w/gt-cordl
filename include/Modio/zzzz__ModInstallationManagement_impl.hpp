#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_impl.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_impl.hpp"
#include "Modio/zzzz__ModInstallationManagement_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__ModInstallationManagement_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
#include "Modio/Mods/zzzz__ModFileState_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__Modfile_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModIndex_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_DownloadAndExtractJob__Run_d__3_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_DownloadJob__Run_d__1_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_InstallJob__Run_d__2_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_ScanForInstalledModJob__Run_d__1_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_ScanMissingInstallsJob__Run_d__1_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_UninstallJob__Run_d__1_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_ValidateJob__Run_d__1_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__AddTemporaryMods_d__44_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__DownloadAndInstallMod_d__53_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__EnqueueJobs_d__41_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__ExecuteJobs_d__40_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__GetAllInstalledMods_d__36_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__Init_d__30_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__IsThereAvailableSpaceFor_d__64_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__RetryInstallingMod_d__48_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__SaveIndex_d__39_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__Shutdown_d__31_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__StartTempModSession_d__42_def.hpp"
#include "Modio/zzzz__ModInstallationManagement__UninstallAllMods_d__65_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::ModInstallationManagement.get_DownloadAndExtractAsSingleJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::ModInstallationManagement::get_DownloadAndExtractAsSingleJob)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa008860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_DownloadAndExtractAsSingleJob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.set_DownloadAndExtractAsSingleJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::ModInstallationManagement::set_DownloadAndExtractAsSingleJob)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa0088b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"set_DownloadAndExtractAsSingleJob", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.get_CurrentOperationOnMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (*)()>(&::Modio::ModInstallationManagement::get_CurrentOperationOnMod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa008918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_CurrentOperationOnMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.add_ManagementEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*)>(&::Modio::ModInstallationManagement::add_ManagementEvents)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa008980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"add_ManagementEvents", {}, {::i2c::type_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.remove_ManagementEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*)>(&::Modio::ModInstallationManagement::remove_ManagementEvents)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa008a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"remove_ManagementEvents", {}, {::i2c::type_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::ModInstallationManagement::get_IsInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa008b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.get_PendingModOperationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Modio::ModInstallationManagement::get_PendingModOperationCount)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa008b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_PendingModOperationCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::ModInstallationManagement::get_IsRunning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa008c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::Modio::ModInstallationManagement::Init)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa008c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::Modio::ModInstallationManagement::Shutdown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa008d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.WakeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModInstallationManagement::WakeUp)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa008e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"WakeUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModInstallationManagement::Activate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa009158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"Activate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::ModInstallationManagement::Deactivate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa0091b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"Deactivate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.IsModSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int64_t)>(&::Modio::ModInstallationManagement::IsModSubscribed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa009368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"IsModSubscribed", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.GetAllInstalledMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>* (*)(bool)>(&::Modio::ModInstallationManagement::GetAllInstalledMods)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa009460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"GetAllInstalledMods", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.GetTotalDiskUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(bool)>(&::Modio::ModInstallationManagement::GetTotalDiskUsage)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xa009560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"GetTotalDiskUsage", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.GetModRespectingIndexCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (*)(int64_t)>(&::Modio::ModInstallationManagement::GetModRespectingIndexCache)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa0097c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"GetModRespectingIndexCache", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.SaveIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::Modio::ModInstallationManagement::SaveIndex)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa009ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"SaveIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.ExecuteJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModInstallationManagement::ExecuteJobs)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa0090c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"ExecuteJobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.EnqueueJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::Modio::ModInstallationManagement::EnqueueJobs)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa009ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"EnqueueJobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.StartTempModSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::System::Collections::Generic::List_1<::Modio::Mods::ModId>*, bool)>(&::Modio::ModInstallationManagement::StartTempModSession)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa009c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"StartTempModSession", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::ModId>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.EndCurrentTempModSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModInstallationManagement::EndCurrentTempModSession)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa009d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"EndCurrentTempModSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.AddTemporaryMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::System::Collections::Generic::List_1<::Modio::Mods::ModId>*, int32_t)>(&::Modio::ModInstallationManagement::AddTemporaryMods)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa009e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"AddTemporaryMods", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::ModId>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.AddTemporaryMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*, int32_t)>(&::Modio::ModInstallationManagement::AddTemporaryMod)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa009f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"AddTemporaryMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.ClearExpiredTempMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModInstallationManagement::ClearExpiredTempMods)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa00a090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"ClearExpiredTempMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.RetryInstallingTaintedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModInstallationManagement::RetryInstallingTaintedMods)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa00a0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"RetryInstallingTaintedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.RetryInstallingMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement::RetryInstallingMod)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa00a2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"RetryInstallingMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.MarkModForUninstallation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement::MarkModForUninstallation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa00a3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"MarkModForUninstallation", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.OnModSubscriptionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*, ::Modio::Mods::ModChangeType)>(&::Modio::ModInstallationManagement::OnModSubscriptionChange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa00a468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"OnModSubscriptionChange", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.CancelInstallOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement::CancelInstallOperation)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa00925c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"CancelInstallOperation", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.DoesModNeedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement::DoesModNeedUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa00a594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"DoesModNeedUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.DownloadAndInstallMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::Modio::Mods::ModId)>(&::Modio::ModInstallationManagement::DownloadAndInstallMod)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa00a630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"DownloadAndInstallMod", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.IsThereAvailableSpaceFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement::IsThereAvailableSpaceFor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa00a72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"IsThereAvailableSpaceFor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.UninstallAllMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::Modio::ModInstallationManagement::UninstallAllMods)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa00a834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"UninstallAllMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.RefreshMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement::RefreshMod)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa00a8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"RefreshMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.RefreshMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*)>(&::Modio::ModInstallationManagement::RefreshMods)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa00a9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"RefreshMods", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.NotifyLoggingOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModInstallationManagement::NotifyLoggingOut)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0xa00ab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"NotifyLoggingOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.ValidateInstalledMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement::ValidateInstalledMod)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa00b098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"ValidateInstalledMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement.GetHiddenModObjectFromIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::SchemaDefinitions::ModObject (*)(::Modio::Mods::ModId, ::Modio::ModIndex*)>(&::Modio::ModInstallationManagement::GetHiddenModObjectFromIndex)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa00b25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"GetHiddenModObjectFromIndex", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::Modio::ModIndex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement._EnqueueJobs_g__EnqueueJobsIfNeeded_41_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModIndex_IndexEntry*, ::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement::_EnqueueJobs_g__EnqueueJobsIfNeeded_41_0)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0xa00b5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"<EnqueueJobs>g__EnqueueJobsIfNeeded|41_0", {}, {::i2c::type_of<::Modio::ModIndex_IndexEntry*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::ModInstallationManagement::setStaticF__DownloadAndExtractAsSingleJob_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<DownloadAndExtractAsSingleJob>k__BackingField", ::Modio::ModInstallationManagement*>(std::forward<bool>(value));
}
inline bool Modio::ModInstallationManagement::getStaticF__DownloadAndExtractAsSingleJob_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<DownloadAndExtractAsSingleJob>k__BackingField", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__uninstallUnsubscribedMods(bool  value)  {
::cordl_internals::setStaticField<bool, "_uninstallUnsubscribedMods", ::Modio::ModInstallationManagement*>(std::forward<bool>(value));
}
inline bool Modio::ModInstallationManagement::getStaticF__uninstallUnsubscribedMods()  {
return ::cordl_internals::getStaticField<bool, "_uninstallUnsubscribedMods", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__index(::Modio::ModIndex*  value)  {
::cordl_internals::setStaticField<::Modio::ModIndex*, "_index", ::Modio::ModInstallationManagement*>(std::forward<::Modio::ModIndex*>(value));
}
inline ::Modio::ModIndex* Modio::ModInstallationManagement::getStaticF__index()  {
return ::cordl_internals::getStaticField<::Modio::ModIndex*, "_index", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__currentOperation(::Modio::ModInstallationManagement_Job*  value)  {
::cordl_internals::setStaticField<::Modio::ModInstallationManagement_Job*, "_currentOperation", ::Modio::ModInstallationManagement*>(std::forward<::Modio::ModInstallationManagement_Job*>(value));
}
inline ::Modio::ModInstallationManagement_Job* Modio::ModInstallationManagement::getStaticF__currentOperation()  {
return ::cordl_internals::getStaticField<::Modio::ModInstallationManagement_Job*, "_currentOperation", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__isRunning(bool  value)  {
::cordl_internals::setStaticField<bool, "_isRunning", ::Modio::ModInstallationManagement*>(std::forward<bool>(value));
}
inline bool Modio::ModInstallationManagement::getStaticF__isRunning()  {
return ::cordl_internals::getStaticField<bool, "_isRunning", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__operationQueue(::System::Collections::Generic::Queue_1<::Modio::ModInstallationManagement_Job*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::Modio::ModInstallationManagement_Job*>*, "_operationQueue", ::Modio::ModInstallationManagement*>(std::forward<::System::Collections::Generic::Queue_1<::Modio::ModInstallationManagement_Job*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::Modio::ModInstallationManagement_Job*>* Modio::ModInstallationManagement::getStaticF__operationQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::Modio::ModInstallationManagement_Job*>*, "_operationQueue", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__requestedModDownloads(::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*, "_requestedModDownloads", ::Modio::ModInstallationManagement*>(std::forward<::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>* Modio::ModInstallationManagement::getStaticF__requestedModDownloads()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*, "_requestedModDownloads", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__downloadAttemptsThisSession(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "_downloadAttemptsThisSession", ::Modio::ModInstallationManagement*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* Modio::ModInstallationManagement::getStaticF__downloadAttemptsThisSession()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "_downloadAttemptsThisSession", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__missingModfileReenqueues(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "_missingModfileReenqueues", ::Modio::ModInstallationManagement*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* Modio::ModInstallationManagement::getStaticF__missingModfileReenqueues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "_missingModfileReenqueues", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__modsToRefresh(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*, "_modsToRefresh", ::Modio::ModInstallationManagement*>(std::forward<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* Modio::ModInstallationManagement::getStaticF__modsToRefresh()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*, "_modsToRefresh", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__currentSessionMods(::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*, "_currentSessionMods", ::Modio::ModInstallationManagement*>(std::forward<::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>* Modio::ModInstallationManagement::getStaticF__currentSessionMods()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*, "_currentSessionMods", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__modsToUninstall(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*, "_modsToUninstall", ::Modio::ModInstallationManagement*>(std::forward<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* Modio::ModInstallationManagement::getStaticF__modsToUninstall()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*, "_modsToUninstall", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__unverifiedMods(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*, "_unverifiedMods", ::Modio::ModInstallationManagement*>(std::forward<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* Modio::ModInstallationManagement::getStaticF__unverifiedMods()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*, "_unverifiedMods", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__hasScannedMissingMods(bool  value)  {
::cordl_internals::setStaticField<bool, "_hasScannedMissingMods", ::Modio::ModInstallationManagement*>(std::forward<bool>(value));
}
inline bool Modio::ModInstallationManagement::getStaticF__hasScannedMissingMods()  {
return ::cordl_internals::getStaticField<bool, "_hasScannedMissingMods", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF__isDeactivated(bool  value)  {
::cordl_internals::setStaticField<bool, "_isDeactivated", ::Modio::ModInstallationManagement*>(std::forward<bool>(value));
}
inline bool Modio::ModInstallationManagement::getStaticF__isDeactivated()  {
return ::cordl_internals::getStaticField<bool, "_isDeactivated", ::Modio::ModInstallationManagement*>();
}
inline void Modio::ModInstallationManagement::setStaticF_ManagementEvents(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*  value)  {
::cordl_internals::setStaticField<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*, "ManagementEvents", ::Modio::ModInstallationManagement*>(std::forward<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(value));
}
inline ::Modio::ModInstallationManagement_InstallationManagementEventDelegate* Modio::ModInstallationManagement::getStaticF_ManagementEvents()  {
return ::cordl_internals::getStaticField<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*, "ManagementEvents", ::Modio::ModInstallationManagement*>();
}
inline bool Modio::ModInstallationManagement::get_DownloadAndExtractAsSingleJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_DownloadAndExtractAsSingleJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::ModInstallationManagement::set_DownloadAndExtractAsSingleJob(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"set_DownloadAndExtractAsSingleJob", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Modio::Mods::Mod* Modio::ModInstallationManagement::get_CurrentOperationOnMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_CurrentOperationOnMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(nullptr, ___internal_method);
}
inline void Modio::ModInstallationManagement::add_ManagementEvents(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"add_ManagementEvents", {}, {::i2c::type_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::ModInstallationManagement::remove_ManagementEvents(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"remove_ManagementEvents", {}, {::i2c::type_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Modio::ModInstallationManagement::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Modio::ModInstallationManagement::get_PendingModOperationCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_PendingModOperationCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Modio::ModInstallationManagement::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::ModInstallationManagement::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void Modio::ModInstallationManagement::WakeUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"WakeUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Modio::ModInstallationManagement::Activate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"Activate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Modio::ModInstallationManagement::Deactivate(bool  cancelCurrentJob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"Deactivate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cancelCurrentJob);
}
inline bool Modio::ModInstallationManagement::IsModSubscribed(int64_t  modId, int64_t  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"IsModSubscribed", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, modId, userId);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>* Modio::ModInstallationManagement::GetAllInstalledMods(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"GetAllInstalledMods", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>*>(nullptr, ___internal_method, forceRefresh);
}
inline int64_t Modio::ModInstallationManagement::GetTotalDiskUsage(bool  includeQueued)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"GetTotalDiskUsage", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, includeQueued);
}
inline ::Modio::Mods::Mod* Modio::ModInstallationManagement::GetModRespectingIndexCache(int64_t  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"GetModRespectingIndexCache", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(nullptr, ___internal_method, modId);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement::SaveIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"SaveIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline void Modio::ModInstallationManagement::ExecuteJobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"ExecuteJobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::ModInstallationManagement::EnqueueJobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"EnqueueJobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement::StartTempModSession(::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  tempMods, bool  appendCurrentSession)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"StartTempModSession", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::ModId>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, tempMods, appendCurrentSession);
}
inline void Modio::ModInstallationManagement::EndCurrentTempModSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"EndCurrentTempModSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement::AddTemporaryMods(::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  tempMods, int32_t  lifeTimeDaysOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"AddTemporaryMods", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::ModId>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, tempMods, lifeTimeDaysOverride);
}
inline void Modio::ModInstallationManagement::AddTemporaryMod(::Modio::Mods::Mod*  modId, int32_t  lifetime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"AddTemporaryMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, modId, lifetime);
}
inline void Modio::ModInstallationManagement::ClearExpiredTempMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"ClearExpiredTempMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Modio::ModInstallationManagement::RetryInstallingTaintedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"RetryInstallingTaintedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement::RetryInstallingMod(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"RetryInstallingMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, mod);
}
inline void Modio::ModInstallationManagement::MarkModForUninstallation(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"MarkModForUninstallation", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod);
}
inline void Modio::ModInstallationManagement::OnModSubscriptionChange(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"OnModSubscriptionChange", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod, changeType);
}
inline void Modio::ModInstallationManagement::CancelInstallOperation(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"CancelInstallOperation", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod);
}
inline bool Modio::ModInstallationManagement::DoesModNeedUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"DoesModNeedUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::ModInstallationManagement::DownloadAndInstallMod(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"DownloadAndInstallMod", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, modId);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::ModInstallationManagement::IsThereAvailableSpaceFor(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"IsThereAvailableSpaceFor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task* Modio::ModInstallationManagement::UninstallAllMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"UninstallAllMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void Modio::ModInstallationManagement::RefreshMod(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"RefreshMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod);
}
inline void Modio::ModInstallationManagement::RefreshMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  mods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"RefreshMods", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mods);
}
inline void Modio::ModInstallationManagement::NotifyLoggingOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"NotifyLoggingOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Modio::ModInstallationManagement::ValidateInstalledMod(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"ValidateInstalledMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mod);
}
inline ::Modio::API::SchemaDefinitions::ModObject Modio::ModInstallationManagement::GetHiddenModObjectFromIndex(::Modio::Mods::ModId  modId, ::Modio::ModIndex*  tempIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"GetHiddenModObjectFromIndex", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::Modio::ModIndex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::SchemaDefinitions::ModObject>(nullptr, ___internal_method, modId, tempIndex);
}
inline void Modio::ModInstallationManagement::_EnqueueJobs_g__EnqueueJobsIfNeeded_41_0(::Modio::ModIndex_IndexEntry*  entry, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement*>(),
                        {"<EnqueueJobs>g__EnqueueJobsIfNeeded|41_0", {}, {::i2c::type_of<::Modio::ModIndex_IndexEntry*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entry, mod);
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement::ModInstallationManagement()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement___c::*)()>(&::Modio::ModInstallationManagement___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa012394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement___c._AddTemporaryMods_b__44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::ModInstallationManagement___c::*)(::Modio::Mods::ModId)>(&::Modio::ModInstallationManagement___c::_AddTemporaryMods_b__44_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01239c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement___c*>(),
                        {"<AddTemporaryMods>b__44_0", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement___c._AddTemporaryMods_b__44_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::ModInstallationManagement___c::*)(::Modio::Mods::ModId)>(&::Modio::ModInstallationManagement___c::_AddTemporaryMods_b__44_1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa0123a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement___c*>(),
                        {"<AddTemporaryMods>b__44_1", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::ModInstallationManagement___c::setStaticF___9(::Modio::ModInstallationManagement___c*  value)  {
::cordl_internals::setStaticField<::Modio::ModInstallationManagement___c*, "<>9", ::Modio::ModInstallationManagement___c*>(std::forward<::Modio::ModInstallationManagement___c*>(value));
}
inline ::Modio::ModInstallationManagement___c* Modio::ModInstallationManagement___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::ModInstallationManagement___c*, "<>9", ::Modio::ModInstallationManagement___c*>();
}
inline void Modio::ModInstallationManagement___c::setStaticF___9__44_0(::System::Func_2<::Modio::Mods::ModId,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::ModId,int64_t>*, "<>9__44_0", ::Modio::ModInstallationManagement___c*>(std::forward<::System::Func_2<::Modio::Mods::ModId,int64_t>*>(value));
}
inline ::System::Func_2<::Modio::Mods::ModId,int64_t>* Modio::ModInstallationManagement___c::getStaticF___9__44_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::ModId,int64_t>*, "<>9__44_0", ::Modio::ModInstallationManagement___c*>();
}
inline void Modio::ModInstallationManagement___c::setStaticF___9__44_1(::System::Func_2<::Modio::Mods::ModId,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::ModId,bool>*, "<>9__44_1", ::Modio::ModInstallationManagement___c*>(std::forward<::System::Func_2<::Modio::Mods::ModId,bool>*>(value));
}
inline ::System::Func_2<::Modio::Mods::ModId,bool>* Modio::ModInstallationManagement___c::getStaticF___9__44_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::ModId,bool>*, "<>9__44_1", ::Modio::ModInstallationManagement___c*>();
}
inline void Modio::ModInstallationManagement___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Modio::ModInstallationManagement___c::_AddTemporaryMods_b__44_0(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement___c*>(),
                        {"<AddTemporaryMods>b__44_0", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, modId);
}
inline bool Modio::ModInstallationManagement___c::_AddTemporaryMods_b__44_1(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement___c*>(),
                        {"<AddTemporaryMods>b__44_1", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId);
}
inline ::Modio::ModInstallationManagement___c* Modio::ModInstallationManagement___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement___c*>());
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement___c::ModInstallationManagement___c()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_ScanForInstalledModJob._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_ScanForInstalledModJob::*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement_ScanForInstalledModJob::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa011c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_ScanForInstalledModJob.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::ModInstallationManagement_ScanForInstalledModJob::*)()>(&::Modio::ModInstallationManagement_ScanForInstalledModJob::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa011ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_ScanForInstalledModJob.GetPendingSpaceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_ScanForInstalledModJob::*)(::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Modio::ModInstallationManagement_ScanForInstalledModJob::GetPendingSpaceChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa011db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Modio::ModInstallationManagement_ScanForInstalledModJob::_ctor(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement_ScanForInstalledModJob::Run()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_ScanForInstalledModJob::GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spaceRequired, tempSpaceRequired);
}
inline ::Modio::ModInstallationManagement_ScanForInstalledModJob* Modio::ModInstallationManagement_ScanForInstalledModJob::New_ctor(::Modio::Mods::Mod*  mod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_ScanForInstalledModJob*>(mod));
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_ScanForInstalledModJob::ModInstallationManagement_ScanForInstalledModJob()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_ScanMissingInstallsJob._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_ScanMissingInstallsJob::*)()>(&::Modio::ModInstallationManagement_ScanMissingInstallsJob::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa0116d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_ScanMissingInstallsJob.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::ModInstallationManagement_ScanMissingInstallsJob::*)()>(&::Modio::ModInstallationManagement_ScanMissingInstallsJob::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa0116e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_ScanMissingInstallsJob.GetPendingSpaceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_ScanMissingInstallsJob::*)(::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Modio::ModInstallationManagement_ScanMissingInstallsJob::GetPendingSpaceChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa0117f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Modio::ModInstallationManagement_ScanMissingInstallsJob::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement_ScanMissingInstallsJob::Run()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_ScanMissingInstallsJob::GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spaceRequired, tempSpaceRequired);
}
inline ::Modio::ModInstallationManagement_ScanMissingInstallsJob* Modio::ModInstallationManagement_ScanMissingInstallsJob::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_ScanMissingInstallsJob*>());
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_ScanMissingInstallsJob::ModInstallationManagement_ScanMissingInstallsJob()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_ValidateJob._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_ValidateJob::*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement_ValidateJob::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa00bafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_ValidateJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_ValidateJob.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::ModInstallationManagement_ValidateJob::*)()>(&::Modio::ModInstallationManagement_ValidateJob::Run)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa010f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_ValidateJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_ValidateJob*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_ValidateJob.GetPendingSpaceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_ValidateJob::*)(::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Modio::ModInstallationManagement_ValidateJob::GetPendingSpaceChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa01108c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_ValidateJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_ValidateJob*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Modio::ModInstallationManagement_ValidateJob::_ctor(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_ValidateJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement_ValidateJob::Run()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_ValidateJob*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_ValidateJob::GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_ValidateJob*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spaceRequired, tempSpaceRequired);
}
inline ::Modio::ModInstallationManagement_ValidateJob* Modio::ModInstallationManagement_ValidateJob::New_ctor(::Modio::Mods::Mod*  mod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_ValidateJob*>(mod));
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_ValidateJob::ModInstallationManagement_ValidateJob()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_UninstallJob._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_UninstallJob::*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement_UninstallJob::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0107d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_UninstallJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_UninstallJob.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::ModInstallationManagement_UninstallJob::*)()>(&::Modio::ModInstallationManagement_UninstallJob::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa0107e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_UninstallJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_UninstallJob*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_UninstallJob.GetPendingSpaceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_UninstallJob::*)(::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Modio::ModInstallationManagement_UninstallJob::GetPendingSpaceChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa0108ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_UninstallJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_UninstallJob*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Modio::ModInstallationManagement_UninstallJob::_ctor(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_UninstallJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement_UninstallJob::Run()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_UninstallJob*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_UninstallJob::GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_UninstallJob*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spaceRequired, tempSpaceRequired);
}
inline ::Modio::ModInstallationManagement_UninstallJob* Modio::ModInstallationManagement_UninstallJob::New_ctor(::Modio::Mods::Mod*  mod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_UninstallJob*>(mod));
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_UninstallJob::ModInstallationManagement_UninstallJob()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_DownloadAndExtractJob.get_IsUpdateJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::ModInstallationManagement_DownloadAndExtractJob::*)()>(&::Modio::ModInstallationManagement_DownloadAndExtractJob::get_IsUpdateJob)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa00f068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(),
                        {"get_IsUpdateJob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_DownloadAndExtractJob._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_DownloadAndExtractJob::*)(::Modio::Mods::Mod*, bool)>(&::Modio::ModInstallationManagement_DownloadAndExtractJob::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa00bb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_DownloadAndExtractJob.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::ModInstallationManagement_DownloadAndExtractJob::*)()>(&::Modio::ModInstallationManagement_DownloadAndExtractJob::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa00f078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_DownloadAndExtractJob.GetPendingSpaceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_DownloadAndExtractJob::*)(::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Modio::ModInstallationManagement_DownloadAndExtractJob::GetPendingSpaceChange)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa00f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(), 5}
                ));
    return ___internal_method;
  }
};
inline bool Modio::ModInstallationManagement_DownloadAndExtractJob::get_IsUpdateJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(),
                        {"get_IsUpdateJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_DownloadAndExtractJob::_ctor(::Modio::Mods::Mod*  mod, bool  isUpdateJob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, isUpdateJob);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement_DownloadAndExtractJob::Run()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_DownloadAndExtractJob::GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spaceRequired, tempSpaceRequired);
}
inline ::Modio::ModInstallationManagement_DownloadAndExtractJob* Modio::ModInstallationManagement_DownloadAndExtractJob::New_ctor(::Modio::Mods::Mod*  mod, bool  isUpdateJob)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_DownloadAndExtractJob*>(mod, isUpdateJob));
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_DownloadAndExtractJob::ModInstallationManagement_DownloadAndExtractJob()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_InstallJob._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_InstallJob::*)(::Modio::Mods::Mod*, bool)>(&::Modio::ModInstallationManagement_InstallJob::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa00bb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_InstallJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_InstallJob.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::ModInstallationManagement_InstallJob::*)()>(&::Modio::ModInstallationManagement_InstallJob::Run)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa00d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_InstallJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_InstallJob*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_InstallJob.GetPendingSpaceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_InstallJob::*)(::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Modio::ModInstallationManagement_InstallJob::GetPendingSpaceChange)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa00da9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_InstallJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_InstallJob*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr bool& Modio::ModInstallationManagement_InstallJob::__cordl_internal_get__isUpdateJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUpdateJob;
}
constexpr bool const& Modio::ModInstallationManagement_InstallJob::__cordl_internal_get__isUpdateJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUpdateJob;
}
constexpr void Modio::ModInstallationManagement_InstallJob::__cordl_internal_set__isUpdateJob(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isUpdateJob = value;
}
inline void Modio::ModInstallationManagement_InstallJob::_ctor(::Modio::Mods::Mod*  mod, bool  isUpdateJob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_InstallJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, isUpdateJob);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement_InstallJob::Run()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_InstallJob*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_InstallJob::GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_InstallJob*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spaceRequired, tempSpaceRequired);
}
inline ::Modio::ModInstallationManagement_InstallJob* Modio::ModInstallationManagement_InstallJob::New_ctor(::Modio::Mods::Mod*  mod, bool  isUpdateJob)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_InstallJob*>(mod, isUpdateJob));
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_InstallJob::ModInstallationManagement_InstallJob()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_DownloadJob._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_DownloadJob::*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement_DownloadJob::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa00bb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_DownloadJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_DownloadJob.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::ModInstallationManagement_DownloadJob::*)()>(&::Modio::ModInstallationManagement_DownloadJob::Run)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa00bf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_DownloadJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_DownloadJob*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_DownloadJob.GetPendingSpaceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_DownloadJob::*)(::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Modio::ModInstallationManagement_DownloadJob::GetPendingSpaceChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa00c058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_DownloadJob*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_DownloadJob*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Modio::ModInstallationManagement_DownloadJob::_ctor(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_DownloadJob*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement_DownloadJob::Run()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_DownloadJob*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_DownloadJob::GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_DownloadJob*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spaceRequired, tempSpaceRequired);
}
inline ::Modio::ModInstallationManagement_DownloadJob* Modio::ModInstallationManagement_DownloadJob::New_ctor(::Modio::Mods::Mod*  mod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_DownloadJob*>(mod));
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_DownloadJob::ModInstallationManagement_DownloadJob()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_Job.get_Mod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (::Modio::ModInstallationManagement_Job::*)()>(&::Modio::ModInstallationManagement_Job::get_Mod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa00bd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"get_Mod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_Job.set_Mod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_Job::*)(::Modio::Mods::Mod*)>(&::Modio::ModInstallationManagement_Job::set_Mod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa00bd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"set_Mod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_Job._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_Job::*)(::Modio::Mods::Mod*, ::GlobalNamespace::ModInstallationManagement_OperationType)>(&::Modio::ModInstallationManagement_Job::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa00bd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_Job.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::ModInstallationManagement_Job::*)()>(&::Modio::ModInstallationManagement_Job::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_Job*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_Job.PostEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_Job::*)(::GlobalNamespace::ModInstallationManagement_OperationPhase, ::Modio::Mods::ModFileState, ::Modio::Error*)>(&::Modio::ModInstallationManagement_Job::PostEvent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa00be14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"PostEvent", {}, {::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>(), ::i2c::type_of<::Modio::Mods::ModFileState>(), ::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_Job.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_Job::*)()>(&::Modio::ModInstallationManagement_Job::Cancel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa00a57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_Job.GetPendingSpaceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_Job::*)(::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Modio::ModInstallationManagement_Job::GetPendingSpaceChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_Job*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_Job.ClearMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_Job::*)()>(&::Modio::ModInstallationManagement_Job::ClearMod)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa00bf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"ClearMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationTokenSource*& Modio::ModInstallationManagement_Job::__cordl_internal_get__cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Modio::ModInstallationManagement_Job::__cordl_internal_get__cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr void Modio::ModInstallationManagement_Job::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationTokenSource = value;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<::Modio::Error*>*>*& Modio::ModInstallationManagement_Job::__cordl_internal_get_Operation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Operation;
}
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<::Modio::Error*>*>* const& Modio::ModInstallationManagement_Job::__cordl_internal_get_Operation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Operation;
}
constexpr void Modio::ModInstallationManagement_Job::__cordl_internal_set_Operation(::System::Func_1<::System::Threading::Tasks::Task_1<::Modio::Error*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Operation = value;
}
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType& Modio::ModInstallationManagement_Job::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType const& Modio::ModInstallationManagement_Job::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Modio::ModInstallationManagement_Job::__cordl_internal_set_Type(::GlobalNamespace::ModInstallationManagement_OperationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::Modio::Mods::Mod*& Modio::ModInstallationManagement_Job::__cordl_internal_get__mod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr ::Modio::Mods::Mod* const& Modio::ModInstallationManagement_Job::__cordl_internal_get__mod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr void Modio::ModInstallationManagement_Job::__cordl_internal_set__mod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mod = value;
}
constexpr ::System::Threading::CancellationToken& Modio::ModInstallationManagement_Job::__cordl_internal_get_CancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Modio::ModInstallationManagement_Job::__cordl_internal_get_CancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationToken;
}
constexpr void Modio::ModInstallationManagement_Job::__cordl_internal_set_CancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CancellationToken = value;
}
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase& Modio::ModInstallationManagement_Job::__cordl_internal_get_Phase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Phase;
}
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase const& Modio::ModInstallationManagement_Job::__cordl_internal_get_Phase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Phase;
}
constexpr void Modio::ModInstallationManagement_Job::__cordl_internal_set_Phase(::GlobalNamespace::ModInstallationManagement_OperationPhase  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Phase = value;
}
inline ::Modio::Mods::Mod* Modio::ModInstallationManagement_Job::get_Mod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"get_Mod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_Job::set_Mod(::Modio::Mods::Mod*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"set_Mod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::ModInstallationManagement_Job::_ctor(::Modio::Mods::Mod*  mod, ::GlobalNamespace::ModInstallationManagement_OperationType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, type);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModInstallationManagement_Job::Run()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_Job*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_Job::PostEvent(::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase, ::Modio::Mods::ModFileState  modState, ::Modio::Error*  errorCause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"PostEvent", {}, {::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>(), ::i2c::type_of<::Modio::Mods::ModFileState>(), ::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobPhase, modState, errorCause);
}
inline void Modio::ModInstallationManagement_Job::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::ModInstallationManagement_Job::GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_Job*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spaceRequired, tempSpaceRequired);
}
inline void Modio::ModInstallationManagement_Job::ClearMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_Job*>(),
                        {"ClearMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::ModInstallationManagement_Job* Modio::ModInstallationManagement_Job::New_ctor(::Modio::Mods::Mod*  mod, ::GlobalNamespace::ModInstallationManagement_OperationType  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_Job*>(mod, type));
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_Job::ModInstallationManagement_Job()   {
}
//  Writing Method size for method: ::Modio::ModInstallationManagement_InstallationManagementEventDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_InstallationManagementEventDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Modio::ModInstallationManagement_InstallationManagementEventDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa00bb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_InstallationManagementEventDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_InstallationManagementEventDelegate::*)(::Modio::Mods::Mod*, ::Modio::Mods::Modfile*, ::GlobalNamespace::ModInstallationManagement_OperationType, ::GlobalNamespace::ModInstallationManagement_OperationPhase)>(&::Modio::ModInstallationManagement_InstallationManagementEventDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa00bc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_InstallationManagementEventDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Modio::ModInstallationManagement_InstallationManagementEventDelegate::*)(::Modio::Mods::Mod*, ::Modio::Mods::Modfile*, ::GlobalNamespace::ModInstallationManagement_OperationType, ::GlobalNamespace::ModInstallationManagement_OperationPhase, ::System::AsyncCallback*, ::System::Object*)>(&::Modio::ModInstallationManagement_InstallationManagementEventDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa00bc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModInstallationManagement_InstallationManagementEventDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModInstallationManagement_InstallationManagementEventDelegate::*)(::System::IAsyncResult*)>(&::Modio::ModInstallationManagement_InstallationManagementEventDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa00bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(),
                    {::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Modio::ModInstallationManagement_InstallationManagementEventDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Modio::ModInstallationManagement_InstallationManagementEventDelegate::Invoke(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, modfile, jobType, jobPhase);
}
inline ::System::IAsyncResult* Modio::ModInstallationManagement_InstallationManagementEventDelegate::BeginInvoke(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, mod, modfile, jobType, jobPhase, callback, object);
}
inline void Modio::ModInstallationManagement_InstallationManagementEventDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Modio::ModInstallationManagement_InstallationManagementEventDelegate* Modio::ModInstallationManagement_InstallationManagementEventDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModInstallationManagement_InstallationManagementEventDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Modio::ModInstallationManagement_InstallationManagementEventDelegate::ModInstallationManagement_InstallationManagementEventDelegate()   {
}
