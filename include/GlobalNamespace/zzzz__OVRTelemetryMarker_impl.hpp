#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryMarker.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_OVRTelemetryMarkerState_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Annotation_Builder_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Annotation_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_ResultType_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_OVRTelemetryMarkerState_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_MarkerPoint_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState (::GlobalNamespace::OVRTelemetryMarker::*)()>(&::GlobalNamespace::OVRTelemetryMarker::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64bf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetryMarker::*)(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState)>(&::GlobalNamespace::OVRTelemetryMarker::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64bf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.get_Sent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetryMarker::*)()>(&::GlobalNamespace::OVRTelemetryMarker::get_Sent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa64bf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_Sent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Qpl_OVRPlugin_ResultType (::GlobalNamespace::OVRTelemetryMarker::*)()>(&::GlobalNamespace::OVRTelemetryMarker::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64bf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.get_MarkerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRTelemetryMarker::*)()>(&::GlobalNamespace::OVRTelemetryMarker::get_MarkerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64bf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_MarkerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.get_InstanceKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRTelemetryMarker::*)()>(&::GlobalNamespace::OVRTelemetryMarker::get_InstanceKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64bf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_InstanceKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetryMarker::*)(int32_t, int32_t, int64_t, ::StringW)>(&::GlobalNamespace::OVRTelemetryMarker::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa64b3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetryMarker::*)(::GlobalNamespace::OVRTelemetry_TelemetryClient*, int32_t, int32_t, int64_t, ::StringW)>(&::GlobalNamespace::OVRTelemetryMarker::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa64bf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.SetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::GlobalNamespace::Qpl_OVRPlugin_ResultType)>(&::GlobalNamespace::OVRTelemetryMarker::SetResult)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa64b520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"SetResult", {}, {::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_ResultType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, ::StringW)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa64b67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, bool)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa64bfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, double_t)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa64c068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, int64_t)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa64c104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, uint8_t*, int32_t)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa64c198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, ::System::ReadOnlySpan_1<int64_t>)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa64c23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, int64_t*, int32_t)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa64c2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, ::System::ReadOnlySpan_1<double_t>)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa64c37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, double_t*, int32_t)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa64c418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, ::System::ReadOnlySpan_1<::GlobalNamespace::OVRPlugin_Bool>)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa64c4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<::GlobalNamespace::OVRPlugin_Bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, ::GlobalNamespace::OVRPlugin_Bool*, int32_t)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotation)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa64c558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Bool*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddAnnotationIfNotNullOrEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, ::StringW)>(&::GlobalNamespace::OVRTelemetryMarker::AddAnnotationIfNotNullOrEmpty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa64c5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotationIfNotNullOrEmpty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.get_ApplicationIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRTelemetryMarker::get_ApplicationIdentifier)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa64c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_ApplicationIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.get_UnityVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRTelemetryMarker::get_UnityVersion)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa64c70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_UnityVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.get_IsBatchMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRTelemetryMarker::get_IsBatchMode)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa64c7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_IsBatchMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.GetOVRTelemetryConsent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetryMarker::*)()>(&::GlobalNamespace::OVRTelemetryMarker::GetOVRTelemetryConsent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64c880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"GetOVRTelemetryConsent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)()>(&::GlobalNamespace::OVRTelemetryMarker::Send)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa64b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"Send", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.SendIf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(bool)>(&::GlobalNamespace::OVRTelemetryMarker::SendIf)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa64c888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"SendIf", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::GlobalNamespace::OVRTelemetry_MarkerPoint)>(&::GlobalNamespace::OVRTelemetryMarker::AddPoint)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa64c8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddPoint", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW)>(&::GlobalNamespace::OVRTelemetryMarker::AddPoint)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa64c928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddPoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder)>(&::GlobalNamespace::OVRTelemetryMarker::AddPoint)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa64c978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.AddPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (::GlobalNamespace::OVRTelemetryMarker::*)(::StringW, ::GlobalNamespace::Qpl_OVRPlugin_Annotation*, int32_t)>(&::GlobalNamespace::OVRTelemetryMarker::AddPoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa64cab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_Annotation*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetryMarker::*)()>(&::GlobalNamespace::OVRTelemetryMarker::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa64cb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetryMarker::setStaticF__applicationIdentifier(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_applicationIdentifier", ::GlobalNamespace::OVRTelemetryMarker>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRTelemetryMarker::getStaticF__applicationIdentifier()  {
return ::cordl_internals::getStaticField<::StringW, "_applicationIdentifier", ::GlobalNamespace::OVRTelemetryMarker>();
}
inline void GlobalNamespace::OVRTelemetryMarker::setStaticF__unityVersion(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_unityVersion", ::GlobalNamespace::OVRTelemetryMarker>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRTelemetryMarker::getStaticF__unityVersion()  {
return ::cordl_internals::getStaticField<::StringW, "_unityVersion", ::GlobalNamespace::OVRTelemetryMarker>();
}
inline void GlobalNamespace::OVRTelemetryMarker::setStaticF__isBatchMode(::System::Nullable_1<bool>  value)  {
::cordl_internals::setStaticField<::System::Nullable_1<bool>, "_isBatchMode", ::GlobalNamespace::OVRTelemetryMarker>(std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> GlobalNamespace::OVRTelemetryMarker::getStaticF__isBatchMode()  {
return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "_isBatchMode", ::GlobalNamespace::OVRTelemetryMarker>();
}
inline ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState GlobalNamespace::OVRTelemetryMarker::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTelemetryMarker::set_State(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTelemetryMarker::get_Sent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_Sent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::Qpl_OVRPlugin_ResultType GlobalNamespace::OVRTelemetryMarker::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Qpl_OVRPlugin_ResultType>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRTelemetryMarker::get_MarkerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_MarkerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRTelemetryMarker::get_InstanceKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_InstanceKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTelemetryMarker::_ctor(int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs, ::StringW  joindId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, markerId, instanceKey, timestampMs, joindId);
}
inline void GlobalNamespace::OVRTelemetryMarker::_ctor(::GlobalNamespace::OVRTelemetry_TelemetryClient*  client, int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs, ::StringW  joinId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, client, markerId, instanceKey, timestampMs, joinId);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::SetResult(::GlobalNamespace::Qpl_OVRPlugin_ResultType  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"SetResult", {}, {::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_ResultType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, result);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, ::StringW  annotationValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValue);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, bool  annotationValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValue);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, double_t  annotationValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValue);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, int64_t  annotationValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValue);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, uint8_t*  annotationValues, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValues, count);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, ::System::ReadOnlySpan_1<int64_t>  annotationValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValues);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, int64_t*  annotationValues, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValues, count);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, ::System::ReadOnlySpan_1<T>  annotationValues)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                    {"AddAnnotation", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValues);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, ::System::ReadOnlySpan_1<double_t>  annotationValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValues);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, double_t*  annotationValues, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValues, count);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, ::System::ReadOnlySpan_1<::GlobalNamespace::OVRPlugin_Bool>  annotationValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ReadOnlySpan_1<::GlobalNamespace::OVRPlugin_Bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValues);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotation(::StringW  annotationKey, ::GlobalNamespace::OVRPlugin_Bool*  annotationValues, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Bool*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValues, count);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddAnnotationIfNotNullOrEmpty(::StringW  annotationKey, ::StringW  annotationValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddAnnotationIfNotNullOrEmpty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, annotationKey, annotationValue);
}
inline ::StringW GlobalNamespace::OVRTelemetryMarker::get_ApplicationIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_ApplicationIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRTelemetryMarker::get_UnityVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_UnityVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRTelemetryMarker::get_IsBatchMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"get_IsBatchMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRTelemetryMarker::GetOVRTelemetryConsent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"GetOVRTelemetryConsent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::Send()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"Send", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::SendIf(bool  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"SendIf", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, condition);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddPoint(::GlobalNamespace::OVRTelemetry_MarkerPoint  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddPoint", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, point);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddPoint(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddPoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, name);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddPoint(::StringW  name, ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder  annotationBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, name, annotationBuilder);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetryMarker::AddPoint(::StringW  name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation*  annotations, int32_t  annotationCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"AddPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_Annotation*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(*this, ___internal_method, name, annotations, annotationCount);
}
inline void GlobalNamespace::OVRTelemetryMarker::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRTelemetryMarker::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTelemetryMarker::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_State_k__BackingField", ty: "::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MarkerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_InstanceKey_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_client", ty: "::GlobalNamespace::OVRTelemetry_TelemetryClient*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTelemetryMarker::OVRTelemetryMarker(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState  _State_k__BackingField, int32_t  _MarkerId_k__BackingField, int32_t  _InstanceKey_k__BackingField, ::GlobalNamespace::OVRTelemetry_TelemetryClient*  _client) noexcept  {
this->_State_k__BackingField = _State_k__BackingField;
this->_MarkerId_k__BackingField = _MarkerId_k__BackingField;
this->_InstanceKey_k__BackingField = _InstanceKey_k__BackingField;
this->_client = _client;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetryMarker::OVRTelemetryMarker()   {
}
