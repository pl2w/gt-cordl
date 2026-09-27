#pragma once
// IWYU pragma private; include "Modio/Images/BaseImageCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseImageCache)
namespace Modio::Images {
struct ImageReference;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Modio::Images {
class BaseImageCache;
}
// Write type traits
MARK_REF_T(::Modio::Images::BaseImageCache*);
DEFINE_IL2CPP_CLASS(::Modio::Images::BaseImageCache*, "Modio.Images", "BaseImageCache");
// Dependencies System.Object
namespace Modio::Images {
// Is value type: false
// CS Name: Modio.Images.BaseImageCache
class CORDL_TYPE BaseImageCache : public ::System::Object {
public:
// Declarations
/// @brief Field ImageCacheInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ImageCacheInstances, put=setStaticF_ImageCacheInstances)) ::System::Collections::Generic::List_1<::Modio::Images::BaseImageCache*>*  ImageCacheInstances;

/// @brief Field PendingDiskSaves, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PendingDiskSaves, put=setStaticF_PendingDiskSaves)) ::System::Collections::Generic::HashSet_1<::Modio::Images::ImageReference>*  PendingDiskSaves;

/// @brief Method CacheToDisk, addr 0xa040428, size 0x2d0, virtual false, abstract: false, final false
static inline void CacheToDisk(::Modio::Images::ImageReference  image, bool  shouldCache) ;

/// @brief Method CacheToDiskInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CacheToDiskInternal(::Modio::Images::ImageReference  imageReference) ;

static inline ::Modio::Images::BaseImageCache* New_ctor() ;

/// @brief Method .ctor, addr 0xa0406f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::Modio::Images::BaseImageCache*>* getStaticF_ImageCacheInstances() ;

static inline ::System::Collections::Generic::HashSet_1<::Modio::Images::ImageReference>* getStaticF_PendingDiskSaves() ;

static inline void setStaticF_ImageCacheInstances(::System::Collections::Generic::List_1<::Modio::Images::BaseImageCache*>*  value) ;

static inline void setStaticF_PendingDiskSaves(::System::Collections::Generic::HashSet_1<::Modio::Images::ImageReference>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseImageCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseImageCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseImageCache(BaseImageCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseImageCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseImageCache(BaseImageCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17634};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Images::BaseImageCache) == 0x10, "Size mismatch!");

} // namespace end def Modio::Images
