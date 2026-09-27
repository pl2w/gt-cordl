#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ColorUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorUtility)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class CIELabColor;
}
namespace UnityEngine::ProBuilder {
class HSVColor;
}
namespace UnityEngine::ProBuilder {
class XYZColor;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ColorUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::ColorUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::ColorUtility*, "UnityEngine.ProBuilder", "ColorUtility");
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ColorUtility
class CORDL_TYPE ColorUtility : public ::System::Object {
public:
// Declarations
/// @brief Field ColorNameLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ColorNameLookup, put=setStaticF_ColorNameLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ProBuilder::CIELabColor*>*  ColorNameLookup;

/// @brief Method CIELabFromRGB, addr 0xb08a538, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::CIELabColor* CIELabFromRGB(float_t  R, float_t  G, float_t  B, float_t  Scale) ;

/// @brief Method DeltaE, addr 0xb08a180, size 0x44, virtual false, abstract: false, final false
static inline float_t DeltaE(::UnityEngine::ProBuilder::CIELabColor*  lhs, ::UnityEngine::ProBuilder::CIELabColor*  rhs) ;

/// @brief Method GetColor, addr 0xb08a0a0, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetColor(::UnityEngine::Vector3  vec) ;

/// @brief Method GetColorName, addr 0xb08a334, size 0x204, virtual false, abstract: false, final false
static inline ::StringW GetColorName(::UnityEngine::Color  InColor) ;

/// @brief Method HSVtoRGB, addr 0xb08a240, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::Color HSVtoRGB(float_t  h, float_t  s, float_t  v) ;

/// @brief Method HSVtoRGB, addr 0xb08a1c4, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color HSVtoRGB(::UnityEngine::ProBuilder::HSVColor*  hsv) ;

/// @brief Method RGBToXYZ, addr 0xb08999c, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(::UnityEngine::Color  col) ;

/// @brief Method RGBToXYZ, addr 0xb089a84, size 0x1b4, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::XYZColor* RGBToXYZ(float_t  r, float_t  g, float_t  b) ;

/// @brief Method RGBtoHSV, addr 0xb089618, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::HSVColor* RGBtoHSV(::UnityEngine::Color  color) ;

/// @brief Method XYZToCIE_Lab, addr 0xb089d80, size 0x178, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::CIELabColor* XYZToCIE_Lab(::UnityEngine::ProBuilder::XYZColor*  xyz) ;

/// @brief Method approx, addr 0xb08a03c, size 0x64, virtual false, abstract: false, final false
static inline bool approx(float_t  lhs, float_t  rhs) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ProBuilder::CIELabColor*>* getStaticF_ColorNameLookup() ;

static inline void setStaticF_ColorNameLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ProBuilder::CIELabColor*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorUtility(ColorUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorUtility(ColorUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24202};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::ColorUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
