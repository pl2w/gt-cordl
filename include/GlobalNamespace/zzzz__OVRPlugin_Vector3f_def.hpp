#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Vector3f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Vector3f)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Vector3f);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Vector3f, "", "OVRPlugin/Vector3f");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Vector3f
struct CORDL_TYPE OVRPlugin_Vector3f {
public:
// Declarations
/// @brief Field zero, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::GlobalNamespace::OVRPlugin_Vector3f  zero;

/// @brief Method ToString, addr 0xa60db34, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

static inline ::GlobalNamespace::OVRPlugin_Vector3f getStaticF_zero() ;

static inline void setStaticF_zero(::GlobalNamespace::OVRPlugin_Vector3f  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Vector3f() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Vector3f(float_t  x, float_t  y, float_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12084};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector3f, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector3f, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector3f, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Vector3f) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
