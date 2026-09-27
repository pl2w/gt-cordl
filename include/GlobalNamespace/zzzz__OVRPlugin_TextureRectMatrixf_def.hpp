#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_TextureRectMatrixf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_TextureRectMatrixf)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_TextureRectMatrixf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_TextureRectMatrixf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_TextureRectMatrixf, "", "OVRPlugin/TextureRectMatrixf");
// Dependencies UnityEngine.Rect, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/TextureRectMatrixf
struct CORDL_TYPE OVRPlugin_TextureRectMatrixf {
public:
// Declarations
/// @brief Field zero, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::GlobalNamespace::OVRPlugin_TextureRectMatrixf  zero;

/// @brief Method ToString, addr 0xa60e540, size 0x228, virtual true, abstract: false, final false
inline ::StringW ToString() ;

static inline ::GlobalNamespace::OVRPlugin_TextureRectMatrixf getStaticF_zero() ;

static inline void setStaticF_zero(::GlobalNamespace::OVRPlugin_TextureRectMatrixf  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_TextureRectMatrixf() ;

// Ctor Parameters [CppParam { name: "leftRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftScaleBias", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightScaleBias", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_TextureRectMatrixf(::UnityEngine::Rect  leftRect, ::UnityEngine::Rect  rightRect, ::UnityEngine::Vector4  leftScaleBias, ::UnityEngine::Vector4  rightScaleBias) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12089};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field leftRect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  leftRect;

/// @brief Field rightRect, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  rightRect;

/// @brief Field leftScaleBias, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  leftScaleBias;

/// @brief Field rightScaleBias, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  rightScaleBias;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_TextureRectMatrixf, leftRect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_TextureRectMatrixf, rightRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_TextureRectMatrixf, leftScaleBias) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_TextureRectMatrixf, rightScaleBias) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_TextureRectMatrixf) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
