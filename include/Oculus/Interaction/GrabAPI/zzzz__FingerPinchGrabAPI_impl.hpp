#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerPinchGrabAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerPinchGrabAPI_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerPinchGrabAPI_ReturnValue_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandPinchData_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "Oculus/Interaction/Input/zzzz__PinchGrabParam_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4fcc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_UpdateHandData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, ::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_UpdateHandData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4fcd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_UpdateHandData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_UpdateHandWristHMDData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, ::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_UpdateHandWristHMDData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4fcdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_UpdateHandWristHMDData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::StringW, ::by_ref<::System::IntPtr>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4fce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, int32_t, ::by_ref<bool>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4fcf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerIsGrabbing", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_GetFingerPinchPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, int32_t, ::by_ref<float_t>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerPinchPercent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fcfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerPinchPercent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_GetFingerPinchDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, int32_t, ::by_ref<float_t>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerPinchDistance)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fd070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerPinchDistance", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, int32_t, bool, ::by_ref<bool>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4fd104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_GetFingerGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::HandFinger, ::by_ref<float_t>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerGrabScore)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fd1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerGrabScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_GetCenterOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetCenterOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4fd248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetCenterOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_Common_GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_Common_GetVersion)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4fd2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_Common_GetVersion", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_GetPinchGrabParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::PinchGrabParam, ::by_ref<float_t>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetPinchGrabParam)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fd348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetPinchGrabParam", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_SetPinchGrabParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, ::Oculus::Interaction::Input::PinchGrabParam, float_t)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_SetPinchGrabParam)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4fd3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_SetPinchGrabParam", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.isdk_FingerPinchGrabAPI_IsPinchVisibilityGood
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue (*)(int32_t, ::by_ref<bool>)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_IsPinchVisibilityGood)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4fd470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_IsPinchVisibilityGood", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa4fd508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetHandle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4fd594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.SetPinchGrabParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::PinchGrabParam, float_t)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::SetPinchGrabParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fd5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"SetPinchGrabParam", {}, {::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetPinchGrabParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::PinchGrabParam)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetPinchGrabParam)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fd5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetPinchGrabParam", {}, {::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetIsPinchVisibilityGood
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetIsPinchVisibilityGood)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4fd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetIsPinchVisibilityGood", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fd67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetFingerPinchPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerPinchPercent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fd6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerPinchPercent", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetFingerPinchDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerPinchDistance)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fd704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerPinchDistance", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetWristOffsetLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetWristOffsetLocal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fd748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetFingerIsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger, bool)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerIsGrabbingChanged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4fd78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.GetFingerGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerGrabScore)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4fd7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::Update)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa4fd824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*, ::Oculus::Interaction::Input::Handedness, ::UnityEngine::Pose)>(&::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::Update)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xa4fd9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_get__fingerPinchGrabApiHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerPinchGrabApiHandle;
}
constexpr int32_t const& Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_get__fingerPinchGrabApiHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerPinchGrabApiHandle;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_set__fingerPinchGrabApiHandle(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerPinchGrabApiHandle = value;
}
constexpr ::Oculus::Interaction::GrabAPI::HandPinchData*& Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_get__pinchData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchData;
}
constexpr ::Oculus::Interaction::GrabAPI::HandPinchData* const& Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_get__pinchData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinchData;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_set__pinchData(::Oculus::Interaction::GrabAPI::HandPinchData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pinchData = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::__cordl_internal_set__hmd(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
inline int32_t Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_UpdateHandData(int32_t  handle, ::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_UpdateHandData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, data);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_UpdateHandWristHMDData(int32_t  handle, ::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>  data, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  wristForward, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  hmdForward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_UpdateHandWristHMDData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ByRefConst<::Oculus::Interaction::GrabAPI::HandPinchData*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, data, wristForward, hmdForward);
}
inline bool Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetString(int32_t  handle, ::StringW  name, ::by_ref<::System::IntPtr>  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, name, val);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerIsGrabbing(int32_t  handle, int32_t  index, ::by_ref<bool>  grabbing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerIsGrabbing", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, index, grabbing);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerPinchPercent(int32_t  handle, int32_t  index, ::by_ref<float_t>  pinchPercent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerPinchPercent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, index, pinchPercent);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerPinchDistance(int32_t  handle, int32_t  index, ::by_ref<float_t>  pinchDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerPinchDistance", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, index, pinchDistance);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged(int32_t  handle, int32_t  index, bool  targetState, ::by_ref<bool>  grabbing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, index, targetState, grabbing);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerGrabScore(int32_t  handle, ::Oculus::Interaction::Input::HandFinger  finger, ::by_ref<float_t>  outScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetFingerGrabScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, finger, outScore);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetCenterOffset(int32_t  handle, ::by_ref<::UnityEngine::Vector3>  outCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetCenterOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, outCenter);
}
inline int32_t Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_Common_GetVersion(::by_ref<::System::IntPtr>  versionStringPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_Common_GetVersion", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, versionStringPtr);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetPinchGrabParam(int32_t  handle, ::Oculus::Interaction::Input::PinchGrabParam  paramId, ::by_ref<float_t>  outParam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_GetPinchGrabParam", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, paramId, outParam);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_SetPinchGrabParam(int32_t  handle, ::Oculus::Interaction::Input::PinchGrabParam  paramId, float_t  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_SetPinchGrabParam", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, paramId, param);
}
inline ::GlobalNamespace::FingerPinchGrabAPI_ReturnValue Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_IsPinchVisibilityGood(int32_t  handle, ::by_ref<bool>  outVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"isdk_FingerPinchGrabAPI_IsPinchVisibilityGood", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FingerPinchGrabAPI_ReturnValue>(nullptr, ___internal_method, handle, outVal);
}
inline void Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::_ctor(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline int32_t Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::SetPinchGrabParam(::Oculus::Interaction::Input::PinchGrabParam  paramId, float_t  paramVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"SetPinchGrabParam", {}, {::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paramId, paramVal);
}
inline float_t Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetPinchGrabParam(::Oculus::Interaction::Input::PinchGrabParam  paramId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetPinchGrabParam", {}, {::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, paramId);
}
inline bool Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetIsPinchVisibilityGood()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetIsPinchVisibilityGood", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerPinchPercent(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerPinchPercent", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerPinchDistance(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerPinchDistance", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetWristOffsetLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, targetPinchState);
}
inline float_t Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::Update(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::Update(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  handPoses, ::Oculus::Interaction::Input::Handedness  handedness, ::UnityEngine::Pose  wristPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handPoses, handedness, wristPose);
}
inline ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI* Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::New_ctor(::Oculus::Interaction::Input::IHmd*  hmd)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI*>(hmd));
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr  Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::operator ::Oculus::Interaction::IFingerAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::i___Oculus__Interaction__IFingerAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::FingerPinchGrabAPI::FingerPinchGrabAPI()   {
}
