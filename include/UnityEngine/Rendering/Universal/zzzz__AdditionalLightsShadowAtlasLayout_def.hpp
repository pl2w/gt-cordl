#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AdditionalLightsShadowAtlasLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalLightsShadowAtlasLayout)
namespace GlobalNamespace {
struct AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal {
class AdditionalLightsShadowAtlasLayout___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class AdditionalLightsShadowAtlasLayout___c;
}
namespace UnityEngine::Rendering::Universal {
struct AdditionalLightsShadowAtlasLayout;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*);
MARK_VAL_T(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*, "UnityEngine.Rendering.Universal", "AdditionalLightsShadowAtlasLayout/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, "UnityEngine.Rendering.Universal", "AdditionalLightsShadowAtlasLayout");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout::ShadowResolutionRequest
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout
struct CORDL_TYPE AdditionalLightsShadowAtlasLayout {
public:
// Declarations
using ShadowResolutionRequest = ::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest;

using __c = ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c;

/// @brief Field s_CompareShadowResolutionRequest, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CompareShadowResolutionRequest, put=setStaticF_s_CompareShadowResolutionRequest)) ::System::Func_3<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,int32_t>*  s_CompareShadowResolutionRequest;

/// @brief Field s_ShadowResolutionRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ShadowResolutionRequests, put=setStaticF_s_ShadowResolutionRequests)) ::System::Collections::Generic::List_1<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*  s_ShadowResolutionRequests;

/// @brief Field s_SortedShadowResolutionRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SortedShadowResolutionRequests, put=setStaticF_s_SortedShadowResolutionRequests)) ::ArrayW<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>  s_SortedShadowResolutionRequests;

/// @brief Field s_UnusedAtlasSquareAreas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_UnusedAtlasSquareAreas, put=setStaticF_s_UnusedAtlasSquareAreas)) ::System::Collections::Generic::List_1<::UnityEngine::RectInt>*  s_UnusedAtlasSquareAreas;

/// @brief Field s_VisibleLightIndexToCameraSquareDistance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_VisibleLightIndexToCameraSquareDistance, put=setStaticF_s_VisibleLightIndexToCameraSquareDistance)) ::ArrayW<float_t>  s_VisibleLightIndexToCameraSquareDistance;

/// @brief Method ClearStaticCaches, addr 0xb25d434, size 0xa4, virtual false, abstract: false, final false
static inline void ClearStaticCaches() ;

/// @brief Method CreateCompareShadowResolutionRequesPredicate, addr 0xb25d230, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Func_3<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,int32_t>* CreateCompareShadowResolutionRequesPredicate() ;

/// @brief Method EstimateScaleFactorNeededToFitAllShadowsInAtlas, addr 0xb25d330, size 0x60, virtual false, abstract: false, final false
static inline int32_t EstimateScaleFactorNeededToFitAllShadowsInAtlas(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>>  shadowResolutionRequests, int32_t  endIndex, int32_t  atlasSize) ;

/// @brief Method GetAtlasSize, addr 0xb25d3c8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetAtlasSize() ;

/// @brief Method GetShadowSlicesScaleFactor, addr 0xb25d3c0, size 0x8, virtual false, abstract: false, final false
inline int32_t GetShadowSlicesScaleFactor() ;

/// @brief Method GetSliceShadowResolutionRequest, addr 0xb25d408, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest GetSliceShadowResolutionRequest(int32_t  originalVisibleLightIndex, int32_t  sliceIndex) ;

/// @brief Method GetSortedShadowResolutionRequest, addr 0xb25d3e4, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest GetSortedShadowResolutionRequest(int32_t  sortedShadowResolutionRequestIndex) ;

/// @brief Method GetTotalShadowResolutionRequestCount, addr 0xb25d3b0, size 0x8, virtual false, abstract: false, final false
inline int32_t GetTotalShadowResolutionRequestCount() ;

/// @brief Method GetTotalShadowSlicesCount, addr 0xb25d3a8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetTotalShadowSlicesCount() ;

/// @brief Method HasSpaceForLight, addr 0xb25d3d0, size 0x14, virtual false, abstract: false, final false
inline bool HasSpaceForLight(int32_t  originalVisibleLightIndex) ;

/// @brief Method HasTooManyShadowMaps, addr 0xb25d3b8, size 0x8, virtual false, abstract: false, final false
inline bool HasTooManyShadowMaps() ;

/// @brief Method .ctor, addr 0xb25c3c4, size 0xe6c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData*  shadowData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

static inline ::System::Func_3<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,int32_t>* getStaticF_s_CompareShadowResolutionRequest() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>* getStaticF_s_ShadowResolutionRequests() ;

static inline ::ArrayW<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest> getStaticF_s_SortedShadowResolutionRequests() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::RectInt>* getStaticF_s_UnusedAtlasSquareAreas() ;

static inline ::ArrayW<float_t> getStaticF_s_VisibleLightIndexToCameraSquareDistance() ;

static inline void setStaticF_s_CompareShadowResolutionRequest(::System::Func_3<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,int32_t>*  value) ;

static inline void setStaticF_s_ShadowResolutionRequests(::System::Collections::Generic::List_1<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>*  value) ;

static inline void setStaticF_s_SortedShadowResolutionRequests(::ArrayW<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>  value) ;

static inline void setStaticF_s_UnusedAtlasSquareAreas(::System::Collections::Generic::List_1<::UnityEngine::RectInt>*  value) ;

static inline void setStaticF_s_VisibleLightIndexToCameraSquareDistance(::ArrayW<float_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowAtlasLayout() ;

// Ctor Parameters [CppParam { name: "m_SortedShadowResolutionRequests", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TotalShadowSlicesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TotalShadowResolutionRequestCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TooManyShadowMaps", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ShadowSlicesScaleFactor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AtlasSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AdditionalLightsShadowAtlasLayout(::Unity::Collections::NativeArray_1<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>  m_SortedShadowResolutionRequests, ::Unity::Collections::NativeArray_1<int32_t>  m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex, int32_t  m_TotalShadowSlicesCount, int32_t  m_TotalShadowResolutionRequestCount, bool  m_TooManyShadowMaps, int32_t  m_ShadowSlicesScaleFactor, int32_t  m_AtlasSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18466};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_SortedShadowResolutionRequests, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>  m_SortedShadowResolutionRequests;

/// @brief Field m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;

/// @brief Field m_TotalShadowSlicesCount, offset: 0x20, size: 0x4, def value: None
 int32_t  m_TotalShadowSlicesCount;

/// @brief Field m_TotalShadowResolutionRequestCount, offset: 0x24, size: 0x4, def value: None
 int32_t  m_TotalShadowResolutionRequestCount;

/// @brief Field m_TooManyShadowMaps, offset: 0x28, size: 0x1, def value: None
 bool  m_TooManyShadowMaps;

/// @brief Field m_ShadowSlicesScaleFactor, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_ShadowSlicesScaleFactor;

/// @brief Field m_AtlasSize, offset: 0x30, size: 0x4, def value: None
 int32_t  m_AtlasSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_SortedShadowResolutionRequests) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_TotalShadowSlicesCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_TotalShadowResolutionRequestCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_TooManyShadowMaps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_ShadowSlicesScaleFactor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout, m_AtlasSize) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout/<>c
class CORDL_TYPE AdditionalLightsShadowAtlasLayout___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Func_3<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,int32_t>*  __9__24_0;

static inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* New_ctor() ;

/// @brief Method <CreateCompareShadowResolutionRequesPredicate>b__24_0, addr 0xb25d548, size 0x190, virtual false, abstract: false, final false
inline int32_t _CreateCompareShadowResolutionRequesPredicate_b__24_0(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest  curr, ::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest  other) ;

/// @brief Method .ctor, addr 0xb25d540, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c* getStaticF___9() ;

static inline ::System::Func_3<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,int32_t>* getStaticF___9__24_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c*  value) ;

static inline void setStaticF___9__24_0(::System::Func_3<::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowAtlasLayout___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowAtlasLayout___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditionalLightsShadowAtlasLayout___c(AdditionalLightsShadowAtlasLayout___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowAtlasLayout___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditionalLightsShadowAtlasLayout___c(AdditionalLightsShadowAtlasLayout___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18465};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
