#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryMarker_OVRTelemetryMarkerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_ResultType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRTelemetryMarker_OVRTelemetryMarkerState)
namespace GlobalNamespace {
struct Qpl_OVRPlugin_ResultType;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTelemetryMarker_OVRTelemetryMarkerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState, "", "OVRTelemetryMarker/OVRTelemetryMarkerState");
// Dependencies OVRPlugin::Qpl::ResultType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetryMarker/OVRTelemetryMarkerState
struct CORDL_TYPE OVRTelemetryMarker_OVRTelemetryMarkerState {
public:
// Declarations
 __declspec(property(get=get_Result, put=set_Result)) ::GlobalNamespace::Qpl_OVRPlugin_ResultType  Result;

 __declspec(property(get=get_Sent, put=set_Sent)) bool  Sent;

/// @brief Method .ctor, addr 0xa64bfc8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  sent, ::GlobalNamespace::Qpl_OVRPlugin_ResultType  result) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Result, addr 0xa64cb44, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Qpl_OVRPlugin_ResultType get_Result() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Sent, addr 0xa64cb34, size 0x8, virtual false, abstract: false, final false
inline bool get_Sent() ;

/// [CompilerGenerated]
/// @brief Method set_Result, addr 0xa64cb4c, size 0x8, virtual false, abstract: false, final false
inline void set_Result(::GlobalNamespace::Qpl_OVRPlugin_ResultType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Sent, addr 0xa64cb3c, size 0x8, virtual false, abstract: false, final false
inline void set_Sent(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTelemetryMarker_OVRTelemetryMarkerState() ;

// Ctor Parameters [CppParam { name: "_Sent_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Result_k__BackingField", ty: "::GlobalNamespace::Qpl_OVRPlugin_ResultType", modifiers: "", def_value: None, comment: None }]
constexpr OVRTelemetryMarker_OVRTelemetryMarkerState(bool  _Sent_k__BackingField, ::GlobalNamespace::Qpl_OVRPlugin_ResultType  _Result_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12518};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [CompilerGenerated]
/// @brief Field <Sent>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _Sent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x2, size: 0x2, def value: None
 ::GlobalNamespace::Qpl_OVRPlugin_ResultType  _Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState, _Sent_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState, _Result_k__BackingField) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
