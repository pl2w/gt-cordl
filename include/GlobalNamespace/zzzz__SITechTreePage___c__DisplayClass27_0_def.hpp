#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreePage___c__DisplayClass27_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SITechTreePage___c__DisplayClass27_0)
namespace GlobalNamespace {
template<typename T>
class GraphNode_1;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
class SITechTreePage;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct SITechTreePage___c__DisplayClass27_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITechTreePage___c__DisplayClass27_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreePage___c__DisplayClass27_0, "", "SITechTreePage/<>c__DisplayClass27_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITechTreePage/<>c__DisplayClass27_0
struct CORDL_TYPE SITechTreePage___c__DisplayClass27_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreePage___c__DisplayClass27_0() ;

// Ctor Parameters [CppParam { name: "nodeLookup", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SITechTreePage*", modifiers: "", def_value: None, comment: None }]
constexpr SITechTreePage___c__DisplayClass27_0(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  nodeLookup, ::GlobalNamespace::SITechTreePage*  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{361};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field nodeLookup, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIUpgradeType,::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*>*  nodeLookup;

/// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::SITechTreePage*  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreePage___c__DisplayClass27_0, nodeLookup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreePage___c__DisplayClass27_0, __4__this) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreePage___c__DisplayClass27_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
