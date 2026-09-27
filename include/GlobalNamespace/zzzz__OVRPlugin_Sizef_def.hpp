#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Sizef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Sizef)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Sizef;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Sizef);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Sizef, "", "OVRPlugin/Sizef");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Sizef
struct CORDL_TYPE OVRPlugin_Sizef {
public:
// Declarations
/// @brief Field zero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::GlobalNamespace::OVRPlugin_Sizef  zero;

static inline ::GlobalNamespace::OVRPlugin_Sizef getStaticF_zero() ;

static inline void setStaticF_zero(::GlobalNamespace::OVRPlugin_Sizef  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Sizef() ;

// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Sizef(float_t  w, float_t  h) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field w, offset: 0x0, size: 0x4, def value: None
 float_t  w;

/// @brief Field h, offset: 0x4, size: 0x4, def value: None
 float_t  h;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Sizef, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Sizef, h) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Sizef) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
