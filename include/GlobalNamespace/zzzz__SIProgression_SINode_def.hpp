#pragma once
// IWYU pragma private; include "GlobalNamespace/SIProgression_SINode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIProgression_SINode)
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIProgression_SINode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIProgression_SINode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIProgression_SINode, "", "SIProgression/SINode");
// Dependencies SIUpgradeType
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIProgression/SINode
struct CORDL_TYPE SIProgression_SINode {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SIProgression_SINode() ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "unlocked", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "costs", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "parents", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::SIProgression_SINode>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "upgradeType", ty: "::GlobalNamespace::SIUpgradeType", modifiers: "", def_value: None, comment: None }]
constexpr SIProgression_SINode(::StringW  id, bool  unlocked, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  costs, ::System::Collections::Generic::List_1<::GlobalNamespace::SIProgression_SINode>*  parents, ::GlobalNamespace::SIUpgradeType  upgradeType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field id, offset: 0x0, size: 0x8, def value: None
 ::StringW  id;

/// @brief Field unlocked, offset: 0x8, size: 0x1, def value: None
 bool  unlocked;

/// @brief Field costs, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  costs;

/// @brief Field parents, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SIProgression_SINode>*  parents;

/// @brief Field upgradeType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SIUpgradeType  upgradeType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIProgression_SINode, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression_SINode, unlocked) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression_SINode, costs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression_SINode, parents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIProgression_SINode, upgradeType) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIProgression_SINode) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
