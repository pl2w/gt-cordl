#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModGallery/ModioUIModGallery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__Mod_GalleryResolution_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIModProperties_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIModGallery)
namespace Modio::Images {
template<typename TImage>
class LazyImage_1;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModGallery {
class ModioUIModGalleryPagination;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModGallery {
class ModioUIModGallery;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery*, "Modio.Unity.UI.Components.ModGallery", "ModioUIModGallery");
// Dependencies Modio.Mods.Mod::GalleryResolution, Modio.Unity.UI.Components.ModioUIModProperties
namespace Modio::Unity::UI::Components::ModGallery {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModGallery.ModioUIModGallery
class CORDL_TYPE ModioUIModGallery : public ::Modio::Unity::UI::Components::ModioUIModProperties {
public:
// Declarations
/// @brief Field _galleryCount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__galleryCount, put=__cordl_internal_set__galleryCount)) int32_t  _galleryCount;

/// @brief Field _image, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__image, put=__cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::RawImage>  _image;

/// @brief Field _index, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field _lazyImage, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__lazyImage, put=__cordl_internal_set__lazyImage)) ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  _lazyImage;

/// @brief Field _loadedActive, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadedActive, put=__cordl_internal_set__loadedActive)) ::UnityW<::UnityEngine::GameObject>  _loadedActive;

/// @brief Field _loadingActive, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingActive, put=__cordl_internal_set__loadingActive)) ::UnityW<::UnityEngine::GameObject>  _loadingActive;

/// @brief Field _max, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__max, put=__cordl_internal_set__max)) int32_t  _max;

/// @brief Field _mod, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Field _pagination, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__pagination, put=__cordl_internal_set__pagination)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>>*  _pagination;

/// @brief Field _paginationTemplate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__paginationTemplate, put=__cordl_internal_set__paginationTemplate)) ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>  _paginationTemplate;

/// @brief Field _resolution, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__resolution, put=__cordl_internal_set__resolution)) ::GlobalNamespace::Mod_GalleryResolution  _resolution;

/// @brief Field _useHighestAvailableResolutionAsFallback, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__useHighestAvailableResolutionAsFallback, put=__cordl_internal_set__useHighestAvailableResolutionAsFallback)) bool  _useHighestAvailableResolutionAsFallback;

/// @brief Field _wrap, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__wrap, put=__cordl_internal_set__wrap)) bool  _wrap;

/// @brief Method Awake, addr 0x9fc8e1c, size 0x130, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GoTo, addr 0x9fc9474, size 0x280, virtual false, abstract: false, final false
inline void GoTo(int32_t  index) ;

static inline ::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery* New_ctor() ;

/// @brief Method Next, addr 0x9fc97ec, size 0x28, virtual false, abstract: false, final false
inline void Next() ;

/// @brief Method OnDisable, addr 0x9fc8f4c, size 0xe8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Prev, addr 0x9fc97cc, size 0x20, virtual false, abstract: false, final false
inline void Prev() ;

/// @brief Method SetMod, addr 0x9fc9084, size 0x278, virtual false, abstract: false, final false
inline void SetMod(::Modio::Mods::Mod*  mod) ;

/// @brief Method UpdateProperties, addr 0x9fc9034, size 0x50, virtual true, abstract: false, final false
inline void UpdateProperties() ;

/// @brief Method UpdateTabListener, addr 0x9fc92fc, size 0x178, virtual false, abstract: false, final false
inline void UpdateTabListener() ;

/// [CompilerGenerated]
/// @brief Method <GoTo>b__18_0, addr 0x9fc98b0, size 0x98, virtual false, abstract: false, final false
inline void _GoTo_b__18_0(::UnityEngine::Texture2D*  texture2D) ;

/// [CompilerGenerated]
/// @brief Method <GoTo>b__18_1, addr 0x9fc9948, size 0xd0, virtual false, abstract: false, final false
inline void _GoTo_b__18_1(bool  isLoading) ;

constexpr int32_t const& __cordl_internal_get__galleryCount() const;

constexpr int32_t& __cordl_internal_get__galleryCount() ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get__image() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get__image() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get__lazyImage() const;

constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__lazyImage() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadedActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadedActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadingActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadingActive() ;

constexpr int32_t const& __cordl_internal_get__max() const;

constexpr int32_t& __cordl_internal_get__max() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>>* const& __cordl_internal_get__pagination() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>>*& __cordl_internal_get__pagination() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination> const& __cordl_internal_get__paginationTemplate() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>& __cordl_internal_get__paginationTemplate() ;

constexpr ::GlobalNamespace::Mod_GalleryResolution const& __cordl_internal_get__resolution() const;

constexpr ::GlobalNamespace::Mod_GalleryResolution& __cordl_internal_get__resolution() ;

constexpr bool const& __cordl_internal_get__useHighestAvailableResolutionAsFallback() const;

constexpr bool& __cordl_internal_get__useHighestAvailableResolutionAsFallback() ;

constexpr bool const& __cordl_internal_get__wrap() const;

constexpr bool& __cordl_internal_get__wrap() ;

constexpr void __cordl_internal_set__galleryCount(int32_t  value) ;

constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set__lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set__loadedActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__loadingActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__max(int32_t  value) ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__pagination(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>>*  value) ;

constexpr void __cordl_internal_set__paginationTemplate(::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>  value) ;

constexpr void __cordl_internal_set__resolution(::GlobalNamespace::Mod_GalleryResolution  value) ;

constexpr void __cordl_internal_set__useHighestAvailableResolutionAsFallback(bool  value) ;

constexpr void __cordl_internal_set__wrap(bool  value) ;

/// @brief Method .ctor, addr 0x9fc9814, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIModGallery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIModGallery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIModGallery(ModioUIModGallery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIModGallery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIModGallery(ModioUIModGallery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27248};

/// [SerializeField]
/// @brief Field _image, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ____image;

/// [SerializeField]
/// @brief Field _resolution, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::Mod_GalleryResolution  ____resolution;

/// [SerializeField]
/// @brief Field _useHighestAvailableResolutionAsFallback, offset: 0x44, size: 0x1, def value: None
 bool  ____useHighestAvailableResolutionAsFallback;

/// [SerializeField]
/// @brief Field _paginationTemplate, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>  ____paginationTemplate;

/// [SerializeField]
/// @brief Field _max, offset: 0x50, size: 0x4, def value: None
 int32_t  ____max;

/// [SerializeField]
/// @brief Field _wrap, offset: 0x54, size: 0x1, def value: None
 bool  ____wrap;

/// [Space]
/// [Tooltip("(Optional) Active while loading, inactive once loaded.")]
/// [SerializeField]
/// @brief Field _loadingActive, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loadingActive;

/// [Tooltip("(Optional) Inactive while loading, active once loaded.")]
/// [SerializeField]
/// @brief Field _loadedActive, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loadedActive;

/// @brief Field _mod, offset: 0x68, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

/// @brief Field _galleryCount, offset: 0x70, size: 0x4, def value: None
 int32_t  ____galleryCount;

/// @brief Field _index, offset: 0x74, size: 0x4, def value: None
 int32_t  ____index;

/// @brief Field _pagination, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination>>*  ____pagination;

/// @brief Field _lazyImage, offset: 0x80, size: 0x8, def value: None
 ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  ____lazyImage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____image) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____resolution) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____useHighestAvailableResolutionAsFallback) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____paginationTemplate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____max) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____wrap) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____loadingActive) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____loadedActive) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____mod) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____galleryCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____index) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____pagination) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery, ____lazyImage) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery) == 0x88, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModGallery
