#pragma once
// IWYU pragma private; include "GorillaTag/WatchableGameObjectSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WatchableGenericSO_1_def.hpp"
CORDL_MODULE_EXPORT(WatchableGameObjectSO)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTag {
class WatchableGameObjectSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::WatchableGameObjectSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::WatchableGameObjectSO*, "GorillaTag", "WatchableGameObjectSO");
// [CreateAssetMenu(fileName = "WatchableGameObjectSO", menuName = "ScriptableObjects/WatchableGameObjectSO")]
// Dependencies WatchableGenericSO`1<T>
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.WatchableGameObjectSO
class CORDL_TYPE WatchableGameObjectSO : public ::GlobalNamespace::WatchableGenericSO_1<::UnityW<::UnityEngine::GameObject>> {
public:
// Declarations
static inline ::GorillaTag::WatchableGameObjectSO* New_ctor() ;

/// @brief Method .ctor, addr 0x5d27fc4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatchableGameObjectSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatchableGameObjectSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WatchableGameObjectSO(WatchableGameObjectSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatchableGameObjectSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatchableGameObjectSO(WatchableGameObjectSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4624};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::WatchableGameObjectSO) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag
