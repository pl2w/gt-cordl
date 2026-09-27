#pragma once
// IWYU pragma private; include "GorillaTag/WatchableIntSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WatchableGenericSO_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WatchableIntSO)
// Forward declare root types
namespace GorillaTag {
class WatchableIntSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::WatchableIntSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::WatchableIntSO*, "GorillaTag", "WatchableIntSO");
// [CreateAssetMenu(fileName = "WatchableIntSO", menuName = "ScriptableObjects/WatchableIntSO")]
// Dependencies WatchableGenericSO`1<T>
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.WatchableIntSO
class CORDL_TYPE WatchableIntSO : public ::GlobalNamespace::WatchableGenericSO_1<int32_t> {
public:
// Declarations
 __declspec(property(get=get_currentValue)) int32_t  currentValue;

static inline ::GorillaTag::WatchableIntSO* New_ctor() ;

/// @brief Method .ctor, addr 0x5d28054, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentValue, addr 0x5d2800c, size 0x48, virtual false, abstract: false, final false
inline int32_t get_currentValue() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WatchableIntSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WatchableIntSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WatchableIntSO(WatchableIntSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WatchableIntSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WatchableIntSO(WatchableIntSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4625};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::WatchableIntSO) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag
