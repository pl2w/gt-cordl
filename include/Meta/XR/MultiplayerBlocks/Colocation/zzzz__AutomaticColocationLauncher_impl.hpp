#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Anchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher__CreateNewColocatedSpace_d__23_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher__LocalizeAnchor_d__30_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ColocationFailedReason_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkData_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__INetworkMessenger_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ShareAndLocalizeParams_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__SharedAnchorManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.add_ColocationReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::System::Action*)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::add_ColocationReady)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f72f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"add_ColocationReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.remove_ColocationReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::System::Action*)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::remove_ColocationReady)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f72ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"remove_ColocationReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.add_ColocationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::add_ColocationFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f6a72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"add_ColocationFailed", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.remove_ColocationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::remove_ColocationFailed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f73098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"remove_ColocationFailed", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*, ::UnityEngine::GameObject*, uint64_t, uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::Init)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9f6a50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"Init", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.ColocateAutomatically
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ColocateAutomatically)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f6a7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ColocateAutomatically", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.ColocateByPlayerWithOculusId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ColocateByPlayerWithOculusId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f731f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ColocateByPlayerWithOculusId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.CreateColocatedSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::CreateColocatedSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f732b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"CreateColocatedSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.ColocateAutomaticallyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ColocateAutomaticallyInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f73148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ColocateAutomaticallyInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.ColocateByPlayerWithOculusIdInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ColocateByPlayerWithOculusIdInternal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f731f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ColocateByPlayerWithOculusIdInternal", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.FindAlignmentAnchorUsedByOculusId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::FindAlignmentAnchorUsedByOculusId)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x9f732b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"FindAlignmentAnchorUsedByOculusId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.CreateColocatedSpaceInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::CreateColocatedSpaceInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f732b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"CreateColocatedSpaceInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.CreateNewColocatedSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::CreateNewColocatedSpace)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f73838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"CreateNewColocatedSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.AlignPlayerToAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::AlignPlayerToAnchor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f738e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"AlignPlayerToAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.GetAllAlignmentAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::GetAllAlignmentAnchors)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x9f73968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"GetAllAlignmentAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.ShareAndLocalizeAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::Meta::XR::MultiplayerBlocks::Colocation::Anchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ShareAndLocalizeAnchor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9f73c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ShareAndLocalizeAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.SendAnchorShareRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::Meta::XR::MultiplayerBlocks::Colocation::Anchor)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::SendAnchorShareRequest)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x9f73d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"SendAnchorShareRequest", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.OnAnchorShareRequestReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::OnAnchorShareRequestReceived)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f741ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"OnAnchorShareRequestReceived", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.OnAnchorShareRequestCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::OnAnchorShareRequestCompleted)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9f742b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"OnAnchorShareRequestCompleted", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher.LocalizeAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)(::System::Guid)>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::LocalizeAnchor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9f74518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"LocalizeAnchor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6a504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get_ColocationReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColocationReady;
}
constexpr ::System::Action* const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get_ColocationReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColocationReady;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set_ColocationReady(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColocationReady = value;
}
constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get_ColocationFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColocationFailed;
}
constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>* const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get_ColocationFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColocationFailed;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColocationFailed = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__cameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__cameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__cameraRig(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRig = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__alignToAnchorTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alignToAnchorTask;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__alignToAnchorTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alignToAnchorTask;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__alignToAnchorTask(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alignToAnchorTask = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__myAlignmentAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myAlignmentAnchor;
}
constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__myAlignmentAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myAlignmentAnchor;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__myAlignmentAnchor(::UnityW<::GlobalNamespace::OVRSpatialAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myAlignmentAnchor = value;
}
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__myPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myPlayerId;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__myPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myPlayerId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__myPlayerId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myPlayerId = value;
}
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__myOculusId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myOculusId;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__myOculusId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myOculusId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__myOculusId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myOculusId = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__networkData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkData;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__networkData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkData;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__networkData(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkData = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__networkMessenger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkMessenger;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__networkMessenger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkMessenger;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__networkMessenger(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkMessenger = value;
}
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__oculusIdToColocateTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oculusIdToColocateTo;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__oculusIdToColocateTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oculusIdToColocateTo;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__oculusIdToColocateTo(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oculusIdToColocateTo = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__sharedAnchorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sharedAnchorManager;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_get__sharedAnchorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sharedAnchorManager;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::__cordl_internal_set__sharedAnchorManager(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sharedAnchorManager = value;
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::add_ColocationReady(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"add_ColocationReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::remove_ColocationReady(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"remove_ColocationReady", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::add_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"add_ColocationFailed", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::remove_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"remove_ColocationFailed", {}, {::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::Init(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*  networkData, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*  networkMessenger, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  sharedAnchorManager, ::UnityEngine::GameObject*  cameraRig, uint64_t  myPlayerId, uint64_t  myOculusId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"Init", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkData, networkMessenger, sharedAnchorManager, cameraRig, myPlayerId, myOculusId);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ColocateAutomatically()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ColocateAutomatically", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ColocateByPlayerWithOculusId(uint64_t  oculusId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ColocateByPlayerWithOculusId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusId);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::CreateColocatedSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"CreateColocatedSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ColocateAutomaticallyInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ColocateAutomaticallyInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ColocateByPlayerWithOculusIdInternal(uint64_t  oculusId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ColocateByPlayerWithOculusIdInternal", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusId);
}
inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::FindAlignmentAnchorUsedByOculusId(uint64_t  oculusId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"FindAlignmentAnchorUsedByOculusId", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>>(this, ___internal_method, oculusId);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::CreateColocatedSpaceInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"CreateColocatedSpaceInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::CreateNewColocatedSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"CreateNewColocatedSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::AlignPlayerToAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"AlignPlayerToAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::GetAllAlignmentAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"GetAllAlignmentAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::ShareAndLocalizeAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"ShareAndLocalizeAnchor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, anchor);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::SendAnchorShareRequest(::Meta::XR::MultiplayerBlocks::Colocation::Anchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"SendAnchorShareRequest", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::OnAnchorShareRequestReceived(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"OnAnchorShareRequestReceived", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shareAndLocalizeParams);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::OnAnchorShareRequestCompleted(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"OnAnchorShareRequestCompleted", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shareAndLocalizeParams);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::LocalizeAnchor(::System::Guid  anchorToLocalize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {"LocalizeAnchor", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorToLocalize);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher::AutomaticColocationLauncher()   {
}
