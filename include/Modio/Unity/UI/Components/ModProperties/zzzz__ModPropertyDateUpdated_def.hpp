#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyDateUpdated.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyDateBase_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyDateUpdated)
namespace Modio::Mods {
class Mod;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyDateUpdated;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyDateUpdated");
// Dependencies Modio.Unity.UI.Components.ModProperties.ModPropertyDateBase
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyDateUpdated
class CORDL_TYPE ModPropertyDateUpdated : public ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateBase {
public:
// Declarations
/// @brief Field _disableIfNoUpdate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableIfNoUpdate, put=__cordl_internal_set__disableIfNoUpdate)) ::UnityW<::UnityEngine::GameObject>  _disableIfNoUpdate;

/// @brief Method GetValue, addr 0x9fc5fb4, size 0x14, virtual true, abstract: false, final false
inline ::System::DateTime GetValue(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc5fc8, size 0xe4, virtual true, abstract: false, final false
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__disableIfNoUpdate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__disableIfNoUpdate() ;

constexpr void __cordl_internal_set__disableIfNoUpdate(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc60ac, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyDateUpdated() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyDateUpdated", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyDateUpdated(ModPropertyDateUpdated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyDateUpdated", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyDateUpdated(ModPropertyDateUpdated const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27223};

/// [SerializeField]
/// @brief Field _disableIfNoUpdate, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____disableIfNoUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated, ____disableIfNoUpdate) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyDateUpdated) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
