#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FovfPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Fovf_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_FovfPair)
namespace GlobalNamespace {
struct OVRPlugin_Fovf;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FovfPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FovfPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FovfPair, "", "OVRPlugin/FovfPair");
// [DefaultMember("Item")]
// Dependencies OVRPlugin::Fovf
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FovfPair
struct CORDL_TYPE OVRPlugin_FovfPair {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::OVRPlugin_Fovf  Item[];

/// @brief Method get_Item, addr 0xa60f13c, size 0xbc, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Fovf get_Item(int32_t  i) ;

/// @brief Method set_Item, addr 0xa60f1f8, size 0xa8, virtual false, abstract: false, final false
inline void set_Item(int32_t  i, ::GlobalNamespace::OVRPlugin_Fovf  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FovfPair() ;

// Ctor Parameters [CppParam { name: "Fov0", ty: "::GlobalNamespace::OVRPlugin_Fovf", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fov1", ty: "::GlobalNamespace::OVRPlugin_Fovf", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FovfPair(::GlobalNamespace::OVRPlugin_Fovf  Fov0, ::GlobalNamespace::OVRPlugin_Fovf  Fov1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12121};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Fov0, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Fovf  Fov0;

/// @brief Field Fov1, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Fovf  Fov1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FovfPair, Fov0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FovfPair, Fov1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FovfPair) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
