#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_ScopeMatrix.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_ScopeMatrix)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_ScopeMatrix;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_ScopeMatrix);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_ScopeMatrix, "Drawing", "CommandBuilder/ScopeMatrix");
// Dependencies Drawing.CommandBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/ScopeMatrix
struct CORDL_TYPE CommandBuilder_ScopeMatrix {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x55bc454, size 0x5c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_ScopeMatrix() ;

// Ctor Parameters [CppParam { name: "builder", ty: "::Drawing::CommandBuilder", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_ScopeMatrix(::Drawing::CommandBuilder  builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field builder, offset: 0x0, size: 0x18, def value: None
 ::Drawing::CommandBuilder  builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_ScopeMatrix, builder) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_ScopeMatrix) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
