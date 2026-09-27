#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderDispenserShelf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderDispenserShelf)
namespace GlobalNamespace {
class BuilderDispenser;
}
namespace GlobalNamespace {
class BuilderPieceSet_BuilderDisplayGroup;
}
namespace GlobalNamespace {
struct BuilderPieceSet_BuilderPieceCategory;
}
namespace GlobalNamespace {
struct BuilderPieceSet_PieceInfo;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class BuilderSetSelector;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderDispenserShelf;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderDispenserShelf*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderDispenserShelf*, "", "BuilderDispenserShelf");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderDispenserShelf
class CORDL_TYPE BuilderDispenserShelf : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _includedCategories, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__includedCategories, put=__cordl_internal_set__includedCategories)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  _includedCategories;

/// @brief Field activeDispensers, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeDispensers, put=__cordl_internal_set_activeDispensers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>*  activeDispensers;

/// @brief Field animatingShelf, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_animatingShelf, put=__cordl_internal_set_animatingShelf)) bool  animatingShelf;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field currentGroup, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGroup, put=__cordl_internal_set_currentGroup)) ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  currentGroup;

/// @brief Field dispenserPool, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenserPool, put=__cordl_internal_set_dispenserPool)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>*  dispenserPool;

/// @brief Field dispenserPrefab, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenserPrefab, put=__cordl_internal_set_dispenserPrefab)) ::UnityW<::GlobalNamespace::BuilderDispenser>  dispenserPrefab;

/// @brief Field dispenserToClear, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_dispenserToClear, put=__cordl_internal_set_dispenserToClear)) int32_t  dispenserToClear;

/// @brief Field dispenserToUpdate, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_dispenserToUpdate, put=__cordl_internal_set_dispenserToUpdate)) int32_t  dispenserToUpdate;

/// @brief Field initialized, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field piecesInSet, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_piecesInSet, put=__cordl_internal_set_piecesInSet)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  piecesInSet;

/// @brief Field playSpawnSetSound, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_playSpawnSetSound, put=__cordl_internal_set_playSpawnSetSound)) bool  playSpawnSetSound;

/// @brief Field resetAnimation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetAnimation, put=__cordl_internal_set_resetAnimation)) ::UnityW<::UnityEngine::Animation>  resetAnimation;

/// @brief Field resetSoundBank, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetSoundBank, put=__cordl_internal_set_resetSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  resetSoundBank;

/// @brief Field setSelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_setSelector, put=__cordl_internal_set_setSelector)) ::UnityW<::GlobalNamespace::BuilderSetSelector>  setSelector;

/// @brief Field shelfCenter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelfCenter, put=__cordl_internal_set_shelfCenter)) ::UnityW<::UnityEngine::Transform>  shelfCenter;

/// @brief Field shelfID, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfID, put=__cordl_internal_set_shelfID)) int32_t  shelfID;

/// @brief Field shelfWidth, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfWidth, put=__cordl_internal_set_shelfWidth)) float_t  shelfWidth;

/// @brief Field shouldVerifySetSelection, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldVerifySetSelection, put=__cordl_internal_set_shouldVerifySetSelection)) bool  shouldVerifySetSelection;

/// @brief Field spawnNewSetSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnNewSetSound, put=__cordl_internal_set_spawnNewSetSound)) ::UnityW<::UnityEngine::AudioClip>  spawnNewSetSound;

/// @brief Field table, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Field timeToClearShelf, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeToClearShelf, put=__cordl_internal_set_timeToClearShelf)) double_t  timeToClearShelf;

/// @brief Method ActivateDispensers, addr 0x57b9114, size 0x46c, virtual false, abstract: false, final false
inline void ActivateDispensers() ;

/// @brief Method AddToDispenserPool, addr 0x57b8f94, size 0x180, virtual false, abstract: false, final false
inline void AddToDispenserPool(int32_t  count) ;

/// @brief Method BuildDispenserPool, addr 0x57b8ee0, size 0xb4, virtual false, abstract: false, final false
inline void BuildDispenserPool() ;

/// @brief Method ClearShelf, addr 0x57ba32c, size 0x12c, virtual false, abstract: false, final false
inline void ClearShelf() ;

/// @brief Method GetSelectedDisplayGroupID, addr 0x57b9c7c, size 0x24, virtual false, abstract: false, final false
inline int32_t GetSelectedDisplayGroupID() ;

/// @brief Method ImmediateShelfSwap, addr 0x57b9b40, size 0x13c, virtual false, abstract: false, final false
inline void ImmediateShelfSwap() ;

/// @brief Method InitIfNeeded, addr 0x57b96d0, size 0xf8, virtual false, abstract: false, final false
inline void InitIfNeeded() ;

static inline ::GlobalNamespace::BuilderDispenserShelf* New_ctor() ;

/// @brief Method OnClearTable, addr 0x57ba1b4, size 0x178, virtual false, abstract: false, final false
inline void OnClearTable() ;

/// @brief Method OnDestroy, addr 0x57b97c8, size 0xec, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSelectedSetChange, addr 0x57b98b4, size 0x38, virtual false, abstract: false, final false
inline void OnSelectedSetChange(int32_t  displayGroupID) ;

/// @brief Method OnShelfPieceCreated, addr 0x57b9f0c, size 0x16c, virtual false, abstract: false, final false
inline void OnShelfPieceCreated(::GlobalNamespace::BuilderPiece*  piece, bool  playfx) ;

/// @brief Method OnShelfPieceRecycled, addr 0x57ba078, size 0x13c, virtual false, abstract: false, final false
inline void OnShelfPieceRecycled(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method SetSelection, addr 0x57b98ec, size 0xbc, virtual false, abstract: false, final false
inline void SetSelection(int32_t  displayGroupID) ;

/// @brief Method Setup, addr 0x57b9580, size 0x150, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method StartShelfSwap, addr 0x57b99a8, size 0x198, virtual false, abstract: false, final false
inline void StartShelfSwap() ;

/// @brief Method UpdateShelf, addr 0x57b9ca0, size 0xf0, virtual false, abstract: false, final false
inline void UpdateShelf() ;

/// @brief Method UpdateShelfSliced, addr 0x57b9d90, size 0x170, virtual false, abstract: false, final false
inline void UpdateShelfSliced() ;

/// @brief Method VerifySetSelection, addr 0x57b9f00, size 0xc, virtual false, abstract: false, final false
inline void VerifySetSelection() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* const& __cordl_internal_get__includedCategories() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*& __cordl_internal_get__includedCategories() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>* const& __cordl_internal_get_activeDispensers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>*& __cordl_internal_get_activeDispensers() ;

constexpr bool const& __cordl_internal_get_animatingShelf() const;

constexpr bool& __cordl_internal_get_animatingShelf() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* const& __cordl_internal_get_currentGroup() const;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*& __cordl_internal_get_currentGroup() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>* const& __cordl_internal_get_dispenserPool() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>*& __cordl_internal_get_dispenserPool() ;

constexpr ::UnityW<::GlobalNamespace::BuilderDispenser> const& __cordl_internal_get_dispenserPrefab() const;

constexpr ::UnityW<::GlobalNamespace::BuilderDispenser>& __cordl_internal_get_dispenserPrefab() ;

constexpr int32_t const& __cordl_internal_get_dispenserToClear() const;

constexpr int32_t& __cordl_internal_get_dispenserToClear() ;

constexpr int32_t const& __cordl_internal_get_dispenserToUpdate() const;

constexpr int32_t& __cordl_internal_get_dispenserToUpdate() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>* const& __cordl_internal_get_piecesInSet() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*& __cordl_internal_get_piecesInSet() ;

constexpr bool const& __cordl_internal_get_playSpawnSetSound() const;

constexpr bool& __cordl_internal_get_playSpawnSetSound() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_resetAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_resetAnimation() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_resetSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_resetSoundBank() ;

constexpr ::UnityW<::GlobalNamespace::BuilderSetSelector> const& __cordl_internal_get_setSelector() const;

constexpr ::UnityW<::GlobalNamespace::BuilderSetSelector>& __cordl_internal_get_setSelector() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shelfCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shelfCenter() ;

constexpr int32_t const& __cordl_internal_get_shelfID() const;

constexpr int32_t& __cordl_internal_get_shelfID() ;

constexpr float_t const& __cordl_internal_get_shelfWidth() const;

constexpr float_t& __cordl_internal_get_shelfWidth() ;

constexpr bool const& __cordl_internal_get_shouldVerifySetSelection() const;

constexpr bool& __cordl_internal_get_shouldVerifySetSelection() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_spawnNewSetSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_spawnNewSetSound() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr double_t const& __cordl_internal_get_timeToClearShelf() const;

constexpr double_t& __cordl_internal_get_timeToClearShelf() ;

constexpr void __cordl_internal_set__includedCategories(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  value) ;

constexpr void __cordl_internal_set_activeDispensers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>*  value) ;

constexpr void __cordl_internal_set_animatingShelf(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  value) ;

constexpr void __cordl_internal_set_dispenserPool(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>*  value) ;

constexpr void __cordl_internal_set_dispenserPrefab(::UnityW<::GlobalNamespace::BuilderDispenser>  value) ;

constexpr void __cordl_internal_set_dispenserToClear(int32_t  value) ;

constexpr void __cordl_internal_set_dispenserToUpdate(int32_t  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_piecesInSet(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  value) ;

constexpr void __cordl_internal_set_playSpawnSetSound(bool  value) ;

constexpr void __cordl_internal_set_resetAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_resetSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_setSelector(::UnityW<::GlobalNamespace::BuilderSetSelector>  value) ;

constexpr void __cordl_internal_set_shelfCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shelfID(int32_t  value) ;

constexpr void __cordl_internal_set_shelfWidth(float_t  value) ;

constexpr void __cordl_internal_set_shouldVerifySetSelection(bool  value) ;

constexpr void __cordl_internal_set_spawnNewSetSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_timeToClearShelf(double_t  value) ;

/// @brief Method .ctor, addr 0x57ba458, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderDispenserShelf() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderDispenserShelf", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderDispenserShelf(BuilderDispenserShelf && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderDispenserShelf", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderDispenserShelf(BuilderDispenserShelf const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1585};

/// [Header("Set Selection")]
/// [SerializeField]
/// @brief Field setSelector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderSetSelector>  ___setSelector;

/// @brief Field _includedCategories, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  ____includedCategories;

/// [Header("Dispenser Shelf Properties")]
/// @brief Field shelfCenter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shelfCenter;

/// @brief Field shelfWidth, offset: 0x38, size: 0x4, def value: None
 float_t  ___shelfWidth;

/// @brief Field resetAnimation, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___resetAnimation;

/// [SerializeField]
/// @brief Field resetSoundBank, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___resetSoundBank;

/// [SerializeField]
/// @brief Field spawnNewSetSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___spawnNewSetSound;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field playSpawnSetSound, offset: 0x60, size: 0x1, def value: None
 bool  ___playSpawnSetSound;

/// [HideInInspector]
/// @brief Field table, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

/// @brief Field shelfID, offset: 0x70, size: 0x4, def value: None
 int32_t  ___shelfID;

/// @brief Field currentGroup, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  ___currentGroup;

/// @brief Field initialized, offset: 0x80, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field dispenserPrefab, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderDispenser>  ___dispenserPrefab;

/// @brief Field dispenserPool, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>*  ___dispenserPool;

/// @brief Field activeDispensers, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenser>>*  ___activeDispensers;

/// @brief Field piecesInSet, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  ___piecesInSet;

/// @brief Field animatingShelf, offset: 0xa8, size: 0x1, def value: None
 bool  ___animatingShelf;

/// @brief Field timeToClearShelf, offset: 0xb0, size: 0x8, def value: None
 double_t  ___timeToClearShelf;

/// @brief Field dispenserToClear, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___dispenserToClear;

/// @brief Field dispenserToUpdate, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___dispenserToUpdate;

/// @brief Field shouldVerifySetSelection, offset: 0xc0, size: 0x1, def value: None
 bool  ___shouldVerifySetSelection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___setSelector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ____includedCategories) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___shelfCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___shelfWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___resetAnimation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___resetSoundBank) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___spawnNewSetSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___playSpawnSetSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___table) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___shelfID) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___currentGroup) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___initialized) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___dispenserPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___dispenserPool) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___activeDispensers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___piecesInSet) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___animatingShelf) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___timeToClearShelf) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___dispenserToClear) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___dispenserToUpdate) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderDispenserShelf, ___shouldVerifySetSelection) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderDispenserShelf) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
