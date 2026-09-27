#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_ScopeEmpty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CommandBuilder_ScopeEmpty)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_ScopeEmpty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_ScopeEmpty);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_ScopeEmpty, "Drawing", "CommandBuilder/ScopeEmpty");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/ScopeEmpty
#pragma pack(push, 0)
struct CORDL_TYPE CommandBuilder_ScopeEmpty {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x55bc568, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_ScopeEmpty() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27711};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CommandBuilder_ScopeEmpty) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
