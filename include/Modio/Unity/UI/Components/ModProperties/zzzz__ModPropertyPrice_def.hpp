#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyPrice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyNumberBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModPropertyPrice)
namespace Modio::Mods {
class Mod;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyPrice;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyPrice");
// Dependencies Modio.Unity.UI.Components.ModProperties.ModPropertyNumberBase
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyPrice
class CORDL_TYPE ModPropertyPrice : public ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase {
public:
// Declarations
/// @brief Field _alsoDisableIfPurchased, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__alsoDisableIfPurchased, put=__cordl_internal_set__alsoDisableIfPurchased)) bool  _alsoDisableIfPurchased;

/// @brief Field _disableIfFree, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableIfFree, put=__cordl_internal_set__disableIfFree)) ::UnityW<::UnityEngine::GameObject>  _disableIfFree;

/// @brief Field _enableIfPurchased, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__enableIfPurchased, put=__cordl_internal_set__enableIfPurchased)) ::UnityW<::UnityEngine::GameObject>  _enableIfPurchased;

/// @brief Method GetValue, addr 0x9fc76a0, size 0x10c, virtual true, abstract: false, final false
inline int64_t GetValue(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice* New_ctor() ;

constexpr bool const& __cordl_internal_get__alsoDisableIfPurchased() const;

constexpr bool& __cordl_internal_get__alsoDisableIfPurchased() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__disableIfFree() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__disableIfFree() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__enableIfPurchased() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__enableIfPurchased() ;

constexpr void __cordl_internal_set__alsoDisableIfPurchased(bool  value) ;

constexpr void __cordl_internal_set__disableIfFree(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__enableIfPurchased(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc77ac, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyPrice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyPrice", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyPrice(ModPropertyPrice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyPrice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyPrice(ModPropertyPrice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27236};

/// [SerializeField]
/// @brief Field _disableIfFree, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____disableIfFree;

/// [SerializeField]
/// @brief Field _alsoDisableIfPurchased, offset: 0x30, size: 0x1, def value: None
 bool  ____alsoDisableIfPurchased;

/// [SerializeField]
/// @brief Field _enableIfPurchased, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____enableIfPurchased;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice, ____disableIfFree) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice, ____alsoDisableIfPurchased) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice, ____enableIfPurchased) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyPrice) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
