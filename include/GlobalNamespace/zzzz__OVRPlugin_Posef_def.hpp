#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Posef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Posef)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Posef);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Posef, "", "OVRPlugin/Posef");
// Dependencies OVRPlugin::Quatf, OVRPlugin::Vector3f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Posef
struct CORDL_TYPE OVRPlugin_Posef {
public:
// Declarations
/// @brief Field identity, offset 0xffffffff, size 0x1c 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::GlobalNamespace::OVRPlugin_Posef  identity;

/// @brief Method ToString, addr 0xa60e374, size 0xf4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

static inline ::GlobalNamespace::OVRPlugin_Posef getStaticF_identity() ;

static inline void setStaticF_identity(::GlobalNamespace::OVRPlugin_Posef  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Posef() ;

// Ctor Parameters [CppParam { name: "Orientation", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Posef(::GlobalNamespace::OVRPlugin_Quatf  Orientation, ::GlobalNamespace::OVRPlugin_Vector3f  Position) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12088};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field Orientation, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  Orientation;

/// @brief Field Position, offset: 0x10, size: 0xc, def value: None
 ::GlobalNamespace::OVRPlugin_Vector3f  Position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Posef, Orientation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Posef, Position) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Posef) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
