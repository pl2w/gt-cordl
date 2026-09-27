#pragma once
// IWYU pragma private; include "GlobalNamespace/SIQuestBoard.hpp"
#include "GlobalNamespace/zzzz__SIQuestBoard_RoomFXDurationState_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIQuestBoard_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SIQuestBoard_RoomFXDurationState_def.hpp"
#include "GlobalNamespace/zzzz__SIUIPlayerQuestDisplay_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_RoomFXType_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfection_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SIQuestBoard::WriteDataPUN)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ae4cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SIQuestBoard::ReadDataPUN)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ae4db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.GrantBonusPointProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::GrantBonusPointProgress)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ae4e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"GrantBonusPointProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.IGorillaSliceableSimple_SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::IGorillaSliceableSimple_SliceUpdate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ae4f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.AuthorityUpdateScreenAssignments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::AuthorityUpdateScreenAssignments)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5ae5178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"AuthorityUpdateScreenAssignments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ae54f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae557c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.ForceCompleteQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)(int32_t)>(&::GlobalNamespace::SIQuestBoard::ForceCompleteQuest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae5588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"ForceCompleteQuest", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatAddPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)(int32_t)>(&::GlobalNamespace::SIQuestBoard::CheatAddPoints)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae558c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatAddPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatAddBonusPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)(int32_t)>(&::GlobalNamespace::SIQuestBoard::CheatAddBonusPoints)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae5590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatAddBonusPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatRoomFXDurationPlus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::CheatRoomFXDurationPlus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ae5594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFXDurationPlus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatRoomFXDurationMinus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::CheatRoomFXDurationMinus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ae565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFXDurationMinus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatRoomFX_Underwater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::CheatRoomFX_Underwater)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ae5724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_Underwater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatRoomFX_LunarMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::CheatRoomFX_LunarMode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ae577c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_LunarMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatRoomFX_ConstLowG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::CheatRoomFX_ConstLowG)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ae57d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_ConstLowG", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatRoomFX_Bouncy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::CheatRoomFX_Bouncy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ae5824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_Bouncy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.CheatRoomFX_Supercharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::CheatRoomFX_Supercharge)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ae5878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_Supercharge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard.StartRoomFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)(::GlobalNamespace::SuperInfectionManager_RoomFXType, float_t)>(&::GlobalNamespace::SIQuestBoard::StartRoomFX)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae5778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"StartRoomFX", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_RoomFXType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIQuestBoard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIQuestBoard::*)()>(&::GlobalNamespace::SIQuestBoard::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ae58cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SuperInfection>& GlobalNamespace::SIQuestBoard::__cordl_internal_get_superInfection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superInfection;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfection> const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_superInfection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superInfection;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_superInfection(::UnityW<::GlobalNamespace::SuperInfection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___superInfection = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*& GlobalNamespace::SIQuestBoard::__cordl_internal_get_questDisplays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questDisplays;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>* const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_questDisplays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questDisplays;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_questDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questDisplays = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::SIQuestBoard::__cordl_internal_get_bonusPointArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusPointArea;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_bonusPointArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonusPointArea;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_bonusPointArea(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonusPointArea = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::SIQuestBoard::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SIQuestBoard::__cordl_internal_get_celebrateParticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___celebrateParticle;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_celebrateParticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___celebrateParticle;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_celebrateParticle(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___celebrateParticle = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIQuestBoard::__cordl_internal_get_timeToNewQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToNewQuests;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_timeToNewQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToNewQuests;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_timeToNewQuests(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToNewQuests = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIQuestBoard_RoomFXDurationState,float_t>*& GlobalNamespace::SIQuestBoard::__cordl_internal_get_roomFXDurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomFXDurations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIQuestBoard_RoomFXDurationState,float_t>* const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_roomFXDurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomFXDurations;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_roomFXDurations(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIQuestBoard_RoomFXDurationState,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomFXDurations = value;
}
constexpr ::GlobalNamespace::SIQuestBoard_RoomFXDurationState& GlobalNamespace::SIQuestBoard::__cordl_internal_get_currentDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDuration;
}
constexpr ::GlobalNamespace::SIQuestBoard_RoomFXDurationState const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_currentDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDuration;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_currentDuration(::GlobalNamespace::SIQuestBoard_RoomFXDurationState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDuration = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SIQuestBoard::__cordl_internal_get_RoomFXDurationReadout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomFXDurationReadout;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SIQuestBoard::__cordl_internal_get_RoomFXDurationReadout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomFXDurationReadout;
}
constexpr void GlobalNamespace::SIQuestBoard::__cordl_internal_set_RoomFXDurationReadout(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomFXDurationReadout = value;
}
inline void GlobalNamespace::SIQuestBoard::setStaticF__timeToNewQuests_chars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "_timeToNewQuests_chars", ::GlobalNamespace::SIQuestBoard*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> GlobalNamespace::SIQuestBoard::getStaticF__timeToNewQuests_chars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_timeToNewQuests_chars", ::GlobalNamespace::SIQuestBoard*>();
}
inline void GlobalNamespace::SIQuestBoard::setStaticF__lastTotalSeconds(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_lastTotalSeconds", ::GlobalNamespace::SIQuestBoard*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SIQuestBoard::getStaticF__lastTotalSeconds()  {
return ::cordl_internals::getStaticField<int32_t, "_lastTotalSeconds", ::GlobalNamespace::SIQuestBoard*>();
}
inline void GlobalNamespace::SIQuestBoard::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SIQuestBoard::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SIQuestBoard::GrantBonusPointProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"GrantBonusPointProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::IGorillaSliceableSimple_SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::AuthorityUpdateScreenAssignments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"AuthorityUpdateScreenAssignments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::ForceCompleteQuest(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"ForceCompleteQuest", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::SIQuestBoard::CheatAddPoints(int32_t  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatAddPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void GlobalNamespace::SIQuestBoard::CheatAddBonusPoints(int32_t  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatAddBonusPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void GlobalNamespace::SIQuestBoard::CheatRoomFXDurationPlus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFXDurationPlus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::CheatRoomFXDurationMinus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFXDurationMinus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::CheatRoomFX_Underwater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_Underwater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::CheatRoomFX_LunarMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_LunarMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::CheatRoomFX_ConstLowG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_ConstLowG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::CheatRoomFX_Bouncy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_Bouncy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::CheatRoomFX_Supercharge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"CheatRoomFX_Supercharge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIQuestBoard::StartRoomFX(::GlobalNamespace::SuperInfectionManager_RoomFXType  fxType, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {"StartRoomFX", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionManager_RoomFXType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fxType, duration);
}
inline void GlobalNamespace::SIQuestBoard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIQuestBoard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIQuestBoard* GlobalNamespace::SIQuestBoard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIQuestBoard*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::SIQuestBoard::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::SIQuestBoard::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIQuestBoard::SIQuestBoard()   {
}
