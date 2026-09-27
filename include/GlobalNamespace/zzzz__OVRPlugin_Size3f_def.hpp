#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Size3f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Size3f)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Size3f;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Size3f);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Size3f, "", "OVRPlugin/Size3f");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Size3f
struct CORDL_TYPE OVRPlugin_Size3f {
public:
// Declarations
/// @brief Field zero, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::GlobalNamespace::OVRPlugin_Size3f  zero;

static inline ::GlobalNamespace::OVRPlugin_Size3f getStaticF_zero() ;

static inline void setStaticF_zero(::GlobalNamespace::OVRPlugin_Size3f  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Size3f() ;

// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "d", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Size3f(float_t  w, float_t  h, float_t  d) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12107};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field w, offset: 0x0, size: 0x4, def value: None
 float_t  w;

/// @brief Field h, offset: 0x4, size: 0x4, def value: None
 float_t  h;

/// @brief Field d, offset: 0x8, size: 0x4, def value: None
 float_t  d;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Size3f, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Size3f, h) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Size3f, d) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Size3f) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
