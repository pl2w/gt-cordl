#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/INameTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(INameTransform)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::INameTransform*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::INameTransform*, "ICSharpCode.SharpZipLib.Core", "INameTransform");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.INameTransform
class CORDL_TYPE INameTransform {
public:
// Declarations
/// @brief Method TransformDirectory, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW TransformDirectory(::StringW  name) ;

/// @brief Method TransformFile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW TransformFile(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "INameTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INameTransform(INameTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Core
