#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandDebugGizmos.hpp"
#include "Oculus/Interaction/zzzz__HandDebugGizmos_CoordSpace_impl.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__HandDebugGizmos_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__HandDebugGizmos_CoordSpace_def.hpp"
#include "Oculus/Interaction/zzzz__HandDebugGizmos_def.hpp"
#include "Oculus/Interaction/zzzz__IHandVisual_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46e124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandDebugGizmos::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46e12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.get_Space
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandDebugGizmos_CoordSpace (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::get_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46e134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"get_Space", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.set_Space
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)(::GlobalNamespace::HandDebugGizmos_CoordSpace)>(&::Oculus::Interaction::HandDebugGizmos::set_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46e13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"set_Space", {}, {::i2c::type_of<::GlobalNamespace::HandDebugGizmos_CoordSpace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.get_ForceOffVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::get_ForceOffVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46e144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"get_ForceOffVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.set_ForceOffVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)(bool)>(&::Oculus::Interaction::HandDebugGizmos::set_ForceOffVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46e14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"set_ForceOffVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::get_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46e154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.add_WhenHandVisualUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)(::System::Action*)>(&::Oculus::Interaction::HandDebugGizmos::add_WhenHandVisualUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa46e15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"add_WhenHandVisualUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.remove_WhenHandVisualUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)(::System::Action*)>(&::Oculus::Interaction::HandDebugGizmos::remove_WhenHandVisualUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa46e1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"remove_WhenHandVisualUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa46e294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa46e2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa46e318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa46e418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.GetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandDebugGizmos::*)(::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Space)>(&::Oculus::Interaction::HandDebugGizmos::GetJointPose)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa46e518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::HandleHandUpdated)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa46e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.TryGetParentJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandDebugGizmos::*)(int32_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::HandDebugGizmos::TryGetParentJointId)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa46e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.TryGetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandDebugGizmos::*)(int32_t, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandDebugGizmos::TryGetJointPose)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa46e878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.InjectAllHandDebugGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandDebugGizmos::InjectAllHandDebugGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46ea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"InjectAllHandDebugGizmos", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandDebugGizmos::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa46ea84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos::*)()>(&::Oculus::Interaction::HandDebugGizmos::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa46eb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandDebugGizmos::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandDebugGizmos::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::GlobalNamespace::HandDebugGizmos_CoordSpace& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__space()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____space;
}
constexpr ::GlobalNamespace::HandDebugGizmos_CoordSpace const& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__space() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____space;
}
constexpr void Oculus::Interaction::HandDebugGizmos::__cordl_internal_set__space(::GlobalNamespace::HandDebugGizmos_CoordSpace  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____space = value;
}
constexpr bool& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__ForceOffVisibility_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceOffVisibility_k__BackingField;
}
constexpr bool const& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__ForceOffVisibility_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceOffVisibility_k__BackingField;
}
constexpr void Oculus::Interaction::HandDebugGizmos::__cordl_internal_set__ForceOffVisibility_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceOffVisibility_k__BackingField = value;
}
constexpr ::System::Action*& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get_WhenHandVisualUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenHandVisualUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get_WhenHandVisualUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenHandVisualUpdated;
}
constexpr void Oculus::Interaction::HandDebugGizmos::__cordl_internal_set_WhenHandVisualUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenHandVisualUpdated = value;
}
constexpr bool& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__isVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVisible;
}
constexpr bool const& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__isVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVisible;
}
constexpr void Oculus::Interaction::HandDebugGizmos::__cordl_internal_set__isVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVisible = value;
}
constexpr bool& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandDebugGizmos::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandDebugGizmos::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandDebugGizmos::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugGizmos::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HandDebugGizmos_CoordSpace Oculus::Interaction::HandDebugGizmos::get_Space()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"get_Space", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandDebugGizmos_CoordSpace>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugGizmos::set_Space(::GlobalNamespace::HandDebugGizmos_CoordSpace  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"set_Space", {}, {::i2c::type_of<::GlobalNamespace::HandDebugGizmos_CoordSpace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandDebugGizmos::get_ForceOffVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"get_ForceOffVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugGizmos::set_ForceOffVisibility(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"set_ForceOffVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandDebugGizmos::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugGizmos::add_WhenHandVisualUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"add_WhenHandVisualUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandDebugGizmos::remove_WhenHandVisualUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"remove_WhenHandVisualUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandDebugGizmos::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugGizmos::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugGizmos::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugGizmos::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandDebugGizmos::GetJointPose(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, jointId, space);
}
inline void Oculus::Interaction::HandDebugGizmos::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandDebugGizmos::TryGetParentJointId(int32_t  jointId, ::by_ref<int32_t>  parent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, parent);
}
inline bool Oculus::Interaction::HandDebugGizmos::TryGetJointPose(int32_t  jointId, ::by_ref<::UnityEngine::Pose>  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, pose);
}
inline void Oculus::Interaction::HandDebugGizmos::InjectAllHandDebugGizmos(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"InjectAllHandDebugGizmos", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandDebugGizmos::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandDebugGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandDebugGizmos* Oculus::Interaction::HandDebugGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandDebugGizmos*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IHandVisual"
constexpr  Oculus::Interaction::HandDebugGizmos::operator ::Oculus::Interaction::IHandVisual*() noexcept {
return static_cast<::Oculus::Interaction::IHandVisual*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IHandVisual"
constexpr ::Oculus::Interaction::IHandVisual* Oculus::Interaction::HandDebugGizmos::i___Oculus__Interaction__IHandVisual() noexcept {
return static_cast<::Oculus::Interaction::IHandVisual*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandDebugGizmos::HandDebugGizmos()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos___c::*)()>(&::Oculus::Interaction::HandDebugGizmos___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46ecb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandDebugGizmos___c.__ctor_b__31_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandDebugGizmos___c::*)()>(&::Oculus::Interaction::HandDebugGizmos___c::__ctor_b__31_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46ecbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos___c*>(),
                        {"<.ctor>b__31_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HandDebugGizmos___c::setStaticF___9(::Oculus::Interaction::HandDebugGizmos___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::HandDebugGizmos___c*, "<>9", ::Oculus::Interaction::HandDebugGizmos___c*>(std::forward<::Oculus::Interaction::HandDebugGizmos___c*>(value));
}
inline ::Oculus::Interaction::HandDebugGizmos___c* Oculus::Interaction::HandDebugGizmos___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::HandDebugGizmos___c*, "<>9", ::Oculus::Interaction::HandDebugGizmos___c*>();
}
inline void Oculus::Interaction::HandDebugGizmos___c::setStaticF___9__31_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__31_0", ::Oculus::Interaction::HandDebugGizmos___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::HandDebugGizmos___c::getStaticF___9__31_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__31_0", ::Oculus::Interaction::HandDebugGizmos___c*>();
}
inline void Oculus::Interaction::HandDebugGizmos___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandDebugGizmos___c::__ctor_b__31_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandDebugGizmos___c*>(),
                        {"<.ctor>b__31_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandDebugGizmos___c* Oculus::Interaction::HandDebugGizmos___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandDebugGizmos___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandDebugGizmos___c::HandDebugGizmos___c()   {
}
