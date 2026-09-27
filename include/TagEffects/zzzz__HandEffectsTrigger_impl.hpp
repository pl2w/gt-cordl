#pragma once
// IWYU pragma private; include "TagEffects/HandEffectsTrigger.hpp"
#include "GlobalNamespace/zzzz__HandEffectsOverrideCosmetic_HandEffectType_impl.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "TagEffects/zzzz__HandEffectsTrigger_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__HandEffectsOverrideCosmetic_HandEffectType_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_def.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_def.hpp"
#include "TagEffects/zzzz__TagEffectPack_def.hpp"
#include "TagEffects/zzzz__TagEffectsLibrary_EffectType_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_Static
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_Static)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_Static", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_FingersDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_FingersDown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cd5c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_FingersDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_FingersUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_FingersUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cd5cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_FingersUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_Velocity)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5cd5d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_Velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.TagEffects_IHandEffectsTrigger_get_RightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::TagEffects_IHandEffectsTrigger_get_RightHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"TagEffects.IHandEffectsTrigger.get_RightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_OnTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_OnTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_OnTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.set_OnTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::HandEffectsTrigger::*)(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*)>(&::TagEffects::HandEffectsTrigger::set_OnTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"set_OnTrigger", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_EffectMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IHandEffectsTrigger_Mode (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_EffectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_EffectMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_Rig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_Rig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_Rig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.get_CosmeticEffectPack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TagEffects::TagEffectPack> (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::get_CosmeticEffectPack)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cd5ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_CosmeticEffectPack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::Awake)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5cd5f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::OnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cd60cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd6160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.OnTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::HandEffectsTrigger::*)(::TagEffects::IHandEffectsTrigger*)>(&::TagEffects::HandEffectsTrigger::OnTriggerEntered)> {
  constexpr static std::size_t size = 0x914;
  constexpr static std::size_t addrs = 0x5cd61bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"OnTriggerEntered", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.PlayHandEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::HandEffectsTrigger::*)(::GlobalNamespace::TagEffectsLibrary_EffectType, ::TagEffects::IHandEffectsTrigger*)>(&::TagEffects::HandEffectsTrigger::PlayHandEffects)> {
  constexpr static std::size_t size = 0xcb8;
  constexpr static std::size_t addrs = 0x5cd6b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"PlayHandEffects", {}, {::i2c::type_of<::GlobalNamespace::TagEffectsLibrary_EffectType>(), ::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.InTriggerZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::HandEffectsTrigger::*)(::TagEffects::IHandEffectsTrigger*)>(&::TagEffects::HandEffectsTrigger::InTriggerZone)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5cd8284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"InTriggerZone", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger.MapEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType (::TagEffects::HandEffectsTrigger::*)(::GlobalNamespace::TagEffectsLibrary_EffectType)>(&::TagEffects::HandEffectsTrigger::MapEnum)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cd7830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"MapEnum", {}, {::i2c::type_of<::GlobalNamespace::TagEffectsLibrary_EffectType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::HandEffectsTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::HandEffectsTrigger::*)()>(&::TagEffects::HandEffectsTrigger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cd83d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& TagEffects::HandEffectsTrigger::__cordl_internal_get_triggerRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerRadius;
}
constexpr float_t const& TagEffects::HandEffectsTrigger::__cordl_internal_get_triggerRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerRadius;
}
constexpr void TagEffects::HandEffectsTrigger::__cordl_internal_set_triggerRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerRadius = value;
}
constexpr bool& TagEffects::HandEffectsTrigger::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr bool const& TagEffects::HandEffectsTrigger::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void TagEffects::HandEffectsTrigger::__cordl_internal_set_rightHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr bool& TagEffects::HandEffectsTrigger::__cordl_internal_get_isStatic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr bool const& TagEffects::HandEffectsTrigger::__cordl_internal_get_isStatic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr void TagEffects::HandEffectsTrigger::__cordl_internal_set_isStatic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStatic = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& TagEffects::HandEffectsTrigger::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& TagEffects::HandEffectsTrigger::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void TagEffects::HandEffectsTrigger::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& TagEffects::HandEffectsTrigger::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& TagEffects::HandEffectsTrigger::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void TagEffects::HandEffectsTrigger::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& TagEffects::HandEffectsTrigger::__cordl_internal_get_debugVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugVisuals;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& TagEffects::HandEffectsTrigger::__cordl_internal_get_debugVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugVisuals;
}
constexpr void TagEffects::HandEffectsTrigger::__cordl_internal_set_debugVisuals(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugVisuals = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*& TagEffects::HandEffectsTrigger::__cordl_internal_get__OnTrigger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnTrigger_k__BackingField;
}
constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* const& TagEffects::HandEffectsTrigger::__cordl_internal_get__OnTrigger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnTrigger_k__BackingField;
}
constexpr void TagEffects::HandEffectsTrigger::__cordl_internal_set__OnTrigger_k__BackingField(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnTrigger_k__BackingField = value;
}
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode& TagEffects::HandEffectsTrigger::__cordl_internal_get__EffectMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EffectMode_k__BackingField;
}
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode const& TagEffects::HandEffectsTrigger::__cordl_internal_get__EffectMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EffectMode_k__BackingField;
}
constexpr void TagEffects::HandEffectsTrigger::__cordl_internal_set__EffectMode_k__BackingField(::GlobalNamespace::IHandEffectsTrigger_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EffectMode_k__BackingField = value;
}
inline void TagEffects::HandEffectsTrigger::setStaticF_mappingArray(::ArrayW<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType>, "mappingArray", ::TagEffects::HandEffectsTrigger*>(std::forward<::ArrayW<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType>>(value));
}
inline ::ArrayW<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType> TagEffects::HandEffectsTrigger::getStaticF_mappingArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType>, "mappingArray", ::TagEffects::HandEffectsTrigger*>();
}
inline bool TagEffects::HandEffectsTrigger::get_Static()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_Static", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool TagEffects::HandEffectsTrigger::get_FingersDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_FingersDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool TagEffects::HandEffectsTrigger::get_FingersUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_FingersUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 TagEffects::HandEffectsTrigger::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_Velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool TagEffects::HandEffectsTrigger::TagEffects_IHandEffectsTrigger_get_RightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"TagEffects.IHandEffectsTrigger.get_RightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* TagEffects::HandEffectsTrigger::get_OnTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_OnTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*>(this, ___internal_method);
}
inline void TagEffects::HandEffectsTrigger::set_OnTrigger(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"set_OnTrigger", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IHandEffectsTrigger_Mode TagEffects::HandEffectsTrigger::get_EffectMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_EffectMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IHandEffectsTrigger_Mode>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> TagEffects::HandEffectsTrigger::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRig> TagEffects::HandEffectsTrigger::get_Rig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_Rig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline ::UnityW<::TagEffects::TagEffectPack> TagEffects::HandEffectsTrigger::get_CosmeticEffectPack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"get_CosmeticEffectPack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::TagEffects::TagEffectPack>>(this, ___internal_method);
}
inline void TagEffects::HandEffectsTrigger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TagEffects::HandEffectsTrigger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TagEffects::HandEffectsTrigger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TagEffects::HandEffectsTrigger::OnTriggerEntered(::TagEffects::IHandEffectsTrigger*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"OnTriggerEntered", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void TagEffects::HandEffectsTrigger::PlayHandEffects(::GlobalNamespace::TagEffectsLibrary_EffectType  effectType, ::TagEffects::IHandEffectsTrigger*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"PlayHandEffects", {}, {::i2c::type_of<::GlobalNamespace::TagEffectsLibrary_EffectType>(), ::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effectType, other);
}
inline bool TagEffects::HandEffectsTrigger::InTriggerZone(::TagEffects::IHandEffectsTrigger*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"InTriggerZone", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType TagEffects::HandEffectsTrigger::MapEnum(::GlobalNamespace::TagEffectsLibrary_EffectType  oldEnum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {"MapEnum", {}, {::i2c::type_of<::GlobalNamespace::TagEffectsLibrary_EffectType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType>(this, ___internal_method, oldEnum);
}
inline void TagEffects::HandEffectsTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::HandEffectsTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TagEffects::HandEffectsTrigger* TagEffects::HandEffectsTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::HandEffectsTrigger*>());
}
/// @brief Convert operator to "::TagEffects::IHandEffectsTrigger"
constexpr  TagEffects::HandEffectsTrigger::operator ::TagEffects::IHandEffectsTrigger*() noexcept {
return static_cast<::TagEffects::IHandEffectsTrigger*>(static_cast<void*>(this));
}
/// @brief Convert to "::TagEffects::IHandEffectsTrigger"
constexpr ::TagEffects::IHandEffectsTrigger* TagEffects::HandEffectsTrigger::i___TagEffects__IHandEffectsTrigger() noexcept {
return static_cast<::TagEffects::IHandEffectsTrigger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::TagEffects::HandEffectsTrigger::HandEffectsTrigger()   {
}
