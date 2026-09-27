#pragma once
// IWYU pragma private; include "GlobalNamespace/SICombinedTerminal.hpp"
#include "GlobalNamespace/zzzz__EKioskAnimState_impl.hpp"
#include "GlobalNamespace/zzzz__GTAnimator_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SICombinedTerminal_def.hpp"
#include "GlobalNamespace/zzzz__EKioskAnimState_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SICombinedTerminal_TerminalSubFunction_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDispenser_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreeStation_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfection_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.get_IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::get_IsAuthority)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59d9d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.get_SIManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionManager> (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::get_SIManager)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59d9da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"get_SIManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.get_ActivePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::get_ActivePage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d9dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"get_ActivePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59d9dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59d9dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::SliceUpdate)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x59d9ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59da1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59da950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SICombinedTerminal::WriteDataPUN)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59daa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SICombinedTerminal::ReadDataPUN)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x59daccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.SerializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::SICombinedTerminal::SerializeZoneData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59db318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"SerializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.DeserializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::SICombinedTerminal::DeserializeZoneData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59db408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"DeserializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.PlayerHandScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(int32_t)>(&::GlobalNamespace::SICombinedTerminal::PlayerHandScanned)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x59db73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"PlayerHandScanned", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.TouchscreenButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t, ::GlobalNamespace::SICombinedTerminal_TerminalSubFunction)>(&::GlobalNamespace::SICombinedTerminal::TouchscreenButtonPressed)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x59db99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SICombinedTerminal_TerminalSubFunction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.SetActivePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(int32_t)>(&::GlobalNamespace::SICombinedTerminal::SetActivePage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59da290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"SetActivePage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.AnimQueueState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(::GlobalNamespace::EKioskAnimState)>(&::GlobalNamespace::SICombinedTerminal::AnimQueueState)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59da114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"AnimQueueState", {}, {::i2c::type_of<::GlobalNamespace::EKioskAnimState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal.PlayWrongPlayerBuzz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::SICombinedTerminal::PlayWrongPlayerBuzz)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59dc234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"PlayWrongPlayerBuzz", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SICombinedTerminal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SICombinedTerminal::*)()>(&::GlobalNamespace::SICombinedTerminal::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59dc2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::UnityW<::GlobalNamespace::SIPlayer>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_activePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activePlayer;
}
constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_activePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activePlayer;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_activePlayer(::UnityW<::GlobalNamespace::SIPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activePlayer = value;
}
constexpr bool& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_isOccupiedByActivePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOccupiedByActivePlayer;
}
constexpr bool const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_isOccupiedByActivePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOccupiedByActivePlayer;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_isOccupiedByActivePlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOccupiedByActivePlayer = value;
}
constexpr bool& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_isOccupiedByLocalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOccupiedByLocalPlayer;
}
constexpr bool const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_isOccupiedByLocalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOccupiedByLocalPlayer;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_isOccupiedByLocalPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOccupiedByLocalPlayer = value;
}
constexpr bool& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_isOccupied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOccupied;
}
constexpr bool const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_isOccupied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOccupied;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_isOccupied(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOccupied = value;
}
constexpr bool& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_wasOccupied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasOccupied;
}
constexpr bool const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_wasOccupied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasOccupied;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_wasOccupied(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasOccupied = value;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfection>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_superInfection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superInfection;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfection> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_superInfection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superInfection;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_superInfection(::UnityW<::GlobalNamespace::SuperInfection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___superInfection = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetDispenser>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_dispenser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenser;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetDispenser> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_dispenser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenser;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_dispenser(::UnityW<::GlobalNamespace::SIGadgetDispenser>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenser = value;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeStation>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_techTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTree;
}
constexpr ::UnityW<::GlobalNamespace::SITechTreeStation> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_techTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___techTree;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_techTree(::UnityW<::GlobalNamespace::SITechTreeStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___techTree = value;
}
constexpr ::UnityW<::GlobalNamespace::SIResourceCollection>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_resourceCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCollection;
}
constexpr ::UnityW<::GlobalNamespace::SIResourceCollection> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_resourceCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceCollection;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_resourceCollection(::UnityW<::GlobalNamespace::SIResourceCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceCollection = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTAnimator>>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_m_gtAnimators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtAnimators;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTAnimator>> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_m_gtAnimators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtAnimators;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_m_gtAnimators(::ArrayW<::UnityW<::GlobalNamespace::GTAnimator>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gtAnimators = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_activeUserBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeUserBounds;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_activeUserBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeUserBounds;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_activeUserBounds(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeUserBounds = value;
}
constexpr float_t& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_foldupDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foldupDelay;
}
constexpr float_t const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_foldupDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foldupDelay;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_foldupDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foldupDelay = value;
}
constexpr float_t& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_foldupTimeStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foldupTimeStart;
}
constexpr float_t const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_foldupTimeStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foldupTimeStart;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_foldupTimeStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foldupTimeStart = value;
}
constexpr ::GlobalNamespace::EKioskAnimState& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::EKioskAnimState const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_state(::GlobalNamespace::EKioskAnimState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& GlobalNamespace::SICombinedTerminal::__cordl_internal_get__activePage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activePage;
}
constexpr int32_t const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get__activePage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activePage;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set__activePage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activePage = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_zeroZeroImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroZeroImage;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_zeroZeroImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zeroZeroImage;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_zeroZeroImage(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zeroZeroImage = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_onePointTwoText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onePointTwoText;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_onePointTwoText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onePointTwoText;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_onePointTwoText(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onePointTwoText = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_rigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_rigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_rigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigs = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_wrongPlayerBuzz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongPlayerBuzz;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SICombinedTerminal::__cordl_internal_get_wrongPlayerBuzz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongPlayerBuzz;
}
constexpr void GlobalNamespace::SICombinedTerminal::__cordl_internal_set_wrongPlayerBuzz(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrongPlayerBuzz = value;
}
inline bool GlobalNamespace::SICombinedTerminal::get_IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> GlobalNamespace::SICombinedTerminal::get_SIManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"get_SIManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionManager>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SICombinedTerminal::get_ActivePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"get_ActivePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SICombinedTerminal::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SICombinedTerminal::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SICombinedTerminal::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SICombinedTerminal::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SICombinedTerminal::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SICombinedTerminal::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SICombinedTerminal::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SICombinedTerminal::SerializeZoneData(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"SerializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::SICombinedTerminal::DeserializeZoneData(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"DeserializeZoneData", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::SICombinedTerminal::PlayerHandScanned(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"PlayerHandScanned", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr);
}
inline void GlobalNamespace::SICombinedTerminal::TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, ::GlobalNamespace::SICombinedTerminal_TerminalSubFunction  subFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SICombinedTerminal_TerminalSubFunction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr, subFunction);
}
inline void GlobalNamespace::SICombinedTerminal::SetActivePage(int32_t  pageId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"SetActivePage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageId);
}
inline void GlobalNamespace::SICombinedTerminal::AnimQueueState(::GlobalNamespace::EKioskAnimState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"AnimQueueState", {}, {::i2c::type_of<::GlobalNamespace::EKioskAnimState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SICombinedTerminal::PlayWrongPlayerBuzz(::UnityEngine::Transform*  xForm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {"PlayWrongPlayerBuzz", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xForm);
}
inline void GlobalNamespace::SICombinedTerminal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SICombinedTerminal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SICombinedTerminal* GlobalNamespace::SICombinedTerminal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SICombinedTerminal*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::SICombinedTerminal::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::SICombinedTerminal::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SICombinedTerminal::SICombinedTerminal()   {
}
