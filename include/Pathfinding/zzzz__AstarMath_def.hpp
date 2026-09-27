#pragma once
// IWYU pragma private; include "Pathfinding/AstarMath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AstarMath)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Pathfinding {
class AstarMath;
}
// Write type traits
MARK_REF_T(::Pathfinding::AstarMath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarMath*, "Pathfinding", "AstarMath");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarMath
class CORDL_TYPE AstarMath : public ::System::Object {
public:
// Declarations
/// @brief Method Bit, addr 0x5e4f048, size 0xc, virtual false, abstract: false, final false
static inline int32_t Bit(int32_t  a, int32_t  b) ;

/// @brief Method FormatBytesBinary, addr 0x5e4ee94, size 0x1b4, virtual false, abstract: false, final false
static inline ::StringW FormatBytesBinary(int32_t  bytes) ;

/// @brief Method HSVToRGB, addr 0x5e4f054, size 0x13c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color HSVToRGB(float_t  h, float_t  s, float_t  v) ;

/// @brief Method IntToColor, addr 0x5e47bb8, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Color IntToColor(int32_t  i, float_t  a) ;

/// @brief Method MapTo, addr 0x5e4ee48, size 0x4c, virtual false, abstract: false, final false
static inline float_t MapTo(float_t  startMin, float_t  startMax, float_t  targetMin, float_t  targetMax, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarMath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarMath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarMath(AstarMath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarMath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarMath(AstarMath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::AstarMath) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
