#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteController.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteController_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteController__RequestPolls_d__34_def.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteController__WaitForSessionToken_d__35_def.hpp"
#include "GlobalNamespace/zzzz__MonkeVoteController_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MonkeVoteController> (*)()>(&::GlobalNamespace::MonkeVoteController::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x561d8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MonkeVoteController*)>(&::GlobalNamespace::MonkeVoteController::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x561d93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::MonkeVoteController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.add_OnPollsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteController::add_OnPollsUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"add_OnPollsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.remove_OnPollsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteController::remove_OnPollsUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561da30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"remove_OnPollsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.add_OnVoteAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteController::add_OnVoteAccepted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561dacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"add_OnVoteAccepted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.remove_OnVoteAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteController::remove_OnVoteAccepted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561db68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"remove_OnVoteAccepted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.add_OnVoteFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteController::add_OnVoteFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561dc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"add_OnVoteFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.remove_OnVoteFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteController::remove_OnVoteFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561dca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"remove_OnVoteFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.add_OnCurrentPollEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteController::add_OnCurrentPollEnded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561dd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"add_OnCurrentPollEnded", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.remove_OnCurrentPollEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Action*)>(&::GlobalNamespace::MonkeVoteController::remove_OnCurrentPollEnded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561ddd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"remove_OnCurrentPollEnded", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x561de74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::SliceUpdate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x561df74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x561e078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x561e084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.RequestPolls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::RequestPolls)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x561e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"RequestPolls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.WaitForSessionToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::WaitForSessionToken)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x561e138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"WaitForSessionToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.FetchPolls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::FetchPolls)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x561e1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"FetchPolls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.DoFetchPolls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MonkeVoteController::*)(::GlobalNamespace::MonkeVoteController_FetchPollsRequest*, ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*)>(&::GlobalNamespace::MonkeVoteController::DoFetchPolls)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561e368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"DoFetchPolls", {}, {::i2c::type_of<::GlobalNamespace::MonkeVoteController_FetchPollsRequest*>(), ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.OnFetchPollsResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*)>(&::GlobalNamespace::MonkeVoteController::OnFetchPollsResponse)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x561e42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"OnFetchPollsResponse", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.Vote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(int32_t, int32_t, bool)>(&::GlobalNamespace::MonkeVoteController::Vote)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x561e798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"Vote", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.SendVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::SendVote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561e7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"SendVote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.GetNonceForVotingCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*)>(&::GlobalNamespace::MonkeVoteController::GetNonceForVotingCallback)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x561e7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetNonceForVotingCallback", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.DoVote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MonkeVoteController::*)(::GlobalNamespace::MonkeVoteController_VoteRequest*, ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*)>(&::GlobalNamespace::MonkeVoteController::DoVote)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x561e9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"DoVote", {}, {::i2c::type_of<::GlobalNamespace::MonkeVoteController_VoteRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.OnVoteSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)(::GlobalNamespace::MonkeVoteController_VoteResponse*)>(&::GlobalNamespace::MonkeVoteController::OnVoteSuccess)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x561eabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"OnVoteSuccess", {}, {::i2c::type_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.GetLastPollData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonkeVoteController_FetchPollsResponse* (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::GetLastPollData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561eb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetLastPollData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.GetCurrentPollData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonkeVoteController_FetchPollsResponse* (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::GetCurrentPollData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561eb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetCurrentPollData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.GetVoteData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonkeVoteController_VoteResponse* (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::GetVoteData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561eb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetVoteData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.GetLastVotePollId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::GetLastVotePollId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561eb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetLastVotePollId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.GetLastVoteSelectedOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::GetLastVoteSelectedOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561eb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetLastVoteSelectedOption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.GetLastVoteWasPrediction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::GetLastVoteWasPrediction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561eb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetLastVoteWasPrediction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController.GetCurrentPollCompletionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::GetCurrentPollCompletionTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561eb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetCurrentPollCompletionTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController::*)()>(&::GlobalNamespace::MonkeVoteController::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x561eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MonkeVoteController::__cordl_internal_get_Nonce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Nonce;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_Nonce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Nonce;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_Nonce(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Nonce = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController::__cordl_internal_get_includeInactive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeInactive;
}
constexpr bool const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_includeInactive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeInactive;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_includeInactive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeInactive = value;
}
constexpr int32_t& GlobalNamespace::MonkeVoteController::__cordl_internal_get_fetchPollsRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchPollsRetryCount;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_fetchPollsRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fetchPollsRetryCount;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_fetchPollsRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fetchPollsRetryCount = value;
}
constexpr int32_t& GlobalNamespace::MonkeVoteController::__cordl_internal_get_maxRetriesOnFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_maxRetriesOnFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_maxRetriesOnFail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRetriesOnFail = value;
}
constexpr int32_t& GlobalNamespace::MonkeVoteController::__cordl_internal_get_voteRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteRetryCount;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_voteRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voteRetryCount;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_voteRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voteRetryCount = value;
}
constexpr ::System::Action*& GlobalNamespace::MonkeVoteController::__cordl_internal_get_OnPollsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPollsUpdated;
}
constexpr ::System::Action* const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_OnPollsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPollsUpdated;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_OnPollsUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPollsUpdated = value;
}
constexpr ::System::Action*& GlobalNamespace::MonkeVoteController::__cordl_internal_get_OnVoteAccepted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVoteAccepted;
}
constexpr ::System::Action* const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_OnVoteAccepted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVoteAccepted;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_OnVoteAccepted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnVoteAccepted = value;
}
constexpr ::System::Action*& GlobalNamespace::MonkeVoteController::__cordl_internal_get_OnVoteFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVoteFailed;
}
constexpr ::System::Action* const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_OnVoteFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVoteFailed;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_OnVoteFailed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnVoteFailed = value;
}
constexpr ::System::Action*& GlobalNamespace::MonkeVoteController::__cordl_internal_get_OnCurrentPollEnded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCurrentPollEnded;
}
constexpr ::System::Action* const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_OnCurrentPollEnded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCurrentPollEnded;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_OnCurrentPollEnded(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCurrentPollEnded = value;
}
constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse*& GlobalNamespace::MonkeVoteController::__cordl_internal_get_lastPollData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPollData;
}
constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_lastPollData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPollData;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_lastPollData(::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPollData = value;
}
constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse*& GlobalNamespace::MonkeVoteController::__cordl_internal_get_currentPollData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPollData;
}
constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_currentPollData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPollData;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_currentPollData(::GlobalNamespace::MonkeVoteController_FetchPollsResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPollData = value;
}
constexpr ::GlobalNamespace::MonkeVoteController_VoteResponse*& GlobalNamespace::MonkeVoteController::__cordl_internal_get_lastVoteData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVoteData;
}
constexpr ::GlobalNamespace::MonkeVoteController_VoteResponse* const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_lastVoteData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastVoteData;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_lastVoteData(::GlobalNamespace::MonkeVoteController_VoteResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastVoteData = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController::__cordl_internal_get_isFetchingPoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFetchingPoll;
}
constexpr bool const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_isFetchingPoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFetchingPoll;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_isFetchingPoll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFetchingPoll = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController::__cordl_internal_get_hasPoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPoll;
}
constexpr bool const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_hasPoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPoll;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_hasPoll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPoll = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController::__cordl_internal_get_isCurrentPollActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCurrentPollActive;
}
constexpr bool const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_isCurrentPollActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCurrentPollActive;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_isCurrentPollActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCurrentPollActive = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController::__cordl_internal_get_hasCurrentPollCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCurrentPollCompleted;
}
constexpr bool const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_hasCurrentPollCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCurrentPollCompleted;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_hasCurrentPollCompleted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCurrentPollCompleted = value;
}
constexpr ::System::DateTime& GlobalNamespace::MonkeVoteController::__cordl_internal_get_currentPollCompletionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPollCompletionTime;
}
constexpr ::System::DateTime const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_currentPollCompletionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPollCompletionTime;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_currentPollCompletionTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPollCompletionTime = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController::__cordl_internal_get_isSendingVote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSendingVote;
}
constexpr bool const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_isSendingVote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSendingVote;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_isSendingVote(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSendingVote = value;
}
constexpr int32_t& GlobalNamespace::MonkeVoteController::__cordl_internal_get_pollId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pollId;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_pollId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pollId;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_pollId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pollId = value;
}
constexpr int32_t& GlobalNamespace::MonkeVoteController::__cordl_internal_get_option()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___option;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_option() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___option;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_option(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___option = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController::__cordl_internal_get_isPrediction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrediction;
}
constexpr bool const& GlobalNamespace::MonkeVoteController::__cordl_internal_get_isPrediction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrediction;
}
constexpr void GlobalNamespace::MonkeVoteController::__cordl_internal_set_isPrediction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPrediction = value;
}
inline void GlobalNamespace::MonkeVoteController::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::MonkeVoteController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MonkeVoteController>, "<instance>k__BackingField", ::GlobalNamespace::MonkeVoteController*>(std::forward<::UnityW<::GlobalNamespace::MonkeVoteController>>(value));
}
inline ::UnityW<::GlobalNamespace::MonkeVoteController> GlobalNamespace::MonkeVoteController::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MonkeVoteController>, "<instance>k__BackingField", ::GlobalNamespace::MonkeVoteController*>();
}
inline ::UnityW<::GlobalNamespace::MonkeVoteController> GlobalNamespace::MonkeVoteController::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MonkeVoteController>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController::set_instance(::GlobalNamespace::MonkeVoteController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::MonkeVoteController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::add_OnPollsUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"add_OnPollsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::remove_OnPollsUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"remove_OnPollsUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::add_OnVoteAccepted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"add_OnVoteAccepted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::remove_OnVoteAccepted(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"remove_OnVoteAccepted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::add_OnVoteFailed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"add_OnVoteFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::remove_OnVoteFailed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"remove_OnVoteFailed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::add_OnCurrentPollEnded(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"add_OnCurrentPollEnded", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::remove_OnCurrentPollEnded(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"remove_OnCurrentPollEnded", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController::RequestPolls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"RequestPolls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MonkeVoteController::WaitForSessionToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"WaitForSessionToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController::FetchPolls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"FetchPolls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MonkeVoteController::DoFetchPolls(::GlobalNamespace::MonkeVoteController_FetchPollsRequest*  data, ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"DoFetchPolls", {}, {::i2c::type_of<::GlobalNamespace::MonkeVoteController_FetchPollsRequest*>(), ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::MonkeVoteController::OnFetchPollsResponse(/* [CanBeNull] */ ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"OnFetchPollsResponse", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::MonkeVoteController::Vote(int32_t  pollId, int32_t  option, bool  isPrediction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"Vote", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pollId, option, isPrediction);
}
inline void GlobalNamespace::MonkeVoteController::SendVote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"SendVote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController::GetNonceForVotingCallback(/* [CanBeNull] */ ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetNonceForVotingCallback", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MonkeVoteController::DoVote(::GlobalNamespace::MonkeVoteController_VoteRequest*  data, ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"DoVote", {}, {::i2c::type_of<::GlobalNamespace::MonkeVoteController_VoteRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline void GlobalNamespace::MonkeVoteController::OnVoteSuccess(/* [CanBeNull] */ ::GlobalNamespace::MonkeVoteController_VoteResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"OnVoteSuccess", {}, {::i2c::type_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GlobalNamespace::MonkeVoteController::GetLastPollData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetLastPollData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GlobalNamespace::MonkeVoteController::GetCurrentPollData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetCurrentPollData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteController_VoteResponse* GlobalNamespace::MonkeVoteController::GetVoteData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetVoteData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonkeVoteController_VoteResponse*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MonkeVoteController::GetLastVotePollId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetLastVotePollId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MonkeVoteController::GetLastVoteSelectedOption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetLastVoteSelectedOption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeVoteController::GetLastVoteWasPrediction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetLastVoteWasPrediction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime GlobalNamespace::MonkeVoteController::GetCurrentPollCompletionTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {"GetCurrentPollCompletionTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteController* GlobalNamespace::MonkeVoteController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::MonkeVoteController::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::MonkeVoteController::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteController::MonkeVoteController()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoVote_d__47._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController__DoVote_d__47::*)(int32_t)>(&::GlobalNamespace::MonkeVoteController__DoVote_d__47::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x561ea94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoVote_d__47.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController__DoVote_d__47::*)()>(&::GlobalNamespace::MonkeVoteController__DoVote_d__47::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoVote_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeVoteController__DoVote_d__47::*)()>(&::GlobalNamespace::MonkeVoteController__DoVote_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x561f0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoVote_d__47.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeVoteController__DoVote_d__47::*)()>(&::GlobalNamespace::MonkeVoteController__DoVote_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561f5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoVote_d__47.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController__DoVote_d__47::*)()>(&::GlobalNamespace::MonkeVoteController__DoVote_d__47::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x561f5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoVote_d__47.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeVoteController__DoVote_d__47::*)()>(&::GlobalNamespace::MonkeVoteController__DoVote_d__47::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561f5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::MonkeVoteController_VoteRequest*& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::MonkeVoteController_VoteRequest* const& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_set_data(::GlobalNamespace::MonkeVoteController_VoteRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>* const& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::MonkeVoteController_VoteResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeVoteController>& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MonkeVoteController> const& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MonkeVoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::MonkeVoteController__DoVote_d__47::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::MonkeVoteController__DoVote_d__47::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MonkeVoteController__DoVote_d__47::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeVoteController__DoVote_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeVoteController__DoVote_d__47::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController__DoVote_d__47::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeVoteController__DoVote_d__47::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MonkeVoteController__DoVote_d__47* GlobalNamespace::MonkeVoteController__DoVote_d__47::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteController__DoVote_d__47*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MonkeVoteController__DoVote_d__47::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MonkeVoteController__DoVote_d__47::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MonkeVoteController__DoVote_d__47::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MonkeVoteController__DoVote_d__47::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MonkeVoteController__DoVote_d__47::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MonkeVoteController__DoVote_d__47::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteController__DoVote_d__47::MonkeVoteController__DoVote_d__47()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::*)(int32_t)>(&::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x561e404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::*)()>(&::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561ec0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::*)()>(&::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x561ec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::*)()>(&::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561f068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::*)()>(&::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x561f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::*)()>(&::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561f0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsRequest*& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsRequest* const& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_set_data(::GlobalNamespace::MonkeVoteController_FetchPollsRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>* const& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_set_callback(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeVoteController>& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MonkeVoteController> const& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MonkeVoteController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37* GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteController__DoFetchPolls_d__37::MonkeVoteController__DoFetchPolls_d__37()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.get_PollId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MonkeVoteController_VoteResponse::*)()>(&::GlobalNamespace::MonkeVoteController_VoteResponse::get_PollId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_PollId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.set_PollId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_VoteResponse::*)(int32_t)>(&::GlobalNamespace::MonkeVoteController_VoteResponse::set_PollId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_PollId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.get_TitleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MonkeVoteController_VoteResponse::*)()>(&::GlobalNamespace::MonkeVoteController_VoteResponse::get_TitleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_TitleId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.set_TitleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_VoteResponse::*)(::StringW)>(&::GlobalNamespace::MonkeVoteController_VoteResponse::set_TitleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_TitleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.get_VoteOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::MonkeVoteController_VoteResponse::*)()>(&::GlobalNamespace::MonkeVoteController_VoteResponse::get_VoteOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_VoteOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.set_VoteOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_VoteResponse::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::MonkeVoteController_VoteResponse::set_VoteOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_VoteOptions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.get_VoteCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::GlobalNamespace::MonkeVoteController_VoteResponse::*)()>(&::GlobalNamespace::MonkeVoteController_VoteResponse::get_VoteCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_VoteCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.set_VoteCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_VoteResponse::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::GlobalNamespace::MonkeVoteController_VoteResponse::set_VoteCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_VoteCount", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.get_PredictionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::GlobalNamespace::MonkeVoteController_VoteResponse::*)()>(&::GlobalNamespace::MonkeVoteController_VoteResponse::get_PredictionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_PredictionCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse.set_PredictionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_VoteResponse::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::GlobalNamespace::MonkeVoteController_VoteResponse::set_PredictionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_PredictionCount", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_VoteResponse::*)()>(&::GlobalNamespace::MonkeVoteController_VoteResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ec04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__PollId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PollId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__PollId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PollId_k__BackingField;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_set__PollId_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PollId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__TitleId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TitleId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__TitleId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TitleId_k__BackingField;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_set__TitleId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TitleId_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__VoteOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoteOptions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__VoteOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoteOptions_k__BackingField;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_set__VoteOptions_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoteOptions_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__VoteCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoteCount_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__VoteCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoteCount_k__BackingField;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_set__VoteCount_k__BackingField(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoteCount_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__PredictionCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PredictionCount_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_get__PredictionCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PredictionCount_k__BackingField;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteResponse::__cordl_internal_set__PredictionCount_k__BackingField(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PredictionCount_k__BackingField = value;
}
inline int32_t GlobalNamespace::MonkeVoteController_VoteResponse::get_PollId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_PollId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController_VoteResponse::set_PollId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_PollId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MonkeVoteController_VoteResponse::get_TitleId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_TitleId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController_VoteResponse::set_TitleId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_TitleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::MonkeVoteController_VoteResponse::get_VoteOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_VoteOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController_VoteResponse::set_VoteOptions(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_VoteOptions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::MonkeVoteController_VoteResponse::get_VoteCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_VoteCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController_VoteResponse::set_VoteCount(::System::Collections::Generic::List_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_VoteCount", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::MonkeVoteController_VoteResponse::get_PredictionCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"get_PredictionCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeVoteController_VoteResponse::set_PredictionCount(::System::Collections::Generic::List_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {"set_PredictionCount", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeVoteController_VoteResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteController_VoteResponse* GlobalNamespace::MonkeVoteController_VoteResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteController_VoteResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteController_VoteResponse::MonkeVoteController_VoteResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_VoteRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_VoteRequest::*)()>(&::GlobalNamespace::MonkeVoteController_VoteRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_PollId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PollId;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_PollId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PollId;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_PollId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PollId = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_OculusId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OculusId;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_OculusId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OculusId;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_OculusId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OculusId = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_UserNonce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserNonce;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_UserNonce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserNonce;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_UserNonce(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserNonce = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_UserPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserPlatform;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_UserPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserPlatform;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_UserPlatform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserPlatform = value;
}
constexpr int32_t& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_OptionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OptionIndex;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_OptionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OptionIndex;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_OptionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OptionIndex = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_IsPrediction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPrediction;
}
constexpr bool const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_IsPrediction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPrediction;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_IsPrediction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsPrediction = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_PlayFabTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabTicket;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_get_PlayFabTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabTicket;
}
constexpr void GlobalNamespace::MonkeVoteController_VoteRequest::__cordl_internal_set_PlayFabTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabTicket = value;
}
inline void GlobalNamespace::MonkeVoteController_VoteRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_VoteRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteController_VoteRequest* GlobalNamespace::MonkeVoteController_VoteRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteController_VoteRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteController_VoteRequest::MonkeVoteController_VoteRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_FetchPollsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_FetchPollsResponse::*)()>(&::GlobalNamespace::MonkeVoteController_FetchPollsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561ebac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_PollId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PollId;
}
constexpr int32_t const& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_PollId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PollId;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_set_PollId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PollId = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_Question()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Question;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_Question() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Question;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_set_Question(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Question = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_VoteOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoteOptions;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_VoteOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoteOptions;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_set_VoteOptions(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoteOptions = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_VoteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoteCount;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_VoteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoteCount;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_set_VoteCount(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoteCount = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_PredictionCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PredictionCount;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_PredictionCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PredictionCount;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_set_PredictionCount(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PredictionCount = value;
}
constexpr ::System::DateTime& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_StartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTime;
}
constexpr ::System::DateTime const& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_StartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartTime;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_set_StartTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartTime = value;
}
constexpr ::System::DateTime& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_EndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EndTime;
}
constexpr ::System::DateTime const& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_EndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EndTime;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_set_EndTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EndTime = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr bool const& GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_get_isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActive;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsResponse::__cordl_internal_set_isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActive = value;
}
inline void GlobalNamespace::MonkeVoteController_FetchPollsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteController_FetchPollsResponse* GlobalNamespace::MonkeVoteController_FetchPollsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteController_FetchPollsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsResponse::MonkeVoteController_FetchPollsResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeVoteController_FetchPollsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeVoteController_FetchPollsRequest::*)()>(&::GlobalNamespace::MonkeVoteController_FetchPollsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561e360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_FetchPollsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_get_PlayFabTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabTicket;
}
constexpr ::StringW const& GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_get_PlayFabTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabTicket;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_set_PlayFabTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabTicket = value;
}
constexpr bool& GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_get_IncludeInactive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncludeInactive;
}
constexpr bool const& GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_get_IncludeInactive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncludeInactive;
}
constexpr void GlobalNamespace::MonkeVoteController_FetchPollsRequest::__cordl_internal_set_IncludeInactive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IncludeInactive = value;
}
inline void GlobalNamespace::MonkeVoteController_FetchPollsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeVoteController_FetchPollsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeVoteController_FetchPollsRequest* GlobalNamespace::MonkeVoteController_FetchPollsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeVoteController_FetchPollsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeVoteController_FetchPollsRequest::MonkeVoteController_FetchPollsRequest()   {
}
