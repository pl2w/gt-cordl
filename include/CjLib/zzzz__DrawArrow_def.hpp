#pragma once
// IWYU pragma private; include "CjLib/DrawArrow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CjLib/zzzz__DrawBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawArrow)
namespace GlobalNamespace {
struct DebugUtil_Style;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace CjLib {
class DrawArrow;
}
// Write type traits
MARK_REF_T(::CjLib::DrawArrow*);
DEFINE_IL2CPP_CLASS(::CjLib::DrawArrow*, "CjLib", "DrawArrow");
// [ExecuteInEditMode]
// Dependencies CjLib.DrawBase, UnityEngine.Vector3
namespace CjLib {
// Is value type: false
// CS Name: CjLib.DrawArrow
class CORDL_TYPE DrawArrow : public ::CjLib::DrawBase {
public:
// Declarations
/// @brief Field ConeHeight, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ConeHeight, put=__cordl_internal_set_ConeHeight)) float_t  ConeHeight;

/// @brief Field ConeRadius, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_ConeRadius, put=__cordl_internal_set_ConeRadius)) float_t  ConeRadius;

/// @brief Field LocalEndVector, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalEndVector, put=__cordl_internal_set_LocalEndVector)) ::UnityEngine::Vector3  LocalEndVector;

/// @brief Field NumSegments, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumSegments, put=__cordl_internal_set_NumSegments)) int32_t  NumSegments;

/// @brief Field StemThickness, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_StemThickness, put=__cordl_internal_set_StemThickness)) float_t  StemThickness;

/// @brief Method Draw, addr 0x5de17b4, size 0x16c, virtual true, abstract: false, final false
inline void Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest) ;

static inline ::CjLib::DrawArrow* New_ctor() ;

/// @brief Method OnValidate, addr 0x5de1778, size 0x3c, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr float_t const& __cordl_internal_get_ConeHeight() const;

constexpr float_t& __cordl_internal_get_ConeHeight() ;

constexpr float_t const& __cordl_internal_get_ConeRadius() const;

constexpr float_t& __cordl_internal_get_ConeRadius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalEndVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalEndVector() ;

constexpr int32_t const& __cordl_internal_get_NumSegments() const;

constexpr int32_t& __cordl_internal_get_NumSegments() ;

constexpr float_t const& __cordl_internal_get_StemThickness() const;

constexpr float_t& __cordl_internal_get_StemThickness() ;

constexpr void __cordl_internal_set_ConeHeight(float_t  value) ;

constexpr void __cordl_internal_set_ConeRadius(float_t  value) ;

constexpr void __cordl_internal_set_LocalEndVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_NumSegments(int32_t  value) ;

constexpr void __cordl_internal_set_StemThickness(float_t  value) ;

/// @brief Method .ctor, addr 0x5de1e30, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawArrow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawArrow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawArrow(DrawArrow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawArrow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawArrow(DrawArrow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5135};

/// @brief Field LocalEndVector, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalEndVector;

/// @brief Field ConeRadius, offset: 0x58, size: 0x4, def value: None
 float_t  ___ConeRadius;

/// @brief Field ConeHeight, offset: 0x5c, size: 0x4, def value: None
 float_t  ___ConeHeight;

/// @brief Field StemThickness, offset: 0x60, size: 0x4, def value: None
 float_t  ___StemThickness;

/// @brief Field NumSegments, offset: 0x64, size: 0x4, def value: None
 int32_t  ___NumSegments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CjLib::DrawArrow, ___LocalEndVector) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawArrow, ___ConeRadius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawArrow, ___ConeHeight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawArrow, ___StemThickness) == 0x60, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawArrow, ___NumSegments) == 0x64, "Offset mismatch!");

static_assert(sizeof(::CjLib::DrawArrow) == 0x68, "Size mismatch!");

} // namespace end def CjLib
