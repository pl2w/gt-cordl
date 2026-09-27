#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaAmbushManager.hpp"
#include "GlobalNamespace/zzzz__GorillaTagManager_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "GorillaTagScripts/zzzz__GorillaAmbushManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSkin_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GorillaTagScripts::GorillaAmbushManager::*)()>(&::GorillaTagScripts::GorillaAmbushManager::GameType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bc540c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.get_HandEffectHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GorillaTagScripts::GorillaAmbushManager::get_HandEffectHash)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bc5424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"get_HandEffectHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.get_HandFXScaleModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GorillaTagScripts::GorillaAmbushManager::get_HandFXScaleModifier)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bc547c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"get_HandFXScaleModifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.set_HandFXScaleModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GorillaTagScripts::GorillaAmbushManager::set_HandFXScaleModifier)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bc54d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"set_HandFXScaleModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.get_isGhostTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GorillaAmbushManager::*)()>(&::GorillaTagScripts::GorillaAmbushManager::get_isGhostTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc5538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"get_isGhostTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.set_isGhostTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaAmbushManager::*)(bool)>(&::GorillaTagScripts::GorillaAmbushManager::set_isGhostTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc5540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"set_isGhostTag", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaAmbushManager::*)()>(&::GorillaTagScripts::GorillaAmbushManager::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5bc5548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaAmbushManager::*)()>(&::GorillaTagScripts::GorillaAmbushManager::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bc5660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::GorillaAmbushManager::*)()>(&::GorillaTagScripts::GorillaAmbushManager::GameModeName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bc56d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::GorillaAmbushManager::*)()>(&::GorillaTagScripts::GorillaAmbushManager::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5bc573c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.UpdatePlayerAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaAmbushManager::*)(::GlobalNamespace::VRRig*)>(&::GorillaTagScripts::GorillaAmbushManager::UpdatePlayerAppearance)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5bc58a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::GorillaAmbushManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaAmbushManager::MyMatIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bc5a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaAmbushManager::*)()>(&::GorillaTagScripts::GorillaAmbushManager::StopPlaying)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5bc5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaAmbushManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaAmbushManager::*)()>(&::GorillaTagScripts::GorillaAmbushManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bc5e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_handTapFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_handTapFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapFX;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_handTapFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTapFX = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_ambushSkin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambushSkin;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_ambushSkin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambushSkin;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_ambushSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambushSkin = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_firstPersonTaggedSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonTaggedSounds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_firstPersonTaggedSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonTaggedSounds;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_firstPersonTaggedSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstPersonTaggedSounds = value;
}
constexpr float_t& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_firstPersonTaggedSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonTaggedSoundVolume;
}
constexpr float_t const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_firstPersonTaggedSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonTaggedSoundVolume;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_firstPersonTaggedSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstPersonTaggedSoundVolume = value;
}
constexpr float_t& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_handTapScaleFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapScaleFactor;
}
constexpr float_t const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_handTapScaleFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTapScaleFactor;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_handTapScaleFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTapScaleFactor = value;
}
constexpr float_t& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_crawlingSpeedForMaxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crawlingSpeedForMaxVolume;
}
constexpr float_t const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_crawlingSpeedForMaxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crawlingSpeedForMaxVolume;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_crawlingSpeedForMaxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crawlingSpeedForMaxVolume = value;
}
constexpr bool& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get__isGhostTag_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGhostTag_k__BackingField;
}
constexpr bool const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get__isGhostTag_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGhostTag_k__BackingField;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set__isGhostTag_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isGhostTag_k__BackingField = value;
}
constexpr ::GlobalNamespace::XSceneRef& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_scryingPlaneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingPlaneRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_scryingPlaneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingPlaneRef;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_scryingPlaneRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryingPlaneRef = value;
}
constexpr ::GlobalNamespace::XSceneRef& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_scryingPlane3pRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingPlane3pRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_scryingPlane3pRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingPlane3pRef;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_scryingPlane3pRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryingPlane3pRef = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_scryingPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingPlane;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_scryingPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingPlane;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_scryingPlane(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryingPlane = value;
}
constexpr bool& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_hasScryingPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasScryingPlane;
}
constexpr bool const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_hasScryingPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasScryingPlane;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_hasScryingPlane(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasScryingPlane = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_scryingPlane3p()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingPlane3p;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_scryingPlane3p() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingPlane3p;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_scryingPlane3p(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryingPlane3p = value;
}
constexpr bool& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_hasScryingPlane3p()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasScryingPlane3p;
}
constexpr bool const& GorillaTagScripts::GorillaAmbushManager::__cordl_internal_get_hasScryingPlane3p() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasScryingPlane3p;
}
constexpr void GorillaTagScripts::GorillaAmbushManager::__cordl_internal_set_hasScryingPlane3p(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasScryingPlane3p = value;
}
inline void GorillaTagScripts::GorillaAmbushManager::setStaticF_handTapHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "handTapHash", ::GorillaTagScripts::GorillaAmbushManager*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::GorillaAmbushManager::getStaticF_handTapHash()  {
return ::cordl_internals::getStaticField<int32_t, "handTapHash", ::GorillaTagScripts::GorillaAmbushManager*>();
}
inline void GorillaTagScripts::GorillaAmbushManager::setStaticF__HandFXScaleModifier_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<HandFXScaleModifier>k__BackingField", ::GorillaTagScripts::GorillaAmbushManager*>(std::forward<float_t>(value));
}
inline float_t GorillaTagScripts::GorillaAmbushManager::getStaticF__HandFXScaleModifier_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<HandFXScaleModifier>k__BackingField", ::GorillaTagScripts::GorillaAmbushManager*>();
}
inline ::GorillaGameModes::GameModeType GorillaTagScripts::GorillaAmbushManager::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::GorillaAmbushManager::get_HandEffectHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"get_HandEffectHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t GorillaTagScripts::GorillaAmbushManager::get_HandFXScaleModifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"get_HandFXScaleModifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::GorillaAmbushManager::set_HandFXScaleModifier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"set_HandFXScaleModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GorillaTagScripts::GorillaAmbushManager::get_isGhostTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"get_isGhostTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaAmbushManager::set_isGhostTag(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"set_isGhostTag", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::GorillaAmbushManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaAmbushManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::GorillaAmbushManager::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::GorillaAmbushManager::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaAmbushManager::UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline int32_t GorillaTagScripts::GorillaAmbushManager::MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forPlayer);
}
inline void GorillaTagScripts::GorillaAmbushManager::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaAmbushManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaAmbushManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GorillaAmbushManager* GorillaTagScripts::GorillaAmbushManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaAmbushManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaAmbushManager::GorillaAmbushManager()   {
}
