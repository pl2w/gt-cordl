#pragma once
// IWYU pragma private; include "UnityEngine/U2D/PixelPerfectRendering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PixelPerfectRendering)
// Forward declare root types
namespace UnityEngine::U2D {
class PixelPerfectRendering;
}
// Write type traits
MARK_REF_T(::UnityEngine::U2D::PixelPerfectRendering*);
DEFINE_IL2CPP_CLASS(::UnityEngine::U2D::PixelPerfectRendering*, "UnityEngine.U2D", "PixelPerfectRendering");
// [NativeHeader("Runtime/2D/Common/PixelSnapping.h")]
// [MovedFrom("UnityEngine.Experimental.U2D")]
// Dependencies System.Object
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: UnityEngine.U2D.PixelPerfectRendering
class CORDL_TYPE PixelPerfectRendering : public ::System::Object {
public:
// Declarations
/// [FreeFunction("SetPixelSnapSpacing")]
/// @brief Method set_pixelSnapSpacing, addr 0xb62ff3c, size 0x38, virtual false, abstract: false, final false
static inline void set_pixelSnapSpacing(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PixelPerfectRendering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PixelPerfectRendering", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PixelPerfectRendering(PixelPerfectRendering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PixelPerfectRendering", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PixelPerfectRendering(PixelPerfectRendering const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::U2D::PixelPerfectRendering) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::U2D
