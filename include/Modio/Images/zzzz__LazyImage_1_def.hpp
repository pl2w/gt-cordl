#pragma once
// IWYU pragma private; include "Modio/Images/LazyImage_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyImage_1)
namespace GlobalNamespace {
template<typename TImage,typename T>
struct LazyImage_1__SetImage_d__10_1;
}
namespace Modio::Images {
template<typename T>
class BaseImageCache_1;
}
namespace Modio::Images {
template<typename TResolution>
class ModioImageSource_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Modio::Images {
template<typename TImage>
class LazyImage_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Modio::Images::LazyImage_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::Images::LazyImage_1, "Modio.Images", "LazyImage`1");
// Dependencies Modio.Images.ImageReference, System.Object
namespace Modio::Images {
// cpp template
template<typename TImage>
// Is value type: false
// CS Name: Modio.Images.LazyImage`1<TImage>
class CORDL_TYPE LazyImage_1 : public ::System::Object {
public:
// Declarations
template<typename T>
using _SetImage_d__10_1 = ::GlobalNamespace::LazyImage_1__SetImage_d__10_1<TImage, T>;

/// @brief Field OnLoadingActive, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoadingActive, put=__cordl_internal_set_OnLoadingActive)) ::System::Action_1<bool>*  OnLoadingActive;

/// @brief Field OnNewImageAvailable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNewImageAvailable, put=__cordl_internal_set_OnNewImageAvailable)) ::System::Action_1<TImage>*  OnNewImageAvailable;

/// @brief Field _currentImageReference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentImageReference, put=__cordl_internal_set__currentImageReference)) ::Modio::Images::ImageReference  _currentImageReference;

/// @brief Field _failedToLoad, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__failedToLoad, put=__cordl_internal_set__failedToLoad)) bool  _failedToLoad;

/// @brief Field _imageCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__imageCache, put=__cordl_internal_set__imageCache)) ::Modio::Images::BaseImageCache_1<TImage>*  _imageCache;

/// @brief Method ApplyImage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ApplyImage(TImage  cachedImage) ;

static inline ::Modio::Images::LazyImage_1<TImage>* New_ctor(::Modio::Images::BaseImageCache_1<TImage>*  imageCache, ::System::Action_1<TImage>*  onImageAvailable, ::System::Action_1<bool>*  onLoadingActive) ;

/// [AsyncStateMachine(typeof(Modio.Images.LazyImage`1::<SetImage>d__10`1<TImage, T>))]
/// @brief Method SetImage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetImage(::Modio::Images::ModioImageSource_1<T>*  source, T  resolution) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnLoadingActive() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnLoadingActive() ;

constexpr ::System::Action_1<TImage>* const& __cordl_internal_get_OnNewImageAvailable() const;

constexpr ::System::Action_1<TImage>*& __cordl_internal_get_OnNewImageAvailable() ;

constexpr ::Modio::Images::ImageReference const& __cordl_internal_get__currentImageReference() const;

constexpr ::Modio::Images::ImageReference& __cordl_internal_get__currentImageReference() ;

constexpr bool const& __cordl_internal_get__failedToLoad() const;

constexpr bool& __cordl_internal_get__failedToLoad() ;

constexpr ::Modio::Images::BaseImageCache_1<TImage>* const& __cordl_internal_get__imageCache() const;

constexpr ::Modio::Images::BaseImageCache_1<TImage>*& __cordl_internal_get__imageCache() ;

constexpr void __cordl_internal_set_OnLoadingActive(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnNewImageAvailable(::System::Action_1<TImage>*  value) ;

constexpr void __cordl_internal_set__currentImageReference(::Modio::Images::ImageReference  value) ;

constexpr void __cordl_internal_set__failedToLoad(bool  value) ;

constexpr void __cordl_internal_set__imageCache(::Modio::Images::BaseImageCache_1<TImage>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Modio::Images::BaseImageCache_1<TImage>*  imageCache, ::System::Action_1<TImage>*  onImageAvailable, ::System::Action_1<bool>*  onLoadingActive) ;

/// [CompilerGenerated]
/// @brief Method add_OnLoadingActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnLoadingActive(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnNewImageAvailable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_OnNewImageAvailable(::System::Action_1<TImage>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnLoadingActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnLoadingActive(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnNewImageAvailable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_OnNewImageAvailable(::System::Action_1<TImage>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LazyImage_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LazyImage_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyImage_1(LazyImage_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyImage_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyImage_1(LazyImage_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17642};

/// [CompilerGenerated]
/// @brief Field OnNewImageAvailable, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<TImage>*  ___OnNewImageAvailable;

/// [CompilerGenerated]
/// @brief Field OnLoadingActive, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnLoadingActive;

/// @brief Field _currentImageReference, offset: 0x20, size: 0x8, def value: None
 ::Modio::Images::ImageReference  ____currentImageReference;

/// @brief Field _imageCache, offset: 0x28, size: 0x8, def value: None
 ::Modio::Images::BaseImageCache_1<TImage>*  ____imageCache;

/// @brief Field _failedToLoad, offset: 0x30, size: 0x1, def value: None
 bool  ____failedToLoad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Images
