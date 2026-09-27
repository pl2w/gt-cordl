#pragma once
// IWYU pragma private; include "Liv/Lck/ILckEarlyUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckEarlyUpdate)
// Forward declare root types
namespace Liv::Lck {
class ILckEarlyUpdate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckEarlyUpdate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckEarlyUpdate*, "Liv.Lck", "ILckEarlyUpdate");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckEarlyUpdate
class CORDL_TYPE ILckEarlyUpdate {
public:
// Declarations
/// @brief Method EarlyUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EarlyUpdate() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckEarlyUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckEarlyUpdate(ILckEarlyUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24681};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
