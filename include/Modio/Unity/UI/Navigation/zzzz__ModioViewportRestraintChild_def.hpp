#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioViewportRestraintChild.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioViewportRestraintChild)
namespace Modio::Unity::UI::Navigation {
class ModioViewportRestraint;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Modio::Unity::UI::Navigation {
class ModioViewportRestraintChild;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioViewportRestraintChild*, "Modio.Unity.UI.Navigation", "ModioViewportRestraintChild");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioViewportRestraintChild
class CORDL_TYPE ModioViewportRestraintChild : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _overrideFocusTo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideFocusTo, put=__cordl_internal_set__overrideFocusTo)) ::UnityW<::UnityEngine::RectTransform>  _overrideFocusTo;

/// @brief Field _viewportRestraint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__viewportRestraint, put=__cordl_internal_set__viewportRestraint)) ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>  _viewportRestraint;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

/// @brief Method Awake, addr 0x9fb42d4, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MoveToSelected, addr 0x9fb4418, size 0xf4, virtual false, abstract: false, final false
inline void MoveToSelected() ;

static inline ::Modio::Unity::UI::Navigation::ModioViewportRestraintChild* New_ctor() ;

/// @brief Method OnSelect, addr 0x9fb4394, size 0x84, virtual true, abstract: false, final true
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__overrideFocusTo() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__overrideFocusTo() ;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint> const& __cordl_internal_get__viewportRestraint() const;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>& __cordl_internal_get__viewportRestraint() ;

constexpr void __cordl_internal_set__overrideFocusTo(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__viewportRestraint(::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>  value) ;

/// @brief Method .ctor, addr 0x9fb450c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioViewportRestraintChild() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioViewportRestraintChild", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioViewportRestraintChild(ModioViewportRestraintChild && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioViewportRestraintChild", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioViewportRestraintChild(ModioViewportRestraintChild const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27121};

/// [SerializeField]
/// @brief Field _overrideFocusTo, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____overrideFocusTo;

/// @brief Field _viewportRestraint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>  ____viewportRestraint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraintChild, ____overrideFocusTo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioViewportRestraintChild, ____viewportRestraint) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioViewportRestraintChild) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation
