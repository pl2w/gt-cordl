#pragma once
// IWYU pragma private; include "Photon/Voice/Util.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Util)
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace Photon::Voice {
class Util;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Util*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Util*, "Photon.Voice", "Util");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.Util
class CORDL_TYPE Util : public ::System::Object {
public:
// Declarations
/// @brief Method SetThreadName, addr 0xa7487bc, size 0x48, virtual false, abstract: false, final false
static inline void SetThreadName(::System::Threading::Thread*  t, ::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Util() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Util", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Util(Util && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Util", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Util(Util const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Util) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
