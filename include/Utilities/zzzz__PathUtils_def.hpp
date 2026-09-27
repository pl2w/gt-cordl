#pragma once
// IWYU pragma private; include "Utilities/PathUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PathUtils)
// Forward declare root types
namespace Utilities {
class PathUtils;
}
// Write type traits
MARK_REF_T(::Utilities::PathUtils*);
DEFINE_IL2CPP_CLASS(::Utilities::PathUtils*, "Utilities", "PathUtils");
// Dependencies System.Object
namespace Utilities {
// Is value type: false
// CS Name: Utilities.PathUtils
class CORDL_TYPE PathUtils : public ::System::Object {
public:
// Declarations
/// @brief Field kPathSeps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kPathSeps, put=setStaticF_kPathSeps)) ::ArrayW<char16_t>  kPathSeps;

/// @brief Method Resolve, addr 0x5b710dc, size 0x130, virtual false, abstract: false, final false
static inline ::StringW Resolve(/* [ParamArray] */ ::ArrayW<::StringW>  subPaths) ;

static inline ::ArrayW<char16_t> getStaticF_kPathSeps() ;

static inline void setStaticF_kPathSeps(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathUtils(PathUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathUtils(PathUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3877};

/// @brief Field kFwdSlash offset 0xffffffff size 0x8
static constexpr ::ConstString  kFwdSlash{u"/"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Utilities::PathUtils) == 0x10, "Size mismatch!");

} // namespace end def Utilities
