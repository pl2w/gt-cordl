#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodyDataAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BodyDataAsset)
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace Oculus::Interaction::Input {
template<typename TSelfType>
class ICopyFrom_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
class BodyDataAsset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Input::BodyDataAsset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::BodyDataAsset*, "Oculus.Interaction.Body.Input", "BodyDataAsset");
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.BodyDataAsset
class CORDL_TYPE BodyDataAsset : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence)) bool  IsDataHighConfidence;

 __declspec(property(get=get_IsDataValid, put=set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_JointPoses, put=set_JointPoses)) ::ArrayW<::UnityEngine::Pose>  JointPoses;

 __declspec(property(get=get_Root, put=set_Root)) ::UnityEngine::Pose  Root;

 __declspec(property(get=get_RootScale, put=set_RootScale)) float_t  RootScale;

 __declspec(property(get=get_SkeletonChangedCount, put=set_SkeletonChangedCount)) int32_t  SkeletonChangedCount;

 __declspec(property(get=get_SkeletonMapping, put=set_SkeletonMapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  SkeletonMapping;

/// @brief Field <IsDataHighConfidence>k__BackingField, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDataHighConfidence_k__BackingField, put=__cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool  _IsDataHighConfidence_k__BackingField;

/// @brief Field <IsDataValid>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDataValid_k__BackingField, put=__cordl_internal_set__IsDataValid_k__BackingField)) bool  _IsDataValid_k__BackingField;

/// @brief Field <JointPoses>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__JointPoses_k__BackingField, put=__cordl_internal_set__JointPoses_k__BackingField)) ::ArrayW<::UnityEngine::Pose>  _JointPoses_k__BackingField;

/// @brief Field <RootScale>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__RootScale_k__BackingField, put=__cordl_internal_set__RootScale_k__BackingField)) float_t  _RootScale_k__BackingField;

/// @brief Field <Root>k__BackingField, offset 0x18, size 0x1c 
 __declspec(property(get=__cordl_internal_get__Root_k__BackingField, put=__cordl_internal_set__Root_k__BackingField)) ::UnityEngine::Pose  _Root_k__BackingField;

/// @brief Field <SkeletonChangedCount>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__SkeletonChangedCount_k__BackingField, put=__cordl_internal_set__SkeletonChangedCount_k__BackingField)) int32_t  _SkeletonChangedCount_k__BackingField;

/// @brief Field <SkeletonMapping>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__SkeletonMapping_k__BackingField, put=__cordl_internal_set__SkeletonMapping_k__BackingField)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  _SkeletonMapping_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>"
constexpr operator  ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>*() noexcept;

/// @brief Method CopyFrom, addr 0xa4f8530, size 0xdc, virtual true, abstract: false, final true
inline void CopyFrom(::Oculus::Interaction::Body::Input::BodyDataAsset*  source) ;

static inline ::Oculus::Interaction::Body::Input::BodyDataAsset* New_ctor() ;

constexpr bool const& __cordl_internal_get__IsDataHighConfidence_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDataHighConfidence_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDataValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDataValid_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__JointPoses_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__JointPoses_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RootScale_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RootScale_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__Root_k__BackingField() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__Root_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SkeletonChangedCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SkeletonChangedCount_k__BackingField() ;

constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* const& __cordl_internal_get__SkeletonMapping_k__BackingField() const;

constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping*& __cordl_internal_get__SkeletonMapping_k__BackingField() ;

constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__JointPoses_k__BackingField(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__RootScale_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Root_k__BackingField(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__SkeletonChangedCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SkeletonMapping_k__BackingField(::Oculus::Interaction::Body::Input::ISkeletonMapping*  value) ;

/// @brief Method .ctor, addr 0xa4f860c, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsDataHighConfidence, addr 0xa4f8500, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataHighConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_IsDataValid, addr 0xa4f84f0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataValid() ;

/// [CompilerGenerated]
/// @brief Method get_JointPoses, addr 0xa4f8510, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Pose> get_JointPoses() ;

/// [CompilerGenerated]
/// @brief Method get_Root, addr 0xa4f84b0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_Root() ;

/// [CompilerGenerated]
/// @brief Method get_RootScale, addr 0xa4f84e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_RootScale() ;

/// [CompilerGenerated]
/// @brief Method get_SkeletonChangedCount, addr 0xa4f8520, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SkeletonChangedCount() ;

/// [CompilerGenerated]
/// @brief Method get_SkeletonMapping, addr 0xa4f84a0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping() ;

/// @brief Convert to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>"
constexpr ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>* i___Oculus__Interaction__Input__ICopyFrom_1___Oculus__Interaction__Body__Input__BodyDataAsset__() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsDataHighConfidence, addr 0xa4f8508, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataHighConfidence(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataValid, addr 0xa4f84f8, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_JointPoses, addr 0xa4f8518, size 0x8, virtual false, abstract: false, final false
inline void set_JointPoses(::ArrayW<::UnityEngine::Pose>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Root, addr 0xa4f84c4, size 0x1c, virtual false, abstract: false, final false
inline void set_Root(::UnityEngine::Pose  value) ;

/// [CompilerGenerated]
/// @brief Method set_RootScale, addr 0xa4f84e8, size 0x8, virtual false, abstract: false, final false
inline void set_RootScale(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SkeletonChangedCount, addr 0xa4f8528, size 0x8, virtual false, abstract: false, final false
inline void set_SkeletonChangedCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SkeletonMapping, addr 0xa4f84a8, size 0x8, virtual false, abstract: false, final false
inline void set_SkeletonMapping(::Oculus::Interaction::Body::Input::ISkeletonMapping*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyDataAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyDataAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyDataAsset(BodyDataAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyDataAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyDataAsset(BodyDataAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16400};

/// [CompilerGenerated]
/// @brief Field <SkeletonMapping>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::ISkeletonMapping*  ____SkeletonMapping_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Root>k__BackingField, offset: 0x18, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____Root_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RootScale>k__BackingField, offset: 0x34, size: 0x4, def value: None
 float_t  ____RootScale_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataValid>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____IsDataValid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x39, size: 0x1, def value: None
 bool  ____IsDataHighConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <JointPoses>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____JointPoses_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SkeletonChangedCount>k__BackingField, offset: 0x48, size: 0x4, def value: None
 int32_t  ____SkeletonChangedCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyDataAsset, ____SkeletonMapping_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyDataAsset, ____Root_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyDataAsset, ____RootScale_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyDataAsset, ____IsDataValid_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyDataAsset, ____IsDataHighConfidence_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyDataAsset, ____JointPoses_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyDataAsset, ____SkeletonChangedCount_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::Input::BodyDataAsset) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Input
