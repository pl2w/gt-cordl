#pragma once
// IWYU pragma private; include "Pathfinding/Util/Checksum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Checksum)
// Forward declare root types
namespace Pathfinding::Util {
class Checksum;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::Checksum*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::Checksum*, "Pathfinding.Util", "Checksum");
// Dependencies System.Object
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.Checksum
class CORDL_TYPE Checksum : public ::System::Object {
public:
// Declarations
/// @brief Method GetChecksum, addr 0x5edf5b0, size 0x64, virtual false, abstract: false, final false
static inline uint32_t GetChecksum(::ArrayW<uint8_t>  arr, uint32_t  hash) ;

static inline ::Pathfinding::Util::Checksum* New_ctor() ;

/// @brief Method .ctor, addr 0x5edf614, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Checksum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Checksum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Checksum(Checksum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Checksum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Checksum(Checksum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Util::Checksum) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Util
