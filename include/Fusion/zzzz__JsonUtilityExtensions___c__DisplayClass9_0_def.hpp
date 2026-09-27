#pragma once
// IWYU pragma private; include "Fusion/JsonUtilityExtensions___c__DisplayClass9_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(JsonUtilityExtensions___c__DisplayClass9_0)
// Forward declare root types
namespace GlobalNamespace {
struct JsonUtilityExtensions___c__DisplayClass9_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0, "Fusion", "JsonUtilityExtensions/<>c__DisplayClass9_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.JsonUtilityExtensions/<>c__DisplayClass9_0
struct CORDL_TYPE JsonUtilityExtensions___c__DisplayClass9_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr JsonUtilityExtensions___c__DisplayClass9_0() ;

// Ctor Parameters [CppParam { name: "json", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr JsonUtilityExtensions___c__DisplayClass9_0(::StringW  json) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field json, offset: 0x0, size: 0x8, def value: None
 ::StringW  json;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0, json) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
