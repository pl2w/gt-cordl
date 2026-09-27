#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/CodePointIndexer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_TableRange_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodePointIndexer)
namespace GlobalNamespace {
struct CodePointIndexer_TableRange;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
// Write type traits
MARK_REF_T(::Mono::Globalization::Unicode::CodePointIndexer*);
DEFINE_IL2CPP_CLASS(::Mono::Globalization::Unicode::CodePointIndexer*, "Mono.Globalization.Unicode", "CodePointIndexer");
// Dependencies Mono.Globalization.Unicode.CodePointIndexer::TableRange, System.Object
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: Mono.Globalization.Unicode.CodePointIndexer
class CORDL_TYPE CodePointIndexer : public ::System::Object {
public:
// Declarations
using TableRange = ::GlobalNamespace::CodePointIndexer_TableRange;

/// @brief Field TotalCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_TotalCount, put=__cordl_internal_set_TotalCount)) int32_t  TotalCount;

/// @brief Field defaultCP, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultCP, put=__cordl_internal_set_defaultCP)) int32_t  defaultCP;

/// @brief Field defaultIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultIndex, put=__cordl_internal_set_defaultIndex)) int32_t  defaultIndex;

/// @brief Field ranges, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ranges, put=__cordl_internal_set_ranges)) ::ArrayW<::GlobalNamespace::CodePointIndexer_TableRange>  ranges;

static inline ::Mono::Globalization::Unicode::CodePointIndexer* New_ctor(::ArrayW<int32_t>  starts, ::ArrayW<int32_t>  ends, int32_t  defaultIndex, int32_t  defaultCP) ;

/// @brief Method ToIndex, addr 0xa110f88, size 0x88, virtual false, abstract: false, final false
inline int32_t ToIndex(int32_t  cp) ;

constexpr int32_t const& __cordl_internal_get_TotalCount() const;

constexpr int32_t& __cordl_internal_get_TotalCount() ;

constexpr int32_t const& __cordl_internal_get_defaultCP() const;

constexpr int32_t& __cordl_internal_get_defaultCP() ;

constexpr int32_t const& __cordl_internal_get_defaultIndex() const;

constexpr int32_t& __cordl_internal_get_defaultIndex() ;

constexpr ::ArrayW<::GlobalNamespace::CodePointIndexer_TableRange> const& __cordl_internal_get_ranges() const;

constexpr ::ArrayW<::GlobalNamespace::CodePointIndexer_TableRange>& __cordl_internal_get_ranges() ;

constexpr void __cordl_internal_set_TotalCount(int32_t  value) ;

constexpr void __cordl_internal_set_defaultCP(int32_t  value) ;

constexpr void __cordl_internal_set_defaultIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ranges(::ArrayW<::GlobalNamespace::CodePointIndexer_TableRange>  value) ;

/// @brief Method .ctor, addr 0xa110e0c, size 0x164, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int32_t>  starts, ::ArrayW<int32_t>  ends, int32_t  defaultIndex, int32_t  defaultCP) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CodePointIndexer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CodePointIndexer(CodePointIndexer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodePointIndexer(CodePointIndexer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5358};

/// @brief Field ranges, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CodePointIndexer_TableRange>  ___ranges;

/// @brief Field TotalCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___TotalCount;

/// @brief Field defaultIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___defaultIndex;

/// @brief Field defaultCP, offset: 0x20, size: 0x4, def value: None
 int32_t  ___defaultCP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___ranges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___TotalCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___defaultIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___defaultCP) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mono::Globalization::Unicode::CodePointIndexer) == 0x28, "Size mismatch!");

} // namespace end def Mono::Globalization::Unicode
