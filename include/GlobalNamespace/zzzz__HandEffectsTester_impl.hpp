#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsTester.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HandEffectsTester_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_Mode_def.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_def.hpp"
#include "TagEffects/zzzz__TagEffectPack_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.get_Static
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::get_Static)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"get_Static", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.TagEffects_IHandEffectsTrigger_get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.TagEffects_IHandEffectsTrigger_get_Rig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_Rig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_Rig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.TagEffects_IHandEffectsTrigger_get_EffectMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IHandEffectsTrigger_Mode (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_EffectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_EffectMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.TagEffects_IHandEffectsTrigger_get_FingersDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_FingersDown)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56bd954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_FingersDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.TagEffects_IHandEffectsTrigger_get_FingersUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_FingersUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56bd968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_FingersUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.get_OnTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::get_OnTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"get_OnTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.set_OnTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTester::*)(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*)>(&::GlobalNamespace::HandEffectsTester::set_OnTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"set_OnTrigger", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.get_RightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::get_RightHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"get_RightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56bd990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56bd9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56bdc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.TagEffects_IHandEffectsTrigger_get_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_Velocity)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56bdd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_Velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.TagEffects_IHandEffectsTrigger_get_CosmeticEffectPack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TagEffects::TagEffectPack> (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_CosmeticEffectPack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bdd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_CosmeticEffectPack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.OnTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTester::*)(::TagEffects::IHandEffectsTrigger*)>(&::GlobalNamespace::HandEffectsTester::OnTriggerEntered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56bdd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"OnTriggerEntered", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester.InTriggerZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectsTester::*)(::TagEffects::IHandEffectsTrigger*)>(&::GlobalNamespace::HandEffectsTester::InTriggerZone)> {
  constexpr static std::size_t size = 0xc34;
  constexpr static std::size_t addrs = 0x56bdd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"InTriggerZone", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTester._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTester::*)()>(&::GlobalNamespace::HandEffectsTester::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56be9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TagEffects::TagEffectPack>& GlobalNamespace::HandEffectsTester::__cordl_internal_get_cosmeticEffectPack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticEffectPack;
}
constexpr ::UnityW<::TagEffects::TagEffectPack> const& GlobalNamespace::HandEffectsTester::__cordl_internal_get_cosmeticEffectPack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticEffectPack;
}
constexpr void GlobalNamespace::HandEffectsTester::__cordl_internal_set_cosmeticEffectPack(::UnityW<::TagEffects::TagEffectPack>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticEffectPack = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::HandEffectsTester::__cordl_internal_get_triggerZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerZone;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::HandEffectsTester::__cordl_internal_get_triggerZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerZone;
}
constexpr void GlobalNamespace::HandEffectsTester::__cordl_internal_set_triggerZone(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerZone = value;
}
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode& GlobalNamespace::HandEffectsTester::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::IHandEffectsTrigger_Mode const& GlobalNamespace::HandEffectsTester::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::HandEffectsTester::__cordl_internal_set_mode(::GlobalNamespace::IHandEffectsTrigger_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr float_t& GlobalNamespace::HandEffectsTester::__cordl_internal_get_triggerRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerRadius;
}
constexpr float_t const& GlobalNamespace::HandEffectsTester::__cordl_internal_get_triggerRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerRadius;
}
constexpr void GlobalNamespace::HandEffectsTester::__cordl_internal_set_triggerRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerRadius = value;
}
constexpr bool& GlobalNamespace::HandEffectsTester::__cordl_internal_get_isStatic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr bool const& GlobalNamespace::HandEffectsTester::__cordl_internal_get_isStatic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr void GlobalNamespace::HandEffectsTester::__cordl_internal_set_isStatic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStatic = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*& GlobalNamespace::HandEffectsTester::__cordl_internal_get__OnTrigger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnTrigger_k__BackingField;
}
constexpr ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* const& GlobalNamespace::HandEffectsTester::__cordl_internal_get__OnTrigger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnTrigger_k__BackingField;
}
constexpr void GlobalNamespace::HandEffectsTester::__cordl_internal_set__OnTrigger_k__BackingField(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnTrigger_k__BackingField = value;
}
constexpr bool& GlobalNamespace::HandEffectsTester::__cordl_internal_get__RightHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RightHand_k__BackingField;
}
constexpr bool const& GlobalNamespace::HandEffectsTester::__cordl_internal_get__RightHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RightHand_k__BackingField;
}
constexpr void GlobalNamespace::HandEffectsTester::__cordl_internal_set__RightHand_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RightHand_k__BackingField = value;
}
inline bool GlobalNamespace::HandEffectsTester::get_Static()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"get_Static", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_Rig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_Rig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline ::GlobalNamespace::IHandEffectsTrigger_Mode GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_EffectMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_EffectMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IHandEffectsTrigger_Mode>(this, ___internal_method);
}
inline bool GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_FingersDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_FingersDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_FingersUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_FingersUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>* GlobalNamespace::HandEffectsTester::get_OnTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"get_OnTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTester::set_OnTrigger(::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"set_OnTrigger", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::IHandEffectsTrigger_Mode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::HandEffectsTester::get_RightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"get_RightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTester::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTester::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTester::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_Velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::TagEffects::TagEffectPack> GlobalNamespace::HandEffectsTester::TagEffects_IHandEffectsTrigger_get_CosmeticEffectPack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"TagEffects.IHandEffectsTrigger.get_CosmeticEffectPack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::TagEffects::TagEffectPack>>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTester::OnTriggerEntered(::TagEffects::IHandEffectsTrigger*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"OnTriggerEntered", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool GlobalNamespace::HandEffectsTester::InTriggerZone(::TagEffects::IHandEffectsTrigger*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {"InTriggerZone", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline void GlobalNamespace::HandEffectsTester::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTester*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandEffectsTester* GlobalNamespace::HandEffectsTester::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandEffectsTester*>());
}
/// @brief Convert operator to "::TagEffects::IHandEffectsTrigger"
constexpr  GlobalNamespace::HandEffectsTester::operator ::TagEffects::IHandEffectsTrigger*() noexcept {
return static_cast<::TagEffects::IHandEffectsTrigger*>(static_cast<void*>(this));
}
/// @brief Convert to "::TagEffects::IHandEffectsTrigger"
constexpr ::TagEffects::IHandEffectsTrigger* GlobalNamespace::HandEffectsTester::i___TagEffects__IHandEffectsTrigger() noexcept {
return static_cast<::TagEffects::IHandEffectsTrigger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandEffectsTester::HandEffectsTester()   {
}
