#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/PathTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PathTransformer)
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class PathTransformer;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::PathTransformer*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::PathTransformer*, "ICSharpCode.SharpZipLib.Zip", "PathTransformer");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.PathTransformer
class CORDL_TYPE PathTransformer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Core::INameTransform"
constexpr operator  ::ICSharpCode::SharpZipLib::Core::INameTransform*() noexcept;

static inline ::ICSharpCode::SharpZipLib::Zip::PathTransformer* New_ctor() ;

/// @brief Method TransformDirectory, addr 0x9fce1a0, size 0xdc, virtual true, abstract: false, final true
inline ::StringW TransformDirectory(::StringW  name) ;

/// @brief Method TransformFile, addr 0x9fce27c, size 0x108, virtual true, abstract: false, final true
inline ::StringW TransformFile(::StringW  name) ;

/// @brief Method .ctor, addr 0x9fce198, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Core::INameTransform"
constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* i___ICSharpCode__SharpZipLib__Core__INameTransform() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathTransformer(PathTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathTransformer(PathTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::PathTransformer) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
