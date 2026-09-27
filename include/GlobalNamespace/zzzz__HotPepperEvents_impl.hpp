#pragma once
// IWYU pragma private; include "GlobalNamespace/HotPepperEvents.hpp"
#include "GlobalNamespace/zzzz__CosmeticRefID_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HotPepperEvents_def.hpp"
#include "GlobalNamespace/zzzz__EdibleHoldable_def.hpp"
#include "GlobalNamespace/zzzz__HotPepperEvents_EdibleState_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HotPepperEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperEvents::*)()>(&::GlobalNamespace::HotPepperEvents::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x578a924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HotPepperEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperEvents::*)()>(&::GlobalNamespace::HotPepperEvents::OnDisable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x578aa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HotPepperEvents.OnBiteView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperEvents::*)(::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::HotPepperEvents::OnBiteView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578ab1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnBiteView", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HotPepperEvents.OnBiteWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperEvents::*)(::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::HotPepperEvents::OnBiteWorld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x578ac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnBiteWorld", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HotPepperEvents.OnBite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperEvents::*)(::GlobalNamespace::VRRig*, int32_t, bool)>(&::GlobalNamespace::HotPepperEvents::OnBite)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x578ab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnBite", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HotPepperEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperEvents::*)()>(&::GlobalNamespace::HotPepperEvents::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x578aca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EdibleHoldable>& GlobalNamespace::HotPepperEvents::__cordl_internal_get__pepper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pepper;
}
constexpr ::UnityW<::GlobalNamespace::EdibleHoldable> const& GlobalNamespace::HotPepperEvents::__cordl_internal_get__pepper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pepper;
}
constexpr void GlobalNamespace::HotPepperEvents::__cordl_internal_set__pepper(::UnityW<::GlobalNamespace::EdibleHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pepper = value;
}
constexpr ::GlobalNamespace::CosmeticRefID& GlobalNamespace::HotPepperEvents::__cordl_internal_get_m_targetEffectID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetEffectID;
}
constexpr ::GlobalNamespace::CosmeticRefID const& GlobalNamespace::HotPepperEvents::__cordl_internal_get_m_targetEffectID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_targetEffectID;
}
constexpr void GlobalNamespace::HotPepperEvents::__cordl_internal_set_m_targetEffectID(::GlobalNamespace::CosmeticRefID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_targetEffectID = value;
}
inline void GlobalNamespace::HotPepperEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HotPepperEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HotPepperEvents::OnBiteView(::GlobalNamespace::VRRig*  rig, int32_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnBiteView", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, nextState);
}
inline void GlobalNamespace::HotPepperEvents::OnBiteWorld(::GlobalNamespace::VRRig*  rig, int32_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnBiteWorld", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, nextState);
}
inline void GlobalNamespace::HotPepperEvents::OnBite(::GlobalNamespace::VRRig*  rig, int32_t  nextState, bool  isViewRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {"OnBite", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, nextState, isViewRig);
}
inline void GlobalNamespace::HotPepperEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HotPepperEvents* GlobalNamespace::HotPepperEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HotPepperEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HotPepperEvents::HotPepperEvents()   {
}
