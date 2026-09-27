#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/GuidHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidHelper)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Backtrace::Unity::Extensions {
class GuidHelper;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Extensions::GuidHelper*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Extensions::GuidHelper*, "Backtrace.Unity.Extensions", "GuidHelper");
// Dependencies System.Object
namespace Backtrace::Unity::Extensions {
// Is value type: false
// CS Name: Backtrace.Unity.Extensions.GuidHelper
class CORDL_TYPE GuidHelper : public ::System::Object {
public:
// Declarations
/// @brief Method FromLong, addr 0x5f15b3c, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Guid FromLong(int64_t  source) ;

/// @brief Method IsNullOrEmpty, addr 0x5f155b0, size 0x6c, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::StringW  guid) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidHelper(GuidHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidHelper(GuidHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27663};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Extensions::GuidHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Extensions
