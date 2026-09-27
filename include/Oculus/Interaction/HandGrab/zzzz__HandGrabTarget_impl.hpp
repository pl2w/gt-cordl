#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabTarget.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabTarget_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabTarget_GrabAnchor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget.get_HandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandPose* (::Oculus::Interaction::HandGrab::HandGrabTarget::*)()>(&::Oculus::Interaction::HandGrab::HandGrabTarget::get_HandPose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4e21bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"get_HandPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget.GetWorldPoseDisplaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::HandGrabTarget::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandGrab::HandGrabTarget::GetWorldPoseDisplaced)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4e21e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"GetWorldPoseDisplaced", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget.get_HandAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandAlignType (::Oculus::Interaction::HandGrab::HandGrabTarget::*)()>(&::Oculus::Interaction::HandGrab::HandGrabTarget::get_HandAlignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e2264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"get_HandAlignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget.set_HandAlignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabTarget::*)(::Oculus::Interaction::HandGrab::HandAlignType)>(&::Oculus::Interaction::HandGrab::HandGrabTarget::set_HandAlignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e226c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"set_HandAlignment", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandAlignType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget.get_Anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (::Oculus::Interaction::HandGrab::HandGrabTarget::*)()>(&::Oculus::Interaction::HandGrab::HandGrabTarget::get_Anchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e2274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"get_Anchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget.set_Anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabTarget::*)(::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::HandGrabTarget::set_Anchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"set_Anchor", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabTarget::*)(::UnityEngine::Transform*, ::Oculus::Interaction::HandGrab::HandAlignType, ::GlobalNamespace::HandGrabTarget_GrabAnchor, ::Oculus::Interaction::HandGrab::HandGrabResult*)>(&::Oculus::Interaction::HandGrab::HandGrabTarget::Set)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4e2284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"Set", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandAlignType>(), ::i2c::type_of<::GlobalNamespace::HandGrabTarget_GrabAnchor>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabTarget::*)(::UnityEngine::Transform*, ::Oculus::Interaction::HandGrab::HandAlignType, ::Oculus::Interaction::Grab::GrabTypeFlags, ::Oculus::Interaction::HandGrab::HandGrabResult*)>(&::Oculus::Interaction::HandGrab::HandGrabTarget::Set)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4dc6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"Set", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandAlignType>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabTarget::*)()>(&::Oculus::Interaction::HandGrab::HandGrabTarget::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4dcb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_get__handGrabResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabResult;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_get__handGrabResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabResult;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_set__handGrabResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabResult = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandAlignType& Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_get__HandAlignment_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandAlignment_k__BackingField;
}
constexpr ::Oculus::Interaction::HandGrab::HandAlignType const& Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_get__HandAlignment_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandAlignment_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_set__HandAlignment_k__BackingField(::Oculus::Interaction::HandGrab::HandAlignType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandAlignment_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags& Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_get__Anchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Anchor_k__BackingField;
}
constexpr ::Oculus::Interaction::Grab::GrabTypeFlags const& Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_get__Anchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Anchor_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabTarget::__cordl_internal_set__Anchor_k__BackingField(::Oculus::Interaction::Grab::GrabTypeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Anchor_k__BackingField = value;
}
inline ::Oculus::Interaction::HandGrab::HandPose* Oculus::Interaction::HandGrab::HandGrabTarget::get_HandPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"get_HandPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandPose*>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabTarget::GetWorldPoseDisplaced(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"GetWorldPoseDisplaced", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, offset);
}
inline ::Oculus::Interaction::HandGrab::HandAlignType Oculus::Interaction::HandGrab::HandGrabTarget::get_HandAlignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"get_HandAlignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandAlignType>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabTarget::set_HandAlignment(::Oculus::Interaction::HandGrab::HandAlignType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"set_HandAlignment", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandAlignType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::HandGrabTarget::get_Anchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"get_Anchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabTarget::set_Anchor(::Oculus::Interaction::Grab::GrabTypeFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"set_Anchor", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandGrab::HandGrabTarget::Set(::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::HandGrab::HandAlignType  handAlignment, ::GlobalNamespace::HandGrabTarget_GrabAnchor  anchor, ::Oculus::Interaction::HandGrab::HandGrabResult*  handGrabResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"Set", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandAlignType>(), ::i2c::type_of<::GlobalNamespace::HandGrabTarget_GrabAnchor>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeTo, handAlignment, anchor, handGrabResult);
}
inline void Oculus::Interaction::HandGrab::HandGrabTarget::Set(::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::HandGrab::HandAlignType  handAlignment, ::Oculus::Interaction::Grab::GrabTypeFlags  anchor, ::Oculus::Interaction::HandGrab::HandGrabResult*  handGrabResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {"Set", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandAlignType>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeTo, handAlignment, anchor, handGrabResult);
}
inline void Oculus::Interaction::HandGrab::HandGrabTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* Oculus::Interaction::HandGrab::HandGrabTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabTarget*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget::HandGrabTarget()   {
}
