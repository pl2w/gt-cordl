#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUITokenPurchase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioUITokenPurchase)
namespace GlobalNamespace {
struct ModioUITokenPurchase__GetCurrencyPacks_d__5;
}
namespace Modio::Monetization {
struct PortalSku;
}
namespace Modio::Unity::UI::Components {
class ModioUITokenPack;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUITokenPurchase;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUITokenPurchase*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUITokenPurchase*, "Modio.Unity.UI.Components", "ModioUITokenPurchase");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUITokenPurchase
class CORDL_TYPE ModioUITokenPurchase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetCurrencyPacks_d__5 = ::GlobalNamespace::ModioUITokenPurchase__GetCurrencyPacks_d__5;

/// @brief Field _currentPacks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPacks, put=__cordl_internal_set__currentPacks)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>>*  _currentPacks;

/// @brief Field _referencePack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__referencePack, put=__cordl_internal_set__referencePack)) ::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>  _referencePack;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Components.ModioUITokenPurchase::<GetCurrencyPacks>d__5))]
/// @brief Method GetCurrencyPacks, addr 0x9fbd768, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* GetCurrencyPacks() ;

static inline ::Modio::Unity::UI::Components::ModioUITokenPurchase* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fbd6d4, size 0x80, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPluginInitialized, addr 0x9fbd754, size 0x14, virtual false, abstract: false, final false
inline void OnPluginInitialized() ;

/// @brief Method ShowTokenPacks, addr 0x9fbd840, size 0x2a8, virtual false, abstract: false, final false
inline void ShowTokenPacks(::ArrayW<::Modio::Monetization::PortalSku>  sku) ;

/// @brief Method Start, addr 0x9fbd638, size 0x9c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>>* const& __cordl_internal_get__currentPacks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>>*& __cordl_internal_get__currentPacks() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack> const& __cordl_internal_get__referencePack() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>& __cordl_internal_get__referencePack() ;

constexpr void __cordl_internal_set__currentPacks(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>>*  value) ;

constexpr void __cordl_internal_set__referencePack(::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>  value) ;

/// @brief Method .ctor, addr 0x9fbdae8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITokenPurchase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPurchase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITokenPurchase(ModioUITokenPurchase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPurchase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITokenPurchase(ModioUITokenPurchase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27163};

/// [SerializeField]
/// @brief Field _referencePack, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>  ____referencePack;

/// @brief Field _currentPacks, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITokenPack>>*  ____currentPacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPurchase, ____referencePack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPurchase, ____currentPacks) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUITokenPurchase) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
