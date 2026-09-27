#pragma once
// IWYU pragma private; include "Steamworks/Packsize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Packsize)
namespace GlobalNamespace {
struct Packsize_ValvePackingSentinel_t;
}
// Forward declare root types
namespace Steamworks {
class Packsize;
}
// Write type traits
MARK_REF_T(::Steamworks::Packsize*);
DEFINE_IL2CPP_CLASS(::Steamworks::Packsize*, "Steamworks", "Packsize");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.Packsize
class CORDL_TYPE Packsize : public ::System::Object {
public:
// Declarations
using ValvePackingSentinel_t = ::GlobalNamespace::Packsize_ValvePackingSentinel_t;

/// @brief Method Test, addr 0x5f32b40, size 0x9c, virtual false, abstract: false, final false
static inline bool Test() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Packsize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Packsize", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Packsize(Packsize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Packsize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Packsize(Packsize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::Packsize) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
