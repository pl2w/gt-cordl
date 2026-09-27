#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/IScanFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IScanFilter)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class IScanFilter;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::IScanFilter*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::IScanFilter*, "ICSharpCode.SharpZipLib.Core", "IScanFilter");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.IScanFilter
class CORDL_TYPE IScanFilter {
public:
// Declarations
/// @brief Method IsMatch, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsMatch(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "IScanFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IScanFilter(IScanFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Core
