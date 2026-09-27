#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_TrackerConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_TrackerConfiguration)
namespace GlobalNamespace {
struct OVRAnchor_TrackableType;
}
namespace GlobalNamespace {
template<typename T>
struct OVRNativeList_1;
}
namespace GlobalNamespace {
struct OVRPlugin_DynamicObjectClass;
}
namespace GlobalNamespace {
struct OVRPlugin_MarkerType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_TrackerConfiguration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_TrackerConfiguration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_TrackerConfiguration, "", "OVRAnchor/TrackerConfiguration");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/TrackerConfiguration
struct CORDL_TYPE OVRAnchor_TrackerConfiguration {
public:
// Declarations
 __declspec(property(get=get_KeyboardTrackingEnabled, put=set_KeyboardTrackingEnabled)) bool  KeyboardTrackingEnabled;

 __declspec(property(get=get_QRCodeTrackingEnabled, put=set_QRCodeTrackingEnabled)) bool  QRCodeTrackingEnabled;

 __declspec(property(get=get_RequiresDynamicObjectTracker)) bool  RequiresDynamicObjectTracker;

 __declspec(property(get=get_RequiresMarkerTracker)) bool  RequiresMarkerTracker;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*() ;

/// @brief Method Equals, addr 0xa56e010, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa56dfd0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRAnchor_TrackerConfiguration  other) ;

/// @brief Method GetHashCode, addr 0xa56e0b0, size 0x84, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTrackableTypes, addr 0xa56db94, size 0x15c, virtual false, abstract: false, final false
inline void GetTrackableTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes) ;

/// @brief Method ResetDynamicObjects, addr 0xa56da34, size 0x8, virtual false, abstract: false, final false
inline void ResetDynamicObjects() ;

/// @brief Method ResetMarkers, addr 0xa56db80, size 0x8, virtual false, abstract: false, final false
inline void ResetMarkers() ;

/// @brief Method SetDynamicObjectState, addr 0xa56da3c, size 0xc, virtual false, abstract: false, final false
inline void SetDynamicObjectState(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>  other) ;

/// @brief Method SetMarkerState, addr 0xa56db88, size 0xc, virtual false, abstract: false, final false
inline void SetMarkerState(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>  other) ;

/// @brief Method ToDynamicObjectClasses, addr 0xa56d984, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass> ToDynamicObjectClasses(::Unity::Collections::Allocator  allocator) ;

/// @brief Method ToMarkerTypes, addr 0xa56dacc, size 0xac, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_MarkerType> ToMarkerTypes(::Unity::Collections::Allocator  allocator) ;

/// @brief Method ToString, addr 0xa56dcf0, size 0x2e0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_KeyboardTrackingEnabled, addr 0xa56d8c8, size 0x8, virtual false, abstract: false, final false
inline bool get_KeyboardTrackingEnabled() ;

/// @brief Method get_KeyboardTrackingSupported, addr 0xa56d8d8, size 0xa4, virtual false, abstract: false, final false
static inline bool get_KeyboardTrackingSupported() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_QRCodeTrackingEnabled, addr 0xa56da48, size 0x8, virtual false, abstract: false, final false
inline bool get_QRCodeTrackingEnabled() ;

/// @brief Method get_QRCodeTrackingSupported, addr 0xa56da58, size 0x74, virtual false, abstract: false, final false
static inline bool get_QRCodeTrackingSupported() ;

/// @brief Method get_RequiresDynamicObjectTracker, addr 0xa56d97c, size 0x8, virtual false, abstract: false, final false
inline bool get_RequiresDynamicObjectTracker() ;

/// @brief Method get_RequiresMarkerTracker, addr 0xa56db78, size 0x8, virtual false, abstract: false, final false
inline bool get_RequiresMarkerTracker() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>* i___System__IEquatable_1___GlobalNamespace__OVRAnchor_TrackerConfiguration_() ;

/// @brief Method op_Equality, addr 0xa56e134, size 0x34, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRAnchor_TrackerConfiguration  lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  rhs) ;

/// @brief Method op_Inequality, addr 0xa56e168, size 0x38, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRAnchor_TrackerConfiguration  lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  rhs) ;

/// [CompilerGenerated]
/// @brief Method set_KeyboardTrackingEnabled, addr 0xa56d8d0, size 0x8, virtual false, abstract: false, final false
inline void set_KeyboardTrackingEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_QRCodeTrackingEnabled, addr 0xa56da50, size 0x8, virtual false, abstract: false, final false
inline void set_QRCodeTrackingEnabled(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_TrackerConfiguration() ;

// Ctor Parameters [CppParam { name: "_KeyboardTrackingEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_QRCodeTrackingEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_TrackerConfiguration(bool  _KeyboardTrackingEnabled_k__BackingField, bool  _QRCodeTrackingEnabled_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("When enabled, attempts to track physical keyboards in the environment.")]
/// @brief Field <KeyboardTrackingEnabled>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _KeyboardTrackingEnabled_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("When enabled, attempts to track QR Codes in the environment.")]
/// @brief Field <QRCodeTrackingEnabled>k__BackingField, offset: 0x1, size: 0x1, def value: None
 bool  _QRCodeTrackingEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_TrackerConfiguration, _KeyboardTrackingEnabled_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_TrackerConfiguration, _QRCodeTrackingEnabled_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_TrackerConfiguration) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
