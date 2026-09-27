#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_Permission_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceVisemesState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFaceExpressions)
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpression;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpressionsEnumerator;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceRegionConfidence;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceTrackingDataSource;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceViseme;
}
namespace GlobalNamespace {
class OVRFaceExpressions_WeightProvider;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceTrackingDataSource;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRFaceExpressions;
}
namespace GlobalNamespace {
class OVRFaceExpressions_WeightProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRFaceExpressions*);
MARK_REF_T(::GlobalNamespace::OVRFaceExpressions_WeightProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRFaceExpressions*, "", "OVRFaceExpressions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRFaceExpressions_WeightProvider*, "", "OVRFaceExpressions/WeightProvider");
// [DefaultMember("Item")]
// [HelpURL("https://developer.oculus.com/documentation/unity/move-face-tracking/")]
// [Feature((Meta.XR.Util.Feature)3)]
// Dependencies OVRPermissionsRequester::Permission, OVRPlugin::FaceState, OVRPlugin::FaceVisemesState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRFaceExpressions
class CORDL_TYPE OVRFaceExpressions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FaceExpression = ::GlobalNamespace::OVRFaceExpressions_FaceExpression;

using FaceExpressionsEnumerator = ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator;

using FaceRegionConfidence = ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence;

using FaceTrackingDataSource = ::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource;

using FaceViseme = ::GlobalNamespace::OVRFaceExpressions_FaceViseme;

using WeightProvider = ::GlobalNamespace::OVRFaceExpressions_WeightProvider;

 __declspec(property(get=get_AreVisemesValid, put=set_AreVisemesValid)) bool  AreVisemesValid;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_EyeFollowingBlendshapesValid, put=set_EyeFollowingBlendshapesValid)) bool  EyeFollowingBlendshapesValid;

 __declspec(property(get=get_FaceTrackingEnabled)) bool  FaceTrackingEnabled;

 __declspec(property(get=get_Item)) float_t  Item[];

 __declspec(property(get=get_ValidExpressions, put=set_ValidExpressions)) bool  ValidExpressions;

/// @brief Field <AreVisemesValid>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__AreVisemesValid_k__BackingField, put=__cordl_internal_set__AreVisemesValid_k__BackingField)) bool  _AreVisemesValid_k__BackingField;

/// @brief Field <EyeFollowingBlendshapesValid>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__EyeFollowingBlendshapesValid_k__BackingField, put=__cordl_internal_set__EyeFollowingBlendshapesValid_k__BackingField)) bool  _EyeFollowingBlendshapesValid_k__BackingField;

/// @brief Field <ValidExpressions>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__ValidExpressions_k__BackingField, put=__cordl_internal_set__ValidExpressions_k__BackingField)) bool  _ValidExpressions_k__BackingField;

/// @brief Field _currentFaceState, offset 0x28, size 0x20 
 __declspec(property(get=__cordl_internal_get__currentFaceState, put=__cordl_internal_set__currentFaceState)) ::GlobalNamespace::OVRPlugin_FaceState  _currentFaceState;

/// @brief Field _currentFaceVisemesState, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get__currentFaceVisemesState, put=__cordl_internal_set__currentFaceVisemesState)) ::GlobalNamespace::OVRPlugin_FaceVisemesState  _currentFaceVisemesState;

/// @brief Field _onPermissionGranted, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPermissionGranted, put=__cordl_internal_set__onPermissionGranted)) ::System::Action_1<::StringW>*  _onPermissionGranted;

/// @brief Field _trackingInstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__trackingInstanceCount, put=setStaticF__trackingInstanceCount)) int32_t  _trackingInstanceCount;

/// @brief Convert operator to "::GlobalNamespace::OVRFaceExpressions_WeightProvider"
constexpr operator  ::GlobalNamespace::OVRFaceExpressions_WeightProvider*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Awake, addr 0xa584fa0, size 0x84, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckValidity, addr 0xa5855b8, size 0x58, virtual false, abstract: false, final false
inline void CheckValidity() ;

/// @brief Method CheckVisemesValidity, addr 0xa585760, size 0x58, virtual false, abstract: false, final false
inline void CheckVisemesValidity() ;

/// @brief Method CopyTo, addr 0xa585ab4, size 0x248, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<float_t>  array, int32_t  startIndex) ;

/// @brief Method CopyVisemesTo, addr 0xa585808, size 0x248, virtual false, abstract: false, final false
inline void CopyVisemesTo(::ArrayW<float_t>  array, int32_t  startIndex) ;

/// @brief Method GetEnumerator, addr 0xa585d60, size 0x44, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator GetEnumerator() ;

/// @brief Method GetRequestedFaceTrackingDataSources, addr 0xa585270, size 0xe4, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRPlugin_FaceTrackingDataSource> GetRequestedFaceTrackingDataSources() ;

/// @brief Method GetViseme, addr 0xa585664, size 0xfc, virtual false, abstract: false, final false
inline float_t GetViseme(::GlobalNamespace::OVRFaceExpressions_FaceViseme  viseme) ;

/// @brief Method GetWeight, addr 0xa585610, size 0x4, virtual true, abstract: false, final true
inline float_t GetWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression  expression) ;

static inline ::GlobalNamespace::OVRFaceExpressions* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa5853dc, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa585354, size 0x88, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa585024, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPermissionGranted, addr 0xa5851f0, size 0x80, virtual false, abstract: false, final false
inline void OnPermissionGranted(::StringW  permissionId) ;

/// @brief Method StartFaceTracking, addr 0xa58509c, size 0x154, virtual false, abstract: false, final false
inline bool StartFaceTracking() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator, addr 0xa585dd4, size 0x64, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<float_t>* System_Collections_Generic_IEnumerable_System_Single__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa585e38, size 0x64, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0xa585cfc, size 0x64, virtual false, abstract: false, final false
inline ::ArrayW<float_t> ToArray() ;

/// @brief Method TryGetFaceExpressionWeight, addr 0xa585614, size 0x50, virtual false, abstract: false, final false
inline bool TryGetFaceExpressionWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression  expression, ::by_ref<float_t>  weight) ;

/// @brief Method TryGetFaceTrackingDataSource, addr 0xa585aa0, size 0x14, virtual false, abstract: false, final false
inline bool TryGetFaceTrackingDataSource(::by_ref<::GlobalNamespace::OVRFaceExpressions_FaceTrackingDataSource>  dataSource) ;

/// @brief Method TryGetFaceViseme, addr 0xa5857b8, size 0x50, virtual false, abstract: false, final false
inline bool TryGetFaceViseme(::GlobalNamespace::OVRFaceExpressions_FaceViseme  viseme, ::by_ref<float_t>  weight) ;

/// @brief Method TryGetWeightConfidence, addr 0xa585a50, size 0x50, virtual false, abstract: false, final false
inline bool TryGetWeightConfidence(::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence  region, ::by_ref<float_t>  weightConfidence) ;

/// @brief Method Update, addr 0xa5853e8, size 0xd4, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__AreVisemesValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__AreVisemesValid_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EyeFollowingBlendshapesValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__EyeFollowingBlendshapesValid_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ValidExpressions_k__BackingField() const;

constexpr bool& __cordl_internal_get__ValidExpressions_k__BackingField() ;

constexpr ::GlobalNamespace::OVRPlugin_FaceState const& __cordl_internal_get__currentFaceState() const;

constexpr ::GlobalNamespace::OVRPlugin_FaceState& __cordl_internal_get__currentFaceState() ;

constexpr ::GlobalNamespace::OVRPlugin_FaceVisemesState const& __cordl_internal_get__currentFaceVisemesState() const;

constexpr ::GlobalNamespace::OVRPlugin_FaceVisemesState& __cordl_internal_get__currentFaceVisemesState() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__onPermissionGranted() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__onPermissionGranted() ;

constexpr void __cordl_internal_set__AreVisemesValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__EyeFollowingBlendshapesValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ValidExpressions_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__currentFaceState(::GlobalNamespace::OVRPlugin_FaceState  value) ;

constexpr void __cordl_internal_set__currentFaceVisemesState(::GlobalNamespace::OVRPlugin_FaceVisemesState  value) ;

constexpr void __cordl_internal_set__onPermissionGranted(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa585eb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__trackingInstanceCount() ;

/// [CompilerGenerated]
/// @brief Method get_AreVisemesValid, addr 0xa584f90, size 0x8, virtual false, abstract: false, final false
inline bool get_AreVisemesValid() ;

/// @brief Method get_Count, addr 0xa585e9c, size 0x18, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_EyeFollowingBlendshapesValid, addr 0xa584f80, size 0x8, virtual false, abstract: false, final false
inline bool get_EyeFollowingBlendshapesValid() ;

/// @brief Method get_FaceTrackingEnabled, addr 0xa584f20, size 0x50, virtual false, abstract: false, final false
inline bool get_FaceTrackingEnabled() ;

/// @brief Method get_Item, addr 0xa5854bc, size 0xfc, virtual false, abstract: false, final false
inline float_t get_Item(::GlobalNamespace::OVRFaceExpressions_FaceExpression  expression) ;

/// [CompilerGenerated]
/// @brief Method get_ValidExpressions, addr 0xa584f70, size 0x8, virtual false, abstract: false, final false
inline bool get_ValidExpressions() ;

/// @brief Convert to "::GlobalNamespace::OVRFaceExpressions_WeightProvider"
constexpr ::GlobalNamespace::OVRFaceExpressions_WeightProvider* i___GlobalNamespace__OVRFaceExpressions_WeightProvider() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<float_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<float_t>* i___System__Collections__Generic__IEnumerable_1_float_t_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<float_t>* i___System__Collections__Generic__IReadOnlyCollection_1_float_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF__trackingInstanceCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_AreVisemesValid, addr 0xa584f98, size 0x8, virtual false, abstract: false, final false
inline void set_AreVisemesValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_EyeFollowingBlendshapesValid, addr 0xa584f88, size 0x8, virtual false, abstract: false, final false
inline void set_EyeFollowingBlendshapesValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ValidExpressions, addr 0xa584f78, size 0x8, virtual false, abstract: false, final false
inline void set_ValidExpressions(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRFaceExpressions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRFaceExpressions(OVRFaceExpressions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRFaceExpressions(OVRFaceExpressions const& ) = delete;

/// @brief Field FaceTrackingPermission value: I32(0)
static ::GlobalNamespace::OVRPermissionsRequester_Permission const FaceTrackingPermission;

/// @brief Field RecordAudioPermission value: I32(4)
static ::GlobalNamespace::OVRPermissionsRequester_Permission const RecordAudioPermission;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11892};

/// [CompilerGenerated]
/// @brief Field <ValidExpressions>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____ValidExpressions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EyeFollowingBlendshapesValid>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____EyeFollowingBlendshapesValid_k__BackingField;

/// @brief Field _currentFaceState, offset: 0x28, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_FaceState  ____currentFaceState;

/// [CompilerGenerated]
/// @brief Field <AreVisemesValid>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____AreVisemesValid_k__BackingField;

/// @brief Field _currentFaceVisemesState, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::OVRPlugin_FaceVisemesState  ____currentFaceVisemesState;

/// @brief Field _onPermissionGranted, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ____onPermissionGranted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____ValidExpressions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____EyeFollowingBlendshapesValid_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____currentFaceState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____AreVisemesValid_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____currentFaceVisemesState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____onPermissionGranted) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRFaceExpressions) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRFaceExpressions/WeightProvider
class CORDL_TYPE OVRFaceExpressions_WeightProvider {
public:
// Declarations
/// @brief Method GetWeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression  expression) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions_WeightProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRFaceExpressions_WeightProvider(OVRFaceExpressions_WeightProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11886};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
