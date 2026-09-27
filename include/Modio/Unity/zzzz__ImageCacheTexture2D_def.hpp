#pragma once
// IWYU pragma private; include "Modio/Unity/ImageCacheTexture2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Images/zzzz__BaseImageCache_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageCacheTexture2D)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Modio::Unity {
class ImageCacheTexture2D;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ImageCacheTexture2D*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ImageCacheTexture2D*, "Modio.Unity", "ImageCacheTexture2D");
// Dependencies Modio.Images.BaseImageCache`1<T>
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ImageCacheTexture2D
class CORDL_TYPE ImageCacheTexture2D : public ::Modio::Images::BaseImageCache_1<::UnityW<::UnityEngine::Texture2D>> {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Modio::Unity::ImageCacheTexture2D*  Instance;

/// @brief Method Convert, addr 0x9f8fb18, size 0x174, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> Convert(::ArrayW<uint8_t>  rawBytes) ;

/// @brief Method ConvertToBytes, addr 0x9f8fc8c, size 0x7c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ConvertToBytes(::UnityEngine::Texture2D*  image) ;

static inline ::Modio::Unity::ImageCacheTexture2D* New_ctor() ;

/// @brief Method .ctor, addr 0x9f8fd08, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::ImageCacheTexture2D* getStaticF_Instance() ;

static inline void setStaticF_Instance(::Modio::Unity::ImageCacheTexture2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageCacheTexture2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageCacheTexture2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageCacheTexture2D(ImageCacheTexture2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageCacheTexture2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageCacheTexture2D(ImageCacheTexture2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::ImageCacheTexture2D) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity
