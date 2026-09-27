#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_CustomLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LagCompensationUtils_CustomLine)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct LagCompensationUtils_CustomLine;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LagCompensationUtils_CustomLine);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LagCompensationUtils_CustomLine, "Fusion.LagCompensation", "LagCompensationUtils/CustomLine");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LagCompensation.LagCompensationUtils/CustomLine
struct CORDL_TYPE LagCompensationUtils_CustomLine {
public:
// Declarations
/// @brief Method .ctor, addr 0x6017088, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationUtils_CustomLine() ;

// Ctor Parameters [CppParam { name: "Start", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "End", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr LagCompensationUtils_CustomLine(::UnityEngine::Vector3  Start, ::UnityEngine::Vector3  End) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19395};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Start, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Start;

/// @brief Field End, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  End;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomLine, Start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomLine, End) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LagCompensationUtils_CustomLine) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
