#pragma once
// IWYU pragma private; include "Fusion/ISceneLoadStart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISceneLoadStart)
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct SceneRef;
}
// Forward declare root types
namespace Fusion {
class ISceneLoadStart;
}
// Write type traits
MARK_REF_T(::Fusion::ISceneLoadStart*);
DEFINE_IL2CPP_CLASS(::Fusion::ISceneLoadStart*, "Fusion", "ISceneLoadStart");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ISceneLoadStart
class CORDL_TYPE ISceneLoadStart {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method SceneLoadStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SceneLoadStart(::Fusion::SceneRef  sceneRef) ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ISceneLoadStart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISceneLoadStart(ISceneLoadStart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
