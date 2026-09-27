#pragma once
// IWYU pragma private; include "GlobalNamespace/TexFormatInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TexFormatInfo)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct TexFormatInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TexFormatInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TexFormatInfo, "", "TexFormatInfo");
// Dependencies UnityEngine.FilterMode, UnityEngine.TextureFormat
namespace GlobalNamespace {
// Is value type: true
// CS Name: TexFormatInfo
struct CORDL_TYPE TexFormatInfo {
public:
// Declarations
/// @brief Method ToString, addr 0x56a7928, size 0x3a8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x56a7890, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Texture2D*  tex2d) ;

// Ctor Parameters []
// @brief default ctor
constexpr TexFormatInfo() ;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "format", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None, comment: None }, CppParam { name: "filterMode", ty: "::UnityEngine::FilterMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "mipmapCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLinearColor", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr TexFormatInfo(bool  isValid, int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, ::UnityEngine::FilterMode  filterMode, int32_t  mipmapCount, bool  isLinearColor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{915};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
 bool  isValid;

/// @brief Field width, offset: 0x4, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0x8, size: 0x4, def value: None
 int32_t  height;

/// @brief Field format, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::TextureFormat  format;

/// @brief Field filterMode, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::FilterMode  filterMode;

/// @brief Field mipmapCount, offset: 0x14, size: 0x4, def value: None
 int32_t  mipmapCount;

/// @brief Field isLinearColor, offset: 0x18, size: 0x1, def value: None
 bool  isLinearColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TexFormatInfo, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexFormatInfo, width) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexFormatInfo, height) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexFormatInfo, format) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexFormatInfo, filterMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexFormatInfo, mipmapCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TexFormatInfo, isLinearColor) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TexFormatInfo) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
