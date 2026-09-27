#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyDependencies.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyDependencies)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyDependencies;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyDependencies");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyDependencies
class CORDL_TYPE ModPropertyDependencies : public ::System::Object {
public:
// Declarations
/// @brief Field _dependenciesCount, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__dependenciesCount, put=__cordl_internal_set__dependenciesCount)) ::UnityW<::TMPro::TMP_Text>  _dependenciesCount;

/// @brief Field _disableIfNoDependencies, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableIfNoDependencies, put=__cordl_internal_set__disableIfNoDependencies)) ::UnityW<::UnityEngine::GameObject>  _disableIfNoDependencies;

/// @brief Field _searchDependencies, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchDependencies, put=__cordl_internal_set__searchDependencies)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  _searchDependencies;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc60b0, size 0x144, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__dependenciesCount() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__dependenciesCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__disableIfNoDependencies() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__disableIfNoDependencies() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> const& __cordl_internal_get__searchDependencies() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>& __cordl_internal_get__searchDependencies() ;

constexpr void __cordl_internal_set__dependenciesCount(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__disableIfNoDependencies(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__searchDependencies(::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  value) ;

/// @brief Method .ctor, addr 0x9fc61f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyDependencies() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyDependencies", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyDependencies(ModPropertyDependencies && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyDependencies", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyDependencies(ModPropertyDependencies const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27224};

/// [SerializeField]
/// @brief Field _disableIfNoDependencies, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____disableIfNoDependencies;

/// [SerializeField]
/// @brief Field _dependenciesCount, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____dependenciesCount;

/// [SerializeField]
/// @brief Field _searchDependencies, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  ____searchDependencies;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies, ____disableIfNoDependencies) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies, ____dependenciesCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies, ____searchDependencies) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyDependencies) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
