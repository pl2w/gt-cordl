#pragma once
// IWYU pragma private; include "Liv/Lck/LckLateUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckLateUpdate)
// Forward declare root types
namespace Liv::Lck {
class LckLateUpdate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckLateUpdate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckLateUpdate*, "Liv.Lck", "LckLateUpdate");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckLateUpdate
class CORDL_TYPE LckLateUpdate : public ::System::Object {
public:
// Declarations
static inline ::Liv::Lck::LckLateUpdate* New_ctor() ;

/// @brief Method .ctor, addr 0x9ce32e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckLateUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckLateUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckLateUpdate(LckLateUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckLateUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckLateUpdate(LckLateUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24733};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckLateUpdate) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
