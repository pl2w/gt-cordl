#pragma once
// IWYU pragma private; include "Fusion/IExportedWordCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IExportedWordCount)
// Forward declare root types
namespace Fusion {
class IExportedWordCount;
}
// Write type traits
MARK_REF_T(::Fusion::IExportedWordCount*);
DEFINE_IL2CPP_CLASS(::Fusion::IExportedWordCount*, "Fusion", "IExportedWordCount");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IExportedWordCount
class CORDL_TYPE IExportedWordCount {
public:
// Declarations
 __declspec(property(get=get_WordCount, put=set_WordCount)) int32_t  WordCount;

/// @brief Method get_WordCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_WordCount() ;

/// @brief Method set_WordCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_WordCount(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IExportedWordCount", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExportedWordCount(IExportedWordCount const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18895};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
