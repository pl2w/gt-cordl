#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeChanger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__SizeChanger_ChangerType_impl.hpp"
#include "GlobalNamespace/zzzz__SizeChanger_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__SizeChangerSettings_def.hpp"
#include "GlobalNamespace/zzzz__SizeChangerTrigger_def.hpp"
#include "GlobalNamespace/zzzz__SizeChanger_ChangerType_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.get_SizeLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::get_SizeLayerMask)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x595bb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_SizeLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.get_MyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SizeChanger_ChangerType (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::get_MyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_MyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.get_MaxScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::get_MaxScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_MaxScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.get_MinScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::get_MinScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_MinScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.get_StartPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::get_StartPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_StartPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.get_EndPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::get_EndPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_EndPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.get_StaticEasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::get_StaticEasing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595bbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_StaticEasing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x595bbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::OnEnable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x595bc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::OnDisable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x595c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.AddEnterTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::GlobalNamespace::SizeChangerTrigger*)>(&::GlobalNamespace::SizeChanger::AddEnterTrigger)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x595c2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"AddEnterTrigger", {}, {::i2c::type_of<::GlobalNamespace::SizeChangerTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.RemoveEnterTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::GlobalNamespace::SizeChangerTrigger*)>(&::GlobalNamespace::SizeChanger::RemoveEnterTrigger)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x595c39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"RemoveEnterTrigger", {}, {::i2c::type_of<::GlobalNamespace::SizeChangerTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.AddExitOnEnterTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::GlobalNamespace::SizeChangerTrigger*)>(&::GlobalNamespace::SizeChanger::AddExitOnEnterTrigger)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x595c468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"AddExitOnEnterTrigger", {}, {::i2c::type_of<::GlobalNamespace::SizeChangerTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.RemoveExitOnEnterTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::GlobalNamespace::SizeChangerTrigger*)>(&::GlobalNamespace::SizeChanger::RemoveExitOnEnterTrigger)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x595c534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"RemoveExitOnEnterTrigger", {}, {::i2c::type_of<::GlobalNamespace::SizeChangerTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SizeChanger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x595c600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.acceptRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::SizeChanger::acceptRig)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x595c718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"acceptRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SizeChanger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x595c824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.unacceptRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::SizeChanger::unacceptRig)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x595c93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"unacceptRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.ClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SizeChanger::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SizeChanger::ClosestPoint)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x595c9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"ClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.SetScaleCenterPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::SizeChanger::SetScaleCenterPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"SetScaleCenterPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.TryGetScaleCenterPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SizeChanger::*)(::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::SizeChanger::TryGetScaleCenterPoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x595cc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"TryGetScaleCenterPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger.CopyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)(::GT_CustomMapSupportRuntime::SizeChangerSettings*)>(&::GlobalNamespace::SizeChanger::CopyProperties)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x595cd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::SizeChangerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeChanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeChanger::*)()>(&::GlobalNamespace::SizeChanger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x595ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SizeChanger_ChangerType& GlobalNamespace::SizeChanger::__cordl_internal_get_myType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myType;
}
constexpr ::GlobalNamespace::SizeChanger_ChangerType const& GlobalNamespace::SizeChanger::__cordl_internal_get_myType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myType;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_myType(::GlobalNamespace::SizeChanger_ChangerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myType = value;
}
constexpr float_t& GlobalNamespace::SizeChanger::__cordl_internal_get_staticEasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticEasing;
}
constexpr float_t const& GlobalNamespace::SizeChanger::__cordl_internal_get_staticEasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticEasing;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_staticEasing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticEasing = value;
}
constexpr float_t& GlobalNamespace::SizeChanger::__cordl_internal_get_maxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr float_t const& GlobalNamespace::SizeChanger::__cordl_internal_get_maxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_maxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxScale = value;
}
constexpr float_t& GlobalNamespace::SizeChanger::__cordl_internal_get_minScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr float_t const& GlobalNamespace::SizeChanger::__cordl_internal_get_minScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_minScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minScale = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::SizeChanger::__cordl_internal_get_myCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::SizeChanger::__cordl_internal_get_myCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCollider = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SizeChanger::__cordl_internal_get_startPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SizeChanger::__cordl_internal_get_startPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_startPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SizeChanger::__cordl_internal_get_endPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SizeChanger::__cordl_internal_get_endPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_endPos(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPos = value;
}
constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger>& GlobalNamespace::SizeChanger::__cordl_internal_get_enterTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterTrigger;
}
constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger> const& GlobalNamespace::SizeChanger::__cordl_internal_get_enterTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterTrigger;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_enterTrigger(::UnityW<::GlobalNamespace::SizeChangerTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger>& GlobalNamespace::SizeChanger::__cordl_internal_get_exitTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitTrigger;
}
constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger> const& GlobalNamespace::SizeChanger::__cordl_internal_get_exitTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitTrigger;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_exitTrigger(::UnityW<::GlobalNamespace::SizeChangerTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitTrigger = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SizeChanger::__cordl_internal_get_scaleAwayFromPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleAwayFromPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SizeChanger::__cordl_internal_get_scaleAwayFromPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleAwayFromPoint;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_scaleAwayFromPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleAwayFromPoint = value;
}
constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger>& GlobalNamespace::SizeChanger::__cordl_internal_get_exitOnEnterTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitOnEnterTrigger;
}
constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger> const& GlobalNamespace::SizeChanger::__cordl_internal_get_exitOnEnterTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitOnEnterTrigger;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_exitOnEnterTrigger(::UnityW<::GlobalNamespace::SizeChangerTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitOnEnterTrigger = value;
}
constexpr bool& GlobalNamespace::SizeChanger::__cordl_internal_get_alwaysControlWhenEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysControlWhenEntered;
}
constexpr bool const& GlobalNamespace::SizeChanger::__cordl_internal_get_alwaysControlWhenEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysControlWhenEntered;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_alwaysControlWhenEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysControlWhenEntered = value;
}
constexpr int32_t& GlobalNamespace::SizeChanger::__cordl_internal_get_priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr int32_t const& GlobalNamespace::SizeChanger::__cordl_internal_get_priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priority = value;
}
constexpr bool& GlobalNamespace::SizeChanger::__cordl_internal_get_aprilFoolsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aprilFoolsEnabled;
}
constexpr bool const& GlobalNamespace::SizeChanger::__cordl_internal_get_aprilFoolsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aprilFoolsEnabled;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_aprilFoolsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aprilFoolsEnabled = value;
}
constexpr float_t& GlobalNamespace::SizeChanger::__cordl_internal_get_startRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startRadius;
}
constexpr float_t const& GlobalNamespace::SizeChanger::__cordl_internal_get_startRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startRadius;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_startRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startRadius = value;
}
constexpr float_t& GlobalNamespace::SizeChanger::__cordl_internal_get_endRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRadius;
}
constexpr float_t const& GlobalNamespace::SizeChanger::__cordl_internal_get_endRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRadius;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_endRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endRadius = value;
}
constexpr bool& GlobalNamespace::SizeChanger::__cordl_internal_get_affectLayerA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerA;
}
constexpr bool const& GlobalNamespace::SizeChanger::__cordl_internal_get_affectLayerA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerA;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_affectLayerA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerA = value;
}
constexpr bool& GlobalNamespace::SizeChanger::__cordl_internal_get_affectLayerB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerB;
}
constexpr bool const& GlobalNamespace::SizeChanger::__cordl_internal_get_affectLayerB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerB;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_affectLayerB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerB = value;
}
constexpr bool& GlobalNamespace::SizeChanger::__cordl_internal_get_affectLayerC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerC;
}
constexpr bool const& GlobalNamespace::SizeChanger::__cordl_internal_get_affectLayerC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerC;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_affectLayerC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerC = value;
}
constexpr bool& GlobalNamespace::SizeChanger::__cordl_internal_get_affectLayerD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerD;
}
constexpr bool const& GlobalNamespace::SizeChanger::__cordl_internal_get_affectLayerD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerD;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_affectLayerD(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerD = value;
}
constexpr ::UnityEngine::Events::UnityAction*& GlobalNamespace::SizeChanger::__cordl_internal_get_OnExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExit;
}
constexpr ::UnityEngine::Events::UnityAction* const& GlobalNamespace::SizeChanger::__cordl_internal_get_OnExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExit;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_OnExit(::UnityEngine::Events::UnityAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnExit = value;
}
constexpr ::UnityEngine::Events::UnityAction*& GlobalNamespace::SizeChanger::__cordl_internal_get_OnEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnter;
}
constexpr ::UnityEngine::Events::UnityAction* const& GlobalNamespace::SizeChanger::__cordl_internal_get_OnEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnter;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_OnEnter(::UnityEngine::Events::UnityAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnter = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::SizeChanger::__cordl_internal_get_unregisteredPresentRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unregisteredPresentRigs;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::SizeChanger::__cordl_internal_get_unregisteredPresentRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unregisteredPresentRigs;
}
constexpr void GlobalNamespace::SizeChanger::__cordl_internal_set_unregisteredPresentRigs(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unregisteredPresentRigs = value;
}
inline int32_t GlobalNamespace::SizeChanger::get_SizeLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_SizeLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::SizeChanger_ChangerType GlobalNamespace::SizeChanger::get_MyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_MyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SizeChanger_ChangerType>(this, ___internal_method);
}
inline float_t GlobalNamespace::SizeChanger::get_MaxScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_MaxScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SizeChanger::get_MinScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_MinScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::SizeChanger::get_StartPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_StartPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::SizeChanger::get_EndPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_EndPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline float_t GlobalNamespace::SizeChanger::get_StaticEasing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"get_StaticEasing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SizeChanger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SizeChanger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SizeChanger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SizeChanger::AddEnterTrigger(::GlobalNamespace::SizeChangerTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"AddEnterTrigger", {}, {::i2c::type_of<::GlobalNamespace::SizeChangerTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GlobalNamespace::SizeChanger::RemoveEnterTrigger(::GlobalNamespace::SizeChangerTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"RemoveEnterTrigger", {}, {::i2c::type_of<::GlobalNamespace::SizeChangerTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GlobalNamespace::SizeChanger::AddExitOnEnterTrigger(::GlobalNamespace::SizeChangerTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"AddExitOnEnterTrigger", {}, {::i2c::type_of<::GlobalNamespace::SizeChangerTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GlobalNamespace::SizeChanger::RemoveExitOnEnterTrigger(::GlobalNamespace::SizeChangerTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"RemoveExitOnEnterTrigger", {}, {::i2c::type_of<::GlobalNamespace::SizeChangerTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GlobalNamespace::SizeChanger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SizeChanger::acceptRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"acceptRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::SizeChanger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SizeChanger::unacceptRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"unacceptRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SizeChanger::ClosestPoint(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"ClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline void GlobalNamespace::SizeChanger::SetScaleCenterPoint(::UnityEngine::Transform*  centerPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"SetScaleCenterPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, centerPoint);
}
inline bool GlobalNamespace::SizeChanger::TryGetScaleCenterPoint(::by_ref<::UnityEngine::Vector3>  centerPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"TryGetScaleCenterPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, centerPoint);
}
inline void GlobalNamespace::SizeChanger::CopyProperties(::GT_CustomMapSupportRuntime::SizeChangerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::SizeChangerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::SizeChanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeChanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SizeChanger* GlobalNamespace::SizeChanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SizeChanger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SizeChanger::SizeChanger()   {
}
