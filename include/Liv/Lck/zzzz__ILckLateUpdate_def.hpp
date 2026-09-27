#pragma once
// IWYU pragma private; include "Liv/Lck/ILckLateUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckLateUpdate)
// Forward declare root types
namespace Liv::Lck {
class ILckLateUpdate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckLateUpdate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckLateUpdate*, "Liv.Lck", "ILckLateUpdate");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckLateUpdate
class CORDL_TYPE ILckLateUpdate {
public:
// Declarations
/// @brief Method LateUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LateUpdate() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckLateUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckLateUpdate(ILckLateUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24683};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
