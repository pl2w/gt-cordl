#pragma once
// IWYU pragma private; include "CosmeticRoom/EvolvingCosmeticKioskButtonSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EvolvingCosmeticKioskButtonSet)
namespace CosmeticRoom {
class EvolvingCosmeticKiosk;
}
namespace GlobalNamespace {
class EvolvingCosmetic;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GorillaNetworking::Store {
class DynamicCosmeticStand;
}
// Forward declare root types
namespace CosmeticRoom {
class EvolvingCosmeticKioskButtonSet;
}
// Write type traits
MARK_REF_T(::CosmeticRoom::EvolvingCosmeticKioskButtonSet*);
DEFINE_IL2CPP_CLASS(::CosmeticRoom::EvolvingCosmeticKioskButtonSet*, "CosmeticRoom", "EvolvingCosmeticKioskButtonSet");
// Dependencies UnityEngine.MonoBehaviour
namespace CosmeticRoom {
// Is value type: false
// CS Name: CosmeticRoom.EvolvingCosmeticKioskButtonSet
class CORDL_TYPE EvolvingCosmeticKioskButtonSet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cosmetic, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmetic, put=__cordl_internal_set__cosmetic)) ::UnityW<::GlobalNamespace::EvolvingCosmetic>  _cosmetic;

/// @brief Field _cosmeticStand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmeticStand, put=__cordl_internal_set__cosmeticStand)) ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  _cosmeticStand;

/// @brief Field _kiosk, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__kiosk, put=__cordl_internal_set__kiosk)) ::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>  _kiosk;

/// @brief Field _minusButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__minusButton, put=__cordl_internal_set__minusButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  _minusButton;

/// @brief Field _playfabId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__playfabId, put=__cordl_internal_set__playfabId)) ::StringW  _playfabId;

/// @brief Field _plusButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__plusButton, put=__cordl_internal_set__plusButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  _plusButton;

/// @brief Method GoBackward, addr 0x5c4dc9c, size 0xa0, virtual false, abstract: false, final false
inline void GoBackward() ;

/// @brief Method GoForward, addr 0x5c4d884, size 0xa0, virtual false, abstract: false, final false
inline void GoForward() ;

static inline ::CosmeticRoom::EvolvingCosmeticKioskButtonSet* New_ctor() ;

/// @brief Method RefreshOnPlayer, addr 0x5c4d924, size 0x378, virtual false, abstract: false, final false
inline void RefreshOnPlayer() ;

/// @brief Method RegisterKiosk, addr 0x5c4beb4, size 0xc8, virtual false, abstract: false, final false
inline void RegisterKiosk(::CosmeticRoom::EvolvingCosmeticKiosk*  kiosk) ;

/// @brief Method Reset, addr 0x5c4c0c0, size 0x40, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetCosmetic, addr 0x5c4c1e8, size 0x50, virtual false, abstract: false, final false
inline void SetCosmetic(::StringW  playfabId, ::GlobalNamespace::EvolvingCosmetic*  evolvingCosmetic) ;

constexpr ::UnityW<::GlobalNamespace::EvolvingCosmetic> const& __cordl_internal_get__cosmetic() const;

constexpr ::UnityW<::GlobalNamespace::EvolvingCosmetic>& __cordl_internal_get__cosmetic() ;

constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand> const& __cordl_internal_get__cosmeticStand() const;

constexpr ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>& __cordl_internal_get__cosmeticStand() ;

constexpr ::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk> const& __cordl_internal_get__kiosk() const;

constexpr ::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>& __cordl_internal_get__kiosk() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get__minusButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get__minusButton() ;

constexpr ::StringW const& __cordl_internal_get__playfabId() const;

constexpr ::StringW& __cordl_internal_get__playfabId() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get__plusButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get__plusButton() ;

constexpr void __cordl_internal_set__cosmetic(::UnityW<::GlobalNamespace::EvolvingCosmetic>  value) ;

constexpr void __cordl_internal_set__cosmeticStand(::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  value) ;

constexpr void __cordl_internal_set__kiosk(::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>  value) ;

constexpr void __cordl_internal_set__minusButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set__playfabId(::StringW  value) ;

constexpr void __cordl_internal_set__plusButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

/// @brief Method .ctor, addr 0x5c4dd3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmeticKioskButtonSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmeticKioskButtonSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolvingCosmeticKioskButtonSet(EvolvingCosmeticKioskButtonSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmeticKioskButtonSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolvingCosmeticKioskButtonSet(EvolvingCosmeticKioskButtonSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4240};

/// [SerializeField]
/// @brief Field _cosmeticStand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::DynamicCosmeticStand>  ____cosmeticStand;

/// [SerializeField]
/// @brief Field _plusButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ____plusButton;

/// [SerializeField]
/// @brief Field _minusButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ____minusButton;

/// @brief Field _kiosk, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::CosmeticRoom::EvolvingCosmeticKiosk>  ____kiosk;

/// @brief Field _cosmetic, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EvolvingCosmetic>  ____cosmetic;

/// @brief Field _playfabId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____playfabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKioskButtonSet, ____cosmeticStand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKioskButtonSet, ____plusButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKioskButtonSet, ____minusButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKioskButtonSet, ____kiosk) == 0x38, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKioskButtonSet, ____cosmetic) == 0x40, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::EvolvingCosmeticKioskButtonSet, ____playfabId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::CosmeticRoom::EvolvingCosmeticKioskButtonSet) == 0x50, "Size mismatch!");

} // namespace end def CosmeticRoom
