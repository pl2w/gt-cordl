#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderTableData;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderTableData*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTableData*, "GorillaTagScripts", "BuilderTableData");
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTableData
class CORDL_TYPE BuilderTableData : public ::System::Object {
public:
// Declarations
/// @brief Field attachIndex, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachIndex, put=__cordl_internal_set_attachIndex)) ::System::Collections::Generic::List_1<int32_t>*  attachIndex;

/// @brief Field materialType, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialType, put=__cordl_internal_set_materialType)) ::System::Collections::Generic::List_1<int32_t>*  materialType;

/// @brief Field numEdits, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_numEdits, put=__cordl_internal_set_numEdits)) int32_t  numEdits;

/// @brief Field numPieces, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_numPieces, put=__cordl_internal_set_numPieces)) int32_t  numPieces;

/// @brief Field overlapInfo, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapInfo, put=__cordl_internal_set_overlapInfo)) ::System::Collections::Generic::List_1<int64_t>*  overlapInfo;

/// @brief Field overlapingPieces, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapingPieces, put=__cordl_internal_set_overlapingPieces)) ::System::Collections::Generic::List_1<int32_t>*  overlapingPieces;

/// @brief Field overlappedPieces, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlappedPieces, put=__cordl_internal_set_overlappedPieces)) ::System::Collections::Generic::List_1<int32_t>*  overlappedPieces;

/// @brief Field parentAttachIndex, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentAttachIndex, put=__cordl_internal_set_parentAttachIndex)) ::System::Collections::Generic::List_1<int32_t>*  parentAttachIndex;

/// @brief Field parentId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentId, put=__cordl_internal_set_parentId)) ::System::Collections::Generic::List_1<int32_t>*  parentId;

/// @brief Field pieceId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceId, put=__cordl_internal_set_pieceId)) ::System::Collections::Generic::List_1<int32_t>*  pieceId;

/// @brief Field pieceType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceType, put=__cordl_internal_set_pieceType)) ::System::Collections::Generic::List_1<int32_t>*  pieceType;

/// @brief Field placement, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_placement, put=__cordl_internal_set_placement)) ::System::Collections::Generic::List_1<int32_t>*  placement;

/// @brief Field timeOffset, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeOffset, put=__cordl_internal_set_timeOffset)) ::System::Collections::Generic::List_1<int32_t>*  timeOffset;

/// @brief Field version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Method Clear, addr 0x5bb575c, size 0x128, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GorillaTagScripts::BuilderTableData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_attachIndex() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_attachIndex() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_materialType() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_materialType() ;

constexpr int32_t const& __cordl_internal_get_numEdits() const;

constexpr int32_t& __cordl_internal_get_numEdits() ;

constexpr int32_t const& __cordl_internal_get_numPieces() const;

constexpr int32_t& __cordl_internal_get_numPieces() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_overlapInfo() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_overlapInfo() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_overlapingPieces() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_overlapingPieces() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_overlappedPieces() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_overlappedPieces() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_parentAttachIndex() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_parentAttachIndex() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_parentId() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_parentId() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_pieceId() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_pieceId() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_pieceType() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_pieceType() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_placement() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_placement() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_timeOffset() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_timeOffset() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_attachIndex(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_materialType(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_numEdits(int32_t  value) ;

constexpr void __cordl_internal_set_numPieces(int32_t  value) ;

constexpr void __cordl_internal_set_overlapInfo(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_overlapingPieces(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_overlappedPieces(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_parentAttachIndex(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_parentId(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_pieceId(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_pieceType(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_placement(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_timeOffset(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ba9a64, size 0x25c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTableData(BuilderTableData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTableData(BuilderTableData const& ) = delete;

/// @brief Field BUILDER_TABLE_DATA_VERSION offset 0xffffffff size 0x4
static constexpr int32_t  BUILDER_TABLE_DATA_VERSION{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3962};

/// @brief Field version, offset: 0x10, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field numEdits, offset: 0x14, size: 0x4, def value: None
 int32_t  ___numEdits;

/// @brief Field numPieces, offset: 0x18, size: 0x4, def value: None
 int32_t  ___numPieces;

/// @brief Field pieceType, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___pieceType;

/// @brief Field pieceId, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___pieceId;

/// @brief Field parentId, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___parentId;

/// @brief Field attachIndex, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___attachIndex;

/// @brief Field parentAttachIndex, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___parentAttachIndex;

/// @brief Field placement, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___placement;

/// @brief Field materialType, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___materialType;

/// @brief Field overlapingPieces, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___overlapingPieces;

/// @brief Field overlappedPieces, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___overlappedPieces;

/// @brief Field overlapInfo, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___overlapInfo;

/// @brief Field timeOffset, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___timeOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___numEdits) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___numPieces) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___pieceType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___pieceId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___parentId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___attachIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___parentAttachIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___placement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___materialType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___overlapingPieces) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___overlappedPieces) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___overlapInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTableData, ___timeOffset) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderTableData) == 0x78, "Size mismatch!");

} // namespace end def GorillaTagScripts
