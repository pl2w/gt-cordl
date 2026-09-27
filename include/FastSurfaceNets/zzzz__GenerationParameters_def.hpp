#pragma once
// IWYU pragma private; include "FastSurfaceNets/GenerationParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GenerationParameters)
// Forward declare root types
namespace FastSurfaceNets {
class GenerationParameters;
}
// Write type traits
MARK_REF_T(::FastSurfaceNets::GenerationParameters*);
DEFINE_IL2CPP_CLASS(::FastSurfaceNets::GenerationParameters*, "FastSurfaceNets", "GenerationParameters");
// Dependencies System.Object, Unity.Mathematics.int3
namespace FastSurfaceNets {
// Is value type: false
// CS Name: FastSurfaceNets.GenerationParameters
class CORDL_TYPE GenerationParameters : public ::System::Object {
public:
// Declarations
/// @brief Field areaWeightedNormals, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_areaWeightedNormals, put=__cordl_internal_set_areaWeightedNormals)) bool  areaWeightedNormals;

/// @brief Field baseHeight, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseHeight, put=__cordl_internal_set_baseHeight)) float_t  baseHeight;

/// @brief Field customNormals, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_customNormals, put=__cordl_internal_set_customNormals)) bool  customNormals;

/// @brief Field generateShape, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_generateShape, put=__cordl_internal_set_generateShape)) bool  generateShape;

/// @brief Field heightScale, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightScale, put=__cordl_internal_set_heightScale)) float_t  heightScale;

/// @brief Field noiseScale, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseScale, put=__cordl_internal_set_noiseScale)) float_t  noiseScale;

/// @brief Field normalThreshold, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalThreshold, put=__cordl_internal_set_normalThreshold)) float_t  normalThreshold;

/// @brief Field recalculateNormals, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_recalculateNormals, put=__cordl_internal_set_recalculateNormals)) bool  recalculateNormals;

/// @brief Field shapeMax, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_shapeMax, put=__cordl_internal_set_shapeMax)) ::Unity::Mathematics::int3  shapeMax;

/// @brief Field shapeMin, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_shapeMin, put=__cordl_internal_set_shapeMin)) ::Unity::Mathematics::int3  shapeMin;

/// @brief Field useBurst, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_useBurst, put=__cordl_internal_set_useBurst)) bool  useBurst;

static inline ::FastSurfaceNets::GenerationParameters* New_ctor() ;

constexpr bool const& __cordl_internal_get_areaWeightedNormals() const;

constexpr bool& __cordl_internal_get_areaWeightedNormals() ;

constexpr float_t const& __cordl_internal_get_baseHeight() const;

constexpr float_t& __cordl_internal_get_baseHeight() ;

constexpr bool const& __cordl_internal_get_customNormals() const;

constexpr bool& __cordl_internal_get_customNormals() ;

constexpr bool const& __cordl_internal_get_generateShape() const;

constexpr bool& __cordl_internal_get_generateShape() ;

constexpr float_t const& __cordl_internal_get_heightScale() const;

constexpr float_t& __cordl_internal_get_heightScale() ;

constexpr float_t const& __cordl_internal_get_noiseScale() const;

constexpr float_t& __cordl_internal_get_noiseScale() ;

constexpr float_t const& __cordl_internal_get_normalThreshold() const;

constexpr float_t& __cordl_internal_get_normalThreshold() ;

constexpr bool const& __cordl_internal_get_recalculateNormals() const;

constexpr bool& __cordl_internal_get_recalculateNormals() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_shapeMax() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_shapeMax() ;

constexpr ::Unity::Mathematics::int3 const& __cordl_internal_get_shapeMin() const;

constexpr ::Unity::Mathematics::int3& __cordl_internal_get_shapeMin() ;

constexpr bool const& __cordl_internal_get_useBurst() const;

constexpr bool& __cordl_internal_get_useBurst() ;

constexpr void __cordl_internal_set_areaWeightedNormals(bool  value) ;

constexpr void __cordl_internal_set_baseHeight(float_t  value) ;

constexpr void __cordl_internal_set_customNormals(bool  value) ;

constexpr void __cordl_internal_set_generateShape(bool  value) ;

constexpr void __cordl_internal_set_heightScale(float_t  value) ;

constexpr void __cordl_internal_set_noiseScale(float_t  value) ;

constexpr void __cordl_internal_set_normalThreshold(float_t  value) ;

constexpr void __cordl_internal_set_recalculateNormals(bool  value) ;

constexpr void __cordl_internal_set_shapeMax(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_shapeMin(::Unity::Mathematics::int3  value) ;

constexpr void __cordl_internal_set_useBurst(bool  value) ;

/// @brief Method .ctor, addr 0x5daacf4, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenerationParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenerationParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenerationParameters(GenerationParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenerationParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenerationParameters(GenerationParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4999};

/// @brief Field recalculateNormals, offset: 0x10, size: 0x1, def value: None
 bool  ___recalculateNormals;

/// @brief Field customNormals, offset: 0x11, size: 0x1, def value: None
 bool  ___customNormals;

/// @brief Field useBurst, offset: 0x12, size: 0x1, def value: None
 bool  ___useBurst;

/// @brief Field normalThreshold, offset: 0x14, size: 0x4, def value: None
 float_t  ___normalThreshold;

/// @brief Field areaWeightedNormals, offset: 0x18, size: 0x1, def value: None
 bool  ___areaWeightedNormals;

/// @brief Field generateShape, offset: 0x19, size: 0x1, def value: None
 bool  ___generateShape;

/// @brief Field shapeMin, offset: 0x1c, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___shapeMin;

/// @brief Field shapeMax, offset: 0x28, size: 0xc, def value: None
 ::Unity::Mathematics::int3  ___shapeMax;

/// @brief Field noiseScale, offset: 0x34, size: 0x4, def value: None
 float_t  ___noiseScale;

/// @brief Field baseHeight, offset: 0x38, size: 0x4, def value: None
 float_t  ___baseHeight;

/// @brief Field heightScale, offset: 0x3c, size: 0x4, def value: None
 float_t  ___heightScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___recalculateNormals) == 0x10, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___customNormals) == 0x11, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___useBurst) == 0x12, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___normalThreshold) == 0x14, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___areaWeightedNormals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___generateShape) == 0x19, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___shapeMin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___shapeMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___noiseScale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___baseHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::GenerationParameters, ___heightScale) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::FastSurfaceNets::GenerationParameters) == 0x40, "Size mismatch!");

} // namespace end def FastSurfaceNets
