#pragma once
// IWYU pragma private; include "TagEffects/TagEffectsLibrary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TagEffects/zzzz__ModeTagEffect_impl.hpp"
#include "TagEffects/zzzz__TagEffectsComboResult_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "TagEffects/zzzz__TagEffectsLibrary_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TagEffects/zzzz__GameObjectOnDisableDispatcher_def.hpp"
#include "TagEffects/zzzz__TagEffectPack_def.hpp"
#include "TagEffects/zzzz__TagEffectsCombo_def.hpp"
#include "TagEffects/zzzz__TagEffectsLibrary_EffectType_def.hpp"
#include "TagEffects/zzzz__TagEffectsLibrary_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.get_FistBumpSpeedThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::TagEffects::TagEffectsLibrary::get_FistBumpSpeedThreshold)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cd6ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"get_FistBumpSpeedThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.get_HighFiveSpeedThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::TagEffects::TagEffectsLibrary::get_HighFiveSpeedThreshold)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cd77dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"get_HighFiveSpeedThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.get_DebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::TagEffects::TagEffectsLibrary::get_DebugMode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cd6078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"get_DebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsLibrary::*)()>(&::TagEffects::TagEffectsLibrary::Awake)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5cd84a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, bool, float_t, ::GlobalNamespace::TagEffectsLibrary_EffectType, ::TagEffects::TagEffectPack*, ::TagEffects::TagEffectPack*, ::UnityEngine::Quaternion)>(&::TagEffects::TagEffectsLibrary::PlayEffect)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x5cd7d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::TagEffectsLibrary_EffectType>(), ::i2c::type_of<::TagEffects::TagEffectPack*>(), ::i2c::type_of<::TagEffects::TagEffectPack*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.comboLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TagEffects::TagEffectPack> (*)(::TagEffects::TagEffectPack*, ::TagEffects::TagEffectPack*)>(&::TagEffects::TagEffectsLibrary::comboLookup)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5cd86b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"comboLookup", {}, {::i2c::type_of<::TagEffects::TagEffectPack*>(), ::i2c::type_of<::TagEffects::TagEffectPack*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.placeEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, float_t, bool, bool, ::UnityEngine::Quaternion)>(&::TagEffects::TagEffectsLibrary::placeEffects)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x5cd78ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"placeEffects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.NewGameObjectOnDisableDispatcher_OnDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TagEffects::GameObjectOnDisableDispatcher*)>(&::TagEffects::TagEffectsLibrary::NewGameObjectOnDisableDispatcher_OnDisabled)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cd8b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"NewGameObjectOnDisableDispatcher_OnDisabled", {}, {::i2c::type_of<::TagEffects::GameObjectOnDisableDispatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.RecycleGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::TagEffects::TagEffectsLibrary::*)(::TagEffects::GameObjectOnDisableDispatcher*, ::UnityEngine::Transform*, float_t, bool, bool)>(&::TagEffects::TagEffectsLibrary::RecycleGameObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5cd8a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"RecycleGameObject", {}, {::i2c::type_of<::TagEffects::GameObjectOnDisableDispatcher*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary.ReclaimDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::TagEffects::TagEffectsLibrary::*)(::UnityEngine::Transform*)>(&::TagEffects::TagEffectsLibrary::ReclaimDisabled)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd8ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"ReclaimDisabled", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsLibrary::*)()>(&::TagEffects::TagEffectsLibrary::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cd8c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& TagEffects::TagEffectsLibrary::__cordl_internal_get_fistBumpSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fistBumpSpeedThreshold;
}
constexpr float_t const& TagEffects::TagEffectsLibrary::__cordl_internal_get_fistBumpSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fistBumpSpeedThreshold;
}
constexpr void TagEffects::TagEffectsLibrary::__cordl_internal_set_fistBumpSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fistBumpSpeedThreshold = value;
}
constexpr float_t& TagEffects::TagEffectsLibrary::__cordl_internal_get_highFiveSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highFiveSpeedThreshold;
}
constexpr float_t const& TagEffects::TagEffectsLibrary::__cordl_internal_get_highFiveSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highFiveSpeedThreshold;
}
constexpr void TagEffects::TagEffectsLibrary::__cordl_internal_set_highFiveSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highFiveSpeedThreshold = value;
}
constexpr ::ArrayW<::TagEffects::ModeTagEffect*>& TagEffects::TagEffectsLibrary::__cordl_internal_get_defaultTagEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTagEffects;
}
constexpr ::ArrayW<::TagEffects::ModeTagEffect*> const& TagEffects::TagEffectsLibrary::__cordl_internal_get_defaultTagEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTagEffects;
}
constexpr void TagEffects::TagEffectsLibrary::__cordl_internal_set_defaultTagEffects(::ArrayW<::TagEffects::ModeTagEffect*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultTagEffects = value;
}
constexpr ::ArrayW<::TagEffects::TagEffectsComboResult*>& TagEffects::TagEffectsLibrary::__cordl_internal_get_tagEffectsCombos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagEffectsCombos;
}
constexpr ::ArrayW<::TagEffects::TagEffectsComboResult*> const& TagEffects::TagEffectsLibrary::__cordl_internal_get_tagEffectsCombos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagEffectsCombos;
}
constexpr void TagEffects::TagEffectsLibrary::__cordl_internal_set_tagEffectsCombos(::ArrayW<::TagEffects::TagEffectsComboResult*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagEffectsCombos = value;
}
constexpr bool& TagEffects::TagEffectsLibrary::__cordl_internal_get_debugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr bool const& TagEffects::TagEffectsLibrary::__cordl_internal_get_debugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr void TagEffects::TagEffectsLibrary::__cordl_internal_set_debugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMode = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::TagEffects::GameObjectOnDisableDispatcher>>*>*& TagEffects::TagEffectsLibrary::__cordl_internal_get_tagEffectsPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagEffectsPool;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::TagEffects::GameObjectOnDisableDispatcher>>*>* const& TagEffects::TagEffectsLibrary::__cordl_internal_get_tagEffectsPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagEffectsPool;
}
constexpr void TagEffects::TagEffectsLibrary::__cordl_internal_set_tagEffectsPool(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::TagEffects::GameObjectOnDisableDispatcher>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagEffectsPool = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::TagEffects::TagEffectsCombo*,::ArrayW<::UnityW<::TagEffects::TagEffectPack>>>*& TagEffects::TagEffectsLibrary::__cordl_internal_get_tagEffectsComboLookUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagEffectsComboLookUp;
}
constexpr ::System::Collections::Generic::Dictionary_2<::TagEffects::TagEffectsCombo*,::ArrayW<::UnityW<::TagEffects::TagEffectPack>>>* const& TagEffects::TagEffectsLibrary::__cordl_internal_get_tagEffectsComboLookUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagEffectsComboLookUp;
}
constexpr void TagEffects::TagEffectsLibrary::__cordl_internal_set_tagEffectsComboLookUp(::System::Collections::Generic::Dictionary_2<::TagEffects::TagEffectsCombo*,::ArrayW<::UnityW<::TagEffects::TagEffectPack>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagEffectsComboLookUp = value;
}
inline void TagEffects::TagEffectsLibrary::setStaticF__instance(::UnityW<::TagEffects::TagEffectsLibrary>  value)  {
::cordl_internals::setStaticField<::UnityW<::TagEffects::TagEffectsLibrary>, "_instance", ::TagEffects::TagEffectsLibrary*>(std::forward<::UnityW<::TagEffects::TagEffectsLibrary>>(value));
}
inline ::UnityW<::TagEffects::TagEffectsLibrary> TagEffects::TagEffectsLibrary::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::TagEffects::TagEffectsLibrary>, "_instance", ::TagEffects::TagEffectsLibrary*>();
}
inline float_t TagEffects::TagEffectsLibrary::get_FistBumpSpeedThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"get_FistBumpSpeedThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t TagEffects::TagEffectsLibrary::get_HighFiveSpeedThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"get_HighFiveSpeedThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline bool TagEffects::TagEffectsLibrary::get_DebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"get_DebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void TagEffects::TagEffectsLibrary::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TagEffects::TagEffectsLibrary::PlayEffect(::UnityEngine::Transform*  target, bool  isLeftHand, float_t  rigScale, ::GlobalNamespace::TagEffectsLibrary_EffectType  effectType, ::TagEffects::TagEffectPack*  playerCosmeticTagEffectPack, ::TagEffects::TagEffectPack*  otherPlayerCosmeticTagEffectPack, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::TagEffectsLibrary_EffectType>(), ::i2c::type_of<::TagEffects::TagEffectPack*>(), ::i2c::type_of<::TagEffects::TagEffectPack*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, isLeftHand, rigScale, effectType, playerCosmeticTagEffectPack, otherPlayerCosmeticTagEffectPack, rotation);
}
inline ::UnityW<::TagEffects::TagEffectPack> TagEffects::TagEffectsLibrary::comboLookup(::TagEffects::TagEffectPack*  playerCosmeticTagEffectPack, ::TagEffects::TagEffectPack*  otherPlayerCosmeticTagEffectPack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"comboLookup", {}, {::i2c::type_of<::TagEffects::TagEffectPack*>(), ::i2c::type_of<::TagEffects::TagEffectPack*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::TagEffects::TagEffectPack>>(nullptr, ___internal_method, playerCosmeticTagEffectPack, otherPlayerCosmeticTagEffectPack);
}
inline void TagEffects::TagEffectsLibrary::placeEffects(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  target, float_t  scale, bool  flipZAxis, bool  parentEffect, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"placeEffects", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab, target, scale, flipZAxis, parentEffect, rotation);
}
inline void TagEffects::TagEffectsLibrary::NewGameObjectOnDisableDispatcher_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher*  goodd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"NewGameObjectOnDisableDispatcher_OnDisabled", {}, {::i2c::type_of<::TagEffects::GameObjectOnDisableDispatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, goodd);
}
inline ::System::Collections::IEnumerator* TagEffects::TagEffectsLibrary::RecycleGameObject(::TagEffects::GameObjectOnDisableDispatcher*  recycledGameObject, ::UnityEngine::Transform*  target, float_t  scale, bool  flipZAxis, bool  parentEffect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"RecycleGameObject", {}, {::i2c::type_of<::TagEffects::GameObjectOnDisableDispatcher*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, recycledGameObject, target, scale, flipZAxis, parentEffect);
}
inline ::System::Collections::IEnumerator* TagEffects::TagEffectsLibrary::ReclaimDisabled(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {"ReclaimDisabled", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, transform);
}
inline void TagEffects::TagEffectsLibrary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TagEffects::TagEffectsLibrary* TagEffects::TagEffectsLibrary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::TagEffectsLibrary*>());
}
// Ctor Parameters []
constexpr ::TagEffects::TagEffectsLibrary::TagEffectsLibrary()   {
}
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::*)(int32_t)>(&::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cd8c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::*)()>(&::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd8d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::*)()>(&::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5cd8d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::*)()>(&::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::*)()>(&::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cd9158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::*)()>(&::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd9190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::TagEffects::GameObjectOnDisableDispatcher>& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_recycledGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycledGameObject;
}
constexpr ::UnityW<::TagEffects::GameObjectOnDisableDispatcher> const& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_recycledGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycledGameObject;
}
constexpr void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_set_recycledGameObject(::UnityW<::TagEffects::GameObjectOnDisableDispatcher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recycledGameObject = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_flipZAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipZAxis;
}
constexpr bool const& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_flipZAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipZAxis;
}
constexpr void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_set_flipZAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flipZAxis = value;
}
constexpr float_t& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr bool& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_parentEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentEffect;
}
constexpr bool const& TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_get_parentEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentEffect;
}
constexpr void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::__cordl_internal_set_parentEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentEffect = value;
}
inline void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21* TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21::TagEffectsLibrary__RecycleGameObject_d__21()   {
}
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::*)(int32_t)>(&::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cd8c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::*)()>(&::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd8c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::*)()>(&::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::MoveNext)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5cd8c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::*)()>(&::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd8d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::*)()>(&::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cd8d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::*)()>(&::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd8d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
inline void TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22* TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22::TagEffectsLibrary__ReclaimDisabled_d__22()   {
}
