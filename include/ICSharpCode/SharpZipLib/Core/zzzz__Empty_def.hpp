#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/Empty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Empty)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Core {
class Empty;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Core::Empty*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Core::Empty*, "ICSharpCode.SharpZipLib.Core", "Empty");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Core {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Core.Empty
class CORDL_TYPE Empty : public ::System::Object {
public:
// Declarations
/// @brief Method Array, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> Array() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Empty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Empty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Empty(Empty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Empty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Empty(Empty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17417};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Core::Empty) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Core
