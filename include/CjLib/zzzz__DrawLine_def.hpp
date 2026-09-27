#pragma once
// IWYU pragma private; include "CjLib/DrawLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CjLib/zzzz__DrawBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(DrawLine)
namespace GlobalNamespace {
struct DebugUtil_Style;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace CjLib {
class DrawLine;
}
// Write type traits
MARK_REF_T(::CjLib::DrawLine*);
DEFINE_IL2CPP_CLASS(::CjLib::DrawLine*, "CjLib", "DrawLine");
// [ExecuteInEditMode]
// Dependencies CjLib.DrawBase, UnityEngine.Vector3
namespace CjLib {
// Is value type: false
// CS Name: CjLib.DrawLine
class CORDL_TYPE DrawLine : public ::CjLib::DrawBase {
public:
// Declarations
/// @brief Field LocalEndVector, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalEndVector, put=__cordl_internal_set_LocalEndVector)) ::UnityEngine::Vector3  LocalEndVector;

/// @brief Method Draw, addr 0x5de268c, size 0x134, virtual true, abstract: false, final false
inline void Draw(::UnityEngine::Color  color, ::GlobalNamespace::DebugUtil_Style  style, bool  depthTest) ;

static inline ::CjLib::DrawLine* New_ctor() ;

/// @brief Method OnValidate, addr 0x5de267c, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalEndVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalEndVector() ;

constexpr void __cordl_internal_set_LocalEndVector(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5de2a88, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawLine(DrawLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawLine(DrawLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5139};

/// @brief Field LocalEndVector, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalEndVector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CjLib::DrawLine, ___LocalEndVector) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::CjLib::DrawLine) == 0x58, "Size mismatch!");

} // namespace end def CjLib
