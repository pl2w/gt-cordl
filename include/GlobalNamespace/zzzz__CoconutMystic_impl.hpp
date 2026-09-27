#pragma once
// IWYU pragma private; include "GlobalNamespace/CoconutMystic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoconutMystic_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__GeodeItem_def.hpp"
#include "GlobalNamespace/zzzz__RandomLocalizedStrings_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoconutMystic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoconutMystic::*)()>(&::GlobalNamespace::CoconutMystic::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5755290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoconutMystic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoconutMystic::*)()>(&::GlobalNamespace::CoconutMystic::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57552e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoconutMystic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoconutMystic::*)()>(&::GlobalNamespace::CoconutMystic::OnDisable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57553a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoconutMystic.OnPhotonEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoconutMystic::*)(::ExitGames::Client::Photon::EventData*)>(&::GlobalNamespace::CoconutMystic::OnPhotonEvent)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5755460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"OnPhotonEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoconutMystic.UpdateLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoconutMystic::*)()>(&::GlobalNamespace::CoconutMystic::UpdateLabel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5755680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"UpdateLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoconutMystic.ShowAnswer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoconutMystic::*)()>(&::GlobalNamespace::CoconutMystic::ShowAnswer)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x57556e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"ShowAnswer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoconutMystic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoconutMystic::*)()>(&::GlobalNamespace::CoconutMystic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x575593c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::CoconutMystic::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::CoconutMystic::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::CoconutMystic::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::GlobalNamespace::GeodeItem>& GlobalNamespace::CoconutMystic::__cordl_internal_get_geodeItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geodeItem;
}
constexpr ::UnityW<::GlobalNamespace::GeodeItem> const& GlobalNamespace::CoconutMystic::__cordl_internal_get_geodeItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geodeItem;
}
constexpr void GlobalNamespace::CoconutMystic::__cordl_internal_set_geodeItem(::UnityW<::GlobalNamespace::GeodeItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___geodeItem = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::CoconutMystic::__cordl_internal_get_soundPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::CoconutMystic::__cordl_internal_get_soundPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundPlayer;
}
constexpr void GlobalNamespace::CoconutMystic::__cordl_internal_set_soundPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundPlayer = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::CoconutMystic::__cordl_internal_get_breakEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::CoconutMystic::__cordl_internal_get_breakEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakEffect;
}
constexpr void GlobalNamespace::CoconutMystic::__cordl_internal_set_breakEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::RandomLocalizedStrings>& GlobalNamespace::CoconutMystic::__cordl_internal_get_answers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___answers;
}
constexpr ::UnityW<::GlobalNamespace::RandomLocalizedStrings> const& GlobalNamespace::CoconutMystic::__cordl_internal_get_answers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___answers;
}
constexpr void GlobalNamespace::CoconutMystic::__cordl_internal_set_answers(::UnityW<::GlobalNamespace::RandomLocalizedStrings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___answers = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CoconutMystic::__cordl_internal_get_label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CoconutMystic::__cordl_internal_get_label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___label;
}
constexpr void GlobalNamespace::CoconutMystic::__cordl_internal_set_label(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___label = value;
}
constexpr bool& GlobalNamespace::CoconutMystic::__cordl_internal_get_distinct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distinct;
}
constexpr bool const& GlobalNamespace::CoconutMystic::__cordl_internal_get_distinct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distinct;
}
constexpr void GlobalNamespace::CoconutMystic::__cordl_internal_set_distinct(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distinct = value;
}
inline void GlobalNamespace::CoconutMystic::setStaticF_kUpdateLabelEvent(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kUpdateLabelEvent", ::GlobalNamespace::CoconutMystic*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CoconutMystic::getStaticF_kUpdateLabelEvent()  {
return ::cordl_internals::getStaticField<int32_t, "kUpdateLabelEvent", ::GlobalNamespace::CoconutMystic*>();
}
inline void GlobalNamespace::CoconutMystic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CoconutMystic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CoconutMystic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CoconutMystic::OnPhotonEvent(::ExitGames::Client::Photon::EventData*  evData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"OnPhotonEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evData);
}
inline void GlobalNamespace::CoconutMystic::UpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"UpdateLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CoconutMystic::ShowAnswer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {"ShowAnswer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CoconutMystic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoconutMystic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CoconutMystic* GlobalNamespace::CoconutMystic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CoconutMystic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoconutMystic::CoconutMystic()   {
}
