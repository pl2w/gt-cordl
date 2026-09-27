#pragma once
// IWYU pragma private; include "Fusion/ISceneLoadDone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISceneLoadDone)
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct SceneLoadDoneArgs;
}
// Forward declare root types
namespace Fusion {
class ISceneLoadDone;
}
// Write type traits
MARK_REF_T(::Fusion::ISceneLoadDone*);
DEFINE_IL2CPP_CLASS(::Fusion::ISceneLoadDone*, "Fusion", "ISceneLoadDone");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ISceneLoadDone
class CORDL_TYPE ISceneLoadDone {
public:
// Declarations
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method SceneLoadDone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SceneLoadDone(/* [IsReadOnly] */ ::by_ref<::Fusion::SceneLoadDoneArgs>  sceneInfo) ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ISceneLoadDone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISceneLoadDone(ISceneLoadDone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18889};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
