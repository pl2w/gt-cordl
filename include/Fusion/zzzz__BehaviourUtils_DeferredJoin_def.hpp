#pragma once
// IWYU pragma private; include "Fusion/BehaviourUtils_DeferredJoin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BehaviourUtils_DeferredJoin)
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace GlobalNamespace {
struct BehaviourUtils_DeferredJoin;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BehaviourUtils_DeferredJoin);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BehaviourUtils_DeferredJoin, "Fusion", "BehaviourUtils/DeferredJoin");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.BehaviourUtils/DeferredJoin
struct CORDL_TYPE BehaviourUtils_DeferredJoin {
public:
// Declarations
/// @brief Method ToString, addr 0x5f976bc, size 0x8c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr BehaviourUtils_DeferredJoin() ;

// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::IEnumerable*", modifiers: "", def_value: None, comment: None }]
constexpr BehaviourUtils_DeferredJoin(::System::Collections::IEnumerable*  _enumerable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18972};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _enumerable, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::IEnumerable*  _enumerable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BehaviourUtils_DeferredJoin, _enumerable) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BehaviourUtils_DeferredJoin) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
