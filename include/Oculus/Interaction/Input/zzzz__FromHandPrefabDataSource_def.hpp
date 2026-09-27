#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FromHandPrefabDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
CORDL_MODULE_EXPORT(FromHandPrefabDataSource)
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHandSkeletonProvider;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class FromHandPrefabDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::FromHandPrefabDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::FromHandPrefabDataSource*, "Oculus.Interaction.Input", "FromHandPrefabDataSource");
// Dependencies Oculus.Interaction.Input.DataSource`1<TData>, Oculus.Interaction.Input.Handedness
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.FromHandPrefabDataSource
class CORDL_TYPE FromHandPrefabDataSource : public ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::HandDataAsset*> {
public:
// Declarations
 __declspec(property(get=get_DataAsset)) ::Oculus::Interaction::Input::HandDataAsset*  DataAsset;

/// @brief Field HandSkeletonProvider, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandSkeletonProvider, put=__cordl_internal_set_HandSkeletonProvider)) ::Oculus::Interaction::Input::IHandSkeletonProvider*  HandSkeletonProvider;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_JointTransforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  JointTransforms;

/// @brief Field TrackingToWorldTransformer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackingToWorldTransformer, put=__cordl_internal_set_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field _handDataAsset, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__handDataAsset, put=__cordl_internal_set__handDataAsset)) ::Oculus::Interaction::Input::HandDataAsset*  _handDataAsset;

/// @brief Field _handSkeletonProvider, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__handSkeletonProvider, put=__cordl_internal_set__handSkeletonProvider)) ::UnityW<::UnityEngine::Object>  _handSkeletonProvider;

/// @brief Field _handedness, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__handedness, put=__cordl_internal_set__handedness)) ::Oculus::Interaction::Input::Handedness  _handedness;

/// @brief Field _hidePrefabOnStart, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__hidePrefabOnStart, put=__cordl_internal_set__hidePrefabOnStart)) bool  _hidePrefabOnStart;

/// @brief Field _jointTransforms, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointTransforms, put=__cordl_internal_set__jointTransforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  _jointTransforms;

/// @brief Field _jointTransformsOpenXR, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointTransformsOpenXR, put=__cordl_internal_set__jointTransformsOpenXR)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  _jointTransformsOpenXR;

/// @brief Field _trackingToWorldTransformer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackingToWorldTransformer, put=__cordl_internal_set__trackingToWorldTransformer)) ::UnityW<::UnityEngine::Object>  _trackingToWorldTransformer;

/// @brief Method Awake, addr 0xa50cd48, size 0x114, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetTransformFor, addr 0xa50d378, size 0x58, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetTransformFor(::Oculus::Interaction::Input::HandJointId  jointId) ;

static inline ::Oculus::Interaction::Input::FromHandPrefabDataSource* New_ctor() ;

/// @brief Method Start, addr 0xa50ce5c, size 0x184, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateData, addr 0xa50cfe0, size 0x398, virtual true, abstract: false, final false
inline void UpdateData() ;

constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider* const& __cordl_internal_get_HandSkeletonProvider() const;

constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider*& __cordl_internal_get_HandSkeletonProvider() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get_TrackingToWorldTransformer() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get_TrackingToWorldTransformer() ;

constexpr ::Oculus::Interaction::Input::HandDataAsset* const& __cordl_internal_get__handDataAsset() const;

constexpr ::Oculus::Interaction::Input::HandDataAsset*& __cordl_internal_get__handDataAsset() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handSkeletonProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handSkeletonProvider() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get__handedness() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get__handedness() ;

constexpr bool const& __cordl_internal_get__hidePrefabOnStart() const;

constexpr bool& __cordl_internal_get__hidePrefabOnStart() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__jointTransforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__jointTransforms() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__jointTransformsOpenXR() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__jointTransformsOpenXR() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__trackingToWorldTransformer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__trackingToWorldTransformer() ;

constexpr void __cordl_internal_set_HandSkeletonProvider(::Oculus::Interaction::Input::IHandSkeletonProvider*  value) ;

constexpr void __cordl_internal_set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

constexpr void __cordl_internal_set__handDataAsset(::Oculus::Interaction::Input::HandDataAsset*  value) ;

constexpr void __cordl_internal_set__handSkeletonProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set__hidePrefabOnStart(bool  value) ;

constexpr void __cordl_internal_set__jointTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__jointTransformsOpenXR(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa50d3d0, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DataAsset, addr 0xa50cd30, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Input::HandDataAsset* get_DataAsset() ;

/// @brief Method get_Handedness, addr 0xa50cd38, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_JointTransforms, addr 0xa50cd40, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* get_JointTransforms() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FromHandPrefabDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FromHandPrefabDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FromHandPrefabDataSource(FromHandPrefabDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromHandPrefabDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromHandPrefabDataSource(FromHandPrefabDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16485};

/// @brief Field _handDataAsset, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandDataAsset*  ____handDataAsset;

/// [SerializeField]
/// @brief Field _handedness, offset: 0x50, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ____handedness;

/// [SerializeField]
/// @brief Field _hidePrefabOnStart, offset: 0x54, size: 0x1, def value: None
 bool  ____hidePrefabOnStart;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _jointTransforms, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ____jointTransforms;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _jointTransformsOpenXR, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ____jointTransformsOpenXR;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHandSkeletonProvider), new[] {  })]
/// @brief Field _handSkeletonProvider, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handSkeletonProvider;

/// @brief Field HandSkeletonProvider, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHandSkeletonProvider*  ___HandSkeletonProvider;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.ITrackingToWorldTransformer), new[] {  })]
/// [Optional]
/// @brief Field _trackingToWorldTransformer, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____trackingToWorldTransformer;

/// @brief Field TrackingToWorldTransformer, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ___TrackingToWorldTransformer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ____handDataAsset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ____handedness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ____hidePrefabOnStart) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ____jointTransforms) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ____jointTransformsOpenXR) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ____handSkeletonProvider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ___HandSkeletonProvider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ____trackingToWorldTransformer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromHandPrefabDataSource, ___TrackingToWorldTransformer) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::FromHandPrefabDataSource) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
