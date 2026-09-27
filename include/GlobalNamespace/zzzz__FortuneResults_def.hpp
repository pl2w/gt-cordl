#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategory_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FortuneResults)
namespace GlobalNamespace {
struct FortuneResults_FortuneCategoryType;
}
namespace GlobalNamespace {
struct FortuneResults_FortuneCategory;
}
namespace GlobalNamespace {
struct FortuneResults_FortuneResult;
}
// Forward declare root types
namespace GlobalNamespace {
class FortuneResults;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FortuneResults*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneResults*, "", "FortuneResults");
// Dependencies FortuneResults::FortuneCategory, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: FortuneResults
class CORDL_TYPE FortuneResults : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FortuneCategory = ::GlobalNamespace::FortuneResults_FortuneCategory;

using FortuneCategoryType = ::GlobalNamespace::FortuneResults_FortuneCategoryType;

using FortuneResult = ::GlobalNamespace::FortuneResults_FortuneResult;

/// @brief Field fortuneResults, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fortuneResults, put=__cordl_internal_set_fortuneResults)) ::ArrayW<::GlobalNamespace::FortuneResults_FortuneCategory>  fortuneResults;

/// @brief Field totalChance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalChance, put=__cordl_internal_set_totalChance)) float_t  totalChance;

/// @brief Method GetResult, addr 0x580a5a4, size 0xac, virtual false, abstract: false, final false
inline ::GlobalNamespace::FortuneResults_FortuneResult GetResult() ;

/// @brief Method GetResultText, addr 0x580a658, size 0xc8, virtual false, abstract: false, final false
inline ::StringW GetResultText(::GlobalNamespace::FortuneResults_FortuneResult  result) ;

static inline ::GlobalNamespace::FortuneResults* New_ctor() ;

/// @brief Method OnValidate, addr 0x580a54c, size 0x58, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::ArrayW<::GlobalNamespace::FortuneResults_FortuneCategory> const& __cordl_internal_get_fortuneResults() const;

constexpr ::ArrayW<::GlobalNamespace::FortuneResults_FortuneCategory>& __cordl_internal_get_fortuneResults() ;

constexpr float_t const& __cordl_internal_get_totalChance() const;

constexpr float_t& __cordl_internal_get_totalChance() ;

constexpr void __cordl_internal_set_fortuneResults(::ArrayW<::GlobalNamespace::FortuneResults_FortuneCategory>  value) ;

constexpr void __cordl_internal_set_totalChance(float_t  value) ;

/// @brief Method .ctor, addr 0x580a720, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FortuneResults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FortuneResults", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FortuneResults(FortuneResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FortuneResults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FortuneResults(FortuneResults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1705};

/// [SerializeField]
/// @brief Field fortuneResults, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FortuneResults_FortuneCategory>  ___fortuneResults;

/// [SerializeField]
/// @brief Field totalChance, offset: 0x20, size: 0x4, def value: None
 float_t  ___totalChance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneResults, ___fortuneResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneResults, ___totalChance) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneResults) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
