#pragma once
// IWYU pragma private; include "GlobalNamespace/DJScratchSoundPlayer.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DJScratchSoundPlayer_def.hpp"
#include "GlobalNamespace/zzzz__DJScratchtable_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__ScratchSoundType_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DJScratchSoundPlayer::*)()>(&::GlobalNamespace::DJScratchSoundPlayer::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)(bool)>(&::GlobalNamespace::DJScratchSoundPlayer::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564b924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::DJScratchSoundPlayer::*)()>(&::GlobalNamespace::DJScratchSoundPlayer::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564b92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::DJScratchSoundPlayer::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564b934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)()>(&::GlobalNamespace::DJScratchSoundPlayer::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x564b93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)()>(&::GlobalNamespace::DJScratchSoundPlayer::OnEnable)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x564b940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)()>(&::GlobalNamespace::DJScratchSoundPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x564bb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::DJScratchSoundPlayer::OnSpawn)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x564bc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)(::GlobalNamespace::ScratchSoundType, bool)>(&::GlobalNamespace::DJScratchSoundPlayer::Play)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x564bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"Play", {}, {::i2c::type_of<::GlobalNamespace::ScratchSoundType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.OnPlayEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::DJScratchSoundPlayer::OnPlayEvent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x564bee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnPlayEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer.PlayLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)(::GlobalNamespace::ScratchSoundType, bool)>(&::GlobalNamespace::DJScratchSoundPlayer::PlayLocal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x564bdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"PlayLocal", {}, {::i2c::type_of<::GlobalNamespace::ScratchSoundType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchSoundPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchSoundPlayer::*)()>(&::GlobalNamespace::DJScratchSoundPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564c0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchForward;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchForward;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set_scratchForward(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchForward = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchBack;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchBack;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set_scratchBack(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchBack = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchPause()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchPause;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchPause() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchPause;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set_scratchPause(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchPause = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchResume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchResume;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchResume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchResume;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set_scratchResume(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchResume = value;
}
constexpr ::UnityW<::GlobalNamespace::DJScratchtable>& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchTableLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchTableLeft;
}
constexpr ::UnityW<::GlobalNamespace::DJScratchtable> const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchTableLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchTableLeft;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set_scratchTableLeft(::UnityW<::GlobalNamespace::DJScratchtable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchTableLeft = value;
}
constexpr ::UnityW<::GlobalNamespace::DJScratchtable>& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchTableRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchTableRight;
}
constexpr ::UnityW<::GlobalNamespace::DJScratchtable> const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_scratchTableRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchTableRight;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set_scratchTableRight(::UnityW<::GlobalNamespace::DJScratchtable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchTableRight = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::DJScratchSoundPlayer::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::DJScratchSoundPlayer::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::DJScratchSoundPlayer::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::DJScratchSoundPlayer::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::DJScratchSoundPlayer::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DJScratchSoundPlayer::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DJScratchSoundPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DJScratchSoundPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DJScratchSoundPlayer::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::DJScratchSoundPlayer::Play(::GlobalNamespace::ScratchSoundType  type, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"Play", {}, {::i2c::type_of<::GlobalNamespace::ScratchSoundType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, isLeft);
}
inline void GlobalNamespace::DJScratchSoundPlayer::OnPlayEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"OnPlayEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GlobalNamespace::DJScratchSoundPlayer::PlayLocal(::GlobalNamespace::ScratchSoundType  type, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {"PlayLocal", {}, {::i2c::type_of<::GlobalNamespace::ScratchSoundType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, isLeft);
}
inline void GlobalNamespace::DJScratchSoundPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchSoundPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DJScratchSoundPlayer* GlobalNamespace::DJScratchSoundPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DJScratchSoundPlayer*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::DJScratchSoundPlayer::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::DJScratchSoundPlayer::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DJScratchSoundPlayer::DJScratchSoundPlayer()   {
}
