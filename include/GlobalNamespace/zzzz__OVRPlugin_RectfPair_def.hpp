#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RectfPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Rectf_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_RectfPair)
namespace GlobalNamespace {
struct OVRPlugin_Rectf;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_RectfPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_RectfPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_RectfPair, "", "OVRPlugin/RectfPair");
// [DefaultMember("Item")]
// Dependencies OVRPlugin::Rectf
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/RectfPair
struct CORDL_TYPE OVRPlugin_RectfPair {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::OVRPlugin_Rectf  Item[];

/// @brief Method get_Item, addr 0xa60edd0, size 0xbc, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Rectf get_Item(int32_t  i) ;

/// @brief Method set_Item, addr 0xa60ee8c, size 0xa8, virtual false, abstract: false, final false
inline void set_Item(int32_t  i, ::GlobalNamespace::OVRPlugin_Rectf  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_RectfPair() ;

// Ctor Parameters [CppParam { name: "Rect0", ty: "::GlobalNamespace::OVRPlugin_Rectf", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rect1", ty: "::GlobalNamespace::OVRPlugin_Rectf", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_RectfPair(::GlobalNamespace::OVRPlugin_Rectf  Rect0, ::GlobalNamespace::OVRPlugin_Rectf  Rect1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Rect0, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Rectf  Rect0;

/// @brief Field Rect1, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Rectf  Rect1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_RectfPair, Rect0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RectfPair, Rect1) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_RectfPair) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
