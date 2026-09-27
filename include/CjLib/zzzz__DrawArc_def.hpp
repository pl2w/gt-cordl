#pragma once
// IWYU pragma private; include "CjLib/DrawArc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CjLib/zzzz__DrawBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawArc)
namespace GlobalNamespace {
struct DebugUtil_Style;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace CjLib {
class DrawArc;
}
// Write type traits
MARK_REF_T(::CjLib::DrawArc*);
DEFINE_IL2CPP_CLASS(::CjLib::DrawArc*, "CjLib", "DrawArc");
// [ExecuteInEditMode]
// Dependencies CjLib.DrawBase
namespace CjLib {
// Is value type: false
// CS Name: CjLib.DrawArc
class CORDL_TYPE DrawArc : public ::CjLib::DrawBase {
public:
// Declarations
/// @brief Field ArcAngle, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_ArcAngle, put=__cordl_internal_set_ArcAngle)) float_t  ArcAngle;

/// @brief Field NumSegments, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumSegments, put=__cordl_internal_set_NumSegments)) int32_t  NumSegments;

/// @brief Field Radius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field StartAngle, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartAngle, put=__cordl_internal_set_StartAngle)) float_t  StartAngle;

/// @brief Method Draw, addr 0x5de1164, size 0x304, virtual true, abstract: false, final false
inline void Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest) ;

static inline ::CjLib::DrawArc* New_ctor() ;

/// @brief Method OnValidate, addr 0x5de1134, size 0x30, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr float_t const& __cordl_internal_get_ArcAngle() const;

constexpr float_t& __cordl_internal_get_ArcAngle() ;

constexpr int32_t const& __cordl_internal_get_NumSegments() const;

constexpr int32_t& __cordl_internal_get_NumSegments() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr float_t const& __cordl_internal_get_StartAngle() const;

constexpr float_t& __cordl_internal_get_StartAngle() ;

constexpr void __cordl_internal_set_ArcAngle(float_t  value) ;

constexpr void __cordl_internal_set_NumSegments(int32_t  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set_StartAngle(float_t  value) ;

/// @brief Method .ctor, addr 0x5de1720, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawArc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawArc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawArc(DrawArc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawArc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawArc(DrawArc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5134};

/// @brief Field Radius, offset: 0x4c, size: 0x4, def value: None
 float_t  ___Radius;

/// @brief Field NumSegments, offset: 0x50, size: 0x4, def value: None
 int32_t  ___NumSegments;

/// @brief Field StartAngle, offset: 0x54, size: 0x4, def value: None
 float_t  ___StartAngle;

/// @brief Field ArcAngle, offset: 0x58, size: 0x4, def value: None
 float_t  ___ArcAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CjLib::DrawArc, ___Radius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawArc, ___NumSegments) == 0x50, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawArc, ___StartAngle) == 0x54, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawArc, ___ArcAngle) == 0x58, "Offset mismatch!");

static_assert(sizeof(::CjLib::DrawArc) == 0x60, "Size mismatch!");

} // namespace end def CjLib
