#pragma once
// IWYU pragma private; include "GlobalNamespace/SpatialUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpatialUtils)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SpatialUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpatialUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpatialUtils*, "", "SpatialUtils");
// [Extension]
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpatialUtils
class CORDL_TYPE SpatialUtils : public ::System::Object {
public:
// Declarations
/// @brief Field kMaxVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_kMaxVector, put=setStaticF_kMaxVector)) ::UnityEngine::Vector3  kMaxVector;

/// @brief Field kMinVector, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_kMinVector, put=setStaticF_kMinVector)) ::UnityEngine::Vector3  kMinVector;

/// @brief Method BoxIntersectsBox, addr 0x5b111cc, size 0xb4, virtual false, abstract: false, final false
static inline bool BoxIntersectsBox(::by_ref<::UnityEngine::Bounds>  a, ::by_ref<::UnityEngine::Bounds>  b) ;

/// @brief Method CompareByZOrder, addr 0x5b0f4bc, size 0x27c, virtual false, abstract: false, final false
static inline int32_t CompareByZOrder(::UnityEngine::Vector3Int  a, ::UnityEngine::Vector3Int  b) ;

/// @brief Method ComputeBoundingSphere2Pass, addr 0x5b11280, size 0x230, virtual false, abstract: false, final false
static inline void ComputeBoundingSphere2Pass(::ArrayW<::UnityEngine::Vector3>  points, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<float_t>  radius) ;

/// @brief Method ComputeBoundingSphereRitter, addr 0x5b114b0, size 0x32c, virtual false, abstract: false, final false
static inline void ComputeBoundingSphereRitter(::ArrayW<::UnityEngine::Vector3>  points, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<float_t>  radius) ;

/// @brief Method Decode64, addr 0x5b0fa78, size 0x74, virtual false, abstract: false, final false
static inline uint32_t Decode64(uint64_t  w) ;

/// @brief Method DistSq, addr 0x5b10c80, size 0x24, virtual false, abstract: false, final false
static inline float_t DistSq(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method Encode64, addr 0x5b0fa0c, size 0x6c, virtual false, abstract: false, final false
static inline uint64_t Encode64(uint64_t  w) ;

/// @brief Method FlatIndexToXYZ, addr 0x5b0f49c, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int FlatIndexToXYZ(int32_t  idx, int32_t  xMax, int32_t  yMax) ;

/// @brief Method FlatIndexToXYZ, addr 0x5b0f478, size 0x24, virtual false, abstract: false, final false
static inline void FlatIndexToXYZ(int32_t  idx, int32_t  xMax, int32_t  yMax, ::by_ref<int32_t>  x, ::by_ref<int32_t>  y, ::by_ref<int32_t>  z) ;

/// [Extension]
/// @brief Method GetCorners, addr 0x5b10ca4, size 0x90, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> GetCorners(::UnityEngine::Bounds  b) ;

/// [Extension]
/// @brief Method GetCorners, addr 0x5b10e38, size 0x13c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> GetCorners(::UnityEngine::Bounds  b, ::UnityEngine::Matrix4x4  transform) ;

/// @brief Method GetCorners, addr 0x5b10d34, size 0x104, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> GetCorners(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method GetRadialBounds, addr 0x5b10800, size 0x480, virtual false, abstract: false, final false
static inline ::UnityEngine::BoundingSphere GetRadialBounds(::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Matrix4x4>  xform) ;

/// [Extension]
/// @brief Method TransformedBy, addr 0x5b10f74, size 0x258, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds TransformedBy(::UnityEngine::Bounds  b, ::UnityEngine::Matrix4x4  transform) ;

/// @brief Method TryGetBounds, addr 0x5b100bc, size 0x3a8, virtual false, abstract: false, final false
static inline bool TryGetBounds(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Collider>>*  colliders, ::by_ref<::UnityEngine::Bounds>  result) ;

/// @brief Method TryGetBounds, addr 0x5b0fd14, size 0x3a8, virtual false, abstract: false, final false
static inline bool TryGetBounds(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Renderer>>*  renderers, ::by_ref<::UnityEngine::Bounds>  result) ;

/// @brief Method TryGetBounds, addr 0x5b10464, size 0x39c, virtual false, abstract: false, final false
static inline bool TryGetBounds(::UnityEngine::Transform*  x, ::by_ref<::UnityEngine::Bounds>  result, bool  includeRenderers, bool  includeColliders, bool  fallbackToXforms) ;

/// @brief Method XYZToFlatIndex, addr 0x5b0f45c, size 0xc, virtual false, abstract: false, final false
static inline int32_t XYZToFlatIndex(int32_t  x, int32_t  y, int32_t  z, int32_t  xMax, int32_t  yMax) ;

/// @brief Method XYZToFlatIndex, addr 0x5b0f468, size 0x10, virtual false, abstract: false, final false
static inline int32_t XYZToFlatIndex(::UnityEngine::Vector3Int  xyz, int32_t  xMax, int32_t  yMax) ;

/// @brief Method ZOrderDecode, addr 0x5b0fb5c, size 0x5c, virtual false, abstract: false, final false
static inline void ZOrderDecode(uint32_t  code, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y) ;

/// @brief Method ZOrderDecode, addr 0x5b0fc60, size 0xb4, virtual false, abstract: false, final false
static inline void ZOrderDecode(uint32_t  code, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y, ::by_ref<uint32_t>  z) ;

/// @brief Method ZOrderDecode64, addr 0x5b0f898, size 0x174, virtual false, abstract: false, final false
static inline void ZOrderDecode64(uint64_t  code, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y, ::by_ref<uint32_t>  z) ;

/// @brief Method ZOrderEncode, addr 0x5b0faec, size 0x70, virtual false, abstract: false, final false
static inline uint32_t ZOrderEncode(uint32_t  x, uint32_t  y) ;

/// @brief Method ZOrderEncode, addr 0x5b0fbb8, size 0xa8, virtual false, abstract: false, final false
static inline uint32_t ZOrderEncode(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method ZOrderEncode64, addr 0x5b0f738, size 0x160, virtual false, abstract: false, final false
static inline void ZOrderEncode64(uint32_t  x, uint32_t  y, uint32_t  z, ::by_ref<uint64_t>  code) ;

static inline ::UnityEngine::Vector3 getStaticF_kMaxVector() ;

static inline ::UnityEngine::Vector3 getStaticF_kMinVector() ;

static inline void setStaticF_kMaxVector(::UnityEngine::Vector3  value) ;

static inline void setStaticF_kMinVector(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpatialUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpatialUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpatialUtils(SpatialUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpatialUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpatialUtils(SpatialUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3548};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SpatialUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
