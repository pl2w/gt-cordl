#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersCage.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersCage_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.get_critterScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CrittersCage::*)()>(&::GlobalNamespace::CrittersCage::get_critterScale)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55fcf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"get_critterScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.get_CanCatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersCage::*)()>(&::GlobalNamespace::CrittersCage::get_CanCatch)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x55fcfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"get_CanCatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.SetHasCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)(bool)>(&::GlobalNamespace::CrittersCage::SetHasCritter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55fd000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"SetHasCritter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)()>(&::GlobalNamespace::CrittersCage::Initialize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55fd088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.UpdateCageVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)()>(&::GlobalNamespace::CrittersCage::UpdateCageVisuals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x55fd064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"UpdateCageVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.SetLidActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)(bool, bool)>(&::GlobalNamespace::CrittersCage::SetLidActive)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x55fd0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"SetLidActive", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.RemoteGrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersCage::RemoteGrabbedBy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55fd128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.GrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)(::GlobalNamespace::CrittersActor*, bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::CrittersCage::GrabbedBy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55fd17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.Released
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)(bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersCage::Released)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x55fd1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.HandleRemoteReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)()>(&::GlobalNamespace::CrittersCage::HandleRemoteReleased)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55fd220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.ShouldDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersCage::*)()>(&::GlobalNamespace::CrittersCage::ShouldDespawn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x55fd248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.SendDataByCrittersActorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersCage::SendDataByCrittersActorType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x55fd278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.UpdateSpecificActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersCage::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersCage::UpdateSpecificActor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x55fd2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.AddActorDataToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersCage::*)(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>)>(&::GlobalNamespace::CrittersCage::AddActorDataToList)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55fd378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.TotalActorDataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersCage::*)()>(&::GlobalNamespace::CrittersCage::TotalActorDataLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55fd468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage.UpdateFromRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersCage::*)(::ArrayW<::System::Object*>, int32_t)>(&::GlobalNamespace::CrittersCage::UpdateFromRPC)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55fd480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCage::*)()>(&::GlobalNamespace::CrittersCage::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55fd53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersCage::__cordl_internal_get_grabPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersCage::__cordl_internal_get_grabPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPosition;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_grabPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersCage::__cordl_internal_get_cagePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cagePosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersCage::__cordl_internal_get_cagePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cagePosition;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_cagePosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cagePosition = value;
}
constexpr float_t& GlobalNamespace::CrittersCage::__cordl_internal_get_grabDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDistance;
}
constexpr float_t const& GlobalNamespace::CrittersCage::__cordl_internal_get_grabDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDistance;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_grabDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabDistance = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::CrittersCage::__cordl_internal_get_critterScales()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterScales;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::CrittersCage::__cordl_internal_get_critterScales() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterScales;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_critterScales(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterScales = value;
}
constexpr float_t& GlobalNamespace::CrittersCage::__cordl_internal_get_releaseCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseCooldown;
}
constexpr float_t const& GlobalNamespace::CrittersCage::__cordl_internal_get_releaseCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseCooldown;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_releaseCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseCooldown = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrittersCage::__cordl_internal_get_sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrittersCage::__cordl_internal_get_sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_sound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersCage::__cordl_internal_get_openSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersCage::__cordl_internal_get_openSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openSound;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_openSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersCage::__cordl_internal_get_closeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersCage::__cordl_internal_get_closeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeSound;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_closeSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeSound = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersCage::__cordl_internal_get_lid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lid;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersCage::__cordl_internal_get_lid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lid;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_lid(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lid = value;
}
constexpr bool& GlobalNamespace::CrittersCage::__cordl_internal_get_heldByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldByPlayer;
}
constexpr bool const& GlobalNamespace::CrittersCage::__cordl_internal_get_heldByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldByPlayer;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_heldByPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldByPlayer = value;
}
constexpr bool& GlobalNamespace::CrittersCage::__cordl_internal_get_hasCritter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCritter;
}
constexpr bool const& GlobalNamespace::CrittersCage::__cordl_internal_get_hasCritter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCritter;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_hasCritter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCritter = value;
}
constexpr bool& GlobalNamespace::CrittersCage::__cordl_internal_get_inReleasingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inReleasingPosition;
}
constexpr bool const& GlobalNamespace::CrittersCage::__cordl_internal_get_inReleasingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inReleasingPosition;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set_inReleasingPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inReleasingPosition = value;
}
constexpr float_t& GlobalNamespace::CrittersCage::__cordl_internal_get__releaseCooldownEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseCooldownEnd;
}
constexpr float_t const& GlobalNamespace::CrittersCage::__cordl_internal_get__releaseCooldownEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseCooldownEnd;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set__releaseCooldownEnd(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____releaseCooldownEnd = value;
}
constexpr bool& GlobalNamespace::CrittersCage::__cordl_internal_get__lidActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lidActive;
}
constexpr bool const& GlobalNamespace::CrittersCage::__cordl_internal_get__lidActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lidActive;
}
constexpr void GlobalNamespace::CrittersCage::__cordl_internal_set__lidActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lidActive = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::CrittersCage::get_critterScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"get_critterScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersCage::get_CanCatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"get_CanCatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCage::SetHasCritter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"SetHasCritter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CrittersCage::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCage::UpdateCageVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"UpdateCageVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCage::SetLidActive(bool  active, bool  playAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {"SetLidActive", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active, playAudio);
}
inline void GlobalNamespace::CrittersCage::RemoteGrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingActor);
}
inline void GlobalNamespace::CrittersCage::GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
}
inline void GlobalNamespace::CrittersCage::Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulseVelocity, ::UnityEngine::Vector3  impulseAngularVelocity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepWorldPosition, rotation, position, impulseVelocity, impulseAngularVelocity);
}
inline void GlobalNamespace::CrittersCage::HandleRemoteReleased()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersCage::ShouldDespawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCage::SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline bool GlobalNamespace::CrittersCage::UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline int32_t GlobalNamespace::CrittersCage::AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, objList);
}
inline int32_t GlobalNamespace::CrittersCage::TotalActorDataLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CrittersCage::UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersCage*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, startingIndex);
}
inline void GlobalNamespace::CrittersCage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersCage* GlobalNamespace::CrittersCage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersCage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersCage::CrittersCage()   {
}
