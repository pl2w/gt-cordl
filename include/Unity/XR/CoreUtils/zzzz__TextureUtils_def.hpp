#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/TextureUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextureUtils)
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class TextureUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::TextureUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::TextureUtils*, "Unity.XR.CoreUtils", "TextureUtils");
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.TextureUtils
class CORDL_TYPE TextureUtils : public ::System::Object {
public:
// Declarations
/// @brief Method RenderTextureToTexture2D, addr 0xb3faac0, size 0x78, virtual false, abstract: false, final false
static inline void RenderTextureToTexture2D(::UnityEngine::RenderTexture*  renderTexture, ::UnityEngine::Texture2D*  texture) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureUtils(TextureUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureUtils(TextureUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30431};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::TextureUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
