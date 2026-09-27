#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RectiPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Recti_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_RectiPair)
namespace GlobalNamespace {
struct OVRPlugin_Recti;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_RectiPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_RectiPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_RectiPair, "", "OVRPlugin/RectiPair");
// [DefaultMember("Item")]
// Dependencies OVRPlugin::Recti
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/RectiPair
struct CORDL_TYPE OVRPlugin_RectiPair {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::OVRPlugin_Recti  Item[];

/// @brief Method get_Item, addr 0xa60ec90, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Recti get_Item(int32_t  i) ;

/// @brief Method set_Item, addr 0xa60ed34, size 0x9c, virtual false, abstract: false, final false
inline void set_Item(int32_t  i, ::GlobalNamespace::OVRPlugin_Recti  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_RectiPair() ;

// Ctor Parameters [CppParam { name: "Rect0", ty: "::GlobalNamespace::OVRPlugin_Recti", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rect1", ty: "::GlobalNamespace::OVRPlugin_Recti", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_RectiPair(::GlobalNamespace::OVRPlugin_Recti  Rect0, ::GlobalNamespace::OVRPlugin_Recti  Rect1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Rect0, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Recti  Rect0;

/// @brief Field Rect1, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Recti  Rect1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_RectiPair, Rect0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RectiPair, Rect1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_RectiPair) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
