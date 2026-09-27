#pragma once
// IWYU pragma private; include "CjLib/DrawCircle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CjLib/zzzz__DrawBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawCircle)
namespace GlobalNamespace {
struct DebugUtil_Style;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace CjLib {
class DrawCircle;
}
// Write type traits
MARK_REF_T(::CjLib::DrawCircle*);
DEFINE_IL2CPP_CLASS(::CjLib::DrawCircle*, "CjLib", "DrawCircle");
// [ExecuteInEditMode]
// Dependencies CjLib.DrawBase
namespace CjLib {
// Is value type: false
// CS Name: CjLib.DrawCircle
class CORDL_TYPE DrawCircle : public ::CjLib::DrawBase {
public:
// Declarations
/// @brief Field NumSegments, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumSegments, put=__cordl_internal_set_NumSegments)) int32_t  NumSegments;

/// @brief Field Radius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Method Draw, addr 0x5de2274, size 0x18c, virtual true, abstract: false, final false
inline void Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest) ;

static inline ::CjLib::DrawCircle* New_ctor() ;

/// @brief Method OnValidate, addr 0x5de2250, size 0x24, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr int32_t const& __cordl_internal_get_NumSegments() const;

constexpr int32_t& __cordl_internal_get_NumSegments() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr void __cordl_internal_set_NumSegments(int32_t  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

/// @brief Method .ctor, addr 0x5de266c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawCircle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawCircle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawCircle(DrawCircle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawCircle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawCircle(DrawCircle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5138};

/// @brief Field Radius, offset: 0x4c, size: 0x4, def value: None
 float_t  ___Radius;

/// @brief Field NumSegments, offset: 0x50, size: 0x4, def value: None
 int32_t  ___NumSegments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CjLib::DrawCircle, ___Radius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::CjLib::DrawCircle, ___NumSegments) == 0x50, "Offset mismatch!");

static_assert(sizeof(::CjLib::DrawCircle) == 0x58, "Size mismatch!");

} // namespace end def CjLib
