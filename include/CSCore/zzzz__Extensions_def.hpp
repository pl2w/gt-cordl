#pragma once
// IWYU pragma private; include "CSCore/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace CSCore {
class WaveFormat;
}
// Forward declare root types
namespace CSCore {
class Extensions;
}
// Write type traits
MARK_REF_T(::CSCore::Extensions*);
DEFINE_IL2CPP_CLASS(::CSCore::Extensions*, "CSCore", "Extensions");
// [Extension]
// Dependencies System.Object
namespace CSCore {
// Is value type: false
// CS Name: CSCore.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IsIeeeFloat, addr 0xa7635bc, size 0x120, virtual false, abstract: false, final false
static inline bool IsIeeeFloat(::CSCore::WaveFormat*  waveFormat) ;

/// [Extension]
/// @brief Method IsPCM, addr 0xa76349c, size 0x120, virtual false, abstract: false, final false
static inline bool IsPCM(::CSCore::WaveFormat*  waveFormat) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::CSCore::Extensions) == 0x10, "Size mismatch!");

} // namespace end def CSCore
