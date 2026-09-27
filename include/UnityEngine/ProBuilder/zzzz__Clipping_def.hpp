#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Clipping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Clipping)
namespace GlobalNamespace {
struct Clipping_OutCode;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Clipping;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::Clipping*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::Clipping*, "UnityEngine.ProBuilder", "Clipping");
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Clipping
class CORDL_TYPE Clipping : public ::System::Object {
public:
// Declarations
using OutCode = ::GlobalNamespace::Clipping_OutCode;

/// @brief Method ComputeOutCode, addr 0xb088544, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Clipping_OutCode ComputeOutCode(::UnityEngine::Rect  rect, float_t  x, float_t  y) ;

/// @brief Method RectContainsLineSegment, addr 0xb088580, size 0x210, virtual false, abstract: false, final false
static inline bool RectContainsLineSegment(::UnityEngine::Rect  rect, float_t  x0, float_t  y0, float_t  x1, float_t  y1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Clipping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Clipping(Clipping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Clipping(Clipping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::Clipping) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
