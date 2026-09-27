#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModGallery/ModioUIModGalleryPagination.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIModGalleryPagination)
namespace Modio::Unity::UI::Components::ModGallery {
class ModioUIModGallery;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModGallery {
class ModioUIModGalleryPagination;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*, "Modio.Unity.UI.Components.ModGallery", "ModioUIModGalleryPagination");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components::ModGallery {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModGallery.ModioUIModGalleryPagination
class CORDL_TYPE ModioUIModGalleryPagination : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Gallery, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Gallery, put=__cordl_internal_set_Gallery)) ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery>  Gallery;

/// @brief Field Index, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Index, put=__cordl_internal_set_Index)) int32_t  Index;

/// @brief Field _activeGameObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeGameObject, put=__cordl_internal_set__activeGameObject)) ::UnityW<::UnityEngine::GameObject>  _activeGameObject;

/// @brief Field _inactiveGameObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__inactiveGameObject, put=__cordl_internal_set__inactiveGameObject)) ::UnityW<::UnityEngine::GameObject>  _inactiveGameObject;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

static inline ::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination* New_ctor() ;

/// @brief Method OnPointerClick, addr 0x9fc9a18, size 0x80, virtual true, abstract: false, final true
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method SetState, addr 0x9fc96f4, size 0xd8, virtual false, abstract: false, final false
inline void SetState(bool  active) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery> const& __cordl_internal_get_Gallery() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery>& __cordl_internal_get_Gallery() ;

constexpr int32_t const& __cordl_internal_get_Index() const;

constexpr int32_t& __cordl_internal_get_Index() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__activeGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__activeGameObject() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__inactiveGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__inactiveGameObject() ;

constexpr void __cordl_internal_set_Gallery(::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery>  value) ;

constexpr void __cordl_internal_set_Index(int32_t  value) ;

constexpr void __cordl_internal_set__activeGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__inactiveGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc9a98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIModGalleryPagination() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIModGalleryPagination", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIModGalleryPagination(ModioUIModGalleryPagination && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIModGalleryPagination", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIModGalleryPagination(ModioUIModGalleryPagination const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27249};

/// @brief Field Gallery, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery>  ___Gallery;

/// @brief Field Index, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Index;

/// [SerializeField]
/// @brief Field _inactiveGameObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____inactiveGameObject;

/// [SerializeField]
/// @brief Field _activeGameObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____activeGameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination, ___Gallery) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination, ___Index) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination, ____inactiveGameObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination, ____activeGameObject) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModGallery
