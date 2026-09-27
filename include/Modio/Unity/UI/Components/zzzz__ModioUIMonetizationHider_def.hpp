#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIMonetizationHider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUIMonetizationHider)
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIMonetizationHider;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIMonetizationHider*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIMonetizationHider*, "Modio.Unity.UI.Components", "ModioUIMonetizationHider");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIMonetizationHider
class CORDL_TYPE ModioUIMonetizationHider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _isMonetizationDisabled, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMonetizationDisabled, put=__cordl_internal_set__isMonetizationDisabled)) bool  _isMonetizationDisabled;

/// @brief Field _isOffline, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOffline, put=__cordl_internal_set__isOffline)) bool  _isOffline;

/// @brief Method ChangeActiveStateIfNeeded, addr 0x9fbab84, size 0x40, virtual false, abstract: false, final false
inline void ChangeActiveStateIfNeeded() ;

static inline ::Modio::Unity::UI::Components::ModioUIMonetizationHider* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fbaa80, size 0xfc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnOfflineStatusChanged, addr 0x9fbab7c, size 0x8, virtual false, abstract: false, final false
inline void OnOfflineStatusChanged(bool  isOffline) ;

/// @brief Method OnPluginInitialized, addr 0x9fbabc4, size 0xb4, virtual false, abstract: false, final false
inline void OnPluginInitialized() ;

/// @brief Method Start, addr 0x9fba984, size 0xfc, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__isMonetizationDisabled() const;

constexpr bool& __cordl_internal_get__isMonetizationDisabled() ;

constexpr bool const& __cordl_internal_get__isOffline() const;

constexpr bool& __cordl_internal_get__isOffline() ;

constexpr void __cordl_internal_set__isMonetizationDisabled(bool  value) ;

constexpr void __cordl_internal_set__isOffline(bool  value) ;

/// @brief Method .ctor, addr 0x9fbac78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIMonetizationHider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIMonetizationHider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIMonetizationHider(ModioUIMonetizationHider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIMonetizationHider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIMonetizationHider(ModioUIMonetizationHider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27150};

/// @brief Field _isOffline, offset: 0x20, size: 0x1, def value: None
 bool  ____isOffline;

/// @brief Field _isMonetizationDisabled, offset: 0x21, size: 0x1, def value: None
 bool  ____isMonetizationDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMonetizationHider, ____isOffline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMonetizationHider, ____isMonetizationDisabled) == 0x21, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIMonetizationHider) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
