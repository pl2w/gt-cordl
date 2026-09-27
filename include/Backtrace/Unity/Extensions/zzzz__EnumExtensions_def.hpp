#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/EnumExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnumExtensions)
namespace System {
class Enum;
}
// Forward declare root types
namespace Backtrace::Unity::Extensions {
class EnumExtensions;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Extensions::EnumExtensions*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Extensions::EnumExtensions*, "Backtrace.Unity.Extensions", "EnumExtensions");
// [Extension]
// Dependencies System.Object
namespace Backtrace::Unity::Extensions {
// Is value type: false
// CS Name: Backtrace.Unity.Extensions.EnumExtensions
class CORDL_TYPE EnumExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method HasAllFlags, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool HasAllFlags(T  rawSource) ;

/// [Extension]
/// @brief Method HasFlag, addr 0x5f258c4, size 0x198, virtual false, abstract: false, final false
static inline bool HasFlag(::System::Enum*  variable, ::System::Enum*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumExtensions(EnumExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumExtensions(EnumExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Extensions::EnumExtensions) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Extensions
