#pragma once
// IWYU pragma private; include "CjLib/DrawSphere.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CjLib/zzzz__DrawBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawSphere)
namespace GlobalNamespace {
struct DebugUtil_Style;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace CjLib {
class DrawSphere;
}
// Write type traits
MARK_REF_T(::CjLib::DrawSphere*);
DEFINE_IL2CPP_CLASS(::CjLib::DrawSphere*, "CjLib", "DrawSphere");
// [ExecuteInEditMode]
// Dependencies CjLib.DrawBase
namespace CjLib {
// Is value type: false
// CS Name: CjLib.DrawSphere
class CORDL_TYPE DrawSphere : public ::CjLib::DrawBase {
public:
// Declarations
/// @brief Field LatSegments, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_LatSegments, put=__cordl_internal_set_LatSegments)) int32_t  LatSegments;

/// @brief Field LongSegments, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_LongSegments, put=__cordl_internal_set_LongSegments)) int32_t  LongSegments;

/// @brief Field Radius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Method Draw, addr 0x5de2b08, size 0x148, virtual true, abstract: false, final false
inline void Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest) ;

static inline ::CjLib::DrawSphere* New_ctor() ;

/// @brief Method OnValidate, addr 0x5de2ae4, size 0x24, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr int32_t const& __cordl_internal_get_LatSegments() const;

constexpr int32_t& __cordl_internal_get_LatSegments() ;

constexpr int32_t const& __cordl_internal_get_LongSegments() const;

constexpr int32_t& __cordl_internal_get_LongSegments() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr void __cordl_internal_set_LatSegments(int32_t  value) ;

constexpr void __cordl_internal_set_LongSegments(int32_t  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

/// @brief Method .ctor, addr 0x5de2fa8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawSphere() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawSphere", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawSphere(DrawSphere && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawSphere", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawSphere(DrawSphere const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5140};

/// @brief Field Radius, offset: 0x4c, size: 0x4, def value: None
 float_t  ___Radius;

/// @brief Field LatSegments, offset: 0x50, size: 0x4, def value: None
 int32_t  ___LatSegments;

/// @brief Field LongSegments, offset: 0x54, size: 0x4, def value: None
 int32_t  ___LongSegments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CjLib::DrawSphere, ___Radius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawSphere, ___LatSegments) == 0x50, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawSphere, ___LongSegments) == 0x54, "Offset mismatch!");

static_assert(sizeof(::CjLib::DrawSphere) == 0x58, "Size mismatch!");

} // namespace end def CjLib
