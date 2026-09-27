#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolume.hpp"
#include "GlobalNamespace/zzzz__RigEventVolume_Mode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RigEventVolume_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__RigEventVolumeTrigger_def.hpp"
#include "GlobalNamespace/zzzz__RigEventVolume_Mode_def.hpp"
#include "GlobalNamespace/zzzz__VRRigCollection_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.get_Rigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::VRRig>> (::GlobalNamespace::RigEventVolume::*)()>(&::GlobalNamespace::RigEventVolume::get_Rigs)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57424ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"get_Rigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.get_RigCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RigEventVolume::*)()>(&::GlobalNamespace::RigEventVolume::get_RigCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x574253c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"get_RigCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.get_LocalRigPresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigEventVolume::*)()>(&::GlobalNamespace::RigEventVolume::get_LocalRigPresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57425ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"get_LocalRigPresent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.add_OnCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::System::Action*)>(&::GlobalNamespace::RigEventVolume::add_OnCountChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57425b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"add_OnCountChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.remove_OnCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::System::Action*)>(&::GlobalNamespace::RigEventVolume::remove_OnCountChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5742650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"remove_OnCountChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)()>(&::GlobalNamespace::RigEventVolume::OnEnable)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x57426ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)()>(&::GlobalNamespace::RigEventVolume::OnDisable)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x57429f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.OnNetJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RigEventVolume::OnNetJoined)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5742cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnNetJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.OnNetLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RigEventVolume::OnNetLeft)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x57430a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnNetLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.OnJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::RigEventVolume::OnJoined)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5743930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnJoined", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.OnLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::RigEventVolume::OnLeft)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5743a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnLeft", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RigEventVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5743b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RigEventVolume::OnTriggerExit)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5743ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.HandleRigExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(::GlobalNamespace::RigEventVolumeTrigger*, ::GlobalNamespace::VRRig*)>(&::GlobalNamespace::RigEventVolume::HandleRigExit)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5743680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"HandleRigExit", {}, {::i2c::type_of<::GlobalNamespace::RigEventVolumeTrigger*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume.countChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::RigEventVolume::countChanged)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5742ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"countChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolume::*)()>(&::GlobalNamespace::RigEventVolume::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5743fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>,int32_t>*& GlobalNamespace::RigEventVolume::__cordl_internal_get_gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>,int32_t>* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_gameObjects(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjects = value;
}
constexpr ::GlobalNamespace::RigEventVolume_Mode& GlobalNamespace::RigEventVolume::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::RigEventVolume_Mode const& GlobalNamespace::RigEventVolume::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_mode(::GlobalNamespace::RigEventVolume_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr float_t& GlobalNamespace::RigEventVolume::__cordl_internal_get_relThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relThreshold;
}
constexpr float_t const& GlobalNamespace::RigEventVolume::__cordl_internal_get_relThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relThreshold;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_relThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relThreshold = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigCollection>& GlobalNamespace::RigEventVolume::__cordl_internal_get_rigCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigCollection;
}
constexpr ::UnityW<::GlobalNamespace::VRRigCollection> const& GlobalNamespace::RigEventVolume::__cordl_internal_get_rigCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigCollection;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_rigCollection(::UnityW<::GlobalNamespace::VRRigCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigCollection = value;
}
constexpr int32_t& GlobalNamespace::RigEventVolume::__cordl_internal_get_absThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absThreshold;
}
constexpr int32_t const& GlobalNamespace::RigEventVolume::__cordl_internal_get_absThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absThreshold;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_absThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::RigEventVolume::__cordl_internal_get_RigEnters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RigEnters;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_RigEnters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RigEnters;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_RigEnters(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RigEnters = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::RigEventVolume::__cordl_internal_get_RigExits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RigExits;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_RigExits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RigExits;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_RigExits(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RigExits = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::RigEventVolume::__cordl_internal_get_GoesOverThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoesOverThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_GoesOverThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoesOverThreshold;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_GoesOverThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoesOverThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::RigEventVolume::__cordl_internal_get_GoesUnderThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoesUnderThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_GoesUnderThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoesUnderThreshold;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_GoesUnderThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoesUnderThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::RigEventVolume::__cordl_internal_get_LocalRigEnters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRigEnters;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_LocalRigEnters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRigEnters;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_LocalRigEnters(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalRigEnters = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::RigEventVolume::__cordl_internal_get_LocalRigExits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRigExits;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_LocalRigExits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRigExits;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_LocalRigExits(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalRigExits = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::RigEventVolume::__cordl_internal_get_rigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_rigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_rigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigs = value;
}
constexpr bool& GlobalNamespace::RigEventVolume::__cordl_internal_get_localRigPresent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRigPresent;
}
constexpr bool const& GlobalNamespace::RigEventVolume::__cordl_internal_get_localRigPresent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRigPresent;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_localRigPresent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRigPresent = value;
}
constexpr ::System::Action*& GlobalNamespace::RigEventVolume::__cordl_internal_get_OnCountChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCountChanged;
}
constexpr ::System::Action* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_OnCountChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCountChanged;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_OnCountChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCountChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::RigEventVolume::__cordl_internal_get_CountChangedAbsolute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountChangedAbsolute;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_CountChangedAbsolute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountChangedAbsolute;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_CountChangedAbsolute(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CountChangedAbsolute = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::RigEventVolume::__cordl_internal_get_CountChangedRelative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountChangedRelative;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_CountChangedRelative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountChangedRelative;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_CountChangedRelative(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CountChangedRelative = value;
}
constexpr bool& GlobalNamespace::RigEventVolume::__cordl_internal_get_applyMultipliers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyMultipliers;
}
constexpr bool const& GlobalNamespace::RigEventVolume::__cordl_internal_get_applyMultipliers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyMultipliers;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_applyMultipliers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyMultipliers = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::RigEventVolume::__cordl_internal_get_MulitplierAbsolute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MulitplierAbsolute;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_MulitplierAbsolute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MulitplierAbsolute;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_MulitplierAbsolute(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MulitplierAbsolute = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::RigEventVolume::__cordl_internal_get_MulitplierRelative()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MulitplierRelative;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::RigEventVolume::__cordl_internal_get_MulitplierRelative() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MulitplierRelative;
}
constexpr void GlobalNamespace::RigEventVolume::__cordl_internal_set_MulitplierRelative(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MulitplierRelative = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> GlobalNamespace::RigEventVolume::get_Rigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"get_Rigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::VRRig>>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RigEventVolume::get_RigCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"get_RigCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::RigEventVolume::get_LocalRigPresent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"get_LocalRigPresent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventVolume::add_OnCountChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"add_OnCountChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RigEventVolume::remove_OnCountChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"remove_OnCountChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RigEventVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventVolume::OnNetJoined(::GlobalNamespace::NetPlayer*  np)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnNetJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, np);
}
inline void GlobalNamespace::RigEventVolume::OnNetLeft(::GlobalNamespace::NetPlayer*  np)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnNetLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, np);
}
inline void GlobalNamespace::RigEventVolume::OnJoined(::GlobalNamespace::RigContainer*  rc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnJoined", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc);
}
inline void GlobalNamespace::RigEventVolume::OnLeft(::GlobalNamespace::RigContainer*  rc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnLeft", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc);
}
inline void GlobalNamespace::RigEventVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RigEventVolume::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RigEventVolume::HandleRigExit(::GlobalNamespace::RigEventVolumeTrigger*  trigger, ::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"HandleRigExit", {}, {::i2c::type_of<::GlobalNamespace::RigEventVolumeTrigger*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger, rig);
}
inline void GlobalNamespace::RigEventVolume::countChanged(int32_t  oldValue, int32_t  newValue, int32_t  oldPlayerCount, int32_t  newPlayerCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {"countChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue, oldPlayerCount, newPlayerCount);
}
inline void GlobalNamespace::RigEventVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigEventVolume* GlobalNamespace::RigEventVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigEventVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigEventVolume::RigEventVolume()   {
}
