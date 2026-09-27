#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ArrayUtility_SearchRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayUtility_SearchRange)
// Forward declare root types
namespace GlobalNamespace {
struct ArrayUtility_SearchRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArrayUtility_SearchRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArrayUtility_SearchRange, "UnityEngine.ProBuilder", "ArrayUtility/SearchRange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ArrayUtility/SearchRange
struct CORDL_TYPE ArrayUtility_SearchRange {
public:
// Declarations
/// @brief Method Center, addr 0xb08308c, size 0x18, virtual false, abstract: false, final false
inline int32_t Center() ;

/// @brief Method ToString, addr 0xb0830a4, size 0x1a4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Valid, addr 0xb083078, size 0x14, virtual false, abstract: false, final false
inline bool Valid() ;

/// @brief Method .ctor, addr 0xb083070, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  begin, int32_t  end) ;

// Ctor Parameters []
// @brief default ctor
constexpr ArrayUtility_SearchRange() ;

// Ctor Parameters [CppParam { name: "begin", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ArrayUtility_SearchRange(int32_t  begin, int32_t  end) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field begin, offset: 0x0, size: 0x4, def value: None
 int32_t  begin;

/// @brief Field end, offset: 0x4, size: 0x4, def value: None
 int32_t  end;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArrayUtility_SearchRange, begin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArrayUtility_SearchRange, end) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArrayUtility_SearchRange) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
