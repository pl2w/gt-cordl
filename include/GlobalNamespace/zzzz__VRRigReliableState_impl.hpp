#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigReliableState.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_impl.hpp"
#include "GlobalNamespace/zzzz__ICosmeticStateSync_impl.hpp"
#include "GlobalNamespace/zzzz__ReliableStateData_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRigReliableState_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_def.hpp"
#include "GlobalNamespace/zzzz__ICosmeticStateSync_def.hpp"
#include "GlobalNamespace/zzzz__IWrappedSerializable_def.hpp"
#include "GlobalNamespace/zzzz__VRRigReliableState_StateSyncSlots_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.get_HasBracelet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::get_HasBracelet)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5748474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"get_HasBracelet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.get_isDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::get_isDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57484c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"get_isDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.set_isDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)(bool)>(&::GlobalNamespace::VRRigReliableState::set_isDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57484cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"set_isDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::Awake)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x57484d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5748670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.SetIsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::SetIsDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x574877c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"SetIsDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.SetIsNotDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::SetIsNotDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"SetIsNotDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.SharedStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)(bool, ::GlobalNamespace::BodyDockPositions*)>(&::GlobalNamespace::VRRigReliableState::SharedStart)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5748790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"SharedStart", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.RegisterCosmeticStateSyncTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)(::GlobalNamespace::VRRigReliableState_StateSyncSlots, ::GlobalNamespace::ICosmeticStateSync*)>(&::GlobalNamespace::VRRigReliableState::RegisterCosmeticStateSyncTarget)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x57488e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"RegisterCosmeticStateSyncTarget", {}, {::i2c::type_of<::GlobalNamespace::VRRigReliableState_StateSyncSlots>(), ::i2c::type_of<::GlobalNamespace::ICosmeticStateSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.UnRegisterCosmeticStateSyncTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)(::GlobalNamespace::VRRigReliableState_StateSyncSlots, ::GlobalNamespace::ICosmeticStateSync*)>(&::GlobalNamespace::VRRigReliableState::UnRegisterCosmeticStateSyncTarget)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5748b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"UnRegisterCosmeticStateSyncTarget", {}, {::i2c::type_of<::GlobalNamespace::VRRigReliableState_StateSyncSlots>(), ::i2c::type_of<::GlobalNamespace::ICosmeticStateSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.CopyStateSyncToSyncArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::CopyStateSyncToSyncArray)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5748cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"CopyStateSyncToSyncArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.GetCachedStateAtSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VRRigReliableState::*)(::GlobalNamespace::VRRigReliableState_StateSyncSlots)>(&::GlobalNamespace::VRRigReliableState::GetCachedStateAtSlot)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5748dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"GetCachedStateAtSlot", {}, {::i2c::type_of<::GlobalNamespace::VRRigReliableState_StateSyncSlots>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.IWrappedSerializable_OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)(::System::Object*)>(&::GlobalNamespace::VRRigReliableState::IWrappedSerializable_OnSerializeRead)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5748e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"IWrappedSerializable.OnSerializeRead", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.IWrappedSerializable_OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::IWrappedSerializable_OnSerializeWrite)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5749290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"IWrappedSerializable.OnSerializeWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.IWrappedSerializable_OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VRRigReliableState::IWrappedSerializable_OnSerializeWrite)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5749934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"IWrappedSerializable.OnSerializeWrite", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.IWrappedSerializable_OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VRRigReliableState::IWrappedSerializable_OnSerializeRead)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5749cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"IWrappedSerializable.OnSerializeRead", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.GetHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::GetHeader)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5749478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"GetHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.SetHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)(int64_t, ::by_ref<int32_t>)>(&::GlobalNamespace::VRRigReliableState::SetHeader)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5749130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"SetHeader", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.GetTransferrableStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int64_t>* (::GlobalNamespace::VRRigReliableState::*)(int64_t)>(&::GlobalNamespace::VRRigReliableState::GetTransferrableStates)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x574967c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"GetTransferrableStates", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.PackBeadColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*, int32_t)>(&::GlobalNamespace::VRRigReliableState::PackBeadColors)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5749814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"PackBeadColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState.UnpackBeadColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, int32_t, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::GlobalNamespace::VRRigReliableState::UnpackBeadColors)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x574917c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"UnpackBeadColors", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigReliableState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigReliableState::*)()>(&::GlobalNamespace::VRRigReliableState::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x574a234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ICosmeticStateSync*>& GlobalNamespace::VRRigReliableState::__cordl_internal_get_m_cosmeticStateTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cosmeticStateTargets;
}
constexpr ::ArrayW<::GlobalNamespace::ICosmeticStateSync*> const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_m_cosmeticStateTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cosmeticStateTargets;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_m_cosmeticStateTargets(::ArrayW<::GlobalNamespace::ICosmeticStateSync*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cosmeticStateTargets = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::VRRigReliableState::__cordl_internal_get_m_cosmeticStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cosmeticStates;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_m_cosmeticStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cosmeticStates;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_m_cosmeticStates(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cosmeticStates = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::VRRigReliableState::__cordl_internal_get_activeTransferrableObjectIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTransferrableObjectIndex;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_activeTransferrableObjectIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTransferrableObjectIndex;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_activeTransferrableObjectIndex(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeTransferrableObjectIndex = value;
}
constexpr ::ArrayW<::GlobalNamespace::TransferrableObject_PositionState>& GlobalNamespace::VRRigReliableState::__cordl_internal_get_transferrablePosStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrablePosStates;
}
constexpr ::ArrayW<::GlobalNamespace::TransferrableObject_PositionState> const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_transferrablePosStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrablePosStates;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_transferrablePosStates(::ArrayW<::GlobalNamespace::TransferrableObject_PositionState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrablePosStates = value;
}
constexpr ::ArrayW<::GlobalNamespace::TransferrableObject_ItemStates>& GlobalNamespace::VRRigReliableState::__cordl_internal_get_transferrableItemStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableItemStates;
}
constexpr ::ArrayW<::GlobalNamespace::TransferrableObject_ItemStates> const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_transferrableItemStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableItemStates;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_transferrableItemStates(::ArrayW<::GlobalNamespace::TransferrableObject_ItemStates>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableItemStates = value;
}
constexpr ::ArrayW<::GlobalNamespace::BodyDockPositions_DropPositions>& GlobalNamespace::VRRigReliableState::__cordl_internal_get_transferableDockPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferableDockPositions;
}
constexpr ::ArrayW<::GlobalNamespace::BodyDockPositions_DropPositions> const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_transferableDockPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferableDockPositions;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_transferableDockPositions(::ArrayW<::GlobalNamespace::BodyDockPositions_DropPositions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferableDockPositions = value;
}
constexpr int32_t& GlobalNamespace::VRRigReliableState::__cordl_internal_get_wearablesPackedStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wearablesPackedStates;
}
constexpr int32_t const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_wearablesPackedStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wearablesPackedStates;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_wearablesPackedStates(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wearablesPackedStates = value;
}
constexpr int32_t& GlobalNamespace::VRRigReliableState::__cordl_internal_get_lThrowableProjectileIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lThrowableProjectileIndex;
}
constexpr int32_t const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_lThrowableProjectileIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lThrowableProjectileIndex;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_lThrowableProjectileIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lThrowableProjectileIndex = value;
}
constexpr int32_t& GlobalNamespace::VRRigReliableState::__cordl_internal_get_rThrowableProjectileIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rThrowableProjectileIndex;
}
constexpr int32_t const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_rThrowableProjectileIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rThrowableProjectileIndex;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_rThrowableProjectileIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rThrowableProjectileIndex = value;
}
constexpr ::UnityEngine::Color32& GlobalNamespace::VRRigReliableState::__cordl_internal_get_lThrowableProjectileColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lThrowableProjectileColor;
}
constexpr ::UnityEngine::Color32 const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_lThrowableProjectileColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lThrowableProjectileColor;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_lThrowableProjectileColor(::UnityEngine::Color32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lThrowableProjectileColor = value;
}
constexpr ::UnityEngine::Color32& GlobalNamespace::VRRigReliableState::__cordl_internal_get_rThrowableProjectileColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rThrowableProjectileColor;
}
constexpr ::UnityEngine::Color32 const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_rThrowableProjectileColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rThrowableProjectileColor;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_rThrowableProjectileColor(::UnityEngine::Color32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rThrowableProjectileColor = value;
}
constexpr int32_t& GlobalNamespace::VRRigReliableState::__cordl_internal_get_randomThrowableIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomThrowableIndex;
}
constexpr int32_t const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_randomThrowableIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomThrowableIndex;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_randomThrowableIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomThrowableIndex = value;
}
constexpr bool& GlobalNamespace::VRRigReliableState::__cordl_internal_get_isMicEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMicEnabled;
}
constexpr bool const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_isMicEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMicEnabled;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_isMicEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMicEnabled = value;
}
constexpr bool& GlobalNamespace::VRRigReliableState::__cordl_internal_get_isOfflineVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOfflineVRRig;
}
constexpr bool const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_isOfflineVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOfflineVRRig;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_isOfflineVRRig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOfflineVRRig = value;
}
constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& GlobalNamespace::VRRigReliableState::__cordl_internal_get_bDock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bDock;
}
constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_bDock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bDock;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_bDock(::UnityW<::GlobalNamespace::BodyDockPositions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bDock = value;
}
constexpr int32_t& GlobalNamespace::VRRigReliableState::__cordl_internal_get_sizeLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeLayerMask;
}
constexpr int32_t const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_sizeLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeLayerMask;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_sizeLayerMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeLayerMask = value;
}
constexpr bool& GlobalNamespace::VRRigReliableState::__cordl_internal_get_isBraceletLeftHanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBraceletLeftHanded;
}
constexpr bool const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_isBraceletLeftHanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBraceletLeftHanded;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_isBraceletLeftHanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBraceletLeftHanded = value;
}
constexpr int32_t& GlobalNamespace::VRRigReliableState::__cordl_internal_get_braceletSelfIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___braceletSelfIndex;
}
constexpr int32_t const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_braceletSelfIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___braceletSelfIndex;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_braceletSelfIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___braceletSelfIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& GlobalNamespace::VRRigReliableState::__cordl_internal_get_braceletBeadColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___braceletBeadColors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_braceletBeadColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___braceletBeadColors;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_braceletBeadColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___braceletBeadColors = value;
}
constexpr bool& GlobalNamespace::VRRigReliableState::__cordl_internal_get_isBuilderWatchEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBuilderWatchEnabled;
}
constexpr bool const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_isBuilderWatchEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBuilderWatchEnabled;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_isBuilderWatchEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBuilderWatchEnabled = value;
}
constexpr bool& GlobalNamespace::VRRigReliableState::__cordl_internal_get__isDirty_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDirty_k__BackingField;
}
constexpr bool const& GlobalNamespace::VRRigReliableState::__cordl_internal_get__isDirty_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDirty_k__BackingField;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set__isDirty_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDirty_k__BackingField = value;
}
constexpr ::GlobalNamespace::ReliableStateData& GlobalNamespace::VRRigReliableState::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::GlobalNamespace::ReliableStateData const& GlobalNamespace::VRRigReliableState::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void GlobalNamespace::VRRigReliableState::__cordl_internal_set_Data(::GlobalNamespace::ReliableStateData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline bool GlobalNamespace::VRRigReliableState::get_HasBracelet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"get_HasBracelet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::VRRigReliableState::get_isDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"get_isDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigReliableState::set_isDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"set_isDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VRRigReliableState::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigReliableState::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigReliableState::SetIsDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"SetIsDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigReliableState::SetIsNotDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"SetIsNotDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigReliableState::SharedStart(bool  isOfflineVRRig_, ::GlobalNamespace::BodyDockPositions*  bDock_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"SharedStart", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOfflineVRRig_, bDock_);
}
inline void GlobalNamespace::VRRigReliableState::RegisterCosmeticStateSyncTarget(::GlobalNamespace::VRRigReliableState_StateSyncSlots  slot, ::GlobalNamespace::ICosmeticStateSync*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"RegisterCosmeticStateSyncTarget", {}, {::i2c::type_of<::GlobalNamespace::VRRigReliableState_StateSyncSlots>(), ::i2c::type_of<::GlobalNamespace::ICosmeticStateSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot, target);
}
inline void GlobalNamespace::VRRigReliableState::UnRegisterCosmeticStateSyncTarget(::GlobalNamespace::VRRigReliableState_StateSyncSlots  slot, ::GlobalNamespace::ICosmeticStateSync*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"UnRegisterCosmeticStateSyncTarget", {}, {::i2c::type_of<::GlobalNamespace::VRRigReliableState_StateSyncSlots>(), ::i2c::type_of<::GlobalNamespace::ICosmeticStateSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slot, target);
}
inline void GlobalNamespace::VRRigReliableState::CopyStateSyncToSyncArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"CopyStateSyncToSyncArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::VRRigReliableState::GetCachedStateAtSlot(::GlobalNamespace::VRRigReliableState_StateSyncSlots  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"GetCachedStateAtSlot", {}, {::i2c::type_of<::GlobalNamespace::VRRigReliableState_StateSyncSlots>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, slot);
}
inline void GlobalNamespace::VRRigReliableState::IWrappedSerializable_OnSerializeRead(::System::Object*  newData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"IWrappedSerializable.OnSerializeRead", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newData);
}
inline ::System::Object* GlobalNamespace::VRRigReliableState::IWrappedSerializable_OnSerializeWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"IWrappedSerializable.OnSerializeWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigReliableState::IWrappedSerializable_OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"IWrappedSerializable.OnSerializeWrite", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::VRRigReliableState::IWrappedSerializable_OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"IWrappedSerializable.OnSerializeRead", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline int64_t GlobalNamespace::VRRigReliableState::GetHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"GetHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigReliableState::SetHeader(int64_t  header, ::by_ref<int32_t>  numBeadsToRead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"SetHeader", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, numBeadsToRead);
}
inline ::System::Collections::Generic::List_1<int64_t>* GlobalNamespace::VRRigReliableState::GetTransferrableStates(int64_t  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"GetTransferrableStates", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int64_t>*>(this, ___internal_method, header);
}
inline int64_t GlobalNamespace::VRRigReliableState::PackBeadColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  beadColors, int32_t  fromIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"PackBeadColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, beadColors, fromIndex);
}
inline void GlobalNamespace::VRRigReliableState::UnpackBeadColors(int64_t  packed, int32_t  startIndex, int32_t  endIndex, ::System::Collections::Generic::List_1<::UnityEngine::Color>*  beadColorsResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {"UnpackBeadColors", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, packed, startIndex, endIndex, beadColorsResult);
}
inline void GlobalNamespace::VRRigReliableState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigReliableState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRRigReliableState* GlobalNamespace::VRRigReliableState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRRigReliableState*>());
}
/// @brief Convert operator to "::GlobalNamespace::IWrappedSerializable"
constexpr  GlobalNamespace::VRRigReliableState::operator ::GlobalNamespace::IWrappedSerializable*() noexcept {
return static_cast<::GlobalNamespace::IWrappedSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IWrappedSerializable"
constexpr ::GlobalNamespace::IWrappedSerializable* GlobalNamespace::VRRigReliableState::i___GlobalNamespace__IWrappedSerializable() noexcept {
return static_cast<::GlobalNamespace::IWrappedSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::VRRigReliableState::operator ::Fusion::INetworkStruct*() noexcept {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::VRRigReliableState::i___Fusion__INetworkStruct() noexcept {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRigReliableState::VRRigReliableState()   {
}
