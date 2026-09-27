#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_CopyPosesJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_GetSceneAnchorPosesJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_GetSpatialAnchorPosesJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_SetLocalSpaceTransformsJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_SetWorldSpaceTransformsJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_TrackingSpacePose_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_TransformPosesJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.IOVRAnchorComponent_OVRLocatable__get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__get_Type)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa57355c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"IOVRAnchorComponent<OVRLocatable>.get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.IOVRAnchorComponent_OVRLocatable__get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__get_Handle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa5735b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"IOVRAnchorComponent<OVRLocatable>.get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.IOVRAnchorComponent_OVRLocatable__FromAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRLocatable (::GlobalNamespace::OVRLocatable::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa573608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"IOVRAnchorComponent<OVRLocatable>.FromAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::get_IsNull)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa57369c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"get_IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa5736f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.SetEnabledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRLocatable::*)(bool, double_t)>(&::GlobalNamespace::OVRLocatable::SetEnabledAsync)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa5737d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"SetEnabledAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.SetEnabledSafeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRLocatable::*)(bool, double_t)>(&::GlobalNamespace::OVRLocatable::SetEnabledSafeAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa5739d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"SetEnabledSafeAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)(::GlobalNamespace::OVRLocatable)>(&::GlobalNamespace::OVRLocatable::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa573a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRLocatable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRLocatable, ::GlobalNamespace::OVRLocatable)>(&::GlobalNamespace::OVRLocatable::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa573aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRLocatable>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRLocatable, ::GlobalNamespace::OVRLocatable)>(&::GlobalNamespace::OVRLocatable::op_Inequality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa573b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRLocatable>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)(::System::Object*)>(&::GlobalNamespace::OVRLocatable::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa573b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                    {::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::GetHashCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa573c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                    {::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa573cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                    {::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5735ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa573d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRLocatable::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa573638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.TryGetSceneAnchorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>)>(&::GlobalNamespace::OVRLocatable::TryGetSceneAnchorPose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa573d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"TryGetSceneAnchorPose", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.TryGetSpatialAnchorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>)>(&::GlobalNamespace::OVRLocatable::TryGetSpatialAnchorPose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa574004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"TryGetSpatialAnchorPose", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.ScheduleUpdateTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>, ::UnityEngine::Jobs::TransformAccessArray, ::UnityEngine::Transform*, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>, ::Unity::Jobs::JobHandle)>(&::GlobalNamespace::OVRLocatable::ScheduleUpdateTransforms)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0xa57412c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"ScheduleUpdateTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.UpdateSceneAnchorTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>>*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>*)>(&::GlobalNamespace::OVRLocatable::UpdateSceneAnchorTransforms)> {
  constexpr static std::size_t size = 0x984;
  constexpr static std::size_t addrs = 0xa5746dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"UpdateSceneAnchorTransforms", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>>*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable._UpdateSceneAnchorTransforms_g__GetLocatableOrDefault_34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRLocatable (*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRLocatable::_UpdateSceneAnchorTransforms_g__GetLocatableOrDefault_34_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa575060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"<UpdateSceneAnchorTransforms>g__GetLocatableOrDefault|34_0", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable::setStaticF_Null(::GlobalNamespace::OVRLocatable  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRLocatable, "Null", ::GlobalNamespace::OVRLocatable>(std::forward<::GlobalNamespace::OVRLocatable>(value));
}
inline ::GlobalNamespace::OVRLocatable GlobalNamespace::OVRLocatable::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRLocatable, "Null", ::GlobalNamespace::OVRLocatable>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"IOVRAnchorComponent<OVRLocatable>.get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"IOVRAnchorComponent<OVRLocatable>.get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRLocatable GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__FromAnchor(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"IOVRAnchorComponent<OVRLocatable>.FromAnchor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRLocatable>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRLocatable::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"get_IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRLocatable::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRLocatable::SetEnabledAsync(bool  enabled, double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"SetEnabledAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRLocatable::SetEnabledSafeAsync(bool  enabled, double_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"SetEnabledSafeAsync", {}, {::i2c::type_of<bool>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRLocatable::Equals(::GlobalNamespace::OVRLocatable  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRLocatable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRLocatable::op_Equality(::GlobalNamespace::OVRLocatable  lhs, ::GlobalNamespace::OVRLocatable  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::OVRLocatable>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRLocatable::op_Inequality(::GlobalNamespace::OVRLocatable  lhs, ::GlobalNamespace::OVRLocatable  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::OVRLocatable>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRLocatable::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRLocatable::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRLocatable::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRLocatable::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRLocatable::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRLocatable::_ctor(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRLocatable::TryGetSceneAnchorPose(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"TryGetSceneAnchorPose", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pose);
}
inline bool GlobalNamespace::OVRLocatable::TryGetSpatialAnchorPose(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"TryGetSpatialAnchorPose", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pose);
}
inline ::Unity::Jobs::JobHandle GlobalNamespace::OVRLocatable::ScheduleUpdateTransforms(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>  locatables, ::UnityEngine::Jobs::TransformAccessArray  transforms, ::UnityEngine::Transform*  trackingSpaceToWorldSpaceTransform, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>  posesOut, ::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"ScheduleUpdateTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, locatables, transforms, trackingSpaceToWorldSpaceTransform, posesOut, inputDeps);
}
inline void GlobalNamespace::OVRLocatable::UpdateSceneAnchorTransforms(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>>*  anchors, ::UnityEngine::Transform*  trackingSpaceToWorldSpaceTransform, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>*  trackingSpacePoses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"UpdateSceneAnchorTransforms", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>>*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchors, trackingSpaceToWorldSpaceTransform, trackingSpacePoses);
}
inline ::GlobalNamespace::OVRLocatable GlobalNamespace::OVRLocatable::_UpdateSceneAnchorTransforms_g__GetLocatableOrDefault_34_0(::GlobalNamespace::OVRAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                        {"<UpdateSceneAnchorTransforms>g__GetLocatableOrDefault|34_0", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRLocatable>(nullptr, ___internal_method, anchor);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
constexpr  GlobalNamespace::OVRLocatable::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*()  {
return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>* GlobalNamespace::OVRLocatable::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRLocatable_()  {
return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
constexpr  GlobalNamespace::OVRLocatable::operator ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>* GlobalNamespace::OVRLocatable::i___System__IEquatable_1___GlobalNamespace__OVRLocatable_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRLocatable::OVRLocatable(uint64_t  _Handle_k__BackingField) noexcept  {
this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable::OVRLocatable()   {
}
