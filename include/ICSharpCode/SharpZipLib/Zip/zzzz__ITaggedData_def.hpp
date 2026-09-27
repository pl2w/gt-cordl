#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ITaggedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITaggedData)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ITaggedData;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ITaggedData*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ITaggedData*, "ICSharpCode.SharpZipLib.Zip", "ITaggedData");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ITaggedData
class CORDL_TYPE ITaggedData {
public:
// Declarations
 __declspec(property(get=get_TagID)) int16_t  TagID;

/// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> GetData() ;

/// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

/// @brief Method get_TagID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int16_t get_TagID() ;

// Ctor Parameters [CppParam { name: "", ty: "ITaggedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITaggedData(ITaggedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Zip
