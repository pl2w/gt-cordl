#pragma once
// IWYU pragma private; include "Modio/Images/ImageCacheBytes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Images/zzzz__BaseImageCache_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageCacheBytes)
// Forward declare root types
namespace Modio::Images {
class ImageCacheBytes;
}
// Write type traits
MARK_REF_T(::Modio::Images::ImageCacheBytes*);
DEFINE_IL2CPP_CLASS(::Modio::Images::ImageCacheBytes*, "Modio.Images", "ImageCacheBytes");
// Dependencies Modio.Images.BaseImageCache`1<T>
namespace Modio::Images {
// Is value type: false
// CS Name: Modio.Images.ImageCacheBytes
class CORDL_TYPE ImageCacheBytes : public ::Modio::Images::BaseImageCache_1<::ArrayW<uint8_t>> {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Modio::Images::ImageCacheBytes*  Instance;

/// @brief Method Convert, addr 0xa0407f0, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Convert(::ArrayW<uint8_t>  rawBytes) ;

/// @brief Method ConvertToBytes, addr 0xa0407f8, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ConvertToBytes(::ArrayW<uint8_t>  image) ;

static inline ::Modio::Images::ImageCacheBytes* New_ctor() ;

/// @brief Method .ctor, addr 0xa040800, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Images::ImageCacheBytes* getStaticF_Instance() ;

static inline void setStaticF_Instance(::Modio::Images::ImageCacheBytes*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageCacheBytes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageCacheBytes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageCacheBytes(ImageCacheBytes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageCacheBytes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageCacheBytes(ImageCacheBytes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17638};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Images::ImageCacheBytes) == 0x20, "Size mismatch!");

} // namespace end def Modio::Images
