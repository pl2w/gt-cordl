#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/PalmGrabAPI.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__PalmGrabAPI_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__PalmGrabAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerShapes_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI.GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PalmGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI::GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4f8ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI.GetFingerIsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PalmGrabAPI::*)(::Oculus::Interaction::Input::HandFinger, bool)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI::GetFingerIsGrabbingChanged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4f8cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI.GetFingerGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PalmGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI::GetFingerGrabScore)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4f8d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI::Update)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa4f8d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI.UpdateVolumeCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI::UpdateVolumeCenter)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa4f8f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"UpdateVolumeCenter", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI.ClearState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI::ClearState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa4f8f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"ClearState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI.GetWristOffsetLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::PalmGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI::GetWristOffsetLocal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4f9208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa4f9214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_get__poseVolumeCenterOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseVolumeCenterOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_get__poseVolumeCenterOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseVolumeCenterOffset;
}
constexpr void Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_set__poseVolumeCenterOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseVolumeCenterOffset = value;
}
constexpr ::Oculus::Interaction::PoseDetection::FingerShapes*& Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_get__fingerShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerShapes;
}
constexpr ::Oculus::Interaction::PoseDetection::FingerShapes* const& Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_get__fingerShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerShapes;
}
constexpr void Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_set__fingerShapes(::Oculus::Interaction::PoseDetection::FingerShapes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerShapes = value;
}
constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>& Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_get__fingersGrabData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersGrabData;
}
constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*> const& Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_get__fingersGrabData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersGrabData;
}
constexpr void Oculus::Interaction::GrabAPI::PalmGrabAPI::__cordl_internal_set__fingersGrabData(::ArrayW<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingersGrabData = value;
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI::setStaticF_POSE_VOLUME_OFFSET(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "POSE_VOLUME_OFFSET", ::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::PalmGrabAPI::getStaticF_POSE_VOLUME_OFFSET()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "POSE_VOLUME_OFFSET", ::Oculus::Interaction::GrabAPI::PalmGrabAPI*>();
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI::setStaticF_START_THRESHOLD(float_t  value)  {
::cordl_internals::setStaticField<float_t, "START_THRESHOLD", ::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(std::forward<float_t>(value));
}
inline float_t Oculus::Interaction::GrabAPI::PalmGrabAPI::getStaticF_START_THRESHOLD()  {
return ::cordl_internals::getStaticField<float_t, "START_THRESHOLD", ::Oculus::Interaction::GrabAPI::PalmGrabAPI*>();
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI::setStaticF_RELEASE_THRESHOLD(float_t  value)  {
::cordl_internals::setStaticField<float_t, "RELEASE_THRESHOLD", ::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(std::forward<float_t>(value));
}
inline float_t Oculus::Interaction::GrabAPI::PalmGrabAPI::getStaticF_RELEASE_THRESHOLD()  {
return ::cordl_internals::getStaticField<float_t, "RELEASE_THRESHOLD", ::Oculus::Interaction::GrabAPI::PalmGrabAPI*>();
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI::setStaticF_CURL_RANGE(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "CURL_RANGE", ::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> Oculus::Interaction::GrabAPI::PalmGrabAPI::getStaticF_CURL_RANGE()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "CURL_RANGE", ::Oculus::Interaction::GrabAPI::PalmGrabAPI*>();
}
inline bool Oculus::Interaction::GrabAPI::PalmGrabAPI::GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::GrabAPI::PalmGrabAPI::GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetGrabState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, targetGrabState);
}
inline float_t Oculus::Interaction::GrabAPI::PalmGrabAPI::GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI::Update(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI::UpdateVolumeCenter(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"UpdateVolumeCenter", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI::ClearState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"ClearState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::PalmGrabAPI::GetWristOffsetLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::PalmGrabAPI* Oculus::Interaction::GrabAPI::PalmGrabAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::PalmGrabAPI*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr  Oculus::Interaction::GrabAPI::PalmGrabAPI::operator ::Oculus::Interaction::IFingerAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* Oculus::Interaction::GrabAPI::PalmGrabAPI::i___Oculus__Interaction__IFingerAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::PalmGrabAPI::PalmGrabAPI()   {
}
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData.get_IsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::*)()>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::get_IsGrabbingChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f962c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"get_IsGrabbingChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData.set_IsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::*)(bool)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::set_IsGrabbingChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f9634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"set_IsGrabbingChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa4f9490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData.UpdateGrabStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::PoseDetection::FingerShapes*)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::UpdateGrabStrength)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4f9124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"UpdateGrabStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerShapes*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData.UpdateIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::*)(float_t, float_t)>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::UpdateIsGrabbing)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4f91bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"UpdateIsGrabbing", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData.ClearState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::*)()>(&::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::ClearState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f9200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"ClearState", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandFinger& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get__fingerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerID;
}
constexpr ::Oculus::Interaction::Input::HandFinger const& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get__fingerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerID;
}
constexpr void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_set__fingerID(::Oculus::Interaction::Input::HandFinger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerID = value;
}
constexpr ::UnityEngine::Vector2& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get__curlNormalizationParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curlNormalizationParams;
}
constexpr ::UnityEngine::Vector2 const& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get__curlNormalizationParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curlNormalizationParams;
}
constexpr void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_set__curlNormalizationParams(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curlNormalizationParams = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get_GrabStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrabStrength;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get_GrabStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrabStrength;
}
constexpr void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_set_GrabStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrabStrength = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get_IsGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsGrabbing;
}
constexpr bool const& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get_IsGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsGrabbing;
}
constexpr void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_set_IsGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsGrabbing = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get__IsGrabbingChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGrabbingChanged_k__BackingField;
}
constexpr bool const& Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_get__IsGrabbingChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGrabbingChanged_k__BackingField;
}
constexpr void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::__cordl_internal_set__IsGrabbingChanged_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsGrabbingChanged_k__BackingField = value;
}
inline bool Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::get_IsGrabbingChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"get_IsGrabbingChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::set_IsGrabbingChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"set_IsGrabbingChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::_ctor(::Oculus::Interaction::Input::HandFinger  fingerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerId);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::UpdateGrabStrength(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::FingerShapes*  fingerShapes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"UpdateGrabStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerShapes*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, fingerShapes);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::UpdateIsGrabbing(float_t  startThreshold, float_t  releaseThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"UpdateIsGrabbing", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startThreshold, releaseThreshold);
}
inline void Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::ClearState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(),
                        {"ClearState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData* Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::New_ctor(::Oculus::Interaction::Input::HandFinger  fingerId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>(fingerId));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData::PalmGrabAPI_FingerGrabData()   {
}
