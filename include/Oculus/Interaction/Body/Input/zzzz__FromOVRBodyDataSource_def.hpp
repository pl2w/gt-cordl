#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/FromOVRBodyDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
CORDL_MODULE_EXPORT(FromOVRBodyDataSource)
namespace GlobalNamespace {
struct OVRPlugin_BodyJointSet;
}
namespace GlobalNamespace {
class OVRSkeleton_IOVRSkeletonDataProvider;
}
namespace Oculus::Interaction::Body::Input {
class BodyDataAsset;
}
namespace Oculus::Interaction::Body::Input {
class OVRSkeletonMapping;
}
namespace Oculus::Interaction::Input {
class IOVRCameraRigRef;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
class FromOVRBodyDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource*, "Oculus.Interaction.Body.Input", "FromOVRBodyDataSource");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies Oculus.Interaction.Input.DataSource`1<TData>
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.FromOVRBodyDataSource
class CORDL_TYPE FromOVRBodyDataSource : public ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Body::Input::BodyDataAsset*> {
public:
// Declarations
/// @brief Field CameraRigRef, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraRigRef, put=__cordl_internal_set_CameraRigRef)) ::Oculus::Interaction::Input::IOVRCameraRigRef*  CameraRigRef;

 __declspec(property(get=get_DataAsset)) ::Oculus::Interaction::Body::Input::BodyDataAsset*  DataAsset;

/// @brief Field DataProvider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataProvider, put=__cordl_internal_set_DataProvider)) ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  DataProvider;

/// @brief Field _bodyDataAsset, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyDataAsset, put=__cordl_internal_set__bodyDataAsset)) ::Oculus::Interaction::Body::Input::BodyDataAsset*  _bodyDataAsset;

/// @brief Field _cameraRigRef, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRigRef, put=__cordl_internal_set__cameraRigRef)) ::UnityW<::UnityEngine::Object>  _cameraRigRef;

/// @brief Field _dataProvider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataProvider, put=__cordl_internal_set__dataProvider)) ::UnityW<::UnityEngine::Object>  _dataProvider;

/// @brief Field _mapping, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapping, put=__cordl_internal_set__mapping)) ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*  _mapping;

/// @brief Field _processLateUpdates, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__processLateUpdates, put=__cordl_internal_set__processLateUpdates)) bool  _processLateUpdates;

/// @brief Method Awake, addr 0xa422708, size 0xb4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetJointSet, addr 0xa422654, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BodyJointSet GetJointSet(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  provider) ;

/// @brief Method HandleInputDataDirtied, addr 0xa422aa0, size 0x20, virtual false, abstract: false, final false
inline void HandleInputDataDirtied(bool  isLateUpdate) ;

static inline ::Oculus::Interaction::Body::Input::FromOVRBodyDataSource* New_ctor() ;

/// @brief Method OnDisable, addr 0xa42298c, size 0x114, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42286c, size 0x120, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4227bc, size 0xb0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateData, addr 0xa422ac0, size 0x4d0, virtual true, abstract: false, final false
inline void UpdateData() ;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& __cordl_internal_get_CameraRigRef() const;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& __cordl_internal_get_CameraRigRef() ;

constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* const& __cordl_internal_get_DataProvider() const;

constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*& __cordl_internal_get_DataProvider() ;

constexpr ::Oculus::Interaction::Body::Input::BodyDataAsset* const& __cordl_internal_get__bodyDataAsset() const;

constexpr ::Oculus::Interaction::Body::Input::BodyDataAsset*& __cordl_internal_get__bodyDataAsset() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__cameraRigRef() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__cameraRigRef() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__dataProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__dataProvider() ;

constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping* const& __cordl_internal_get__mapping() const;

constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*& __cordl_internal_get__mapping() ;

constexpr bool const& __cordl_internal_get__processLateUpdates() const;

constexpr bool& __cordl_internal_get__processLateUpdates() ;

constexpr void __cordl_internal_set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value) ;

constexpr void __cordl_internal_set_DataProvider(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  value) ;

constexpr void __cordl_internal_set__bodyDataAsset(::Oculus::Interaction::Body::Input::BodyDataAsset*  value) ;

constexpr void __cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__dataProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__mapping(::Oculus::Interaction::Body::Input::OVRSkeletonMapping*  value) ;

constexpr void __cordl_internal_set__processLateUpdates(bool  value) ;

/// @brief Method .ctor, addr 0xa422f90, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataAsset, addr 0xa42264c, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Body::Input::BodyDataAsset* get_DataAsset() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FromOVRBodyDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FromOVRBodyDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FromOVRBodyDataSource(FromOVRBodyDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromOVRBodyDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromOVRBodyDataSource(FromOVRBodyDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31159};

/// [Header("OVR Data Source")]
/// [SerializeField]
/// [Interface(typeof(OVRSkeleton::IOVRSkeletonDataProvider), new[] {  })]
/// @brief Field _dataProvider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____dataProvider;

/// @brief Field DataProvider, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  ___DataProvider;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IOVRCameraRigRef), new[] {  })]
/// @brief Field _cameraRigRef, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____cameraRigRef;

/// @brief Field CameraRigRef, offset: 0x60, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOVRCameraRigRef*  ___CameraRigRef;

/// [SerializeField]
/// @brief Field _processLateUpdates, offset: 0x68, size: 0x1, def value: None
 bool  ____processLateUpdates;

/// @brief Field _bodyDataAsset, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::BodyDataAsset*  ____bodyDataAsset;

/// @brief Field _mapping, offset: 0x78, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*  ____mapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource, ____dataProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource, ___DataProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource, ____cameraRigRef) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource, ___CameraRigRef) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource, ____processLateUpdates) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource, ____bodyDataAsset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource, ____mapping) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::Input::FromOVRBodyDataSource) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Input
