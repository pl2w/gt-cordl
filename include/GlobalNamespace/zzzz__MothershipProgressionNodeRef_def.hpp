#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipProgressionNodeRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MothershipProgressionNodeRef)
// Forward declare root types
namespace GlobalNamespace {
struct MothershipProgressionNodeRef;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MothershipProgressionNodeRef);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipProgressionNodeRef, "", "MothershipProgressionNodeRef");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MothershipProgressionNodeRef
struct CORDL_TYPE MothershipProgressionNodeRef {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MothershipProgressionNodeRef() ;

// Ctor Parameters [CppParam { name: "treeId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "nodeId", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr MothershipProgressionNodeRef(::StringW  treeId, ::StringW  nodeId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1291};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field treeId, offset: 0x0, size: 0x8, def value: None
 ::StringW  treeId;

/// @brief Field nodeId, offset: 0x8, size: 0x8, def value: None
 ::StringW  nodeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipProgressionNodeRef, treeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipProgressionNodeRef, nodeId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipProgressionNodeRef) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
