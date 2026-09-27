#pragma once
// IWYU pragma private; include "GlobalNamespace/SIProgression.hpp"
#include "GlobalNamespace/zzzz__QuestCategory_impl.hpp"
#include "GlobalNamespace/zzzz__SIProgression_SINode_impl.hpp"
#include "GlobalNamespace/zzzz__SIProgression_SIProgressionResourceCap_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIProgression_def.hpp"
#include "GlobalNamespace/zzzz__GorillaQuestManager_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuest_def.hpp"
#include "GlobalNamespace/zzzz__SIProgression_SINode_def.hpp"
#include "GlobalNamespace/zzzz__SIProgression_SIProgressionResourceCap_def.hpp"
#include "GlobalNamespace/zzzz__SIProgression_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_LimitedDepositType_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeSO_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIProgression.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIProgression> (*)()>(&::GlobalNamespace::SIProgression::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59e34d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SIProgression*)>(&::GlobalNamespace::SIProgression::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59e3520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::SIProgression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.add_OnClientReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::System::Action*)>(&::GlobalNamespace::SIProgression::add_OnClientReady)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59e3578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"add_OnClientReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.remove_OnClientReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::System::Action*)>(&::GlobalNamespace::SIProgression::remove_OnClientReady)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59e3614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"remove_OnClientReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::Awake)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x59e36b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::OnEnable)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x59e4148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::OnDisable)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x59e43d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.GetResourceString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::SIResource_ResourceType)>(&::GlobalNamespace::SIProgression::GetResourceString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59e45f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetResourceString", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.InitResourceToStringDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SIProgression::InitResourceToStringDictionary)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x59e3b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"InitResourceToStringDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::Init)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x59e467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.EnsureInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::EnsureInitialized)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x59e1c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.ApplyServerQuestsStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*)>(&::GlobalNamespace::SIProgression::ApplyServerQuestsStatus)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59e4ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ApplyServerQuestsStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.GetCurrencyAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIResource_ResourceType)>(&::GlobalNamespace::SIProgression::GetCurrencyAmount)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59e4bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetCurrencyAmount", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.IsNodeUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIProgression::IsNodeUnlocked)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x59e4cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"IsNodeUnlocked", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.UnlockNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIProgression::UnlockNode)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59e4f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UnlockNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.HandleTreeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::HandleTreeUpdated)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x59e50d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleTreeUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.HandleInventoryUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::HandleInventoryUpdated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59e5e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleInventoryUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.TryClaimNewPlayerPackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::TryClaimNewPlayerPackage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59e5e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"TryClaimNewPlayerPackage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.HandleNodeUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::StringW, ::StringW)>(&::GlobalNamespace::SIProgression::HandleNodeUnlocked)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59e61bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleNodeUnlocked", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.UpdateTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::UpdateTree)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x59e5478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.TryUnlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIProgression::TryUnlock)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x59e63c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"TryUnlock", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.GetNodeFromID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SIProgression_SINode (::GlobalNamespace::SIProgression::*)(::StringW)>(&::GlobalNamespace::SIProgression::GetNodeFromID)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x59e6238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetNodeFromID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.UpdateCurrencyOnPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::UpdateCurrencyOnPlayer)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x59e5ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateCurrencyOnPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.UpdateUnlockOnPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::UpdateUnlockOnPlayer)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x59e5bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateUnlockOnPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.get_ActiveQuestIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::get_ActiveQuestIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e65b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"get_ActiveQuestIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.get_ActiveQuestProgresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::get_ActiveQuestProgresses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"get_ActiveQuestProgresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.get_DailyLimitedTurnedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::get_DailyLimitedTurnedIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e65c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"get_DailyLimitedTurnedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.InitializeQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SIProgression::InitializeQuests)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59e3d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"InitializeQuests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.ProcessAllQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::System::Action_1<::GlobalNamespace::RotatingQuest*>*)>(&::GlobalNamespace::SIProgression::ProcessAllQuests)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59e6694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ProcessAllQuests", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::RotatingQuest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.QuestLoadPostProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::RotatingQuest*)>(&::GlobalNamespace::SIProgression::QuestLoadPostProcess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59e67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"QuestLoadPostProcess", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.QuestSavePreProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::RotatingQuest*)>(&::GlobalNamespace::SIProgression::QuestSavePreProcess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59e6890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"QuestSavePreProcess", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression._InitializeQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::_InitializeQuests)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59e65d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"_InitializeQuests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.LoadQuestsFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*)>(&::GlobalNamespace::SIProgression::LoadQuestsFromServer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x59e6940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestsFromServer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.LoadQuestsFromLocalJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::LoadQuestsFromLocalJson)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59e6b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestsFromLocalJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SliceUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59e6cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.CheckTimeCrossover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::CheckTimeCrossover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e6d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CheckTimeCrossover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.CheckTimeCrossoverServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::CheckTimeCrossoverServer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x59e726c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CheckTimeCrossoverServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.StaticSaveQuestProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SIProgression::StaticSaveQuestProgress)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59df4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"StaticSaveQuestProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.LoadQuestProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::LoadQuestProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e6bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SaveQuestProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SaveQuestProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e6d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SaveQuestProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.LoadQuestProgressServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::LoadQuestProgressServer)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x59e744c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestProgressServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SaveQuestProgressServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SaveQuestProgressServer)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x59e7650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SaveQuestProgressServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.CopySaveDataToDiff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::CopySaveDataToDiff)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x59e48e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CopySaveDataToDiff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.GetResourceArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::GetResourceArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x59e16f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetResourceArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SetResourceArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::ArrayW<int32_t>)>(&::GlobalNamespace::SIProgression::SetResourceArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59e78dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SetResourceArray", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.HandleQuestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(int32_t)>(&::GlobalNamespace::SIProgression::HandleQuestCompleted)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59e797c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleQuestCompleted", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.HandleQuestProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(bool)>(&::GlobalNamespace::SIProgression::HandleQuestProgressChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59e7af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleQuestProgressChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.UpdateQuestProgresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::UpdateQuestProgresses)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59e79f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateQuestProgresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.AttemptIncrementResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIResource_ResourceType)>(&::GlobalNamespace::SIProgression::AttemptIncrementResource)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x59e7b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AttemptIncrementResource", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.OnSuccessfulIncrementResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::StringW)>(&::GlobalNamespace::SIProgression::OnSuccessfulIncrementResource)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59e7d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnSuccessfulIncrementResource", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.AttemptRedeemCompletedQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(int32_t)>(&::GlobalNamespace::SIProgression::AttemptRedeemCompletedQuest)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x59e7ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AttemptRedeemCompletedQuest", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.OnSuccessfulQuestRedeem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(int32_t, ::GlobalNamespace::RotatingQuest*, ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*)>(&::GlobalNamespace::SIProgression::OnSuccessfulQuestRedeem)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x59e7ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnSuccessfulQuestRedeem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RotatingQuest*>(), ::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.OnInvalidQuestRedeemAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(int32_t, ::GlobalNamespace::RotatingQuest*)>(&::GlobalNamespace::SIProgression::OnInvalidQuestRedeemAttempt)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x59e8174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnInvalidQuestRedeemAttempt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.AttemptRedeemBonusPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::AttemptRedeemBonusPoint)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x59e8298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AttemptRedeemBonusPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.OnSuccessfulBonusRedeem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*)>(&::GlobalNamespace::SIProgression::OnSuccessfulBonusRedeem)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59e8400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnSuccessfulBonusRedeem", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.AttemptCollectMonkeIdol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::AttemptCollectMonkeIdol)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x59e84b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AttemptCollectMonkeIdol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.OnSuccessfulMonkeIdolRedeem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*)>(&::GlobalNamespace::SIProgression::OnSuccessfulMonkeIdolRedeem)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59e8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnSuccessfulMonkeIdolRedeem", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.GetBonusProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::GetBonusProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59e0724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetBonusProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SetupAllQuestEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SetupAllQuestEventListeners)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59e4830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SetupAllQuestEventListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.StaticClearAllQuestEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SIProgression::StaticClearAllQuestEventListeners)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59df510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"StaticClearAllQuestEventListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.ClearAllQuestEventListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::ClearAllQuestEventListeners)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59e47c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ClearAllQuestEventListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.LoadQuestsFromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::StringW)>(&::GlobalNamespace::SIProgression::LoadQuestsFromJson)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59e6bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestsFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.RefreshActiveQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::RefreshActiveQuests)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59e4bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"RefreshActiveQuests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SelectActiveQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SelectActiveQuests)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x59e86ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SelectActiveQuests", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SelectCurrentTurnInDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SelectCurrentTurnInDate)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x59e8a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SelectCurrentTurnInDate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.TryDepositResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIResource_ResourceType, int32_t)>(&::GlobalNamespace::SIProgression::TryDepositResources)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x59e048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"TryDepositResources", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.GetResourceMaxCap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIResource_ResourceType)>(&::GlobalNamespace::SIProgression::GetResourceMaxCap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59e8f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetResourceMaxCap", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.IsLimitedDepositAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIResource_LimitedDepositType)>(&::GlobalNamespace::SIProgression::IsLimitedDepositAvailable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59e0170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"IsLimitedDepositAvailable", {}, {::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.ApplyLimitedDepositTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIResource_LimitedDepositType)>(&::GlobalNamespace::SIProgression::ApplyLimitedDepositTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e0480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ApplyLimitedDepositTime", {}, {::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e8f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.GetOnlineNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIUpgradeType, ::by_ref<::GlobalNamespace::SIProgression_SINode>)>(&::GlobalNamespace::SIProgression::GetOnlineNode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x59e1650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetOnlineNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SIProgression_SINode>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.ResourcesMaxed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::SIProgression::ResourcesMaxed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59e8f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ResourcesMaxed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression._ResourcesMaxed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::_ResourcesMaxed)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x59e8f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"_ResourcesMaxed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.CheckTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::CheckTelemetry)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x59e6d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CheckTelemetry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SendTelemetryData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SendTelemetryData)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x59e93a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SendTelemetryData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SendPurchaseResourcesData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SendPurchaseResourcesData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59e95e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SendPurchaseResourcesData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SendPurchaseTechPointsData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(int32_t)>(&::GlobalNamespace::SIProgression::SendPurchaseTechPointsData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59e968c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SendPurchaseTechPointsData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.LoadSavedTelemetryData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::LoadSavedTelemetryData)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x59e3e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadSavedTelemetryData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.SaveTelemetryData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::SaveTelemetryData)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x59e90fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SaveTelemetryData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.ResetTelemetryIntervalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::ResetTelemetryIntervalData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x59e3d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ResetTelemetryIntervalData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.HandleTagTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SIProgression::HandleTagTelemetry)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x59e9744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleTagTelemetry", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.UpdateHeldGadgetsTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SITechTreePageId, bool, int32_t)>(&::GlobalNamespace::SIProgression::UpdateHeldGadgetsTelemetry)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x59e9928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateHeldGadgetsTelemetry", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.CollectResourceTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::SIResource_ResourceType, int32_t)>(&::GlobalNamespace::SIProgression::CollectResourceTelemetry)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59e05a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CollectResourceTelemetry", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression.AddRoundTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::AddRoundTelemetry)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59e9a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AddRoundTelemetry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)()>(&::GlobalNamespace::SIProgression::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x59e9a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression._AttemptRedeemBonusPoint_b__161_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*)>(&::GlobalNamespace::SIProgression::_AttemptRedeemBonusPoint_b__161_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e9d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"<AttemptRedeemBonusPoint>b__161_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression._SelectActiveQuests_g__GetMatchingCategoryCount_171_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIProgression::*)(::GlobalNamespace::RotatingQuest*)>(&::GlobalNamespace::SIProgression::_SelectActiveQuests_g__GetMatchingCategoryCount_171_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59e89b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"<SelectActiveQuests>g__GetMatchingCategoryCount|171_0", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& GlobalNamespace::SIProgression::__cordl_internal_get_techTreeSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeSO;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& GlobalNamespace::SIProgression::__cordl_internal_get_techTreeSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTreeSO;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_techTreeSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techTreeSO = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_perCategoryQuestLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perCategoryQuestLimit;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_perCategoryQuestLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perCategoryQuestLimit;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_perCategoryQuestLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perCategoryQuestLimit = value;
}
constexpr ::System::Action*& GlobalNamespace::SIProgression::__cordl_internal_get_OnTreeReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTreeReady;
}
constexpr ::System::Action* const& GlobalNamespace::SIProgression::__cordl_internal_get_OnTreeReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTreeReady;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_OnTreeReady(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTreeReady = value;
}
constexpr ::System::Action*& GlobalNamespace::SIProgression::__cordl_internal_get_OnInventoryReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInventoryReady;
}
constexpr ::System::Action* const& GlobalNamespace::SIProgression::__cordl_internal_get_OnInventoryReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInventoryReady;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_OnInventoryReady(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnInventoryReady = value;
}
constexpr ::System::Action_1<::GlobalNamespace::SIUpgradeType>*& GlobalNamespace::SIProgression::__cordl_internal_get_OnNodeUnlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNodeUnlocked;
}
constexpr ::System::Action_1<::GlobalNamespace::SIUpgradeType>* const& GlobalNamespace::SIProgression::__cordl_internal_get_OnNodeUnlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNodeUnlocked;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_OnNodeUnlocked(::System::Action_1<::GlobalNamespace::SIUpgradeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnNodeUnlocked = value;
}
constexpr ::System::Action*& GlobalNamespace::SIProgression::__cordl_internal_get_OnClientReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientReady;
}
constexpr ::System::Action* const& GlobalNamespace::SIProgression::__cordl_internal_get_OnClientReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClientReady;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_OnClientReady(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClientReady = value;
}
constexpr bool& GlobalNamespace::SIProgression::__cordl_internal_get_ClientReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientReady;
}
constexpr bool const& GlobalNamespace::SIProgression::__cordl_internal_get_ClientReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientReady;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_ClientReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientReady = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::SIProgression_SINode>*& GlobalNamespace::SIProgression::__cordl_internal_get_siNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___siNodes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::SIProgression_SINode>* const& GlobalNamespace::SIProgression::__cordl_internal_get_siNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___siNodes;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_siNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::SIProgression_SINode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___siNodes = value;
}
constexpr bool& GlobalNamespace::SIProgression::__cordl_internal_get__treeReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____treeReady;
}
constexpr bool const& GlobalNamespace::SIProgression::__cordl_internal_get__treeReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____treeReady;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set__treeReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____treeReady = value;
}
constexpr bool& GlobalNamespace::SIProgression::__cordl_internal_get__inventoryReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inventoryReady;
}
constexpr bool const& GlobalNamespace::SIProgression::__cordl_internal_get__inventoryReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inventoryReady;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set__inventoryReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inventoryReady = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*& GlobalNamespace::SIProgression::__cordl_internal_get_heldOrSnappedByGadgetPageType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldOrSnappedByGadgetPageType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>* const& GlobalNamespace::SIProgression::__cordl_internal_get_heldOrSnappedByGadgetPageType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldOrSnappedByGadgetPageType;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_heldOrSnappedByGadgetPageType(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldOrSnappedByGadgetPageType = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_heldOrSnappedOwnGadgets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldOrSnappedOwnGadgets;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_heldOrSnappedOwnGadgets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldOrSnappedOwnGadgets;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_heldOrSnappedOwnGadgets(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldOrSnappedOwnGadgets = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_heldOrSnappedOthersGadgets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldOrSnappedOthersGadgets;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_heldOrSnappedOthersGadgets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldOrSnappedOthersGadgets;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_heldOrSnappedOthersGadgets(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldOrSnappedOthersGadgets = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_timeTelemetryLastChecked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTelemetryLastChecked;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_timeTelemetryLastChecked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTelemetryLastChecked;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_timeTelemetryLastChecked(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeTelemetryLastChecked = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_lastTelemetrySent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTelemetrySent;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_lastTelemetrySent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTelemetrySent;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_lastTelemetrySent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTelemetrySent = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_telemetryCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telemetryCooldown;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_telemetryCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telemetryCooldown;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_telemetryCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___telemetryCooldown = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_totalPlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalPlayTime;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_totalPlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalPlayTime;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_totalPlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalPlayTime = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_roomPlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomPlayTime;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_roomPlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomPlayTime;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_roomPlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomPlayTime = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_intervalPlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intervalPlayTime;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_intervalPlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intervalPlayTime;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_intervalPlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intervalPlayTime = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_activeTerminalTimeTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTerminalTimeTotal;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_activeTerminalTimeTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTerminalTimeTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_activeTerminalTimeTotal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeTerminalTimeTotal = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_activeTerminalTimeInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTerminalTimeInterval;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_activeTerminalTimeInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTerminalTimeInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_activeTerminalTimeInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeTerminalTimeInterval = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingGadgetTypeTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingGadgetTypeTotal;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>* const& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingGadgetTypeTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingGadgetTypeTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_timeUsingGadgetTypeTotal(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUsingGadgetTypeTotal = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingGadgetTypeInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingGadgetTypeInterval;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>* const& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingGadgetTypeInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingGadgetTypeInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_timeUsingGadgetTypeInterval(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUsingGadgetTypeInterval = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingOthersGadgetsTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingOthersGadgetsTotal;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingOthersGadgetsTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingOthersGadgetsTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_timeUsingOthersGadgetsTotal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUsingOthersGadgetsTotal = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingOthersGadgetsInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingOthersGadgetsInterval;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingOthersGadgetsInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingOthersGadgetsInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_timeUsingOthersGadgetsInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUsingOthersGadgetsInterval = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingOwnGadgetsTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingOwnGadgetsTotal;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingOwnGadgetsTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingOwnGadgetsTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_timeUsingOwnGadgetsTotal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUsingOwnGadgetsTotal = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingOwnGadgetsInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingOwnGadgetsInterval;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_timeUsingOwnGadgetsInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeUsingOwnGadgetsInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_timeUsingOwnGadgetsInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeUsingOwnGadgetsInterval = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*& GlobalNamespace::SIProgression::__cordl_internal_get_tagsUsingGadgetTypeTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsUsingGadgetTypeTotal;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>* const& GlobalNamespace::SIProgression::__cordl_internal_get_tagsUsingGadgetTypeTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsUsingGadgetTypeTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_tagsUsingGadgetTypeTotal(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagsUsingGadgetTypeTotal = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*& GlobalNamespace::SIProgression::__cordl_internal_get_tagsUsingGadgetTypeInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsUsingGadgetTypeInterval;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>* const& GlobalNamespace::SIProgression::__cordl_internal_get_tagsUsingGadgetTypeInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsUsingGadgetTypeInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_tagsUsingGadgetTypeInterval(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SITechTreePageId,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagsUsingGadgetTypeInterval = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_tagsHoldingOthersGadgetTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsHoldingOthersGadgetTotal;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_tagsHoldingOthersGadgetTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsHoldingOthersGadgetTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_tagsHoldingOthersGadgetTotal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagsHoldingOthersGadgetTotal = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_tagsHoldingOthersGadgetInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsHoldingOthersGadgetInterval;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_tagsHoldingOthersGadgetInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsHoldingOthersGadgetInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_tagsHoldingOthersGadgetInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagsHoldingOthersGadgetInterval = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_tagsHoldingOwnGadgetTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsHoldingOwnGadgetTotal;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_tagsHoldingOwnGadgetTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsHoldingOwnGadgetTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_tagsHoldingOwnGadgetTotal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagsHoldingOwnGadgetTotal = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_tagsHoldingOwnGadgetInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsHoldingOwnGadgetInterval;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_tagsHoldingOwnGadgetInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagsHoldingOwnGadgetInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_tagsHoldingOwnGadgetInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagsHoldingOwnGadgetInterval = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*& GlobalNamespace::SIProgression::__cordl_internal_get_resourcesCollectedTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcesCollectedTotal;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>* const& GlobalNamespace::SIProgression::__cordl_internal_get_resourcesCollectedTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcesCollectedTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_resourcesCollectedTotal(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourcesCollectedTotal = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*& GlobalNamespace::SIProgression::__cordl_internal_get_resourcesCollectedInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcesCollectedInterval;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>* const& GlobalNamespace::SIProgression::__cordl_internal_get_resourcesCollectedInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcesCollectedInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_resourcesCollectedInterval(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourcesCollectedInterval = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_roundsPlayedTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundsPlayedTotal;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_roundsPlayedTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundsPlayedTotal;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_roundsPlayedTotal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundsPlayedTotal = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_roundsPlayedInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundsPlayedInterval;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_roundsPlayedInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundsPlayedInterval;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_roundsPlayedInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundsPlayedInterval = value;
}
constexpr ::GlobalNamespace::SIProgression_SINode& GlobalNamespace::SIProgression::__cordl_internal_get_emptyNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyNode;
}
constexpr ::GlobalNamespace::SIProgression_SINode const& GlobalNamespace::SIProgression::__cordl_internal_get_emptyNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyNode;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_emptyNode(::GlobalNamespace::SIProgression_SINode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyNode = value;
}
constexpr ::GlobalNamespace::SIProgression_SIQuestsList*& GlobalNamespace::SIProgression::__cordl_internal_get_questSourceList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questSourceList;
}
constexpr ::GlobalNamespace::SIProgression_SIQuestsList* const& GlobalNamespace::SIProgression::__cordl_internal_get_questSourceList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questSourceList;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_questSourceList(::GlobalNamespace::SIProgression_SIQuestsList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questSourceList = value;
}
constexpr ::System::TimeSpan& GlobalNamespace::SIProgression::__cordl_internal_get_CROSSOVER_TIME_OF_DAY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CROSSOVER_TIME_OF_DAY;
}
constexpr ::System::TimeSpan const& GlobalNamespace::SIProgression::__cordl_internal_get_CROSSOVER_TIME_OF_DAY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CROSSOVER_TIME_OF_DAY;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_CROSSOVER_TIME_OF_DAY(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CROSSOVER_TIME_OF_DAY = value;
}
constexpr ::System::DateTime& GlobalNamespace::SIProgression::__cordl_internal_get_lastQuestGrantTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestGrantTime;
}
constexpr ::System::DateTime const& GlobalNamespace::SIProgression::__cordl_internal_get_lastQuestGrantTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestGrantTime;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_lastQuestGrantTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastQuestGrantTime = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_stashedQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedQuests;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_stashedQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedQuests;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_stashedQuests(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stashedQuests = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_completedQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedQuests;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_completedQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedQuests;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_completedQuests(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completedQuests = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_stashedBonusPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedBonusPoints;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_stashedBonusPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedBonusPoints;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_stashedBonusPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stashedBonusPoints = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_completedBonusPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedBonusPoints;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_completedBonusPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedBonusPoints;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_completedBonusPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completedBonusPoints = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_bonusProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusProgress;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_bonusProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusProgress;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_bonusProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonusProgress = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_questGrantRefreshCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questGrantRefreshCooldown;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_questGrantRefreshCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questGrantRefreshCooldown;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_questGrantRefreshCooldown(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questGrantRefreshCooldown = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*& GlobalNamespace::SIProgression::__cordl_internal_get_resourceDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>* const& GlobalNamespace::SIProgression::__cordl_internal_get_resourceDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceDict;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_resourceDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceDict = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SIProgression::__cordl_internal_get_limitedDepositTimeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitedDepositTimeArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SIProgression::__cordl_internal_get_limitedDepositTimeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitedDepositTimeArray;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_limitedDepositTimeArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitedDepositTimeArray = value;
}
constexpr ::ArrayW<::ArrayW<bool>>& GlobalNamespace::SIProgression::__cordl_internal_get_unlockedTechTreeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedTechTreeData;
}
constexpr ::ArrayW<::ArrayW<bool>> const& GlobalNamespace::SIProgression::__cordl_internal_get_unlockedTechTreeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedTechTreeData;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_unlockedTechTreeData(::ArrayW<::ArrayW<bool>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedTechTreeData = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestIds;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestIds;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_activeQuestIds(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeQuestIds = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestProgresses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestProgresses;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestProgresses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestProgresses;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_activeQuestProgresses(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeQuestProgresses = value;
}
constexpr ::ArrayW<::GlobalNamespace::QuestCategory>& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestCategories()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestCategories;
}
constexpr ::ArrayW<::GlobalNamespace::QuestCategory> const& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestCategories() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestCategories;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_activeQuestCategories(::ArrayW<::GlobalNamespace::QuestCategory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeQuestCategories = value;
}
constexpr bool& GlobalNamespace::SIProgression::__cordl_internal_get_dailyLimitedTurnedIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyLimitedTurnedIn;
}
constexpr bool const& GlobalNamespace::SIProgression::__cordl_internal_get_dailyLimitedTurnedIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyLimitedTurnedIn;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_dailyLimitedTurnedIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dailyLimitedTurnedIn = value;
}
constexpr ::ArrayW<::GlobalNamespace::SIProgression_SIProgressionResourceCap>& GlobalNamespace::SIProgression::__cordl_internal_get_resourceCaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCaps;
}
constexpr ::ArrayW<::GlobalNamespace::SIProgression_SIProgressionResourceCap> const& GlobalNamespace::SIProgression::__cordl_internal_get_resourceCaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCaps;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_resourceCaps(::ArrayW<::GlobalNamespace::SIProgression_SIProgressionResourceCap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceCaps = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SIProgression::__cordl_internal_get_resourceCapsArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCapsArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SIProgression::__cordl_internal_get_resourceCapsArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCapsArray;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_resourceCapsArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceCapsArray = value;
}
constexpr ::System::DateTime& GlobalNamespace::SIProgression::__cordl_internal_get_lastQuestGrantTimeDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestGrantTimeDiff;
}
constexpr ::System::DateTime const& GlobalNamespace::SIProgression::__cordl_internal_get_lastQuestGrantTimeDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQuestGrantTimeDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_lastQuestGrantTimeDiff(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastQuestGrantTimeDiff = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_stashedQuestsDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedQuestsDiff;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_stashedQuestsDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedQuestsDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_stashedQuestsDiff(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stashedQuestsDiff = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_stashedBonusPointsDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedBonusPointsDiff;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_stashedBonusPointsDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedBonusPointsDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_stashedBonusPointsDiff(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stashedBonusPointsDiff = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_bonusProgressDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusProgressDiff;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_bonusProgressDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusProgressDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_bonusProgressDiff(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonusProgressDiff = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SIProgression::__cordl_internal_get_resourceArrayDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceArrayDiff;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SIProgression::__cordl_internal_get_resourceArrayDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceArrayDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_resourceArrayDiff(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceArrayDiff = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SIProgression::__cordl_internal_get_limitedDepositTimeDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitedDepositTimeDiff;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SIProgression::__cordl_internal_get_limitedDepositTimeDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitedDepositTimeDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_limitedDepositTimeDiff(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitedDepositTimeDiff = value;
}
constexpr ::ArrayW<::ArrayW<bool>>& GlobalNamespace::SIProgression::__cordl_internal_get_unlockedTechTreeDataDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedTechTreeDataDiff;
}
constexpr ::ArrayW<::ArrayW<bool>> const& GlobalNamespace::SIProgression::__cordl_internal_get_unlockedTechTreeDataDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockedTechTreeDataDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_unlockedTechTreeDataDiff(::ArrayW<::ArrayW<bool>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockedTechTreeDataDiff = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestIdsDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestIdsDiff;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestIdsDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestIdsDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_activeQuestIdsDiff(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeQuestIdsDiff = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestProgressesDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestProgressesDiff;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SIProgression::__cordl_internal_get_activeQuestProgressesDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeQuestProgressesDiff;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_activeQuestProgressesDiff(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeQuestProgressesDiff = value;
}
constexpr bool& GlobalNamespace::SIProgression::__cordl_internal_get_questsInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questsInitialized;
}
constexpr bool const& GlobalNamespace::SIProgression::__cordl_internal_get_questsInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questsInitialized;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_questsInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questsInitialized = value;
}
constexpr bool& GlobalNamespace::SIProgression::__cordl_internal_get__startingPackageGranted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingPackageGranted;
}
constexpr bool const& GlobalNamespace::SIProgression::__cordl_internal_get__startingPackageGranted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingPackageGranted;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set__startingPackageGranted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startingPackageGranted = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_lastStartingPackageAttemptStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStartingPackageAttemptStarted;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_lastStartingPackageAttemptStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStartingPackageAttemptStarted;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_lastStartingPackageAttemptStarted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStartingPackageAttemptStarted = value;
}
constexpr int32_t& GlobalNamespace::SIProgression::__cordl_internal_get_startingPackageBackupAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPackageBackupAttempts;
}
constexpr int32_t const& GlobalNamespace::SIProgression::__cordl_internal_get_startingPackageBackupAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPackageBackupAttempts;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_startingPackageBackupAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingPackageBackupAttempts = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::SIProgression::__cordl_internal_get_redeemingQuestInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redeemingQuestInProgress;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::SIProgression::__cordl_internal_get_redeemingQuestInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redeemingQuestInProgress;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_redeemingQuestInProgress(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redeemingQuestInProgress = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_lastDisconnectTelemetrySent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDisconnectTelemetrySent;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_lastDisconnectTelemetrySent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDisconnectTelemetrySent;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_lastDisconnectTelemetrySent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDisconnectTelemetrySent = value;
}
constexpr float_t& GlobalNamespace::SIProgression::__cordl_internal_get_minDisconnectTelemetryCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDisconnectTelemetryCooldown;
}
constexpr float_t const& GlobalNamespace::SIProgression::__cordl_internal_get_minDisconnectTelemetryCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDisconnectTelemetryCooldown;
}
constexpr void GlobalNamespace::SIProgression::__cordl_internal_set_minDisconnectTelemetryCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDisconnectTelemetryCooldown = value;
}
inline void GlobalNamespace::SIProgression::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::SIProgression>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SIProgression>, "<Instance>k__BackingField", ::GlobalNamespace::SIProgression*>(std::forward<::UnityW<::GlobalNamespace::SIProgression>>(value));
}
inline ::UnityW<::GlobalNamespace::SIProgression> GlobalNamespace::SIProgression::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SIProgression>, "<Instance>k__BackingField", ::GlobalNamespace::SIProgression*>();
}
inline void GlobalNamespace::SIProgression::setStaticF__resourceToString(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::StringW>*, "_resourceToString", ::GlobalNamespace::SIProgression*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::StringW>* GlobalNamespace::SIProgression::getStaticF__resourceToString()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,::StringW>*, "_resourceToString", ::GlobalNamespace::SIProgression*>();
}
inline ::UnityW<::GlobalNamespace::SIProgression> GlobalNamespace::SIProgression::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIProgression>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SIProgression::set_Instance(::GlobalNamespace::SIProgression*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::SIProgression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SIProgression::add_OnClientReady(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"add_OnClientReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIProgression::remove_OnClientReady(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"remove_OnClientReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIProgression::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SIProgression::GetResourceString(::GlobalNamespace::SIResource_ResourceType  resourceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetResourceString", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, resourceType);
}
inline void GlobalNamespace::SIProgression::InitResourceToStringDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"InitResourceToStringDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SIProgression::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::ApplyServerQuestsStatus(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ApplyServerQuestsStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userQuestsStatus);
}
inline int32_t GlobalNamespace::SIProgression::GetCurrencyAmount(::GlobalNamespace::SIResource_ResourceType  currencyType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetCurrencyAmount", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, currencyType);
}
inline bool GlobalNamespace::SIProgression::IsNodeUnlocked(::GlobalNamespace::SIUpgradeType  upgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"IsNodeUnlocked", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, upgradeType);
}
inline void GlobalNamespace::SIProgression::UnlockNode(::GlobalNamespace::SIUpgradeType  upgradeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UnlockNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgradeType);
}
inline void GlobalNamespace::SIProgression::HandleTreeUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleTreeUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::HandleInventoryUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleInventoryUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SIProgression::TryClaimNewPlayerPackage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"TryClaimNewPlayerPackage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::HandleNodeUnlocked(::StringW  treeId, ::StringW  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleNodeUnlocked", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, treeId, nodeId);
}
inline void GlobalNamespace::SIProgression::UpdateTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIProgression::TryUnlock(::GlobalNamespace::SIUpgradeType  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"TryUnlock", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, upgrade);
}
inline ::GlobalNamespace::SIProgression_SINode GlobalNamespace::SIProgression::GetNodeFromID(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetNodeFromID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SIProgression_SINode>(this, ___internal_method, id);
}
inline void GlobalNamespace::SIProgression::UpdateCurrencyOnPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateCurrencyOnPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::UpdateUnlockOnPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateUnlockOnPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<int32_t> GlobalNamespace::SIProgression::get_ActiveQuestIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"get_ActiveQuestIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> GlobalNamespace::SIProgression::get_ActiveQuestProgresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"get_ActiveQuestProgresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline bool GlobalNamespace::SIProgression::get_DailyLimitedTurnedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"get_DailyLimitedTurnedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::InitializeQuests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"InitializeQuests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SIProgression::ProcessAllQuests(::System::Action_1<::GlobalNamespace::RotatingQuest*>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ProcessAllQuests", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::RotatingQuest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void GlobalNamespace::SIProgression::QuestLoadPostProcess(::GlobalNamespace::RotatingQuest*  quest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"QuestLoadPostProcess", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quest);
}
inline void GlobalNamespace::SIProgression::QuestSavePreProcess(::GlobalNamespace::RotatingQuest*  quest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"QuestSavePreProcess", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quest);
}
inline void GlobalNamespace::SIProgression::_InitializeQuests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"_InitializeQuests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::LoadQuestsFromServer(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  serverQuests)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestsFromServer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverQuests);
}
inline void GlobalNamespace::SIProgression::LoadQuestsFromLocalJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestsFromLocalJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::CheckTimeCrossover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CheckTimeCrossover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::CheckTimeCrossoverServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CheckTimeCrossoverServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::StaticSaveQuestProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"StaticSaveQuestProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SIProgression::LoadQuestProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SaveQuestProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SaveQuestProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::LoadQuestProgressServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestProgressServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SaveQuestProgressServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SaveQuestProgressServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::CopySaveDataToDiff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CopySaveDataToDiff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::SIProgression::_SafeShallowCopyArray(::ArrayW<T>  sourceArray, ::by_ref<::ArrayW<T>>  ref_destinationArray)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                    {"_SafeShallowCopyArray", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceArray, ref_destinationArray);
}
inline ::ArrayW<int32_t> GlobalNamespace::SIProgression::GetResourceArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetResourceArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SetResourceArray(::ArrayW<int32_t>  resourceArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SetResourceArray", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceArray);
}
inline void GlobalNamespace::SIProgression::HandleQuestCompleted(int32_t  questID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleQuestCompleted", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questID);
}
inline void GlobalNamespace::SIProgression::HandleQuestProgressChanged(bool  initialLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleQuestProgressChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialLoad);
}
inline bool GlobalNamespace::SIProgression::UpdateQuestProgresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateQuestProgresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::AttemptIncrementResource(::GlobalNamespace::SIResource_ResourceType  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AttemptIncrementResource", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource);
}
inline void GlobalNamespace::SIProgression::OnSuccessfulIncrementResource(::StringW  resourceStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnSuccessfulIncrementResource", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceStr);
}
inline void GlobalNamespace::SIProgression::AttemptRedeemCompletedQuest(int32_t  questIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AttemptRedeemCompletedQuest", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questIndex);
}
inline void GlobalNamespace::SIProgression::OnSuccessfulQuestRedeem(int32_t  questIndex, ::GlobalNamespace::RotatingQuest*  quest, ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnSuccessfulQuestRedeem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RotatingQuest*>(), ::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questIndex, quest, userQuestsStatus);
}
inline void GlobalNamespace::SIProgression::OnInvalidQuestRedeemAttempt(int32_t  questIndex, ::GlobalNamespace::RotatingQuest*  quest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnInvalidQuestRedeemAttempt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questIndex, quest);
}
inline void GlobalNamespace::SIProgression::AttemptRedeemBonusPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AttemptRedeemBonusPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::OnSuccessfulBonusRedeem(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnSuccessfulBonusRedeem", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userQuestsStatus);
}
inline void GlobalNamespace::SIProgression::AttemptCollectMonkeIdol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AttemptCollectMonkeIdol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::OnSuccessfulMonkeIdolRedeem(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnSuccessfulMonkeIdolRedeem", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userQuestsStatus);
}
inline void GlobalNamespace::SIProgression::GetBonusProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetBonusProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SetupAllQuestEventListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SetupAllQuestEventListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::StaticClearAllQuestEventListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"StaticClearAllQuestEventListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SIProgression::ClearAllQuestEventListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ClearAllQuestEventListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::LoadQuestsFromJson(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadQuestsFromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString);
}
inline void GlobalNamespace::SIProgression::RefreshActiveQuests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"RefreshActiveQuests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SelectActiveQuests()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SelectActiveQuests", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SelectCurrentTurnInDate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SelectCurrentTurnInDate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIProgression::TryDepositResources(::GlobalNamespace::SIResource_ResourceType  type, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"TryDepositResources", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, count);
}
inline int32_t GlobalNamespace::SIProgression::GetResourceMaxCap(::GlobalNamespace::SIResource_ResourceType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetResourceMaxCap", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline bool GlobalNamespace::SIProgression::IsLimitedDepositAvailable(::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"IsLimitedDepositAvailable", {}, {::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, limitedDepositType);
}
inline void GlobalNamespace::SIProgression::ApplyLimitedDepositTime(::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ApplyLimitedDepositTime", {}, {::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, limitedDepositType);
}
inline void GlobalNamespace::SIProgression::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIProgression::GetOnlineNode(::GlobalNamespace::SIUpgradeType  type, ::by_ref<::GlobalNamespace::SIProgression_SINode>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"GetOnlineNode", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SIProgression_SINode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, node);
}
inline bool GlobalNamespace::SIProgression::ResourcesMaxed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ResourcesMaxed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::SIProgression::_ResourcesMaxed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"_ResourcesMaxed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::CheckTelemetry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CheckTelemetry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SendTelemetryData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SendTelemetryData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SendPurchaseResourcesData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SendPurchaseResourcesData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SendPurchaseTechPointsData(int32_t  techPointsPurchased)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SendPurchaseTechPointsData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, techPointsPurchased);
}
inline void GlobalNamespace::SIProgression::LoadSavedTelemetryData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"LoadSavedTelemetryData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::SaveTelemetryData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"SaveTelemetryData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::ResetTelemetryIntervalData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"ResetTelemetryIntervalData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::HandleTagTelemetry(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"HandleTagTelemetry", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline void GlobalNamespace::SIProgression::UpdateHeldGadgetsTelemetry(::GlobalNamespace::SITechTreePageId  id, bool  isMine, int32_t  changeAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"UpdateHeldGadgetsTelemetry", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, isMine, changeAmount);
}
inline void GlobalNamespace::SIProgression::CollectResourceTelemetry(::GlobalNamespace::SIResource_ResourceType  type, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"CollectResourceTelemetry", {}, {::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, count);
}
inline void GlobalNamespace::SIProgression::AddRoundTelemetry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"AddRoundTelemetry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression::_AttemptRedeemBonusPoint_b__161_0(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  userQuestsStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"<AttemptRedeemBonusPoint>b__161_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userQuestsStatus);
}
inline int32_t GlobalNamespace::SIProgression::_SelectActiveQuests_g__GetMatchingCategoryCount_171_0(::GlobalNamespace::RotatingQuest*  quest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression*>(),
                        {"<SelectActiveQuests>g__GetMatchingCategoryCount|171_0", {}, {::i2c::type_of<::GlobalNamespace::RotatingQuest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, quest);
}
inline ::GlobalNamespace::SIProgression* GlobalNamespace::SIProgression::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIProgression*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::SIProgression::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::SIProgression::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::GorillaQuestManager"
constexpr  GlobalNamespace::SIProgression::operator ::GlobalNamespace::GorillaQuestManager*() noexcept {
return static_cast<::GlobalNamespace::GorillaQuestManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::GorillaQuestManager"
constexpr ::GlobalNamespace::GorillaQuestManager* GlobalNamespace::SIProgression::i___GlobalNamespace__GorillaQuestManager() noexcept {
return static_cast<::GlobalNamespace::GorillaQuestManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIProgression::SIProgression()   {
}
//  Writing Method size for method: ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::*)(int32_t)>(&::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59e6194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::*)()>(&::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e9fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::*)()>(&::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::MoveNext)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59e9fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::*)()>(&::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ea0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::*)()>(&::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59ea0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::*)()>(&::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ea0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::SIProgression>& GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SIProgression> const& GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SIProgression>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60* GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIProgression__TryClaimNewPlayerPackage_d__60::SIProgression__TryClaimNewPlayerPackage_d__60()   {
}
//  Writing Method size for method: ::GlobalNamespace::SIProgression___c__DisplayClass158_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression___c__DisplayClass158_0::*)()>(&::GlobalNamespace::SIProgression___c__DisplayClass158_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e7fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c__DisplayClass158_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression___c__DisplayClass158_0._AttemptRedeemCompletedQuest_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression___c__DisplayClass158_0::*)(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*)>(&::GlobalNamespace::SIProgression___c__DisplayClass158_0::_AttemptRedeemCompletedQuest_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59e9ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c__DisplayClass158_0*>(),
                        {"<AttemptRedeemCompletedQuest>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression___c__DisplayClass158_0._AttemptRedeemCompletedQuest_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression___c__DisplayClass158_0::*)(::StringW)>(&::GlobalNamespace::SIProgression___c__DisplayClass158_0::_AttemptRedeemCompletedQuest_b__1)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59e9ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c__DisplayClass158_0*>(),
                        {"<AttemptRedeemCompletedQuest>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIProgression>& GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SIProgression> const& GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SIProgression>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_get_questIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questIndex;
}
constexpr int32_t const& GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_get_questIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questIndex;
}
constexpr void GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_set_questIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questIndex = value;
}
constexpr ::GlobalNamespace::RotatingQuest*& GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_get_quest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quest;
}
constexpr ::GlobalNamespace::RotatingQuest* const& GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_get_quest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quest;
}
constexpr void GlobalNamespace::SIProgression___c__DisplayClass158_0::__cordl_internal_set_quest(::GlobalNamespace::RotatingQuest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quest = value;
}
inline void GlobalNamespace::SIProgression___c__DisplayClass158_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c__DisplayClass158_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression___c__DisplayClass158_0::_AttemptRedeemCompletedQuest_b__0(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c__DisplayClass158_0*>(),
                        {"<AttemptRedeemCompletedQuest>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline void GlobalNamespace::SIProgression___c__DisplayClass158_0::_AttemptRedeemCompletedQuest_b__1(::StringW  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c__DisplayClass158_0*>(),
                        {"<AttemptRedeemCompletedQuest>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline ::GlobalNamespace::SIProgression___c__DisplayClass158_0* GlobalNamespace::SIProgression___c__DisplayClass158_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIProgression___c__DisplayClass158_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIProgression___c__DisplayClass158_0::SIProgression___c__DisplayClass158_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::SIProgression___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression___c::*)()>(&::GlobalNamespace::SIProgression___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e9db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression___c._AttemptIncrementResource_b__156_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression___c::*)(::StringW)>(&::GlobalNamespace::SIProgression___c::_AttemptIncrementResource_b__156_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59e9dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c*>(),
                        {"<AttemptIncrementResource>b__156_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression___c._AttemptRedeemBonusPoint_b__161_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression___c::*)(::StringW)>(&::GlobalNamespace::SIProgression___c::_AttemptRedeemBonusPoint_b__161_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59e9e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c*>(),
                        {"<AttemptRedeemBonusPoint>b__161_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression___c._AttemptCollectMonkeIdol_b__163_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression___c::*)(::StringW)>(&::GlobalNamespace::SIProgression___c::_AttemptCollectMonkeIdol_b__163_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59e9e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c*>(),
                        {"<AttemptCollectMonkeIdol>b__163_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SIProgression___c::setStaticF___9(::GlobalNamespace::SIProgression___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SIProgression___c*, "<>9", ::GlobalNamespace::SIProgression___c*>(std::forward<::GlobalNamespace::SIProgression___c*>(value));
}
inline ::GlobalNamespace::SIProgression___c* GlobalNamespace::SIProgression___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SIProgression___c*, "<>9", ::GlobalNamespace::SIProgression___c*>();
}
inline void GlobalNamespace::SIProgression___c::setStaticF___9__156_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__156_0", ::GlobalNamespace::SIProgression___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::SIProgression___c::getStaticF___9__156_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__156_0", ::GlobalNamespace::SIProgression___c*>();
}
inline void GlobalNamespace::SIProgression___c::setStaticF___9__161_1(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__161_1", ::GlobalNamespace::SIProgression___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::SIProgression___c::getStaticF___9__161_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__161_1", ::GlobalNamespace::SIProgression___c*>();
}
inline void GlobalNamespace::SIProgression___c::setStaticF___9__163_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__163_0", ::GlobalNamespace::SIProgression___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::SIProgression___c::getStaticF___9__163_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__163_0", ::GlobalNamespace::SIProgression___c*>();
}
inline void GlobalNamespace::SIProgression___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIProgression___c::_AttemptIncrementResource_b__156_0(::StringW  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c*>(),
                        {"<AttemptIncrementResource>b__156_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline void GlobalNamespace::SIProgression___c::_AttemptRedeemBonusPoint_b__161_1(::StringW  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c*>(),
                        {"<AttemptRedeemBonusPoint>b__161_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline void GlobalNamespace::SIProgression___c::_AttemptCollectMonkeIdol_b__163_0(::StringW  err)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression___c*>(),
                        {"<AttemptCollectMonkeIdol>b__163_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err);
}
inline ::GlobalNamespace::SIProgression___c* GlobalNamespace::SIProgression___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIProgression___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIProgression___c::SIProgression___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::SIProgression_SIQuestsList.GetQuestById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RotatingQuest* (::GlobalNamespace::SIProgression_SIQuestsList::*)(int32_t)>(&::GlobalNamespace::SIProgression_SIQuestsList::GetQuestById)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59e243c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression_SIQuestsList*>(),
                        {"GetQuestById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIProgression_SIQuestsList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIProgression_SIQuestsList::*)()>(&::GlobalNamespace::SIProgression_SIQuestsList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e6bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression_SIQuestsList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*& GlobalNamespace::SIProgression_SIQuestsList::__cordl_internal_get_quests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>* const& GlobalNamespace::SIProgression_SIQuestsList::__cordl_internal_get_quests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quests;
}
constexpr void GlobalNamespace::SIProgression_SIQuestsList::__cordl_internal_set_quests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quests = value;
}
inline ::GlobalNamespace::RotatingQuest* GlobalNamespace::SIProgression_SIQuestsList::GetQuestById(int32_t  questID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression_SIQuestsList*>(),
                        {"GetQuestById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RotatingQuest*>(this, ___internal_method, questID);
}
inline void GlobalNamespace::SIProgression_SIQuestsList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIProgression_SIQuestsList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIProgression_SIQuestsList* GlobalNamespace::SIProgression_SIQuestsList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIProgression_SIQuestsList*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIProgression_SIQuestsList::SIProgression_SIQuestsList()   {
}
