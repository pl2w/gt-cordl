#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionController_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionController__ReportProgress_d__71_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionController__RequestProgressRedemption_d__66_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionController__RequestStatus_d__36_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionController__WaitForSessionToken_d__37_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionController_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuestsManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.add_OnQuestSelectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::ProgressionController::add_OnQuestSelectionChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x562454c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"add_OnQuestSelectionChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.remove_OnQuestSelectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::ProgressionController::remove_OnQuestSelectionChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5624a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"remove_OnQuestSelectionChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.add_OnProgressEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::ProgressionController::add_OnProgressEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5624628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"add_OnProgressEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.remove_OnProgressEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::ProgressionController::remove_OnProgressEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5624af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"remove_OnProgressEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.get_WeeklyCap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::ProgressionController::get_WeeklyCap)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5628960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"get_WeeklyCap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.set_WeeklyCap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::ProgressionController::set_WeeklyCap)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56289b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"set_WeeklyCap", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.get_TotalPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::ProgressionController::get_TotalPoints)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5628a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"get_TotalPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.ReportQuestChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::ProgressionController::ReportQuestChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5628a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportQuestChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.ReportQuestSelectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ProgressionController::ReportQuestSelectionChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5628ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportQuestSelectionChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.ReportQuestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::GlobalNamespace::ProgressionController::ReportQuestComplete)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5628e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportQuestComplete", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.RedeemProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ProgressionController::RedeemProgress)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5625aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"RedeemProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.GetProgressionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<int32_t,int32_t,int32_t> (*)()>(&::GlobalNamespace::ProgressionController::GetProgressionData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5624f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"GetProgressionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.RequestProgressUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ProgressionController::RequestProgressUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5624704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"RequestProgressUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x56290c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.RequestStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::RequestStatus)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5629244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"RequestStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.WaitForSessionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::WaitForSessionToken)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56292ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"WaitForSessionToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.FetchStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::FetchStatus)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x56293b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"FetchStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.DoFetchStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionController::*)(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*, ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*)>(&::GlobalNamespace::ProgressionController::DoFetchStatus)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x562950c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"DoFetchStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.OnFetchStatusResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(::GlobalNamespace::ProgressionController_GetQuestStatusResponse*)>(&::GlobalNamespace::ProgressionController::OnFetchStatusResponse)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x56295d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnFetchStatusResponse", {}, {::i2c::type_of<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.SendQuestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(int32_t)>(&::GlobalNamespace::ProgressionController::SendQuestCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56299b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"SendQuestCompleted", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.StartSendQuestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(int32_t)>(&::GlobalNamespace::ProgressionController::StartSendQuestComplete)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x56299c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"StartSendQuestComplete", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.DoSendQuestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionController::*)(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*, ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*)>(&::GlobalNamespace::ProgressionController::DoSendQuestComplete)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5629b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"DoSendQuestComplete", {}, {::i2c::type_of<::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.OnSendQuestCompleteSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*)>(&::GlobalNamespace::ProgressionController::OnSendQuestCompleteSuccess)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5629c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnSendQuestCompleteSuccess", {}, {::i2c::type_of<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.OnQuestProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(bool)>(&::GlobalNamespace::ProgressionController::OnQuestProgressChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5628adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnQuestProgressChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.OnQuestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(int32_t, bool)>(&::GlobalNamespace::ProgressionController::OnQuestComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5628f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnQuestComplete", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.QueueQuestCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(int32_t, bool)>(&::GlobalNamespace::ProgressionController::QueueQuestCompletion)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5629cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"QueueQuestCompletion", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.SubmitNextQuestInQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::SubmitNextQuestInQueue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5629fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"SubmitNextQuestInQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.ClearQuestQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::ClearQuestQueue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x562a114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ClearQuestQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.ProcessQuestSubmittedSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::ProcessQuestSubmittedSuccess)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x562a184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ProcessQuestSubmittedSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.ProcessQuestSubmittedFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::ProcessQuestSubmittedFail)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x562a230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ProcessQuestSubmittedFail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.AreCompletedQuestsQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::AreCompletedQuestsQueued)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x562a0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"AreCompletedQuestsQueued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.SaveCompletedQuestQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::SaveCompletedQuestQueue)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5629d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"SaveCompletedQuestQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.LoadCompletedQuestQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::LoadCompletedQuestQueue)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5628b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"LoadCompletedQuestQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.RequestProgressRedemption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(::System::Action*)>(&::GlobalNamespace::ProgressionController::RequestProgressRedemption)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5628f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"RequestProgressRedemption", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.OnProgressRedeemed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::OnProgressRedeemed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x562a23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnProgressRedeemed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.AddPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(int32_t)>(&::GlobalNamespace::ProgressionController::AddPoints)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x562a294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"AddPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.UpdateProgressionValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(int32_t, int32_t)>(&::GlobalNamespace::ProgressionController::UpdateProgressionValues)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5629cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"UpdateProgressionValues", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.SetProgressionValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::ProgressionController::SetProgressionValues)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5629938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"SetProgressionValues", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.ReportProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::ReportProgress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x562901c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.ReportScoreChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::ReportScoreChange)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x562a3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportScoreChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController.GetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<int32_t,int32_t,int32_t> (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::GetProgress)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5628fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"GetProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x562a58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController._RequestStatus_g__ShouldFetchStatus_36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionController::*)()>(&::GlobalNamespace::ProgressionController::_RequestStatus_g__ShouldFetchStatus_36_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x562a694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"<RequestStatus>g__ShouldFetchStatus|36_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RotatingQuestsManager>& GlobalNamespace::ProgressionController::__cordl_internal_get__questManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questManager;
}
constexpr ::UnityW<::GlobalNamespace::RotatingQuestsManager> const& GlobalNamespace::ProgressionController::__cordl_internal_get__questManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____questManager;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__questManager(::UnityW<::GlobalNamespace::RotatingQuestsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____questManager = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController::__cordl_internal_get_weeklyPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyPoints;
}
constexpr int32_t const& GlobalNamespace::ProgressionController::__cordl_internal_get_weeklyPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyPoints;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set_weeklyPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weeklyPoints = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController::__cordl_internal_get_totalPointsRaw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalPointsRaw;
}
constexpr int32_t const& GlobalNamespace::ProgressionController::__cordl_internal_get_totalPointsRaw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalPointsRaw;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set_totalPointsRaw(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalPointsRaw = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController::__cordl_internal_get_unclaimedPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unclaimedPoints;
}
constexpr int32_t const& GlobalNamespace::ProgressionController::__cordl_internal_get_unclaimedPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unclaimedPoints;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set_unclaimedPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unclaimedPoints = value;
}
constexpr bool& GlobalNamespace::ProgressionController::__cordl_internal_get__progressReportPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressReportPending;
}
constexpr bool const& GlobalNamespace::ProgressionController::__cordl_internal_get__progressReportPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressReportPending;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__progressReportPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressReportPending = value;
}
constexpr ::System::ValueTuple_3<int32_t,int32_t,int32_t>& GlobalNamespace::ProgressionController::__cordl_internal_get__lastProgressReport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastProgressReport;
}
constexpr ::System::ValueTuple_3<int32_t,int32_t,int32_t> const& GlobalNamespace::ProgressionController::__cordl_internal_get__lastProgressReport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastProgressReport;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__lastProgressReport(::System::ValueTuple_3<int32_t,int32_t,int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastProgressReport = value;
}
constexpr bool& GlobalNamespace::ProgressionController::__cordl_internal_get__isFetchingStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFetchingStatus;
}
constexpr bool const& GlobalNamespace::ProgressionController::__cordl_internal_get__isFetchingStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFetchingStatus;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__isFetchingStatus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFetchingStatus = value;
}
constexpr bool& GlobalNamespace::ProgressionController::__cordl_internal_get__statusReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusReceived;
}
constexpr bool const& GlobalNamespace::ProgressionController::__cordl_internal_get__statusReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statusReceived;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__statusReceived(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statusReceived = value;
}
constexpr bool& GlobalNamespace::ProgressionController::__cordl_internal_get__isSendingQuestComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSendingQuestComplete;
}
constexpr bool const& GlobalNamespace::ProgressionController::__cordl_internal_get__isSendingQuestComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSendingQuestComplete;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__isSendingQuestComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSendingQuestComplete = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController::__cordl_internal_get__fetchStatusRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fetchStatusRetryCount;
}
constexpr int32_t const& GlobalNamespace::ProgressionController::__cordl_internal_get__fetchStatusRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fetchStatusRetryCount;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__fetchStatusRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fetchStatusRetryCount = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController::__cordl_internal_get__sendQuestCompleteRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendQuestCompleteRetryCount;
}
constexpr int32_t const& GlobalNamespace::ProgressionController::__cordl_internal_get__sendQuestCompleteRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendQuestCompleteRetryCount;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__sendQuestCompleteRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendQuestCompleteRetryCount = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController::__cordl_internal_get__maxRetriesOnFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxRetriesOnFail;
}
constexpr int32_t const& GlobalNamespace::ProgressionController::__cordl_internal_get__maxRetriesOnFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxRetriesOnFail;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__maxRetriesOnFail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxRetriesOnFail = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ProgressionController::__cordl_internal_get__queuedDailyCompletedQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedDailyCompletedQuests;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ProgressionController::__cordl_internal_get__queuedDailyCompletedQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedDailyCompletedQuests;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__queuedDailyCompletedQuests(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queuedDailyCompletedQuests = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ProgressionController::__cordl_internal_get__queuedWeeklyCompletedQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedWeeklyCompletedQuests;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ProgressionController::__cordl_internal_get__queuedWeeklyCompletedQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedWeeklyCompletedQuests;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__queuedWeeklyCompletedQuests(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queuedWeeklyCompletedQuests = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController::__cordl_internal_get__currentlyProcessingQuest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyProcessingQuest;
}
constexpr int32_t const& GlobalNamespace::ProgressionController::__cordl_internal_get__currentlyProcessingQuest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyProcessingQuest;
}
constexpr void GlobalNamespace::ProgressionController::__cordl_internal_set__currentlyProcessingQuest(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentlyProcessingQuest = value;
}
inline void GlobalNamespace::ProgressionController::setStaticF__gInstance(::UnityW<::GlobalNamespace::ProgressionController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ProgressionController>, "_gInstance", ::GlobalNamespace::ProgressionController*>(std::forward<::UnityW<::GlobalNamespace::ProgressionController>>(value));
}
inline ::UnityW<::GlobalNamespace::ProgressionController> GlobalNamespace::ProgressionController::getStaticF__gInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ProgressionController>, "_gInstance", ::GlobalNamespace::ProgressionController*>();
}
inline void GlobalNamespace::ProgressionController::setStaticF_OnQuestSelectionChanged(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnQuestSelectionChanged", ::GlobalNamespace::ProgressionController*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::ProgressionController::getStaticF_OnQuestSelectionChanged()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnQuestSelectionChanged", ::GlobalNamespace::ProgressionController*>();
}
inline void GlobalNamespace::ProgressionController::setStaticF_OnProgressEvent(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnProgressEvent", ::GlobalNamespace::ProgressionController*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::ProgressionController::getStaticF_OnProgressEvent()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnProgressEvent", ::GlobalNamespace::ProgressionController*>();
}
inline void GlobalNamespace::ProgressionController::setStaticF__WeeklyCap_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<WeeklyCap>k__BackingField", ::GlobalNamespace::ProgressionController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ProgressionController::getStaticF__WeeklyCap_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<WeeklyCap>k__BackingField", ::GlobalNamespace::ProgressionController*>();
}
inline void GlobalNamespace::ProgressionController::add_OnQuestSelectionChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"add_OnQuestSelectionChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionController::remove_OnQuestSelectionChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"remove_OnQuestSelectionChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionController::add_OnProgressEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"add_OnProgressEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionController::remove_OnProgressEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"remove_OnProgressEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::ProgressionController::get_WeeklyCap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"get_WeeklyCap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::set_WeeklyCap(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"set_WeeklyCap", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::ProgressionController::get_TotalPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"get_TotalPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::ReportQuestChanged(bool  initialLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportQuestChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, initialLoad);
}
inline void GlobalNamespace::ProgressionController::ReportQuestSelectionChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportQuestSelectionChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::ReportQuestComplete(int32_t  questId, bool  isDaily)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportQuestComplete", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, questId, isDaily);
}
inline void GlobalNamespace::ProgressionController::RedeemProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"RedeemProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GlobalNamespace::ProgressionController::GetProgressionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"GetProgressionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t,int32_t,int32_t>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::RequestProgressUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"RequestProgressUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::RequestStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"RequestStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::ProgressionController::WaitForSessionToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"WaitForSessionToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::FetchStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"FetchStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionController::DoFetchStatus(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"DoFetchStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::ProgressionController::OnFetchStatusResponse(/* [CanBeNull] */ ::GlobalNamespace::ProgressionController_GetQuestStatusResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnFetchStatusResponse", {}, {::i2c::type_of<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::ProgressionController::SendQuestCompleted(int32_t  questId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"SendQuestCompleted", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questId);
}
inline void GlobalNamespace::ProgressionController::StartSendQuestComplete(int32_t  questId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"StartSendQuestComplete", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questId);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionController::DoSendQuestComplete(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"DoSendQuestComplete", {}, {::i2c::type_of<::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::ProgressionController::OnSendQuestCompleteSuccess(/* [CanBeNull] */ ::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnSendQuestCompleteSuccess", {}, {::i2c::type_of<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::ProgressionController::OnQuestProgressChanged(bool  initialLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnQuestProgressChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialLoad);
}
inline void GlobalNamespace::ProgressionController::OnQuestComplete(int32_t  questId, bool  isDaily)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnQuestComplete", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questId, isDaily);
}
inline void GlobalNamespace::ProgressionController::QueueQuestCompletion(int32_t  questId, bool  isDaily)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"QueueQuestCompletion", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questId, isDaily);
}
inline void GlobalNamespace::ProgressionController::SubmitNextQuestInQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"SubmitNextQuestInQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::ClearQuestQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ClearQuestQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::ProcessQuestSubmittedSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ProcessQuestSubmittedSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::ProcessQuestSubmittedFail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ProcessQuestSubmittedFail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionController::AreCompletedQuestsQueued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"AreCompletedQuestsQueued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::SaveCompletedQuestQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"SaveCompletedQuestQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::LoadCompletedQuestQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"LoadCompletedQuestQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::RequestProgressRedemption(::System::Action*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"RequestProgressRedemption", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onComplete);
}
inline void GlobalNamespace::ProgressionController::OnProgressRedeemed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"OnProgressRedeemed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::AddPoints(int32_t  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"AddPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void GlobalNamespace::ProgressionController::UpdateProgressionValues(int32_t  weekly, int32_t  totalRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"UpdateProgressionValues", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weekly, totalRaw);
}
inline void GlobalNamespace::ProgressionController::SetProgressionValues(int32_t  weekly, int32_t  unclaimed, int32_t  totalRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"SetProgressionValues", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weekly, unclaimed, totalRaw);
}
inline void GlobalNamespace::ProgressionController::ReportProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::ReportScoreChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"ReportScoreChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GlobalNamespace::ProgressionController::GetProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"GetProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t,int32_t,int32_t>>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionController::_RequestStatus_g__ShouldFetchStatus_36_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController*>(),
                        {"<RequestStatus>g__ShouldFetchStatus|36_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionController* GlobalNamespace::ProgressionController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionController::ProgressionController()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::*)(int32_t)>(&::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5629c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::*)()>(&::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x562ab74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::*)()>(&::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x562ab78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::*)()>(&::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562b098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::*)()>(&::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x562b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::*)()>(&::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562b0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest* const& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_set_data(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>* const& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionController>& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionController> const& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46* GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46::ProgressionController__DoSendQuestComplete_d__46()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::*)(int32_t)>(&::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56295a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::*)()>(&::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x562a6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::*)()>(&::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x562a6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::*)()>(&::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562ab2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::*)()>(&::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x562ab34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::*)()>(&::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562ab6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest* const& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_set_data(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>* const& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionController>& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionController> const& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionController__DoFetchStatus_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionController__DoFetchStatus_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController__DoFetchStatus_d__39::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionController__DoFetchStatus_d__39::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39* GlobalNamespace::ProgressionController__DoFetchStatus_d__39::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionController__DoFetchStatus_d__39::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionController__DoFetchStatus_d__39::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionController__DoFetchStatus_d__39::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionController__DoFetchStatus_d__39::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionController__DoFetchStatus_d__39::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionController__DoFetchStatus_d__39::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39::ProgressionController__DoFetchStatus_d__39()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionController_SetQuestCompleteResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController_SetQuestCompleteResponse::*)()>(&::GlobalNamespace::ProgressionController_SetQuestCompleteResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562a6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus*& GlobalNamespace::ProgressionController_SetQuestCompleteResponse::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus* const& GlobalNamespace::ProgressionController_SetQuestCompleteResponse::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::ProgressionController_SetQuestCompleteResponse::__cordl_internal_set_result(::GlobalNamespace::ProgressionController_UserQuestsStatus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void GlobalNamespace::ProgressionController_SetQuestCompleteResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionController_SetQuestCompleteResponse* GlobalNamespace::ProgressionController_SetQuestCompleteResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionController_SetQuestCompleteResponse::ProgressionController_SetQuestCompleteResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController_SetQuestCompleteRequest::*)()>(&::GlobalNamespace::ProgressionController_SetQuestCompleteRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5629b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_PlayFabTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabTicket;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_PlayFabTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabTicket;
}
constexpr void GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_set_PlayFabTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabTicket = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_MothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_MothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr void GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_set_MothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipToken = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_QuestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestId;
}
constexpr int32_t const& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_QuestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestId;
}
constexpr void GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_set_QuestId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuestId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_ClientVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientVersion;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_get_ClientVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientVersion;
}
constexpr void GlobalNamespace::ProgressionController_SetQuestCompleteRequest::__cordl_internal_set_ClientVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientVersion = value;
}
inline void GlobalNamespace::ProgressionController_SetQuestCompleteRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest* GlobalNamespace::ProgressionController_SetQuestCompleteRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest::ProgressionController_SetQuestCompleteRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionController_UserQuestsStatus.GetWeeklyPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ProgressionController_UserQuestsStatus::*)()>(&::GlobalNamespace::ProgressionController_UserQuestsStatus::GetWeeklyPoints)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x562969c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_UserQuestsStatus*>(),
                        {"GetWeeklyPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionController_UserQuestsStatus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController_UserQuestsStatus::*)()>(&::GlobalNamespace::ProgressionController_UserQuestsStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562a6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_UserQuestsStatus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_get_dailyPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyPoints;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_get_dailyPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyPoints;
}
constexpr void GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_set_dailyPoints(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dailyPoints = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_get_weeklyPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyPoints;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_get_weeklyPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weeklyPoints;
}
constexpr void GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_set_weeklyPoints(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weeklyPoints = value;
}
constexpr int32_t& GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_get_userPointsTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userPointsTotal;
}
constexpr int32_t const& GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_get_userPointsTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userPointsTotal;
}
constexpr void GlobalNamespace::ProgressionController_UserQuestsStatus::__cordl_internal_set_userPointsTotal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userPointsTotal = value;
}
inline int32_t GlobalNamespace::ProgressionController_UserQuestsStatus::GetWeeklyPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_UserQuestsStatus*>(),
                        {"GetWeeklyPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionController_UserQuestsStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_UserQuestsStatus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionController_UserQuestsStatus* GlobalNamespace::ProgressionController_UserQuestsStatus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionController_UserQuestsStatus*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus::ProgressionController_UserQuestsStatus()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionController_GetQuestStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController_GetQuestStatusResponse::*)()>(&::GlobalNamespace::ProgressionController_GetQuestStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x562a6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus*& GlobalNamespace::ProgressionController_GetQuestStatusResponse::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus* const& GlobalNamespace::ProgressionController_GetQuestStatusResponse::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::ProgressionController_GetQuestStatusResponse::__cordl_internal_set_result(::GlobalNamespace::ProgressionController_UserQuestsStatus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void GlobalNamespace::ProgressionController_GetQuestStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionController_GetQuestStatusResponse* GlobalNamespace::ProgressionController_GetQuestStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionController_GetQuestStatusResponse::ProgressionController_GetQuestStatusResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionController_GetQuestsStatusRequest::*)()>(&::GlobalNamespace::ProgressionController_GetQuestsStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5629504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_get_PlayFabTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabTicket;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_get_PlayFabTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabTicket;
}
constexpr void GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_set_PlayFabTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabTicket = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_get_MothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr ::StringW const& GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_get_MothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr void GlobalNamespace::ProgressionController_GetQuestsStatusRequest::__cordl_internal_set_MothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipToken = value;
}
inline void GlobalNamespace::ProgressionController_GetQuestsStatusRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest* GlobalNamespace::ProgressionController_GetQuestsStatusRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest::ProgressionController_GetQuestsStatusRequest()   {
}
