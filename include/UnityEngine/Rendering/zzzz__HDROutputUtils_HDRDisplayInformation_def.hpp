#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDROutputUtils_HDRDisplayInformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDROutputUtils_HDRDisplayInformation)
// Forward declare root types
namespace GlobalNamespace {
struct HDROutputUtils_HDRDisplayInformation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HDROutputUtils_HDRDisplayInformation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HDROutputUtils_HDRDisplayInformation, "UnityEngine.Rendering", "HDROutputUtils/HDRDisplayInformation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.HDROutputUtils/HDRDisplayInformation
struct CORDL_TYPE HDROutputUtils_HDRDisplayInformation {
public:
// Declarations
/// @brief Method .ctor, addr 0xb1979c8, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxFullFrameToneMapLuminance, int32_t  maxToneMapLuminance, int32_t  minToneMapLuminance, float_t  hdrPaperWhiteNits) ;

// Ctor Parameters []
// @brief default ctor
constexpr HDROutputUtils_HDRDisplayInformation() ;

// Ctor Parameters [CppParam { name: "maxFullFrameToneMapLuminance", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxToneMapLuminance", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minToneMapLuminance", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "paperWhiteNits", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr HDROutputUtils_HDRDisplayInformation(int32_t  maxFullFrameToneMapLuminance, int32_t  maxToneMapLuminance, int32_t  minToneMapLuminance, float_t  paperWhiteNits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field maxFullFrameToneMapLuminance, offset: 0x0, size: 0x4, def value: None
 int32_t  maxFullFrameToneMapLuminance;

/// @brief Field maxToneMapLuminance, offset: 0x4, size: 0x4, def value: None
 int32_t  maxToneMapLuminance;

/// @brief Field minToneMapLuminance, offset: 0x8, size: 0x4, def value: None
 int32_t  minToneMapLuminance;

/// @brief Field paperWhiteNits, offset: 0xc, size: 0x4, def value: None
 float_t  paperWhiteNits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HDROutputUtils_HDRDisplayInformation, maxFullFrameToneMapLuminance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HDROutputUtils_HDRDisplayInformation, maxToneMapLuminance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HDROutputUtils_HDRDisplayInformation, minToneMapLuminance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HDROutputUtils_HDRDisplayInformation, paperWhiteNits) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HDROutputUtils_HDRDisplayInformation) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
