#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ITaggedDataFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITaggedDataFactory)
namespace ICSharpCode::SharpZipLib::Zip {
class ITaggedData;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ITaggedDataFactory;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ITaggedDataFactory*, "ICSharpCode.SharpZipLib.Zip", "ITaggedDataFactory");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ITaggedDataFactory
class CORDL_TYPE ITaggedDataFactory {
public:
// Declarations
/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Zip::ITaggedData* Create(int16_t  tag, ::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

// Ctor Parameters [CppParam { name: "", ty: "ITaggedDataFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITaggedDataFactory(ITaggedDataFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Zip
