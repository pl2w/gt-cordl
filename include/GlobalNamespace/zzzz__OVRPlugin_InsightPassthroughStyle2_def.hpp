#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_InsightPassthroughStyle2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Colorf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughColorMapType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InsightPassthroughStyleFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_InsightPassthroughStyle2)
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughStyle;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughStyle2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, "", "OVRPlugin/InsightPassthroughStyle2");
// Dependencies OVRPlugin::Colorf, OVRPlugin::InsightPassthroughColorMapType, OVRPlugin::InsightPassthroughStyleFlags, System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/InsightPassthroughStyle2
struct CORDL_TYPE OVRPlugin_InsightPassthroughStyle2 {
public:
// Declarations
/// @brief Method CopyTo, addr 0xa60f714, size 0x2c, virtual false, abstract: false, final false
inline void CopyTo(::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle>  target) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_InsightPassthroughStyle2() ;

// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureOpacityFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "EdgeColor", ty: "::GlobalNamespace::OVRPlugin_Colorf", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureColorMapType", ty: "::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureColorMapDataSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureColorMapData", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "LutSource", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LutTarget", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LutWeight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_InsightPassthroughStyle2(::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags  Flags, float_t  TextureOpacityFactor, ::GlobalNamespace::OVRPlugin_Colorf  EdgeColor, ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType  TextureColorMapType, uint32_t  TextureColorMapDataSize, ::System::IntPtr  TextureColorMapData, uint64_t  LutSource, uint64_t  LutTarget, float_t  LutWeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags  Flags;

/// @brief Field TextureOpacityFactor, offset: 0x4, size: 0x4, def value: None
 float_t  TextureOpacityFactor;

/// @brief Field EdgeColor, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Colorf  EdgeColor;

/// @brief Field TextureColorMapType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType  TextureColorMapType;

/// @brief Field TextureColorMapDataSize, offset: 0x1c, size: 0x4, def value: None
 uint32_t  TextureColorMapDataSize;

/// @brief Field TextureColorMapData, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  TextureColorMapData;

/// @brief Field LutSource, offset: 0x28, size: 0x8, def value: None
 uint64_t  LutSource;

/// @brief Field LutTarget, offset: 0x30, size: 0x8, def value: None
 uint64_t  LutTarget;

/// @brief Field LutWeight, offset: 0x38, size: 0x4, def value: None
 float_t  LutWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, Flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, TextureOpacityFactor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, EdgeColor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, TextureColorMapType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, TextureColorMapDataSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, TextureColorMapData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, LutSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, LutTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2, LutWeight) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
