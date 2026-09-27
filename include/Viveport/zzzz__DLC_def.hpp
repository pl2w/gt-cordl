#pragma once
// IWYU pragma private; include "Viveport/DLC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DLC)
// Forward declare root types
namespace Viveport {
class DLC;
}
// Write type traits
MARK_REF_T(::Viveport::DLC*);
DEFINE_IL2CPP_CLASS(::Viveport::DLC*, "Viveport", "DLC");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.DLC
class CORDL_TYPE DLC : public ::System::Object {
public:
// Declarations
static inline ::Viveport::DLC* New_ctor() ;

/// @brief Method .ctor, addr 0x5b57604, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DLC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DLC", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DLC(DLC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DLC", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DLC(DLC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3784};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::DLC) == 0x10, "Size mismatch!");

} // namespace end def Viveport
