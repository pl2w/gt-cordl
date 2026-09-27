#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpTeleporter.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "TMPro/zzzz__TMP_Text_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpTeleporter_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpTeleporterSerializer_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a0e630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::SliceUpdate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a0e75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::OnEnable)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5a0ecac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a0ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.OnVirtualStumpEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::OnVirtualStumpEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a0eff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnVirtualStumpEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.OnVirtualStumpDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::OnVirtualStumpDisabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a0f04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnVirtualStumpDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VirtualStumpTeleporter::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5a0f0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VirtualStumpTeleporter::OnTriggerStay)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5a0f414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VirtualStumpTeleporter::OnTriggerExit)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a0f9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.ShowCountdownText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::ShowCountdownText)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5a0f264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"ShowCountdownText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.HideCountdownText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::HideCountdownText)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a0f880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"HideCountdownText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.UpdateCountdownText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::UpdateCountdownText)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a0f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"UpdateCountdownText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.TeleportPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::TeleportPlayer)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a0f728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"TeleportPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.FinishTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)(bool)>(&::GlobalNamespace::VirtualStumpTeleporter::FinishTeleport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a0faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"FinishTeleport", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.DenyAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::DenyAccess)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5a0e87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"DenyAccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.AllowAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::AllowAccess)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5a0ea84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"AllowAccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.GetIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::GetIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a0fb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.GetZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTZone (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::GetZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0fc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.GetExitVStumpJoinTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::GetExitVStumpJoinTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetExitVStumpJoinTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.GetReturnTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::GetReturnTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0fc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetReturnTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.GetAutoLoadMapModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::GetAutoLoadMapModId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0fc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetAutoLoadMapModId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.GetAutoLoadGamemode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::GetAutoLoadGamemode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0fc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetAutoLoadGamemode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.GetReturnGamemode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::GetReturnGamemode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0fc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetReturnGamemode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter.PlayTeleportEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)(bool, bool, ::UnityEngine::AudioSource*, bool)>(&::GlobalNamespace::VirtualStumpTeleporter::PlayTeleportEffects)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5a0fc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"PlayTeleportEffects", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpTeleporter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpTeleporter::*)()>(&::GlobalNamespace::VirtualStumpTeleporter::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a100ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_stayInTriggerDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stayInTriggerDuration;
}
constexpr float_t const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_stayInTriggerDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stayInTriggerDuration;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_stayInTriggerDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stayInTriggerDuration = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_countdownTexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownTexts;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_countdownTexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownTexts;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_countdownTexts(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countdownTexts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_handHoldObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handHoldObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_handHoldObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handHoldObjects;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_handHoldObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handHoldObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_accessDeniedDisabledObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accessDeniedDisabledObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_accessDeniedDisabledObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accessDeniedDisabledObjects;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_accessDeniedDisabledObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accessDeniedDisabledObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_accessDeniedEnabledObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accessDeniedEnabledObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_accessDeniedEnabledObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accessDeniedEnabledObjects;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_accessDeniedEnabledObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accessDeniedEnabledObjects = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_returnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_returnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnLocation;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_returnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnLocation = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_entranceZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entranceZone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_entranceZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entranceZone;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_entranceZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entranceZone = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_exitVStumpJoinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitVStumpJoinTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_exitVStumpJoinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitVStumpJoinTrigger;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_exitVStumpJoinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitVStumpJoinTrigger = value;
}
constexpr int64_t& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_autoLoadMapModId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoLoadMapModId;
}
constexpr int64_t const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_autoLoadMapModId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoLoadMapModId;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_autoLoadMapModId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoLoadMapModId = value;
}
constexpr ::GorillaGameModes::GameModeType& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_autoLoadGamemode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoLoadGamemode;
}
constexpr ::GorillaGameModes::GameModeType const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_autoLoadGamemode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoLoadGamemode;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_autoLoadGamemode(::GorillaGameModes::GameModeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoLoadGamemode = value;
}
constexpr ::GorillaGameModes::GameModeType& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_forcedGamemodeUponReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedGamemodeUponReturn;
}
constexpr ::GorillaGameModes::GameModeType const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_forcedGamemodeUponReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedGamemodeUponReturn;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_forcedGamemodeUponReturn(::GorillaGameModes::GameModeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedGamemodeUponReturn = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_teleportToVStumpVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToVStumpVFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_teleportToVStumpVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToVStumpVFX;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_teleportToVStumpVFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportToVStumpVFX = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_returnFromVStumpVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnFromVStumpVFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_returnFromVStumpVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnFromVStumpVFX;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_returnFromVStumpVFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnFromVStumpVFX = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_teleporterSFXAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleporterSFXAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_teleporterSFXAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleporterSFXAudioSource;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_teleporterSFXAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleporterSFXAudioSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_teleportingPlayerSoundClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportingPlayerSoundClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_teleportingPlayerSoundClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportingPlayerSoundClips;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_teleportingPlayerSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportingPlayerSoundClips = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_observerSoundClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observerSoundClips;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_observerSoundClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observerSoundClips;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_observerSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observerSoundClips = value;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_netSerializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSerializer;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_netSerializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSerializer;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_netSerializer(::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netSerializer = value;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_mySerializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySerializer;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer> const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_mySerializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySerializer;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_mySerializer(::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mySerializer = value;
}
constexpr bool& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_accessDenied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accessDenied;
}
constexpr bool const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_accessDenied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accessDenied;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_accessDenied(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accessDenied = value;
}
constexpr bool& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_teleporting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleporting;
}
constexpr bool const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_teleporting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleporting;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_teleporting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleporting = value;
}
constexpr float_t& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_triggerEntryTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEntryTime;
}
constexpr float_t const& GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_get_triggerEntryTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerEntryTime;
}
constexpr void GlobalNamespace::VirtualStumpTeleporter::__cordl_internal_set_triggerEntryTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerEntryTime = value;
}
inline void GlobalNamespace::VirtualStumpTeleporter::setStaticF_lastLoggingHandsMsgId(uint16_t  value)  {
::cordl_internals::setStaticField<uint16_t, "lastLoggingHandsMsgId", ::GlobalNamespace::VirtualStumpTeleporter*>(std::forward<uint16_t>(value));
}
inline uint16_t GlobalNamespace::VirtualStumpTeleporter::getStaticF_lastLoggingHandsMsgId()  {
return ::cordl_internals::getStaticField<uint16_t, "lastLoggingHandsMsgId", ::GlobalNamespace::VirtualStumpTeleporter*>();
}
inline bool GlobalNamespace::VirtualStumpTeleporter::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::OnVirtualStumpEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnVirtualStumpEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::OnVirtualStumpDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnVirtualStumpDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VirtualStumpTeleporter::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VirtualStumpTeleporter::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VirtualStumpTeleporter::ShowCountdownText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"ShowCountdownText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::HideCountdownText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"HideCountdownText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::UpdateCountdownText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"UpdateCountdownText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::TeleportPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"TeleportPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::FinishTeleport(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"FinishTeleport", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::VirtualStumpTeleporter::DenyAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"DenyAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::AllowAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"AllowAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int16_t GlobalNamespace::VirtualStumpTeleporter::GetIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline ::GlobalNamespace::GTZone GlobalNamespace::VirtualStumpTeleporter::GetZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTZone>(this, ___internal_method);
}
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GlobalNamespace::VirtualStumpTeleporter::GetExitVStumpJoinTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetExitVStumpJoinTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::VirtualStumpTeleporter::GetReturnTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetReturnTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline int64_t GlobalNamespace::VirtualStumpTeleporter::GetAutoLoadMapModId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetAutoLoadMapModId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::VirtualStumpTeleporter::GetAutoLoadGamemode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetAutoLoadGamemode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::VirtualStumpTeleporter::GetReturnGamemode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"GetReturnGamemode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpTeleporter::PlayTeleportEffects(bool  forLocalPlayer, bool  toVStump, ::UnityEngine::AudioSource*  vStumpSFXAudioSource, bool  sendRPC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {"PlayTeleportEffects", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forLocalPlayer, toVStump, vStumpSFXAudioSource, sendRPC);
}
inline void GlobalNamespace::VirtualStumpTeleporter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpTeleporter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VirtualStumpTeleporter* GlobalNamespace::VirtualStumpTeleporter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VirtualStumpTeleporter*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::VirtualStumpTeleporter::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::VirtualStumpTeleporter::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::VirtualStumpTeleporter::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::VirtualStumpTeleporter::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VirtualStumpTeleporter::VirtualStumpTeleporter()   {
}
