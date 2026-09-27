#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_ScopeLineWidth.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_ScopeLineWidth)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_ScopeLineWidth;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_ScopeLineWidth);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_ScopeLineWidth, "Drawing", "CommandBuilder/ScopeLineWidth");
// Dependencies Drawing.CommandBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/ScopeLineWidth
struct CORDL_TYPE CommandBuilder_ScopeLineWidth {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x55bc56c, size 0x5c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_ScopeLineWidth() ;

// Ctor Parameters [CppParam { name: "builder", ty: "::Drawing::CommandBuilder", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_ScopeLineWidth(::Drawing::CommandBuilder  builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27712};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field builder, offset: 0x0, size: 0x18, def value: None
 ::Drawing::CommandBuilder  builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_ScopeLineWidth, builder) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_ScopeLineWidth) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
