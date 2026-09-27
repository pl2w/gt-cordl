#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryMarker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_OVRTelemetryMarkerState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetryMarker)
namespace GlobalNamespace {
struct Annotation_Qpl_OVRPlugin_Builder;
}
namespace GlobalNamespace {
struct OVRPlugin_Bool;
}
namespace GlobalNamespace {
struct OVRTelemetryMarker_OVRTelemetryMarkerState;
}
namespace GlobalNamespace {
struct OVRTelemetry_MarkerPoint;
}
namespace GlobalNamespace {
class OVRTelemetry_TelemetryClient;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Annotation;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_ResultType;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTelemetryMarker);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTelemetryMarker, "", "OVRTelemetryMarker");
// Dependencies OVRTelemetryMarker::OVRTelemetryMarkerState, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetryMarker
struct CORDL_TYPE OVRTelemetryMarker {
public:
// Declarations
using OVRTelemetryMarkerState = ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState;

 __declspec(property(get=get_InstanceKey)) int32_t  InstanceKey;

 __declspec(property(get=get_MarkerId)) int32_t  MarkerId;

 __declspec(property(get=get_Result)) ::GlobalNamespace::Qpl_OVRPlugin_ResultType  Result;

 __declspec(property(get=get_Sent)) bool  Sent;

 __declspec(property(get=get_State, put=set_State)) ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState  State;

/// @brief Field _applicationIdentifier, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__applicationIdentifier, put=setStaticF__applicationIdentifier)) ::StringW  _applicationIdentifier;

/// @brief Field _isBatchMode, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__isBatchMode, put=setStaticF__isBatchMode)) ::System::Nullable_1<bool>  _isBatchMode;

/// @brief Field _unityVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityVersion, put=setStaticF__unityVersion)) ::StringW  _unityVersion;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddAnnotation, addr 0xa64b67c, size 0x88, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, ::StringW  annotationValue) ;

/// @brief Method AddAnnotation, addr 0xa64bfd4, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, bool  annotationValue) ;

/// @brief Method AddAnnotation, addr 0xa64c068, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, double_t  annotationValue) ;

/// @brief Method AddAnnotation, addr 0xa64c104, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, int64_t  annotationValue) ;

/// @brief Method AddAnnotation, addr 0xa64c558, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, ::GlobalNamespace::OVRPlugin_Bool*  annotationValues, int32_t  count) ;

/// @brief Method AddAnnotation, addr 0xa64c4bc, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, ::System::ReadOnlySpan_1<::GlobalNamespace::OVRPlugin_Bool>  annotationValues) ;

/// @brief Method AddAnnotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, ::System::ReadOnlySpan_1<T>  annotationValues) ;

/// @brief Method AddAnnotation, addr 0xa64c37c, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, ::System::ReadOnlySpan_1<double_t>  annotationValues) ;

/// @brief Method AddAnnotation, addr 0xa64c23c, size 0x9c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, ::System::ReadOnlySpan_1<int64_t>  annotationValues) ;

/// @brief Method AddAnnotation, addr 0xa64c418, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, double_t*  annotationValues, int32_t  count) ;

/// @brief Method AddAnnotation, addr 0xa64c2d8, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, int64_t*  annotationValues, int32_t  count) ;

/// @brief Method AddAnnotation, addr 0xa64c198, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW  annotationKey, uint8_t*  annotationValues, int32_t  count) ;

/// @brief Method AddAnnotationIfNotNullOrEmpty, addr 0xa64c5fc, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotationIfNotNullOrEmpty(::StringW  annotationKey, ::StringW  annotationValue) ;

/// @brief Method AddPoint, addr 0xa64c928, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddPoint(::StringW  name) ;

/// @brief Method AddPoint, addr 0xa64c978, size 0x13c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddPoint(::StringW  name, ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder  annotationBuilder) ;

/// @brief Method AddPoint, addr 0xa64cab4, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddPoint(::StringW  name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation*  annotations, int32_t  annotationCount) ;

/// @brief Method AddPoint, addr 0xa64c8d8, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker AddPoint(::GlobalNamespace::OVRTelemetry_MarkerPoint  point) ;

/// @brief Method Dispose, addr 0xa64cb0c, size 0x28, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetOVRTelemetryConsent, addr 0xa64c880, size 0x8, virtual false, abstract: false, final false
inline bool GetOVRTelemetryConsent() ;

/// @brief Method Send, addr 0xa64b0a0, size 0x168, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker Send() ;

/// @brief Method SendIf, addr 0xa64c888, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker SendIf(bool  condition) ;

/// @brief Method SetResult, addr 0xa64b520, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker SetResult(::GlobalNamespace::Qpl_OVRPlugin_ResultType  result) ;

/// @brief Method .ctor, addr 0xa64bf50, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRTelemetry_TelemetryClient*  client, int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs, ::StringW  joinId) ;

/// @brief Method .ctor, addr 0xa64b3d8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs, ::StringW  joindId) ;

static inline ::StringW getStaticF__applicationIdentifier() ;

static inline ::System::Nullable_1<bool> getStaticF__isBatchMode() ;

static inline ::StringW getStaticF__unityVersion() ;

/// @brief Method get_ApplicationIdentifier, addr 0xa64c670, size 0x9c, virtual false, abstract: false, final false
static inline ::StringW get_ApplicationIdentifier() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_InstanceKey, addr 0xa64bf48, size 0x8, virtual false, abstract: false, final false
inline int32_t get_InstanceKey() ;

/// @brief Method get_IsBatchMode, addr 0xa64c7a4, size 0xdc, virtual false, abstract: false, final false
static inline bool get_IsBatchMode() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_MarkerId, addr 0xa64bf40, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MarkerId() ;

/// @brief Method get_Result, addr 0xa64bf38, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Qpl_OVRPlugin_ResultType get_Result() ;

/// @brief Method get_Sent, addr 0xa64bf28, size 0x10, virtual false, abstract: false, final false
inline bool get_Sent() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_State, addr 0xa64bf18, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState get_State() ;

/// @brief Method get_UnityVersion, addr 0xa64c70c, size 0x98, virtual false, abstract: false, final false
static inline ::StringW get_UnityVersion() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF__applicationIdentifier(::StringW  value) ;

static inline void setStaticF__isBatchMode(::System::Nullable_1<bool>  value) ;

static inline void setStaticF__unityVersion(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0xa64bf20, size 0x8, virtual false, abstract: false, final false
inline void set_State(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTelemetryMarker() ;

// Ctor Parameters [CppParam { name: "_State_k__BackingField", ty: "::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MarkerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InstanceKey_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_client", ty: "::GlobalNamespace::OVRTelemetry_TelemetryClient*", modifiers: "", def_value: None, comment: None }]
constexpr OVRTelemetryMarker(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState  _State_k__BackingField, int32_t  _MarkerId_k__BackingField, int32_t  _InstanceKey_k__BackingField, ::GlobalNamespace::OVRTelemetry_TelemetryClient*  _client) noexcept;

/// @brief Field TelemetryEnabledKey offset 0xffffffff size 0x8
static constexpr ::ConstString  TelemetryEnabledKey{u"OVRTelemetry.TelemetryEnabled"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12519};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState  _State_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MarkerId>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _MarkerId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InstanceKey>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _InstanceKey_k__BackingField;

/// @brief Field _client, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::OVRTelemetry_TelemetryClient*  _client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _State_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _MarkerId_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _InstanceKey_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _client) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTelemetryMarker) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
