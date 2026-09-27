#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderFactory)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class BuilderUIResource;
}
namespace GorillaTagScripts {
class BuilderOptionButton;
}
namespace GorillaTagScripts {
class BuilderTable;
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
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderFactory;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderFactory*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderFactory*, "GorillaTagScripts", "BuilderFactory");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderFactory
class CORDL_TYPE BuilderFactory : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field buildItemButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildItemButton, put=__cordl_internal_set_buildItemButton)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  buildItemButton;

/// @brief Field buildPieceSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildPieceSound, put=__cordl_internal_set_buildPieceSound)) ::UnityW<::UnityEngine::AudioClip>  buildPieceSound;

/// @brief Field currPieceMaterialIndex, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currPieceMaterialIndex, put=__cordl_internal_set_currPieceMaterialIndex)) int32_t  currPieceMaterialIndex;

/// @brief Field currPieceTypeIndex, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currPieceTypeIndex, put=__cordl_internal_set_currPieceTypeIndex)) int32_t  currPieceTypeIndex;

/// @brief Field initialized, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field itemLabel, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemLabel, put=__cordl_internal_set_itemLabel)) ::UnityW<::TMPro::TextMeshPro>  itemLabel;

/// @brief Field itemList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemList, put=__cordl_internal_set_itemList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  itemList;

/// @brief Field materialLabel, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialLabel, put=__cordl_internal_set_materialLabel)) ::UnityW<::TMPro::TextMeshPro>  materialLabel;

/// @brief Field nextItemButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextItemButton, put=__cordl_internal_set_nextItemButton)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  nextItemButton;

/// @brief Field nextMaterialButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextMaterialButton, put=__cordl_internal_set_nextMaterialButton)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  nextMaterialButton;

/// @brief Field pieceList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceList, put=__cordl_internal_set_pieceList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  pieceList;

/// @brief Field pieceTypeToIndex, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceTypeToIndex, put=__cordl_internal_set_pieceTypeToIndex)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  pieceTypeToIndex;

/// @brief Field pieceTypes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceTypes, put=__cordl_internal_set_pieceTypes)) ::System::Collections::Generic::List_1<int32_t>*  pieceTypes;

/// @brief Field prevItemButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevItemButton, put=__cordl_internal_set_prevItemButton)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  prevItemButton;

/// @brief Field prevMaterialButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevMaterialButton, put=__cordl_internal_set_prevMaterialButton)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  prevMaterialButton;

/// @brief Field previewMarker, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewMarker, put=__cordl_internal_set_previewMarker)) ::UnityW<::UnityEngine::Transform>  previewMarker;

/// @brief Field previewPiece, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewPiece, put=__cordl_internal_set_previewPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  previewPiece;

/// @brief Field resourceCostUIs, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceCostUIs, put=__cordl_internal_set_resourceCostUIs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderUIResource>>*  resourceCostUIs;

/// @brief Field spawnLocation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnLocation, put=__cordl_internal_set_spawnLocation)) ::UnityW<::UnityEngine::Transform>  spawnLocation;

/// @brief Field table, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Method Awake, addr 0x5b84300, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanBuildPieceType, addr 0x5b85774, size 0xa0, virtual false, abstract: false, final false
inline bool CanBuildPieceType(int32_t  pieceType) ;

/// @brief Method CanUseMaterialType, addr 0x5b85a3c, size 0x8, virtual false, abstract: false, final false
inline bool CanUseMaterialType(int32_t  materalType) ;

/// @brief Method CreateRandomPiece, addr 0x5b86558, size 0x68, virtual false, abstract: false, final false
inline void CreateRandomPiece() ;

/// @brief Method GetPiecePrefab, addr 0x5b8525c, size 0x16c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> GetPiecePrefab(int32_t  pieceType) ;

/// @brief Method GetSelectedMaterialName, addr 0x5b85bac, size 0x144, virtual false, abstract: false, final false
inline ::StringW GetSelectedMaterialName() ;

/// @brief Method GetSelectedMaterialType, addr 0x5b85578, size 0x13c, virtual false, abstract: false, final false
inline int32_t GetSelectedMaterialType() ;

/// @brief Method InitIfNeeded, addr 0x5b84304, size 0x2e0, virtual false, abstract: false, final false
inline void InitIfNeeded() ;

static inline ::GorillaTagScripts::BuilderFactory* New_ctor() ;

/// @brief Method OnAvailableResourcesChange, addr 0x5b86554, size 0x4, virtual false, abstract: false, final false
inline void OnAvailableResourcesChange() ;

/// @brief Method OnBuildItem, addr 0x5b853c8, size 0x1b0, virtual false, abstract: false, final false
inline void OnBuildItem(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method OnNextItem, addr 0x5b85814, size 0xc0, virtual false, abstract: false, final false
inline void OnNextItem(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method OnNextMaterial, addr 0x5b85a44, size 0x168, virtual false, abstract: false, final false
inline void OnNextMaterial(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method OnPrevItem, addr 0x5b856b4, size 0xc0, virtual false, abstract: false, final false
inline void OnPrevItem(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method OnPrevMaterial, addr 0x5b858d4, size 0x168, virtual false, abstract: false, final false
inline void OnPrevMaterial(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method RefreshCostUI, addr 0x5b8636c, size 0x1e8, virtual false, abstract: false, final false
inline void RefreshCostUI() ;

/// @brief Method RefreshUI, addr 0x5b84f4c, size 0x310, virtual false, abstract: false, final false
inline void RefreshUI() ;

/// @brief Method Setup, addr 0x5b845e4, size 0x964, virtual false, abstract: false, final false
inline void Setup(::GorillaTagScripts::BuilderTable*  tableOwner) ;

/// @brief Method Show, addr 0x5b84f48, size 0x4, virtual false, abstract: false, final false
inline void Show() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_buildItemButton() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_buildItemButton() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_buildPieceSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_buildPieceSound() ;

constexpr int32_t const& __cordl_internal_get_currPieceMaterialIndex() const;

constexpr int32_t& __cordl_internal_get_currPieceMaterialIndex() ;

constexpr int32_t const& __cordl_internal_get_currPieceTypeIndex() const;

constexpr int32_t& __cordl_internal_get_currPieceTypeIndex() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_itemLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_itemLabel() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_itemList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_itemList() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_materialLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_materialLabel() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_nextItemButton() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_nextItemButton() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_nextMaterialButton() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_nextMaterialButton() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_pieceList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_pieceList() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_pieceTypeToIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_pieceTypeToIndex() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_pieceTypes() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_pieceTypes() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_prevItemButton() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_prevItemButton() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_prevMaterialButton() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_prevMaterialButton() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_previewMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_previewMarker() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_previewPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_previewPiece() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderUIResource>>* const& __cordl_internal_get_resourceCostUIs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderUIResource>>*& __cordl_internal_get_resourceCostUIs() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnLocation() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_buildItemButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_buildPieceSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_currPieceMaterialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currPieceTypeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_itemLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_itemList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_materialLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_nextItemButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_nextMaterialButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_pieceList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_pieceTypeToIndex(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_pieceTypes(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_prevItemButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_prevMaterialButton(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_previewMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_previewPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_resourceCostUIs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderUIResource>>*  value) ;

constexpr void __cordl_internal_set_spawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

/// @brief Method .ctor, addr 0x5b865c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderFactory(BuilderFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderFactory(BuilderFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3928};

/// @brief Field spawnLocation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnLocation;

/// @brief Field pieceTypes, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___pieceTypes;

/// @brief Field itemList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___itemList;

/// [HideInInspector]
/// @brief Field pieceList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___pieceList;

/// @brief Field buildItemButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___buildItemButton;

/// @brief Field itemLabel, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___itemLabel;

/// @brief Field prevItemButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___prevItemButton;

/// @brief Field nextItemButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___nextItemButton;

/// @brief Field materialLabel, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___materialLabel;

/// @brief Field prevMaterialButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___prevMaterialButton;

/// @brief Field nextMaterialButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___nextMaterialButton;

/// @brief Field audioSource, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field buildPieceSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___buildPieceSound;

/// @brief Field previewMarker, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___previewMarker;

/// @brief Field resourceCostUIs, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderUIResource>>*  ___resourceCostUIs;

/// @brief Field previewPiece, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___previewPiece;

/// @brief Field currPieceTypeIndex, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___currPieceTypeIndex;

/// @brief Field currPieceMaterialIndex, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___currPieceMaterialIndex;

/// @brief Field pieceTypeToIndex, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___pieceTypeToIndex;

/// @brief Field table, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

/// @brief Field initialized, offset: 0xb8, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___spawnLocation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___pieceTypes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___itemList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___pieceList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___buildItemButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___itemLabel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___prevItemButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___nextItemButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___materialLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___prevMaterialButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___nextMaterialButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___audioSource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___buildPieceSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___previewMarker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___resourceCostUIs) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___previewPiece) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___currPieceTypeIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___currPieceMaterialIndex) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___pieceTypeToIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___table) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderFactory, ___initialized) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderFactory) == 0xc0, "Size mismatch!");

} // namespace end def GorillaTagScripts
