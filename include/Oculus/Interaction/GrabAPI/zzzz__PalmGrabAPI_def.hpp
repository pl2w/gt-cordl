#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/PalmGrabAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PalmGrabAPI)
namespace Oculus::Interaction::GrabAPI {
class PalmGrabAPI_FingerGrabData;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::PoseDetection {
class FingerShapes;
}
namespace Oculus::Interaction {
class IFingerAPI;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class PalmGrabAPI;
}
namespace Oculus::Interaction::GrabAPI {
class PalmGrabAPI_FingerGrabData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::PalmGrabAPI*);
MARK_REF_T(::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::PalmGrabAPI*, "Oculus.Interaction.GrabAPI", "PalmGrabAPI");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*, "Oculus.Interaction.GrabAPI", "PalmGrabAPI/FingerGrabData");
// Dependencies Oculus.Interaction.GrabAPI.PalmGrabAPI::FingerGrabData, System.Object, UnityEngine.Vector2, UnityEngine.Vector3
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.PalmGrabAPI
class CORDL_TYPE PalmGrabAPI : public ::System::Object {
public:
// Declarations
using FingerGrabData = ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData;

/// @brief Field CURL_RANGE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CURL_RANGE, put=setStaticF_CURL_RANGE)) ::ArrayW<::UnityEngine::Vector2>  CURL_RANGE;

/// @brief Field POSE_VOLUME_OFFSET, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_POSE_VOLUME_OFFSET, put=setStaticF_POSE_VOLUME_OFFSET)) ::UnityEngine::Vector3  POSE_VOLUME_OFFSET;

/// @brief Field RELEASE_THRESHOLD, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RELEASE_THRESHOLD, put=setStaticF_RELEASE_THRESHOLD)) float_t  RELEASE_THRESHOLD;

/// @brief Field START_THRESHOLD, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_START_THRESHOLD, put=setStaticF_START_THRESHOLD)) float_t  START_THRESHOLD;

/// @brief Field _fingerShapes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerShapes, put=__cordl_internal_set__fingerShapes)) ::Oculus::Interaction::PoseDetection::FingerShapes*  _fingerShapes;

/// @brief Field _fingersGrabData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingersGrabData, put=__cordl_internal_set__fingersGrabData)) ::ArrayW<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>  _fingersGrabData;

/// @brief Field _poseVolumeCenterOffset, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__poseVolumeCenterOffset, put=__cordl_internal_set__poseVolumeCenterOffset)) ::UnityEngine::Vector3  _poseVolumeCenterOffset;

/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr operator  ::Oculus::Interaction::IFingerAPI*() noexcept;

/// @brief Method ClearState, addr 0xa4f8f00, size 0x4c, virtual false, abstract: false, final false
inline void ClearState() ;

/// @brief Method GetFingerGrabScore, addr 0xa4f8d30, size 0x38, virtual true, abstract: false, final true
inline float_t GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbing, addr 0xa4f8ca4, size 0x38, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbingChanged, addr 0xa4f8cdc, size 0x54, virtual true, abstract: false, final true
inline bool GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetGrabState) ;

/// @brief Method GetWristOffsetLocal, addr 0xa4f9208, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetWristOffsetLocal() ;

static inline ::Oculus::Interaction::GrabAPI::PalmGrabAPI* New_ctor() ;

/// @brief Method Update, addr 0xa4f8d68, size 0x198, virtual true, abstract: false, final true
inline void Update(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method UpdateVolumeCenter, addr 0xa4f8f4c, size 0x1d8, virtual false, abstract: false, final false
inline void UpdateVolumeCenter(::Oculus::Interaction::Input::IHand*  hand) ;

constexpr ::Oculus::Interaction::PoseDetection::FingerShapes* const& __cordl_internal_get__fingerShapes() const;

constexpr ::Oculus::Interaction::PoseDetection::FingerShapes*& __cordl_internal_get__fingerShapes() ;

constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*> const& __cordl_internal_get__fingersGrabData() const;

constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>& __cordl_internal_get__fingersGrabData() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__poseVolumeCenterOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__poseVolumeCenterOffset() ;

constexpr void __cordl_internal_set__fingerShapes(::Oculus::Interaction::PoseDetection::FingerShapes*  value) ;

constexpr void __cordl_internal_set__fingersGrabData(::ArrayW<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>  value) ;

constexpr void __cordl_internal_set__poseVolumeCenterOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa4f9214, size 0x27c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_CURL_RANGE() ;

static inline ::UnityEngine::Vector3 getStaticF_POSE_VOLUME_OFFSET() ;

static inline float_t getStaticF_RELEASE_THRESHOLD() ;

static inline float_t getStaticF_START_THRESHOLD() ;

/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* i___Oculus__Interaction__IFingerAPI() noexcept;

static inline void setStaticF_CURL_RANGE(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_POSE_VOLUME_OFFSET(::UnityEngine::Vector3  value) ;

static inline void setStaticF_RELEASE_THRESHOLD(float_t  value) ;

static inline void setStaticF_START_THRESHOLD(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PalmGrabAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PalmGrabAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PalmGrabAPI(PalmGrabAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PalmGrabAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PalmGrabAPI(PalmGrabAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16414};

/// @brief Field _poseVolumeCenterOffset, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____poseVolumeCenterOffset;

/// @brief Field _fingerShapes, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::FingerShapes*  ____fingerShapes;

/// @brief Field _fingersGrabData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData*>  ____fingersGrabData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::PalmGrabAPI, ____poseVolumeCenterOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PalmGrabAPI, ____fingerShapes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PalmGrabAPI, ____fingersGrabData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::PalmGrabAPI) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
// Dependencies Oculus.Interaction.Input.HandFinger, System.Object, UnityEngine.Vector2
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.PalmGrabAPI/FingerGrabData
class CORDL_TYPE PalmGrabAPI_FingerGrabData : public ::System::Object {
public:
// Declarations
/// @brief Field GrabStrength, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_GrabStrength, put=__cordl_internal_set_GrabStrength)) float_t  GrabStrength;

/// @brief Field IsGrabbing, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsGrabbing, put=__cordl_internal_set_IsGrabbing)) bool  IsGrabbing;

 __declspec(property(get=get_IsGrabbingChanged, put=set_IsGrabbingChanged)) bool  IsGrabbingChanged;

/// @brief Field <IsGrabbingChanged>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsGrabbingChanged_k__BackingField, put=__cordl_internal_set__IsGrabbingChanged_k__BackingField)) bool  _IsGrabbingChanged_k__BackingField;

/// @brief Field _curlNormalizationParams, offset 0x14, size 0x8 
 __declspec(property(get=__cordl_internal_get__curlNormalizationParams, put=__cordl_internal_set__curlNormalizationParams)) ::UnityEngine::Vector2  _curlNormalizationParams;

/// @brief Field _fingerID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__fingerID, put=__cordl_internal_set__fingerID)) ::Oculus::Interaction::Input::HandFinger  _fingerID;

/// @brief Method ClearState, addr 0xa4f9200, size 0x8, virtual false, abstract: false, final false
inline void ClearState() ;

static inline ::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData* New_ctor(::Oculus::Interaction::Input::HandFinger  fingerId) ;

/// @brief Method UpdateGrabStrength, addr 0xa4f9124, size 0x98, virtual false, abstract: false, final false
inline void UpdateGrabStrength(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::FingerShapes*  fingerShapes) ;

/// @brief Method UpdateIsGrabbing, addr 0xa4f91bc, size 0x44, virtual false, abstract: false, final false
inline void UpdateIsGrabbing(float_t  startThreshold, float_t  releaseThreshold) ;

constexpr float_t const& __cordl_internal_get_GrabStrength() const;

constexpr float_t& __cordl_internal_get_GrabStrength() ;

constexpr bool const& __cordl_internal_get_IsGrabbing() const;

constexpr bool& __cordl_internal_get_IsGrabbing() ;

constexpr bool const& __cordl_internal_get__IsGrabbingChanged_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsGrabbingChanged_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__curlNormalizationParams() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__curlNormalizationParams() ;

constexpr ::Oculus::Interaction::Input::HandFinger const& __cordl_internal_get__fingerID() const;

constexpr ::Oculus::Interaction::Input::HandFinger& __cordl_internal_get__fingerID() ;

constexpr void __cordl_internal_set_GrabStrength(float_t  value) ;

constexpr void __cordl_internal_set_IsGrabbing(bool  value) ;

constexpr void __cordl_internal_set__IsGrabbingChanged_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__curlNormalizationParams(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__fingerID(::Oculus::Interaction::Input::HandFinger  value) ;

/// @brief Method .ctor, addr 0xa4f9490, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::HandFinger  fingerId) ;

/// [CompilerGenerated]
/// @brief Method get_IsGrabbingChanged, addr 0xa4f962c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsGrabbingChanged() ;

/// [CompilerGenerated]
/// @brief Method set_IsGrabbingChanged, addr 0xa4f9634, size 0x8, virtual false, abstract: false, final false
inline void set_IsGrabbingChanged(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PalmGrabAPI_FingerGrabData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PalmGrabAPI_FingerGrabData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PalmGrabAPI_FingerGrabData(PalmGrabAPI_FingerGrabData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PalmGrabAPI_FingerGrabData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PalmGrabAPI_FingerGrabData(PalmGrabAPI_FingerGrabData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16413};

/// @brief Field _fingerID, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  ____fingerID;

/// @brief Field _curlNormalizationParams, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____curlNormalizationParams;

/// @brief Field GrabStrength, offset: 0x1c, size: 0x4, def value: None
 float_t  ___GrabStrength;

/// @brief Field IsGrabbing, offset: 0x20, size: 0x1, def value: None
 bool  ___IsGrabbing;

/// [CompilerGenerated]
/// @brief Field <IsGrabbingChanged>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____IsGrabbingChanged_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData, ____fingerID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData, ____curlNormalizationParams) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData, ___GrabStrength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData, ___IsGrabbing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData, ____IsGrabbingChanged_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::PalmGrabAPI_FingerGrabData) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
