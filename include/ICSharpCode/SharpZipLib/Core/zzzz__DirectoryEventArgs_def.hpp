#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/DirectoryEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Core/zzzz__ScanEventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DirectoryEventArgs)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class DirectoryEventArgs;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*, "ICSharpCode.SharpZipLib.Core", "DirectoryEventArgs");
// Dependencies ICSharpCode.SharpZipLib.Core.ScanEventArgs
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.DirectoryEventArgs
class CORDL_TYPE DirectoryEventArgs : public ::ICSharpCode::SharpZipLib::Core::ScanEventArgs {
public:
// Declarations
 __declspec(property(get=get_HasMatchingFiles)) bool  HasMatchingFiles;

/// @brief Field hasMatchingFiles_, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasMatchingFiles_, put=__cordl_internal_set_hasMatchingFiles_)) bool  hasMatchingFiles_;

static inline ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs* New_ctor(::StringW  name, bool  hasMatchingFiles) ;

constexpr bool const& __cordl_internal_get_hasMatchingFiles_() const;

constexpr bool& __cordl_internal_get_hasMatchingFiles_() ;

constexpr void __cordl_internal_set_hasMatchingFiles_(bool  value) ;

/// @brief Method .ctor, addr 0x9ff9c50, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, bool  hasMatchingFiles) ;

/// @brief Method get_HasMatchingFiles, addr 0x9ff9c74, size 0x8, virtual false, abstract: false, final false
inline bool get_HasMatchingFiles() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectoryEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectoryEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectoryEventArgs(DirectoryEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectoryEventArgs(DirectoryEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17420};

/// @brief Field hasMatchingFiles_, offset: 0x19, size: 0x1, def value: None
 bool  ___hasMatchingFiles_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs, ___hasMatchingFiles_) == 0x19, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
