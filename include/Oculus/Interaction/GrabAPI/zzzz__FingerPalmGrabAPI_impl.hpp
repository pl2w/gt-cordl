#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerPalmGrabAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerPalmGrabAPI_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerPalmGrabAPI_ReturnValue_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerPalmGrabAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__PalmGrabParamID_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4fbd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_UpdateHandData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::ByRefConst<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_UpdateHandData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4fbd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_UpdateHandData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ByRefConst<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::HandFinger, ::by_ref<bool>)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4fbe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetFingerIsGrabbing", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::HandFinger, bool, ::by_ref<bool>)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4fbed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_GetFingerGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::HandFinger, ::by_ref<float_t>)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerGrabScore)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fbf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetFingerGrabScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_GetCenterOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetCenterOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4fc018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetCenterOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_GetConfigParamFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::PalmGrabParamID, ::by_ref<float_t>)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetConfigParamFloat)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fc09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetConfigParamFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_SetConfigParamFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::PalmGrabParamID, float_t)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_SetConfigParamFloat)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fc130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_SetConfigParamFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_GetConfigParamVec3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::PalmGrabParamID, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetConfigParamVec3)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fc1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetConfigParamVec3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.isdk_FingerPalmGrabAPI_SetConfigParamVec3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::PalmGrabParamID, ::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_SetConfigParamVec3)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4fc258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_SetConfigParamVec3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4fc304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4fc3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fc3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.GetFingerIsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)(::Oculus::Interaction::Input::HandFinger, bool)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetFingerIsGrabbingChanged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4fc440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.GetFingerGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetFingerGrabScore)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fc494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::Update)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa4fc4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.GetWristOffsetLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetWristOffsetLocal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fc888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.SetConfigParamFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)(::Oculus::Interaction::Input::PalmGrabParamID, float_t)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::SetConfigParamFloat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fc8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"SetConfigParamFloat", {}, {::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.GetConfigParamFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)(::Oculus::Interaction::Input::PalmGrabParamID)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetConfigParamFloat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fc910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetConfigParamFloat", {}, {::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.SetConfigParamVec3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)(::Oculus::Interaction::Input::PalmGrabParamID, ::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::SetConfigParamVec3)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4fc954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"SetConfigParamVec3", {}, {::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI.GetConfigParamVec3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::*)(::Oculus::Interaction::Input::PalmGrabParamID)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetConfigParamVec3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4fc9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetConfigParamVec3", {}, {::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::__cordl_internal_get_apiHandle_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiHandle_;
}
constexpr int32_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::__cordl_internal_get_apiHandle_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiHandle_;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::__cordl_internal_set_apiHandle_(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiHandle_ = value;
}
constexpr ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::__cordl_internal_get_handData_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handData_;
}
constexpr ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData* const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::__cordl_internal_get_handData_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handData_;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::__cordl_internal_set_handData_(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handData_ = value;
}
inline int32_t Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_UpdateHandData(int32_t  handle, ::ByRefConst<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_UpdateHandData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ByRefConst<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, data);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerIsGrabbing(int32_t  handle, ::Oculus::Interaction::Input::HandFinger  finger, ::by_ref<bool>  grabbing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetFingerIsGrabbing", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, finger, grabbing);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged(int32_t  handle, ::Oculus::Interaction::Input::HandFinger  finger, bool  targetGrabState, ::by_ref<bool>  changed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, finger, targetGrabState, changed);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerGrabScore(int32_t  handle, ::Oculus::Interaction::Input::HandFinger  finger, ::by_ref<float_t>  score)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetFingerGrabScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, finger, score);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetCenterOffset(int32_t  handle, ::by_ref<::UnityEngine::Vector3>  score)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetCenterOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, score);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetConfigParamFloat(int32_t  handle, ::Oculus::Interaction::Input::PalmGrabParamID  paramID, ::by_ref<float_t>  outVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetConfigParamFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, paramID, outVal);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_SetConfigParamFloat(int32_t  handle, ::Oculus::Interaction::Input::PalmGrabParamID  paramID, float_t  inVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_SetConfigParamFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, paramID, inVal);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetConfigParamVec3(int32_t  handle, ::Oculus::Interaction::Input::PalmGrabParamID  paramID, ::by_ref<::UnityEngine::Vector3>  outVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_GetConfigParamVec3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, paramID, outVal);
}
inline ::GlobalNamespace::FingerPalmGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_SetConfigParamVec3(int32_t  handle, ::Oculus::Interaction::Input::PalmGrabParamID  paramID, ::UnityEngine::Vector3  inVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"isdk_FingerPalmGrabAPI_SetConfigParamVec3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPalmGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, paramID, inVal);
}
inline void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetGrabState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, targetGrabState);
}
inline float_t Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::Update(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetWristOffsetLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::SetConfigParamFloat(::Oculus::Interaction::Input::PalmGrabParamID  paramId, float_t  paramVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"SetConfigParamFloat", {}, {::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paramId, paramVal);
}
inline float_t Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetConfigParamFloat(::Oculus::Interaction::Input::PalmGrabParamID  paramId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetConfigParamFloat", {}, {::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, paramId);
}
inline void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::SetConfigParamVec3(::Oculus::Interaction::Input::PalmGrabParamID  paramId, ::UnityEngine::Vector3  paramVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"SetConfigParamVec3", {}, {::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paramId, paramVal);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::GetConfigParamVec3(::Oculus::Interaction::Input::PalmGrabParamID  paramId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>(),
                        {"GetConfigParamVec3", {}, {::i2c::type_of<::Oculus::Interaction::Input::PalmGrabParamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, paramId);
}
inline ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI* Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr  Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::operator ::Oculus::Interaction::IFingerAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::i___Oculus__Interaction__IFingerAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::FingerPalmGrabAPI()   {
}
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::*)()>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4fc374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*, ::UnityEngine::Pose, ::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::SetData)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa4fc6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>(),
                        {"SetData", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get_jointValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointValues;
}
constexpr ::ArrayW<float_t> const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get_jointValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointValues;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set_jointValues(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jointValues = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootRotX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotX;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootRotX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotX;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set__rootRotX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootRotX = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootRotY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotY;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootRotY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotY;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set__rootRotY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootRotY = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootRotZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotZ;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootRotZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotZ;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set__rootRotZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootRotZ = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootRotW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotW;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootRotW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootRotW;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set__rootRotW(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootRotW = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootPosX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPosX;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootPosX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPosX;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set__rootPosX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootPosX = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootPosY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPosY;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootPosY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPosY;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set__rootPosY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootPosY = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootPosZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPosZ;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__rootPosZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPosZ;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set__rootPosZ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootPosZ = value;
}
constexpr int32_t& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr int32_t const& Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_get__handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::__cordl_internal_set__handedness(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handedness = value;
}
inline void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::SetData(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  joints, ::UnityEngine::Pose  root, ::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>(),
                        {"SetData", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joints, root, handedness);
}
inline ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData* Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI_HandData::FingerPalmGrabAPI_HandData()   {
}
