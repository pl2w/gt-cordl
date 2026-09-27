#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPieceSet_BuilderPieceCategory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceSet)
namespace GlobalNamespace {
class BuilderPieceSet_BuilderDisplayGroup;
}
namespace GlobalNamespace {
struct BuilderPieceSet_BuilderPieceCategory;
}
namespace GlobalNamespace {
class BuilderPieceSet_BuilderPieceSubset;
}
namespace GlobalNamespace {
struct BuilderPieceSet_PieceInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPieceSet;
}
namespace GlobalNamespace {
class BuilderPieceSet_BuilderDisplayGroup;
}
namespace GlobalNamespace {
class BuilderPieceSet_BuilderPieceSubset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPieceSet*);
MARK_REF_T(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*);
MARK_REF_T(::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceSet*, "", "BuilderPieceSet");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*, "", "BuilderPieceSet/BuilderDisplayGroup");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*, "", "BuilderPieceSet/BuilderPieceSubset");
// [CreateAssetMenu(fileName = "BuilderPieceSet01", menuName = "Gorilla Tag/Builder/PieceSet", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceSet
class CORDL_TYPE BuilderPieceSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using BuilderDisplayGroup = ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup;

using BuilderPieceCategory = ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory;

using BuilderPieceSubset = ::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset;

using PieceInfo = ::GlobalNamespace::BuilderPieceSet_PieceInfo;

 __declspec(property(get=get_SetName)) ::StringW  SetName;

/// @brief Field displayModel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayModel, put=__cordl_internal_set_displayModel)) ::UnityW<::UnityEngine::GameObject>  displayModel;

/// @brief Field isLocalized, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocalized, put=__cordl_internal_set_isLocalized)) bool  isLocalized;

/// @brief Field isScheduled, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isScheduled, put=__cordl_internal_set_isScheduled)) bool  isScheduled;

/// @brief Field materialId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialId, put=__cordl_internal_set_materialId)) ::StringW  materialId;

/// @brief Field playfabID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabID, put=__cordl_internal_set_playfabID)) ::StringW  playfabID;

/// @brief Field scheduledDate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_scheduledDate, put=__cordl_internal_set_scheduledDate)) ::StringW  scheduledDate;

/// @brief Field setLocName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_setLocName, put=__cordl_internal_set_setLocName)) ::UnityEngine::Localization::LocalizedString*  setLocName;

/// @brief Field setName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_setName, put=__cordl_internal_set_setName)) ::StringW  setName;

/// @brief Field subsets, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_subsets, put=__cordl_internal_set_subsets)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*  subsets;

/// @brief Method GetIntIdentifier, addr 0x57be6f8, size 0xc, virtual false, abstract: false, final false
inline int32_t GetIntIdentifier() ;

/// @brief Method GetScheduleDateTime, addr 0x57d140c, size 0x158, virtual false, abstract: false, final false
inline ::System::DateTime GetScheduleDateTime() ;

static inline ::GlobalNamespace::BuilderPieceSet* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_displayModel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_displayModel() ;

constexpr bool const& __cordl_internal_get_isLocalized() const;

constexpr bool& __cordl_internal_get_isLocalized() ;

constexpr bool const& __cordl_internal_get_isScheduled() const;

constexpr bool& __cordl_internal_get_isScheduled() ;

constexpr ::StringW const& __cordl_internal_get_materialId() const;

constexpr ::StringW& __cordl_internal_get_materialId() ;

constexpr ::StringW const& __cordl_internal_get_playfabID() const;

constexpr ::StringW& __cordl_internal_get_playfabID() ;

constexpr ::StringW const& __cordl_internal_get_scheduledDate() const;

constexpr ::StringW& __cordl_internal_get_scheduledDate() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_setLocName() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_setLocName() ;

constexpr ::StringW const& __cordl_internal_get_setName() const;

constexpr ::StringW& __cordl_internal_get_setName() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>* const& __cordl_internal_get_subsets() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*& __cordl_internal_get_subsets() ;

constexpr void __cordl_internal_set_displayModel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isLocalized(bool  value) ;

constexpr void __cordl_internal_set_isScheduled(bool  value) ;

constexpr void __cordl_internal_set_materialId(::StringW  value) ;

constexpr void __cordl_internal_set_playfabID(::StringW  value) ;

constexpr void __cordl_internal_set_scheduledDate(::StringW  value) ;

constexpr void __cordl_internal_set_setLocName(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_setName(::StringW  value) ;

constexpr void __cordl_internal_set_subsets(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*  value) ;

/// @brief Method .ctor, addr 0x57d1564, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SetName, addr 0x57d1404, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SetName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceSet(BuilderPieceSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceSet(BuilderPieceSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1616};

/// [Tooltip("Display Name - Fallback for Localization")]
/// @brief Field setName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___setName;

/// @brief Field displayModel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___displayModel;

/// [Tooltip("If this should error if no localization is found")]
/// @brief Field isLocalized, offset: 0x28, size: 0x1, def value: None
 bool  ___isLocalized;

/// [Tooltip("Localized Display Name")]
/// @brief Field setLocName, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___setLocName;

/// [FormerlySerializedAs("uniqueId")]
/// [Tooltip("If purchaseable, this should be a valid playfabID starting with LD\nIf a starter set, this just needs to be a unique string from the other set IDs")]
/// @brief Field playfabID, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___playfabID;

/// [Tooltip("(Optional) Default Material ID applied to all prefabs with BuilderMaterialOptions")]
/// @brief Field materialId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___materialId;

/// [Tooltip("(Optional) If this set is not available on launch day use scheduling")]
/// @brief Field isScheduled, offset: 0x48, size: 0x1, def value: None
 bool  ___isScheduled;

/// @brief Field scheduledDate, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___scheduledDate;

/// [Tooltip("A group of pieces on the same shelf")]
/// @brief Field subsets, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*  ___subsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___setName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___displayModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___isLocalized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___setLocName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___playfabID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___materialId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___isScheduled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___scheduledDate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet, ___subsets) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceSet) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceSet/BuilderDisplayGroup
class CORDL_TYPE BuilderPieceSet_BuilderDisplayGroup : public ::System::Object {
public:
// Declarations
/// @brief Field defaultMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMaterial, put=__cordl_internal_set_defaultMaterial)) ::StringW  defaultMaterial;

/// @brief Field displayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field pieceSubsets, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceSubsets, put=__cordl_internal_set_pieceSubsets)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*  pieceSubsets;

/// @brief Field setID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_setID, put=__cordl_internal_set_setID)) int32_t  setID;

/// @brief Field uniqueGroupID, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_uniqueGroupID, put=__cordl_internal_set_uniqueGroupID)) ::StringW  uniqueGroupID;

/// @brief Method GetDisplayGroupIdentifier, addr 0x57d1788, size 0xc, virtual false, abstract: false, final false
inline int32_t GetDisplayGroupIdentifier() ;

static inline ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* New_ctor() ;

static inline ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* New_ctor(::StringW  groupName, ::StringW  material, int32_t  inSetID, ::StringW  groupID) ;

constexpr ::StringW const& __cordl_internal_get_defaultMaterial() const;

constexpr ::StringW& __cordl_internal_get_defaultMaterial() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>* const& __cordl_internal_get_pieceSubsets() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*& __cordl_internal_get_pieceSubsets() ;

constexpr int32_t const& __cordl_internal_get_setID() const;

constexpr int32_t& __cordl_internal_get_setID() ;

constexpr ::StringW const& __cordl_internal_get_uniqueGroupID() const;

constexpr ::StringW& __cordl_internal_get_uniqueGroupID() ;

constexpr void __cordl_internal_set_defaultMaterial(::StringW  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_pieceSubsets(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*  value) ;

constexpr void __cordl_internal_set_setID(int32_t  value) ;

constexpr void __cordl_internal_set_uniqueGroupID(::StringW  value) ;

/// @brief Method .ctor, addr 0x57d15cc, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x57d16ac, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::StringW  groupName, ::StringW  material, int32_t  inSetID, ::StringW  groupID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceSet_BuilderDisplayGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceSet_BuilderDisplayGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceSet_BuilderDisplayGroup(BuilderPieceSet_BuilderDisplayGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceSet_BuilderDisplayGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceSet_BuilderDisplayGroup(BuilderPieceSet_BuilderDisplayGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1615};

/// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field pieceSubsets, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*  ___pieceSubsets;

/// @brief Field defaultMaterial, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___defaultMaterial;

/// @brief Field setID, offset: 0x28, size: 0x4, def value: None
 int32_t  ___setID;

/// @brief Field uniqueGroupID, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___uniqueGroupID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup, ___displayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup, ___pieceSubsets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup, ___defaultMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup, ___setID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup, ___uniqueGroupID) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies BuilderPieceSet::BuilderPieceCategory, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceSet/BuilderPieceSubset
class CORDL_TYPE BuilderPieceSet_BuilderPieceSubset : public ::System::Object {
public:
// Declarations
/// @brief Field localizedShelfButtonName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizedShelfButtonName, put=__cordl_internal_set_localizedShelfButtonName)) ::UnityEngine::Localization::LocalizedString*  localizedShelfButtonName;

/// @brief Field pieceCategory, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_pieceCategory, put=__cordl_internal_set_pieceCategory)) ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory  pieceCategory;

/// @brief Field pieceInfos, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceInfos, put=__cordl_internal_set_pieceInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  pieceInfos;

/// @brief Field shelfButtonName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelfButtonName, put=__cordl_internal_set_shelfButtonName)) ::StringW  shelfButtonName;

/// @brief Method GetShelfButtonName, addr 0x57d15bc, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetShelfButtonName() ;

static inline ::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset* New_ctor() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get_localizedShelfButtonName() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get_localizedShelfButtonName() ;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const& __cordl_internal_get_pieceCategory() const;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory& __cordl_internal_get_pieceCategory() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>* const& __cordl_internal_get_pieceInfos() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*& __cordl_internal_get_pieceInfos() ;

constexpr ::StringW const& __cordl_internal_get_shelfButtonName() const;

constexpr ::StringW& __cordl_internal_get_shelfButtonName() ;

constexpr void __cordl_internal_set_localizedShelfButtonName(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_pieceCategory(::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory  value) ;

constexpr void __cordl_internal_set_pieceInfos(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  value) ;

constexpr void __cordl_internal_set_shelfButtonName(::StringW  value) ;

/// @brief Method .ctor, addr 0x57d15c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceSet_BuilderPieceSubset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceSet_BuilderPieceSubset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceSet_BuilderPieceSubset(BuilderPieceSet_BuilderPieceSubset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceSet_BuilderPieceSubset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceSet_BuilderPieceSubset(BuilderPieceSet_BuilderPieceSubset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1613};

/// [Tooltip("(Optional) Text to put on the shelf button if not the set name")]
/// @brief Field shelfButtonName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___shelfButtonName;

/// @brief Field localizedShelfButtonName, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ___localizedShelfButtonName;

/// @brief Field pieceCategory, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory  ___pieceCategory;

/// @brief Field pieceInfos, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  ___pieceInfos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset, ___shelfButtonName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset, ___localizedShelfButtonName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset, ___pieceCategory) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset, ___pieceInfos) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
