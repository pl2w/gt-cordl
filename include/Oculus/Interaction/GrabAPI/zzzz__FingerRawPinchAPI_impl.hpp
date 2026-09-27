#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerRawPinchAPI.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerRawPinchAPI_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerRawPinchAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI.GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4fdc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI.GetWristOffsetLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetWristOffsetLocal)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa4fdc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI.GetFingerIsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)(::Oculus::Interaction::Input::HandFinger, bool)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerIsGrabbingChanged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4fdd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI.GetFingerGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerGrabScore)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4fdd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4fdda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI.ClearState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::ClearState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa4fde04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"ClearState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa4fdfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>& Oculus::Interaction::GrabAPI::FingerRawPinchAPI::__cordl_internal_get__fingersPinchData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersPinchData;
}
constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*> const& Oculus::Interaction::GrabAPI::FingerRawPinchAPI::__cordl_internal_get__fingersPinchData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersPinchData;
}
constexpr void Oculus::Interaction::GrabAPI::FingerRawPinchAPI::__cordl_internal_set__fingersPinchData(::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingersPinchData = value;
}
inline bool Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetWristOffsetLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, targetPinchState);
}
inline float_t Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI::Update(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI::ClearState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {"ClearState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI* Oculus::Interaction::GrabAPI::FingerRawPinchAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr  Oculus::Interaction::GrabAPI::FingerRawPinchAPI::operator ::Oculus::Interaction::IFingerAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* Oculus::Interaction::GrabAPI::FingerRawPinchAPI::i___Oculus__Interaction__IFingerAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::FingerRawPinchAPI()   {
}
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData.get_IsPinchingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::*)()>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::get_IsPinchingChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fe224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"get_IsPinchingChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData.set_IsPinchingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::*)(bool)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::set_IsPinchingChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fe22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"set_IsPinchingChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData.get_TipPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::*)()>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::get_TipPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4fe234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"get_TipPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData.set_TipPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::set_TipPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4fe240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"set_TipPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4fe1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData.UpdateTipPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::UpdateTipPosition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4fe24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"UpdateTipPosition", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData.UpdateIsPinching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::UpdateIsPinching)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa4fde50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"UpdateIsPinching", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData.ClearState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::*)()>(&::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::ClearState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fdf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"ClearState", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandFinger& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get__finger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finger;
}
constexpr ::Oculus::Interaction::Input::HandFinger const& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get__finger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finger;
}
constexpr void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_set__finger(::Oculus::Interaction::Input::HandFinger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finger = value;
}
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get__tipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tipId;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get__tipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tipId;
}
constexpr void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_set__tipId(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tipId = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get_PinchStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PinchStrength;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get_PinchStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PinchStrength;
}
constexpr void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_set_PinchStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PinchStrength = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get_IsPinching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPinching;
}
constexpr bool const& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get_IsPinching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPinching;
}
constexpr void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_set_IsPinching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsPinching = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get__IsPinchingChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPinchingChanged_k__BackingField;
}
constexpr bool const& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get__IsPinchingChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPinchingChanged_k__BackingField;
}
constexpr void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_set__IsPinchingChanged_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPinchingChanged_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get__TipPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TipPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_get__TipPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TipPosition_k__BackingField;
}
constexpr void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::__cordl_internal_set__TipPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TipPosition_k__BackingField = value;
}
inline bool Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::get_IsPinchingChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"get_IsPinchingChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::set_IsPinchingChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"set_IsPinchingChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::get_TipPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"get_TipPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::set_TipPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"set_TipPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::_ctor(::Oculus::Interaction::Input::HandFinger  fingerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerId);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::UpdateTipPosition(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"UpdateTipPosition", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::UpdateIsPinching(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"UpdateIsPinching", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::ClearState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(),
                        {"ClearState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData* Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::New_ctor(::Oculus::Interaction::Input::HandFinger  fingerId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData*>(fingerId));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI_FingerPinchData::FingerRawPinchAPI_FingerPinchData()   {
}
