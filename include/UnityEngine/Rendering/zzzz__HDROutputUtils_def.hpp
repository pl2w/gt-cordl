#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDROutputUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HDROutputUtils)
namespace GlobalNamespace {
struct HDROutputUtils_HDRDisplayInformation;
}
namespace GlobalNamespace {
struct HDROutputUtils_Operation;
}
namespace UnityEngine::Rendering {
class HDROutputUtils_ShaderKeywords;
}
namespace UnityEngine::Rendering {
class HDROutputUtils_ShaderPropertyId;
}
namespace UnityEngine::Rendering {
struct ShaderKeywordSet;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class HDROutputUtils;
}
namespace UnityEngine::Rendering {
class HDROutputUtils_ShaderKeywords;
}
namespace UnityEngine::Rendering {
class HDROutputUtils_ShaderPropertyId;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::HDROutputUtils*);
MARK_REF_T(::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*);
MARK_REF_T(::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::HDROutputUtils*, "UnityEngine.Rendering", "HDROutputUtils");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*, "UnityEngine.Rendering", "HDROutputUtils/ShaderKeywords");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*, "UnityEngine.Rendering", "HDROutputUtils/ShaderPropertyId");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HDROutputUtils
class CORDL_TYPE HDROutputUtils : public ::System::Object {
public:
// Declarations
using HDRDisplayInformation = ::GlobalNamespace::HDROutputUtils_HDRDisplayInformation;

using Operation = ::GlobalNamespace::HDROutputUtils_Operation;

using ShaderKeywords = ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords;

using ShaderPropertyId = ::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId;

/// @brief Method ConfigureHDROutput, addr 0xb197668, size 0x254, virtual false, abstract: false, final false
static inline void ConfigureHDROutput(::UnityEngine::ComputeShader*  computeShader, ::UnityEngine::ColorGamut  gamut, ::GlobalNamespace::HDROutputUtils_Operation  operations) ;

/// @brief Method ConfigureHDROutput, addr 0xb197180, size 0x254, virtual false, abstract: false, final false
static inline void ConfigureHDROutput(::UnityEngine::Material*  material, ::UnityEngine::ColorGamut  gamut, ::GlobalNamespace::HDROutputUtils_Operation  operations) ;

/// @brief Method ConfigureHDROutput, addr 0xb1974a0, size 0x1c8, virtual false, abstract: false, final false
static inline void ConfigureHDROutput(::UnityEngine::Material*  material, ::GlobalNamespace::HDROutputUtils_Operation  operations) ;

/// @brief Method ConfigureHDROutput, addr 0xb1973d4, size 0xcc, virtual false, abstract: false, final false
static inline void ConfigureHDROutput(::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::ColorGamut  gamut) ;

/// @brief Method GetColorEncodingForGamut, addr 0xb196ffc, size 0x184, virtual false, abstract: false, final false
static inline bool GetColorEncodingForGamut(::UnityEngine::ColorGamut  gamut, ::by_ref<int32_t>  encoding) ;

/// @brief Method GetColorSpaceForGamut, addr 0xb196de8, size 0x214, virtual false, abstract: false, final false
static inline bool GetColorSpaceForGamut(::UnityEngine::ColorGamut  gamut, ::by_ref<int32_t>  colorspace) ;

/// @brief Method IsShaderVariantValid, addr 0xb1978bc, size 0x10c, virtual false, abstract: false, final false
static inline bool IsShaderVariantValid(::UnityEngine::Rendering::ShaderKeywordSet  shaderKeywordSet, bool  isHDREnabled) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HDROutputUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HDROutputUtils(HDROutputUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HDROutputUtils(HDROutputUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17035};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::HDROutputUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HDROutputUtils/ShaderPropertyId
class CORDL_TYPE HDROutputUtils_ShaderPropertyId : public ::System::Object {
public:
// Declarations
/// @brief Field hdrColorSpace, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_hdrColorSpace, put=setStaticF_hdrColorSpace)) int32_t  hdrColorSpace;

/// @brief Field hdrEncoding, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_hdrEncoding, put=setStaticF_hdrEncoding)) int32_t  hdrEncoding;

static inline int32_t getStaticF_hdrColorSpace() ;

static inline int32_t getStaticF_hdrEncoding() ;

static inline void setStaticF_hdrColorSpace(int32_t  value) ;

static inline void setStaticF_hdrEncoding(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HDROutputUtils_ShaderPropertyId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils_ShaderPropertyId", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HDROutputUtils_ShaderPropertyId(HDROutputUtils_ShaderPropertyId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils_ShaderPropertyId", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HDROutputUtils_ShaderPropertyId(HDROutputUtils_ShaderPropertyId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17034};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.ShaderKeyword
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.HDROutputUtils/ShaderKeywords
class CORDL_TYPE HDROutputUtils_ShaderKeywords : public ::System::Object {
public:
// Declarations
/// @brief Field HDRColorSpaceConversion, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_HDRColorSpaceConversion, put=setStaticF_HDRColorSpaceConversion)) ::UnityEngine::Rendering::ShaderKeyword  HDRColorSpaceConversion;

/// @brief Field HDRColorSpaceConversionAndEncoding, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_HDRColorSpaceConversionAndEncoding, put=setStaticF_HDRColorSpaceConversionAndEncoding)) ::UnityEngine::Rendering::ShaderKeyword  HDRColorSpaceConversionAndEncoding;

/// @brief Field HDREncoding, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_HDREncoding, put=setStaticF_HDREncoding)) ::UnityEngine::Rendering::ShaderKeyword  HDREncoding;

/// @brief Field HDRInput, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_HDRInput, put=setStaticF_HDRInput)) ::UnityEngine::Rendering::ShaderKeyword  HDRInput;

static inline ::UnityEngine::Rendering::ShaderKeyword getStaticF_HDRColorSpaceConversion() ;

static inline ::UnityEngine::Rendering::ShaderKeyword getStaticF_HDRColorSpaceConversionAndEncoding() ;

static inline ::UnityEngine::Rendering::ShaderKeyword getStaticF_HDREncoding() ;

static inline ::UnityEngine::Rendering::ShaderKeyword getStaticF_HDRInput() ;

static inline void setStaticF_HDRColorSpaceConversion(::UnityEngine::Rendering::ShaderKeyword  value) ;

static inline void setStaticF_HDRColorSpaceConversionAndEncoding(::UnityEngine::Rendering::ShaderKeyword  value) ;

static inline void setStaticF_HDREncoding(::UnityEngine::Rendering::ShaderKeyword  value) ;

static inline void setStaticF_HDRInput(::UnityEngine::Rendering::ShaderKeyword  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HDROutputUtils_ShaderKeywords() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils_ShaderKeywords", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HDROutputUtils_ShaderKeywords(HDROutputUtils_ShaderKeywords && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HDROutputUtils_ShaderKeywords", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HDROutputUtils_ShaderKeywords(HDROutputUtils_ShaderKeywords const& ) = delete;

/// @brief Field HDR_COLORSPACE_CONVERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  HDR_COLORSPACE_CONVERSION{u"HDR_COLORSPACE_CONVERSION"};

/// @brief Field HDR_COLORSPACE_CONVERSION_AND_ENCODING offset 0xffffffff size 0x8
static constexpr ::ConstString  HDR_COLORSPACE_CONVERSION_AND_ENCODING{u"HDR_COLORSPACE_CONVERSION_AND_ENCODING"};

/// @brief Field HDR_ENCODING offset 0xffffffff size 0x8
static constexpr ::ConstString  HDR_ENCODING{u"HDR_ENCODING"};

/// @brief Field HDR_INPUT offset 0xffffffff size 0x8
static constexpr ::ConstString  HDR_INPUT{u"HDR_INPUT"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17033};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
