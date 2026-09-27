#pragma once
// IWYU pragma private; include "Liv/Lck/LckEarlyUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckEarlyUpdate)
// Forward declare root types
namespace Liv::Lck {
class LckEarlyUpdate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckEarlyUpdate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckEarlyUpdate*, "Liv.Lck", "LckEarlyUpdate");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckEarlyUpdate
class CORDL_TYPE LckEarlyUpdate : public ::System::Object {
public:
// Declarations
static inline ::Liv::Lck::LckEarlyUpdate* New_ctor() ;

/// @brief Method .ctor, addr 0x9ce1244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEarlyUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEarlyUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEarlyUpdate(LckEarlyUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEarlyUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEarlyUpdate(LckEarlyUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24701};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckEarlyUpdate) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
