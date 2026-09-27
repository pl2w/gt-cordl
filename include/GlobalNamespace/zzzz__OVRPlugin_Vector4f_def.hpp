#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Vector4f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Vector4f)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Vector4f;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Vector4f);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Vector4f, "", "OVRPlugin/Vector4f");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Vector4f
struct CORDL_TYPE OVRPlugin_Vector4f {
public:
// Declarations
/// @brief Field zero, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::GlobalNamespace::OVRPlugin_Vector4f  zero;

/// @brief Method ToString, addr 0xa60dc70, size 0x208, virtual true, abstract: false, final false
inline ::StringW ToString() ;

static inline ::GlobalNamespace::OVRPlugin_Vector4f getStaticF_zero() ;

static inline void setStaticF_zero(::GlobalNamespace::OVRPlugin_Vector4f  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Vector4f() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Vector4f(float_t  x, float_t  y, float_t  z, float_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12085};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

/// @brief Field w, offset: 0xc, size: 0x4, def value: None
 float_t  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector4f, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector4f, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector4f, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector4f, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Vector4f) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
