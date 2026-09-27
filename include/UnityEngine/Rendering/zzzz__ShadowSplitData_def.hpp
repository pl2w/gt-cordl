#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowSplitData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ShadowSplitData__m_CullingPlanes_e__FixedBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowSplitData)
namespace GlobalNamespace {
struct ShadowSplitData__m_CullingPlanes_e__FixedBuffer;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadowSplitData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShadowSplitData, "UnityEngine.Rendering", "ShadowSplitData");
// [UsedByNativeCode]
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rendering.ShadowSplitData::<m_CullingPlanes>e__FixedBuffer, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShadowSplitData
struct CORDL_TYPE ShadowSplitData {
public:
// Declarations
using _m_CullingPlanes_e__FixedBuffer = ::GlobalNamespace::ShadowSplitData__m_CullingPlanes_e__FixedBuffer;

 __declspec(property(get=get_cullingPlaneCount)) int32_t  cullingPlaneCount;

 __declspec(property(get=get_cullingSphere)) ::UnityEngine::Vector4  cullingSphere;

/// @brief Field maximumCullingPlaneCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maximumCullingPlaneCount, put=setStaticF_maximumCullingPlaneCount)) int32_t  maximumCullingPlaneCount;

 __declspec(property(put=set_shadowCascadeBlendCullingFactor)) float_t  shadowCascadeBlendCullingFactor;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*() ;

/// @brief Method Equals, addr 0xb625854, size 0xfc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb625394, size 0x174, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::ShadowSplitData  other) ;

/// @brief Method GetCullingPlane, addr 0xb62570c, size 0x148, virtual false, abstract: false, final false
inline ::UnityEngine::Plane GetCullingPlane(int32_t  index) ;

/// @brief Method GetHashCode, addr 0xb62567c, size 0x7c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline int32_t getStaticF_maximumCullingPlaneCount() ;

/// @brief Method get_cullingPlaneCount, addr 0xb6256f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_cullingPlaneCount() ;

/// @brief Method get_cullingSphere, addr 0xb625700, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_cullingSphere() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>* i___System__IEquatable_1___UnityEngine__Rendering__ShadowSplitData_() ;

static inline void setStaticF_maximumCullingPlaneCount(int32_t  value) ;

/// @brief Method set_shadowCascadeBlendCullingFactor, addr 0xb625158, size 0xd4, virtual false, abstract: false, final false
inline void set_shadowCascadeBlendCullingFactor(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ShadowSplitData() ;

// Ctor Parameters [CppParam { name: "m_CullingPlaneCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CullingPlanes", ty: "::GlobalNamespace::ShadowSplitData__m_CullingPlanes_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CullingSphere", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ShadowCascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CullingNearPlane", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }]
constexpr ShadowSplitData(int32_t  m_CullingPlaneCount, ::GlobalNamespace::ShadowSplitData__m_CullingPlanes_e__FixedBuffer  m_CullingPlanes, ::UnityEngine::Vector4  m_CullingSphere, float_t  m_ShadowCascadeBlendCullingFactor, float_t  m_CullingNearPlane, ::UnityEngine::Matrix4x4  m_CullingMatrix) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15569};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xfc};

/// @brief Field k_MaximumCullingPlaneCount offset 0xffffffff size 0x4
static constexpr int32_t  k_MaximumCullingPlaneCount{static_cast<int32_t>(0xa)};

/// @brief Field m_CullingPlaneCount, offset: 0x0, size: 0x4, def value: None
 int32_t  m_CullingPlaneCount;

/// [FixedBuffer(typeof(System.Byte), 160)]
/// @brief Field m_CullingPlanes, offset: 0x4, size: 0xa0, def value: None
 ::GlobalNamespace::ShadowSplitData__m_CullingPlanes_e__FixedBuffer  m_CullingPlanes;

/// @brief Field m_CullingSphere, offset: 0xa4, size: 0x10, def value: None
 ::UnityEngine::Vector4  m_CullingSphere;

/// @brief Field m_ShadowCascadeBlendCullingFactor, offset: 0xb4, size: 0x4, def value: None
 float_t  m_ShadowCascadeBlendCullingFactor;

/// @brief Field m_CullingNearPlane, offset: 0xb8, size: 0x4, def value: None
 float_t  m_CullingNearPlane;

/// @brief Field m_CullingMatrix, offset: 0xbc, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  m_CullingMatrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingPlaneCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingPlanes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingSphere) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_ShadowCascadeBlendCullingFactor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingNearPlane) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowSplitData, m_CullingMatrix) == 0xbc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ShadowSplitData) == 0xfc, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
