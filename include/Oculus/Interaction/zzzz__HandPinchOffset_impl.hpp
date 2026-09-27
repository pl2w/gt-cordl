#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandPinchOffset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__HandPinchOffset_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandGrabAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47e3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandPinchOffset::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47e3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.get_MirrorOffsetsForLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::get_MirrorOffsetsForLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47e3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"get_MirrorOffsetsForLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.set_MirrorOffsetsForLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(bool)>(&::Oculus::Interaction::HandPinchOffset::set_MirrorOffsetsForLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47e3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"set_MirrorOffsetsForLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.get_LocalPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::get_LocalPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47e3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"get_LocalPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.set_LocalPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::HandPinchOffset::set_LocalPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47e3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"set_LocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.get_RotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::get_RotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47e3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"get_RotationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.set_RotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::HandPinchOffset::set_RotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47e400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"set_RotationOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa47e40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa47e464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::HandleHandUpdated)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa47e690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.GetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::Input::Handedness, float_t)>(&::Oculus::Interaction::HandPinchOffset::GetOffset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa47e958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.InjectAllHandPinchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::GrabAPI::HandGrabAPI*)>(&::Oculus::Interaction::HandPinchOffset::InjectAllHandPinchOffset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa47ea3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"InjectAllHandPinchOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandPinchOffset::InjectHand)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa47ea68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.InjectHandGrabAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(::Oculus::Interaction::GrabAPI::HandGrabAPI*)>(&::Oculus::Interaction::HandPinchOffset::InjectHandGrabAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47eb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"InjectHandGrabAPI", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset.InjectOptionalCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::HandPinchOffset::InjectOptionalCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"InjectOptionalCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandPinchOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandPinchOffset::*)()>(&::Oculus::Interaction::HandPinchOffset::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa47eb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__handGrabApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabApi;
}
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__handGrabApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabApi;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__handGrabApi(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabApi = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__localPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__localPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPositionOffset;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__localPositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPositionOffset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__rotationOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__posOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__posOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__posOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posOffset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__rotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__rotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__rotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotOffset = value;
}
constexpr bool& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__mirrorOffsetsForLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorOffsetsForLeftHand;
}
constexpr bool const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__mirrorOffsetsForLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorOffsetsForLeftHand;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__mirrorOffsetsForLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mirrorOffsetsForLeftHand = value;
}
constexpr bool& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__cachedPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::HandPinchOffset::__cordl_internal_get__cachedPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr void Oculus::Interaction::HandPinchOffset::__cordl_internal_set__cachedPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedPose = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandPinchOffset::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandPinchOffset::get_MirrorOffsetsForLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"get_MirrorOffsetsForLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::set_MirrorOffsetsForLeftHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"set_MirrorOffsetsForLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::HandPinchOffset::get_LocalPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"get_LocalPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::set_LocalPositionOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"set_LocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandPinchOffset::get_RotationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"get_RotationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::set_RotationOffset(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"set_RotationOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandPinchOffset::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandPinchOffset::GetOffset(::by_ref<::UnityEngine::Pose>  pose, ::Oculus::Interaction::Input::Handedness  handedness, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose, handedness, scale);
}
inline void Oculus::Interaction::HandPinchOffset::InjectAllHandPinchOffset(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"InjectAllHandPinchOffset", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, handGrabApi);
}
inline void Oculus::Interaction::HandPinchOffset::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandPinchOffset::InjectHandGrabAPI(::Oculus::Interaction::GrabAPI::HandGrabAPI*  handGrabApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"InjectHandGrabAPI", {}, {::i2c::type_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabApi);
}
inline void Oculus::Interaction::HandPinchOffset::InjectOptionalCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {"InjectOptionalCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void Oculus::Interaction::HandPinchOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandPinchOffset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandPinchOffset* Oculus::Interaction::HandPinchOffset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandPinchOffset*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandPinchOffset::HandPinchOffset()   {
}
