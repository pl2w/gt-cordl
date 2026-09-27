#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut_ColorLutTextureConverter_TextureSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughColorLut_ColorLutTextureConverter_TextureSettings)
// Forward declare root types
namespace GlobalNamespace {
struct ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, "", "OVRPassthroughColorLut/ColorLutTextureConverter/TextureSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/ColorLutTextureConverter/TextureSettings
struct CORDL_TYPE ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings {
public:
// Declarations
 __declspec(property(get=get_ChannelCount)) int32_t  ChannelCount;

 __declspec(property(get=get_FlipY)) bool  FlipY;

 __declspec(property(get=get_Height)) int32_t  Height;

 __declspec(property(get=get_Resolution)) int32_t  Resolution;

 __declspec(property(get=get_SlicesPerRow)) int32_t  SlicesPerRow;

 __declspec(property(get=get_Width)) int32_t  Width;

/// @brief Method .ctor, addr 0xa67e904, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  resolution, int32_t  slicesPerRow, int32_t  channelCount, bool  flipY) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ChannelCount, addr 0xa67e9d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ChannelCount() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_FlipY, addr 0xa67e9d8, size 0x8, virtual false, abstract: false, final false
inline bool get_FlipY() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Height, addr 0xa67e9b8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Height() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Resolution, addr 0xa67e9c0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Resolution() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_SlicesPerRow, addr 0xa67e9c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SlicesPerRow() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Width, addr 0xa67e9b0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Width() ;

// Ctor Parameters []
// @brief default ctor
constexpr ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings() ;

// Ctor Parameters [CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Resolution_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SlicesPerRow_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ChannelCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FlipY_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings(int32_t  _Width_k__BackingField, int32_t  _Height_k__BackingField, int32_t  _Resolution_k__BackingField, int32_t  _SlicesPerRow_k__BackingField, int32_t  _ChannelCount_k__BackingField, bool  _FlipY_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <Width>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _Width_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Height>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _Height_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Resolution>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _Resolution_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SlicesPerRow>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _SlicesPerRow_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChannelCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  _ChannelCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FlipY>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  _FlipY_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _Width_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _Height_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _Resolution_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _SlicesPerRow_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _ChannelCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _FlipY_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
