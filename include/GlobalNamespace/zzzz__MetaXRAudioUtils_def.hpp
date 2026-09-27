#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaXRAudioUtils)
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAudioUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAudioUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAudioUtils*, "", "MetaXRAudioUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAudioUtils
class CORDL_TYPE MetaXRAudioUtils : public ::System::Object {
public:
// Declarations
/// @brief Method CreateDirectoryForFilePath, addr 0x9ebe64c, size 0xd0, virtual false, abstract: false, final false
static inline void CreateDirectoryForFilePath(::StringW  absPath) ;

/// @brief Method GetCaseSensitivePathForFile, addr 0x9ebe524, size 0x128, virtual false, abstract: false, final false
static inline ::StringW GetCaseSensitivePathForFile(::StringW  path) ;

static inline ::GlobalNamespace::MetaXRAudioUtils* New_ctor() ;

/// @brief Method .ctor, addr 0x9ebe71c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAudioUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAudioUtils(MetaXRAudioUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAudioUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAudioUtils(MetaXRAudioUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MetaXRAudioUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
