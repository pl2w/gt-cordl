#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneManagerDefault_LoadingScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkSceneManagerDefault_LoadingScope)
namespace Fusion {
class NetworkSceneManagerDefault;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkSceneManagerDefault_LoadingScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope, "Fusion", "NetworkSceneManagerDefault/LoadingScope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkSceneManagerDefault/LoadingScope
struct CORDL_TYPE NetworkSceneManagerDefault_LoadingScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x60f179c, size 0x18, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x60f0cfc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkSceneManagerDefault*  manager) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneManagerDefault_LoadingScope() ;

// Ctor Parameters [CppParam { name: "_manager", ty: "::UnityW<::Fusion::NetworkSceneManagerDefault>", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneManagerDefault_LoadingScope(::UnityW<::Fusion::NetworkSceneManagerDefault>  _manager) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23472};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _manager, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkSceneManagerDefault>  _manager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope, _manager) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSceneManagerDefault_LoadingScope) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
