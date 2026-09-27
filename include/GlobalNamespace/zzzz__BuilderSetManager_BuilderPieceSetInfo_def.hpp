#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderSetManager_BuilderPieceSetInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderSetManager_BuilderPieceSetInfo)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderSetManager_BuilderPieceSetInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo, "", "BuilderSetManager/BuilderPieceSetInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderSetManager/BuilderPieceSetInfo
struct CORDL_TYPE BuilderSetManager_BuilderPieceSetInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetManager_BuilderPieceSetInfo() ;

// Ctor Parameters [CppParam { name: "pieceType", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialType", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "setIds", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }]
constexpr BuilderSetManager_BuilderPieceSetInfo(int32_t  pieceType, int32_t  materialType, ::System::Collections::Generic::List_1<int32_t>*  setIds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1635};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field pieceType, offset: 0x0, size: 0x4, def value: None
 int32_t  pieceType;

/// @brief Field materialType, offset: 0x4, size: 0x4, def value: None
 int32_t  materialType;

/// @brief Field setIds, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  setIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo, pieceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo, materialType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo, setIds) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetManager_BuilderPieceSetInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
