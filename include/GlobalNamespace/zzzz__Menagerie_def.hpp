#pragma once
// IWYU pragma private; include "GlobalNamespace/Menagerie.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CritterAppearance_def.hpp"
#include "GlobalNamespace/zzzz__MenagerieSlot_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Menagerie)
namespace GlobalNamespace {
struct CritterAppearance;
}
namespace GlobalNamespace {
class CritterConfiguration;
}
namespace GlobalNamespace {
class CritterIndex;
}
namespace GlobalNamespace {
class CritterVisuals;
}
namespace GlobalNamespace {
class MenagerieCritter;
}
namespace GlobalNamespace {
class MenagerieDepositBox;
}
namespace GlobalNamespace {
class MenagerieSlot;
}
namespace GlobalNamespace {
class Menagerie_CritterData;
}
namespace GlobalNamespace {
class Menagerie_CritterSaveData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class Menagerie;
}
namespace GlobalNamespace {
class Menagerie_CritterData;
}
namespace GlobalNamespace {
class Menagerie_CritterSaveData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Menagerie*);
MARK_REF_T(::GlobalNamespace::Menagerie_CritterData*);
MARK_REF_T(::GlobalNamespace::Menagerie_CritterSaveData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Menagerie*, "", "Menagerie");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Menagerie_CritterData*, "", "Menagerie/CritterData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Menagerie_CritterSaveData*, "", "Menagerie/CritterSaveData");
// Dependencies MenagerieSlot, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Menagerie
class CORDL_TYPE Menagerie : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CritterData = ::GlobalNamespace::Menagerie_CritterData;

using CritterSaveData = ::GlobalNamespace::Menagerie_CritterSaveData;

/// @brief Field CollectionBox, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_CollectionBox, put=__cordl_internal_set_CollectionBox)) ::UnityW<::GlobalNamespace::MenagerieDepositBox>  CollectionBox;

/// @brief Field DonationBox, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_DonationBox, put=__cordl_internal_set_DonationBox)) ::UnityW<::GlobalNamespace::MenagerieDepositBox>  DonationBox;

/// @brief Field DonationText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_DonationText, put=__cordl_internal_set_DonationText)) ::StringW  DonationText;

/// @brief Field FavoriteBox, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_FavoriteBox, put=__cordl_internal_set_FavoriteBox)) ::UnityW<::GlobalNamespace::MenagerieDepositBox>  FavoriteBox;

/// @brief Field _collectionPageIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__collectionPageIndex, put=__cordl_internal_set__collectionPageIndex)) int32_t  _collectionPageIndex;

/// @brief Field _critters, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__critters, put=__cordl_internal_set__critters)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  _critters;

/// @brief Field _savedCritters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__savedCritters, put=__cordl_internal_set__savedCritters)) ::GlobalNamespace::Menagerie_CritterSaveData*  _savedCritters;

/// @brief Field _totalPages, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalPages, put=__cordl_internal_set__totalPages)) int32_t  _totalPages;

/// @brief Field collection, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_collection, put=__cordl_internal_set_collection)) ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>  collection;

/// @brief Field critterIndex, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_critterIndex, put=__cordl_internal_set_critterIndex)) ::UnityW<::GlobalNamespace::CritterIndex>  critterIndex;

/// @brief Field donationCounter, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_donationCounter, put=__cordl_internal_set_donationCounter)) ::UnityW<::TMPro::TextMeshPro>  donationCounter;

/// @brief Field favoriteCritterSlot, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_favoriteCritterSlot, put=__cordl_internal_set_favoriteCritterSlot)) ::UnityW<::GlobalNamespace::MenagerieSlot>  favoriteCritterSlot;

/// @brief Field newCritterPen, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_newCritterPen, put=__cordl_internal_set_newCritterPen)) ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>  newCritterPen;

/// @brief Field prefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::GlobalNamespace::MenagerieCritter>  prefab;

/// @brief Method AddCritterToCollection, addr 0x56f9ee4, size 0xc4, virtual false, abstract: false, final false
inline void AddCritterToCollection(::GlobalNamespace::Menagerie_CritterData*  critterData) ;

/// @brief Method AddCritterToNewCritterPen, addr 0x56fa0e0, size 0x1ac, virtual false, abstract: false, final false
inline void AddCritterToNewCritterPen(::GlobalNamespace::Menagerie_CritterData*  critterData) ;

/// @brief Method ClearAll, addr 0x56fb0d4, size 0x24, virtual false, abstract: false, final false
inline void ClearAll() ;

/// @brief Method ClearCollection, addr 0x56faee4, size 0x68, virtual false, abstract: false, final false
inline void ClearCollection() ;

/// @brief Method ClearNewCritterPen, addr 0x56face4, size 0x74, virtual false, abstract: false, final false
inline void ClearNewCritterPen() ;

/// @brief Method ClearSlot, addr 0x56fa964, size 0xb4, virtual false, abstract: false, final false
inline void ClearSlot(::GlobalNamespace::MenagerieSlot*  slot) ;

/// @brief Method CritterDepositedInCollectionBox, addr 0x56f9dd8, size 0x10c, virtual false, abstract: false, final false
inline void CritterDepositedInCollectionBox(::GlobalNamespace::MenagerieCritter*  critter) ;

/// @brief Method CritterDepositedInDonationBox, addr 0x56f98a4, size 0x104, virtual false, abstract: false, final false
inline void CritterDepositedInDonationBox(::GlobalNamespace::MenagerieCritter*  critter) ;

/// @brief Method CritterDepositedInFavoriteBox, addr 0x56f9c74, size 0xdc, virtual false, abstract: false, final false
inline void CritterDepositedInFavoriteBox(::GlobalNamespace::MenagerieCritter*  critter) ;

/// @brief Method DespawnCritterFromSlot, addr 0x56f9a14, size 0x168, virtual false, abstract: false, final false
inline void DespawnCritterFromSlot(::GlobalNamespace::MenagerieSlot*  slot) ;

/// @brief Method DonateCritter, addr 0x56f99a8, size 0x6c, virtual false, abstract: false, final false
inline void DonateCritter(::GlobalNamespace::Menagerie_CritterData*  critterData) ;

/// @brief Method DonateNewCritters, addr 0x56fb010, size 0xc4, virtual false, abstract: false, final false
inline void DonateNewCritters() ;

/// @brief Method GenerateCollectedCritters, addr 0x56fada0, size 0x144, virtual false, abstract: false, final false
inline void GenerateCollectedCritters(float_t  spawnChance) ;

/// @brief Method GenerateLegalNewCritters, addr 0x56fab94, size 0x150, virtual false, abstract: false, final false
inline void GenerateLegalNewCritters() ;

/// @brief Method GenerateNewCritterCount, addr 0x56faa90, size 0x104, virtual false, abstract: false, final false
inline void GenerateNewCritterCount(int32_t  critterCount) ;

/// @brief Method GenerateNewCritters, addr 0x56faa54, size 0x3c, virtual false, abstract: false, final false
inline void GenerateNewCritters() ;

/// @brief Method Load, addr 0x56f982c, size 0x78, virtual false, abstract: false, final false
inline void Load() ;

/// @brief Method LoadCrittersFromJson, addr 0x56fb1a4, size 0x170, virtual false, abstract: false, final false
inline void LoadCrittersFromJson(::StringW  jsonString) ;

/// @brief Method MoveNewCrittersToCollection, addr 0x56faf4c, size 0xc4, virtual false, abstract: false, final false
inline void MoveNewCrittersToCollection() ;

static inline ::GlobalNamespace::Menagerie* New_ctor() ;

/// @brief Method NextGroupCollectedCritters, addr 0x56faa18, size 0x18, virtual false, abstract: false, final false
inline void NextGroupCollectedCritters() ;

/// @brief Method OnDepositCritter, addr 0x56f9fa8, size 0x138, virtual false, abstract: false, final false
inline void OnDepositCritter(::GlobalNamespace::Menagerie_CritterData*  depositedCritter, int32_t  playerID) ;

/// @brief Method OnDrawGizmosSelected, addr 0x56fb54c, size 0x124, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method PrevGroupCollectedCritters, addr 0x56faa30, size 0x24, virtual false, abstract: false, final false
inline void PrevGroupCollectedCritters() ;

/// @brief Method ResetSavedCreatures, addr 0x56fb18c, size 0x18, virtual false, abstract: false, final false
inline void ResetSavedCreatures() ;

/// @brief Method Save, addr 0x56f9b7c, size 0xf8, virtual false, abstract: false, final false
inline void Save() ;

/// @brief Method SaveCrittersToJson, addr 0x56fb314, size 0xdc, virtual false, abstract: false, final false
inline ::StringW SaveCrittersToJson() ;

/// @brief Method SpawnCollectionCritterIfShowing, addr 0x56fa44c, size 0x4c, virtual false, abstract: false, final false
inline void SpawnCollectionCritterIfShowing(::GlobalNamespace::Menagerie_CritterData*  critter) ;

/// @brief Method SpawnCritterInSlot, addr 0x56fa28c, size 0x1c0, virtual false, abstract: false, final false
inline void SpawnCritterInSlot(::GlobalNamespace::MenagerieSlot*  slot, ::GlobalNamespace::Menagerie_CritterData*  critterData) ;

/// @brief Method Start, addr 0x56f94dc, size 0x350, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateCollection, addr 0x56fa810, size 0x154, virtual false, abstract: false, final false
inline void UpdateCollection() ;

/// @brief Method UpdateFavoriteCritter, addr 0x56f9d50, size 0x88, virtual false, abstract: false, final false
inline void UpdateFavoriteCritter() ;

/// @brief Method UpdateMenagerie, addr 0x56fa6b0, size 0x7c, virtual false, abstract: false, final false
inline void UpdateMenagerie() ;

/// @brief Method UpdateNewCritterPen, addr 0x56fa72c, size 0xe4, virtual false, abstract: false, final false
inline void UpdateNewCritterPen() ;

/// @brief Method ValidateSaveData, addr 0x56fb3f0, size 0x15c, virtual false, abstract: false, final false
inline void ValidateSaveData() ;

constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox> const& __cordl_internal_get_CollectionBox() const;

constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox>& __cordl_internal_get_CollectionBox() ;

constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox> const& __cordl_internal_get_DonationBox() const;

constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox>& __cordl_internal_get_DonationBox() ;

constexpr ::StringW const& __cordl_internal_get_DonationText() const;

constexpr ::StringW& __cordl_internal_get_DonationText() ;

constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox> const& __cordl_internal_get_FavoriteBox() const;

constexpr ::UnityW<::GlobalNamespace::MenagerieDepositBox>& __cordl_internal_get_FavoriteBox() ;

constexpr int32_t const& __cordl_internal_get__collectionPageIndex() const;

constexpr int32_t& __cordl_internal_get__collectionPageIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MenagerieCritter>>* const& __cordl_internal_get__critters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*& __cordl_internal_get__critters() ;

constexpr ::GlobalNamespace::Menagerie_CritterSaveData* const& __cordl_internal_get__savedCritters() const;

constexpr ::GlobalNamespace::Menagerie_CritterSaveData*& __cordl_internal_get__savedCritters() ;

constexpr int32_t const& __cordl_internal_get__totalPages() const;

constexpr int32_t& __cordl_internal_get__totalPages() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>> const& __cordl_internal_get_collection() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>& __cordl_internal_get_collection() ;

constexpr ::UnityW<::GlobalNamespace::CritterIndex> const& __cordl_internal_get_critterIndex() const;

constexpr ::UnityW<::GlobalNamespace::CritterIndex>& __cordl_internal_get_critterIndex() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_donationCounter() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_donationCounter() ;

constexpr ::UnityW<::GlobalNamespace::MenagerieSlot> const& __cordl_internal_get_favoriteCritterSlot() const;

constexpr ::UnityW<::GlobalNamespace::MenagerieSlot>& __cordl_internal_get_favoriteCritterSlot() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>> const& __cordl_internal_get_newCritterPen() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>& __cordl_internal_get_newCritterPen() ;

constexpr ::UnityW<::GlobalNamespace::MenagerieCritter> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::GlobalNamespace::MenagerieCritter>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_CollectionBox(::UnityW<::GlobalNamespace::MenagerieDepositBox>  value) ;

constexpr void __cordl_internal_set_DonationBox(::UnityW<::GlobalNamespace::MenagerieDepositBox>  value) ;

constexpr void __cordl_internal_set_DonationText(::StringW  value) ;

constexpr void __cordl_internal_set_FavoriteBox(::UnityW<::GlobalNamespace::MenagerieDepositBox>  value) ;

constexpr void __cordl_internal_set__collectionPageIndex(int32_t  value) ;

constexpr void __cordl_internal_set__critters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  value) ;

constexpr void __cordl_internal_set__savedCritters(::GlobalNamespace::Menagerie_CritterSaveData*  value) ;

constexpr void __cordl_internal_set__totalPages(int32_t  value) ;

constexpr void __cordl_internal_set_collection(::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>  value) ;

constexpr void __cordl_internal_set_critterIndex(::UnityW<::GlobalNamespace::CritterIndex>  value) ;

constexpr void __cordl_internal_set_donationCounter(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_favoriteCritterSlot(::UnityW<::GlobalNamespace::MenagerieSlot>  value) ;

constexpr void __cordl_internal_set_newCritterPen(::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::GlobalNamespace::MenagerieCritter>  value) ;

/// @brief Method .ctor, addr 0x56fb670, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Menagerie() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Menagerie", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Menagerie(Menagerie && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Menagerie", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Menagerie(Menagerie const& ) = delete;

/// @brief Field CrittersSavePrefsKey offset 0xffffffff size 0x8
static constexpr ::ConstString  CrittersSavePrefsKey{u"_SavedCritters"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{136};

/// [FormerlySerializedAs("creatureIndex")]
/// @brief Field critterIndex, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CritterIndex>  ___critterIndex;

/// @brief Field prefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenagerieCritter>  ___prefab;

/// @brief Field _critters, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MenagerieCritter>>*  ____critters;

/// @brief Field _savedCritters, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::Menagerie_CritterSaveData*  ____savedCritters;

/// @brief Field collection, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>  ___collection;

/// @brief Field newCritterPen, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MenagerieSlot>>  ___newCritterPen;

/// @brief Field favoriteCritterSlot, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenagerieSlot>  ___favoriteCritterSlot;

/// @brief Field _collectionPageIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ____collectionPageIndex;

/// @brief Field _totalPages, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____totalPages;

/// @brief Field DonationBox, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenagerieDepositBox>  ___DonationBox;

/// @brief Field FavoriteBox, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenagerieDepositBox>  ___FavoriteBox;

/// @brief Field CollectionBox, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenagerieDepositBox>  ___CollectionBox;

/// @brief Field donationCounter, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___donationCounter;

/// @brief Field DonationText, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___DonationText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Menagerie, ___critterIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___prefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ____critters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ____savedCritters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___collection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___newCritterPen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___favoriteCritterSlot) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ____collectionPageIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ____totalPages) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___DonationBox) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___FavoriteBox) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___CollectionBox) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___donationCounter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie, ___DonationText) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Menagerie) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Menagerie/CritterSaveData
class CORDL_TYPE Menagerie_CritterSaveData : public ::System::Object {
public:
// Declarations
/// @brief Field collectedCritters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectedCritters, put=__cordl_internal_set_collectedCritters)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::Menagerie_CritterData*>*  collectedCritters;

/// @brief Field donatedCritterCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_donatedCritterCount, put=__cordl_internal_set_donatedCritterCount)) int32_t  donatedCritterCount;

/// @brief Field favoriteCritter, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_favoriteCritter, put=__cordl_internal_set_favoriteCritter)) int32_t  favoriteCritter;

/// @brief Field newCritters, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_newCritters, put=__cordl_internal_set_newCritters)) ::System::Collections::Generic::List_1<::GlobalNamespace::Menagerie_CritterData*>*  newCritters;

/// @brief Method Clear, addr 0x56fb0f8, size 0x94, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GlobalNamespace::Menagerie_CritterSaveData* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::Menagerie_CritterData*>* const& __cordl_internal_get_collectedCritters() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::Menagerie_CritterData*>*& __cordl_internal_get_collectedCritters() ;

constexpr int32_t const& __cordl_internal_get_donatedCritterCount() const;

constexpr int32_t& __cordl_internal_get_donatedCritterCount() ;

constexpr int32_t const& __cordl_internal_get_favoriteCritter() const;

constexpr int32_t& __cordl_internal_get_favoriteCritter() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Menagerie_CritterData*>* const& __cordl_internal_get_newCritters() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Menagerie_CritterData*>*& __cordl_internal_get_newCritters() ;

constexpr void __cordl_internal_set_collectedCritters(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::Menagerie_CritterData*>*  value) ;

constexpr void __cordl_internal_set_donatedCritterCount(int32_t  value) ;

constexpr void __cordl_internal_set_favoriteCritter(int32_t  value) ;

constexpr void __cordl_internal_set_newCritters(::System::Collections::Generic::List_1<::GlobalNamespace::Menagerie_CritterData*>*  value) ;

/// @brief Method .ctor, addr 0x56fb758, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Menagerie_CritterSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Menagerie_CritterSaveData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Menagerie_CritterSaveData(Menagerie_CritterSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Menagerie_CritterSaveData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Menagerie_CritterSaveData(Menagerie_CritterSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{135};

/// @brief Field newCritters, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Menagerie_CritterData*>*  ___newCritters;

/// @brief Field collectedCritters, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::Menagerie_CritterData*>*  ___collectedCritters;

/// @brief Field donatedCritterCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___donatedCritterCount;

/// @brief Field favoriteCritter, offset: 0x24, size: 0x4, def value: None
 int32_t  ___favoriteCritter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Menagerie_CritterSaveData, ___newCritters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie_CritterSaveData, ___collectedCritters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie_CritterSaveData, ___donatedCritterCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie_CritterSaveData, ___favoriteCritter) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Menagerie_CritterSaveData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CritterAppearance, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Menagerie/CritterData
class CORDL_TYPE Menagerie_CritterData : public ::System::Object {
public:
// Declarations
/// @brief Field appearance, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_appearance, put=__cordl_internal_set_appearance)) ::GlobalNamespace::CritterAppearance  appearance;

/// @brief Field critterType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_critterType, put=__cordl_internal_set_critterType)) int32_t  critterType;

/// @brief Field instance, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_instance, put=__cordl_internal_set_instance)) ::UnityW<::GlobalNamespace::MenagerieCritter>  instance;

/// @brief Method GetConfiguration, addr 0x56fb83c, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::CritterConfiguration* GetConfiguration() ;

static inline ::GlobalNamespace::Menagerie_CritterData* New_ctor() ;

static inline ::GlobalNamespace::Menagerie_CritterData* New_ctor(::GlobalNamespace::CritterConfiguration*  config, ::GlobalNamespace::CritterAppearance  appearance) ;

static inline ::GlobalNamespace::Menagerie_CritterData* New_ctor(int32_t  critterType, ::GlobalNamespace::CritterAppearance  appearance) ;

static inline ::GlobalNamespace::Menagerie_CritterData* New_ctor(::GlobalNamespace::Menagerie_CritterData*  source) ;

static inline ::GlobalNamespace::Menagerie_CritterData* New_ctor(::GlobalNamespace::CritterVisuals*  visuals) ;

/// @brief Method ToString, addr 0x56fb9fc, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::GlobalNamespace::CritterAppearance const& __cordl_internal_get_appearance() const;

constexpr ::GlobalNamespace::CritterAppearance& __cordl_internal_get_appearance() ;

constexpr int32_t const& __cordl_internal_get_critterType() const;

constexpr int32_t& __cordl_internal_get_critterType() ;

constexpr ::UnityW<::GlobalNamespace::MenagerieCritter> const& __cordl_internal_get_instance() const;

constexpr ::UnityW<::GlobalNamespace::MenagerieCritter>& __cordl_internal_get_instance() ;

constexpr void __cordl_internal_set_appearance(::GlobalNamespace::CritterAppearance  value) ;

constexpr void __cordl_internal_set_critterType(int32_t  value) ;

constexpr void __cordl_internal_set_instance(::UnityW<::GlobalNamespace::MenagerieCritter>  value) ;

/// @brief Method .ctor, addr 0x56fb8a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x56fb8ac, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CritterConfiguration*  config, ::GlobalNamespace::CritterAppearance  appearance) ;

/// @brief Method .ctor, addr 0x56fad58, size 0x48, virtual false, abstract: false, final false
inline void _ctor(int32_t  critterType, ::GlobalNamespace::CritterAppearance  appearance) ;

/// @brief Method .ctor, addr 0x56fb9b8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Menagerie_CritterData*  source) ;

/// @brief Method .ctor, addr 0x56fb974, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CritterVisuals*  visuals) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Menagerie_CritterData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Menagerie_CritterData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Menagerie_CritterData(Menagerie_CritterData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Menagerie_CritterData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Menagerie_CritterData(Menagerie_CritterData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{134};

/// @brief Field critterType, offset: 0x10, size: 0x4, def value: None
 int32_t  ___critterType;

/// @brief Field appearance, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::CritterAppearance  ___appearance;

/// @brief Field instance, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenagerieCritter>  ___instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Menagerie_CritterData, ___critterType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie_CritterData, ___appearance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Menagerie_CritterData, ___instance) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Menagerie_CritterData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
