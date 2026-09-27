#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorUtils)
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColorUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorUtils*, "", "ColorUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorUtils
class CORDL_TYPE ColorUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ComposeHDR, addr 0x5ae45ec, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ComposeHDR(::UnityEngine::Color  baseColor, float_t  intensity) ;

/// @brief Method DecomposeHDR, addr 0x5ae46b8, size 0x634, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::UnityEngine::Color,float_t> DecomposeHDR(::UnityEngine::Color  hdrColor) ;

/// [Extension]
/// @brief Method WithAlpha, addr 0x5ae4524, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color WithAlpha(::UnityEngine::Color  c, float_t  alpha) ;

/// [Extension]
/// @brief Method WithAlpha, addr 0x5ae45e4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 WithAlpha(::UnityEngine::Color32  c, uint8_t  alpha) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorUtils(ColorUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorUtils(ColorUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3482};

/// @brief Field kMaxByteForOverexposedColor offset 0xffffffff size 0x1
static constexpr uint8_t  kMaxByteForOverexposedColor{static_cast<uint8_t>(0xbfu)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColorUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
