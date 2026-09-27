#pragma once
// IWYU pragma private; include "GlobalNamespace/IGorillaSerializeableScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGorillaSerializeableScene)
namespace GlobalNamespace {
class GorillaSerializerScene;
}
namespace GlobalNamespace {
class IGorillaSerializeable;
}
// Forward declare root types
namespace GlobalNamespace {
class IGorillaSerializeableScene;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGorillaSerializeableScene*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGorillaSerializeableScene*, "", "IGorillaSerializeableScene");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGorillaSerializeableScene
class CORDL_TYPE IGorillaSerializeableScene {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::IGorillaSerializeable"
constexpr operator  ::GlobalNamespace::IGorillaSerializeable*() noexcept;

/// @brief Method OnNetworkObjectDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnNetworkObjectDisable() ;

/// @brief Method OnNetworkObjectEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnNetworkObjectEnable() ;

/// @brief Method OnSceneLinking, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSceneLinking(::GlobalNamespace::GorillaSerializerScene*  serializer) ;

/// @brief Convert to "::GlobalNamespace::IGorillaSerializeable"
constexpr ::GlobalNamespace::IGorillaSerializeable* i___GlobalNamespace__IGorillaSerializeable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IGorillaSerializeableScene", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGorillaSerializeableScene(IGorillaSerializeableScene const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
