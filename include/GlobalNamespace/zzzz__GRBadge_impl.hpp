#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBadge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRBadge_def.hpp"
#include "GlobalNamespace/zzzz__GRBadge_BadgeState_def.hpp"
#include "GlobalNamespace/zzzz__GRBadge_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBadge.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::OnEntityInit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x587165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58716a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)(int64_t, int64_t)>(&::GlobalNamespace::GRBadge::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58716a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::OnDestroy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58716a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::GRBadge::Setup)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5871794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.RefreshText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRBadge::RefreshText)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5871934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"RefreshText", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::Hide)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5871abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"Hide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.UnHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::UnHide)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5871b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"UnHide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.IsAttachedToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::IsAttachedToPlayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5871bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"IsAttachedToPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.StartRetracting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::StartRetracting)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5871be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"StartRetracting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.RetractCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::RetractCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5871d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"RetractCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge.PlayAttachFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::PlayAttachFx)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5871c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"PlayAttachFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge::*)()>(&::GlobalNamespace::GRBadge::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5871d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRBadge::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRBadge::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRBadge::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRBadge::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_playerName(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRBadge::__cordl_internal_get_playerTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTitle;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRBadge::__cordl_internal_get_playerTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTitle;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_playerTitle(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTitle = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRBadge::__cordl_internal_get_playerLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLevel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRBadge::__cordl_internal_get_playerLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLevel;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_playerLevel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLevel = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GRBadge::__cordl_internal_get_badgeMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeMesh;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GRBadge::__cordl_internal_get_badgeMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeMesh;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_badgeMesh(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeMesh = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRBadge::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRBadge::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GlobalNamespace::GRBadge::__cordl_internal_get_retractSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractSpeed;
}
constexpr float_t const& GlobalNamespace::GRBadge::__cordl_internal_get_retractSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractSpeed;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_retractSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractSpeed = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRBadge::__cordl_internal_get_badgeAttachSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeAttachSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRBadge::__cordl_internal_get_badgeAttachSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeAttachSound;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_badgeAttachSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeAttachSound = value;
}
constexpr float_t& GlobalNamespace::GRBadge::__cordl_internal_get_badgeAttachSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeAttachSoundVolume;
}
constexpr float_t const& GlobalNamespace::GRBadge::__cordl_internal_get_badgeAttachSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeAttachSoundVolume;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_badgeAttachSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeAttachSoundVolume = value;
}
constexpr int32_t& GlobalNamespace::GRBadge::__cordl_internal_get_dispenserIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserIndex;
}
constexpr int32_t const& GlobalNamespace::GRBadge::__cordl_internal_get_dispenserIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserIndex;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_dispenserIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenserIndex = value;
}
constexpr int32_t& GlobalNamespace::GRBadge::__cordl_internal_get_actorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNr;
}
constexpr int32_t const& GlobalNamespace::GRBadge::__cordl_internal_get_actorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNr;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_actorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorNr = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRBadge::__cordl_internal_get_retractCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRBadge::__cordl_internal_get_retractCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractCoroutine;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_retractCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractCoroutine = value;
}
constexpr int32_t& GlobalNamespace::GRBadge::__cordl_internal_get_lastRedeemedPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRedeemedPoints;
}
constexpr int32_t const& GlobalNamespace::GRBadge::__cordl_internal_get_lastRedeemedPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRedeemedPoints;
}
constexpr void GlobalNamespace::GRBadge::__cordl_internal_set_lastRedeemedPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRedeemedPoints = value;
}
inline void GlobalNamespace::GRBadge::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBadge::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBadge::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRBadge::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBadge::Setup(::GlobalNamespace::NetPlayer*  player, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, index);
}
inline void GlobalNamespace::GRBadge::RefreshText(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"RefreshText", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GRBadge::Hide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"Hide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBadge::UnHide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"UnHide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRBadge::IsAttachedToPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"IsAttachedToPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRBadge::StartRetracting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"StartRetracting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GRBadge::RetractCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"RetractCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GRBadge::PlayAttachFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {"PlayAttachFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBadge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBadge* GlobalNamespace::GRBadge::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBadge*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRBadge::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRBadge::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBadge::GRBadge()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRBadge__RetractCoroutine_d__25._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge__RetractCoroutine_d__25::*)(int32_t)>(&::GlobalNamespace::GRBadge__RetractCoroutine_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5871d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge__RetractCoroutine_d__25.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge__RetractCoroutine_d__25::*)()>(&::GlobalNamespace::GRBadge__RetractCoroutine_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5871db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge__RetractCoroutine_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRBadge__RetractCoroutine_d__25::*)()>(&::GlobalNamespace::GRBadge__RetractCoroutine_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5871db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge__RetractCoroutine_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRBadge__RetractCoroutine_d__25::*)()>(&::GlobalNamespace::GRBadge__RetractCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5872074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge__RetractCoroutine_d__25.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBadge__RetractCoroutine_d__25::*)()>(&::GlobalNamespace::GRBadge__RetractCoroutine_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x587207c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBadge__RetractCoroutine_d__25.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRBadge__RetractCoroutine_d__25::*)()>(&::GlobalNamespace::GRBadge__RetractCoroutine_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58720b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBadge>& GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GRBadge> const& GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GRBadge__RetractCoroutine_d__25::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRBadge>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GRBadge__RetractCoroutine_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GRBadge__RetractCoroutine_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRBadge__RetractCoroutine_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRBadge__RetractCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GRBadge__RetractCoroutine_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRBadge__RetractCoroutine_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GRBadge__RetractCoroutine_d__25* GlobalNamespace::GRBadge__RetractCoroutine_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBadge__RetractCoroutine_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GRBadge__RetractCoroutine_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GRBadge__RetractCoroutine_d__25::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GRBadge__RetractCoroutine_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GRBadge__RetractCoroutine_d__25::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GRBadge__RetractCoroutine_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GRBadge__RetractCoroutine_d__25::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBadge__RetractCoroutine_d__25::GRBadge__RetractCoroutine_d__25()   {
}
