#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/SharedUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedUtils)
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class SharedUtils;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::SharedUtils*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::SharedUtils*, "Pathfinding.Ionic.Zlib", "SharedUtils");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.SharedUtils
class CORDL_TYPE SharedUtils : public ::System::Object {
public:
// Declarations
/// @brief Method URShift, addr 0xa6ac908, size 0x8, virtual false, abstract: false, final false
static inline int32_t URShift(int32_t  number, int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedUtils(SharedUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedUtils(SharedUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28199};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zlib::SharedUtils) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
