#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtColliderTriggerProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtColliderTriggerProcessor_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtColliderTriggerProcessor_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtColliderTriggerProcessorsGroup_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTag_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtUiSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.get_LastTapPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::get_LastTapPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d21d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"get_LastTapPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.set_LastTapPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)(::UnityEngine::Vector3)>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::set_LastTapPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d21d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"set_LastTapPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d21d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.GetGTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::GorillaTag::GtTag> (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)(::UnityEngine::Collider*)>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::GetGTag)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d21da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"GetGTag", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)(::UnityEngine::Collider*)>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9d21e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.IsColliderGrabbingTablet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)(::Liv::Lck::GorillaTag::GtTag*)>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::IsColliderGrabbingTablet)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d21ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"IsColliderGrabbingTablet", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtTag*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)(::UnityEngine::Collider*)>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::OnTriggerExit)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9d2229c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.ResetToDefaultAfterTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::ResetToDefaultAfterTap)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d2245c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"ResetToDefaultAfterTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.BlockTapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::BlockTapping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d224d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"BlockTapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.ResetToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::ResetToDefault)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d224e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"ResetToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.ResetToDefaultAndTriggerButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::ResetToDefaultAndTriggerButton)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9d2252c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"ResetToDefaultAndTriggerButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.SetTriggerNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::SetTriggerNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d22510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"SetTriggerNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d22568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.IsTapValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)(::UnityEngine::Vector3)>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::IsTapValid)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9d22084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"IsTapValid", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor.AllowTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::AllowTap)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d223f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"AllowTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d2259c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____group;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup> const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____group;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__group(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____group = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__tapCooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapCooldownTime;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__tapCooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapCooldownTime;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__tapCooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tapCooldownTime = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__checkTriggerFromAbove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkTriggerFromAbove;
}
constexpr bool const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__checkTriggerFromAbove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkTriggerFromAbove;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__checkTriggerFromAbove(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkTriggerFromAbove = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__onTriggeredStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTriggeredStarted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__onTriggeredStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTriggeredStarted;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__onTriggeredStarted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTriggeredStarted = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__onTriggeredEnded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTriggeredEnded;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__onTriggeredEnded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTriggeredEnded;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__onTriggeredEnded(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTriggeredEnded = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__canTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canTap;
}
constexpr bool const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__canTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canTap;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__canTap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canTap = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__isTapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTapped;
}
constexpr bool const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__isTapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTapped;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__isTapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTapped = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTag>& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__gtTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtTag;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTag> const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__gtTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtTag;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__gtTag(::UnityW<::Liv::Lck::GorillaTag::GtTag>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gtTag = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__boxCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boxCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__boxCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boxCollider;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__boxCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boxCollider = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__LastTapPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTapPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_get__LastTapPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTapPosition_k__BackingField;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::__cordl_internal_set__LastTapPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastTapPosition_k__BackingField = value;
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::setStaticF_IsGrabbingTablet(bool  value)  {
::cordl_internals::setStaticField<bool, "IsGrabbingTablet", ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(std::forward<bool>(value));
}
inline bool Liv::Lck::GorillaTag::GtColliderTriggerProcessor::getStaticF_IsGrabbingTablet()  {
return ::cordl_internals::getStaticField<bool, "IsGrabbingTablet", ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>();
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::setStaticF_CurrentGrabbedHand(::UnityEngine::XR::XRNode  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::XRNode, "CurrentGrabbedHand", ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(std::forward<::UnityEngine::XR::XRNode>(value));
}
inline ::UnityEngine::XR::XRNode Liv::Lck::GorillaTag::GtColliderTriggerProcessor::getStaticF_CurrentGrabbedHand()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::XRNode, "CurrentGrabbedHand", ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>();
}
inline ::UnityEngine::Vector3 Liv::Lck::GorillaTag::GtColliderTriggerProcessor::get_LastTapPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"get_LastTapPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::set_LastTapPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"set_LastTapPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Liv::Lck::GorillaTag::GtTag> Liv::Lck::GorillaTag::GtColliderTriggerProcessor::GetGTag(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"GetGTag", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::GorillaTag::GtTag>>(this, ___internal_method, other);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool Liv::Lck::GorillaTag::GtColliderTriggerProcessor::IsColliderGrabbingTablet(::Liv::Lck::GorillaTag::GtTag*  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"IsColliderGrabbingTablet", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtTag*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tag);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::ResetToDefaultAfterTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"ResetToDefaultAfterTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::BlockTapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"BlockTapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::ResetToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"ResetToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::ResetToDefaultAndTriggerButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"ResetToDefaultAndTriggerButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::SetTriggerNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"SetTriggerNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::GorillaTag::GtColliderTriggerProcessor::IsTapValid(::UnityEngine::Vector3  tapPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"IsTapValid", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tapPosition);
}
inline ::System::Collections::IEnumerator* Liv::Lck::GorillaTag::GtColliderTriggerProcessor::AllowTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {"AllowTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor* Liv::Lck::GorillaTag::GtColliderTriggerProcessor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor::GtColliderTriggerProcessor()   {
}
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::*)(int32_t)>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d22574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d225b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d225b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d22678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d22680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d226b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>& Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> const& Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::__cordl_internal_set___4__this(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28* Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtColliderTriggerProcessor__AllowTap_d__28::GtColliderTriggerProcessor__AllowTap_d__28()   {
}
