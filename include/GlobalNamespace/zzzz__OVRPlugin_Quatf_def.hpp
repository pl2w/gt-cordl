#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Quatf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Quatf)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Quatf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Quatf, "", "OVRPlugin/Quatf");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Quatf
struct CORDL_TYPE OVRPlugin_Quatf {
public:
// Declarations
/// @brief Field identity, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_identity, put=setStaticF_identity)) ::GlobalNamespace::OVRPlugin_Quatf  identity;

/// @brief Method ToString, addr 0xa60e11c, size 0x208, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa60e110, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y, float_t  z, float_t  w) ;

static inline ::GlobalNamespace::OVRPlugin_Quatf getStaticF_identity() ;

static inline void setStaticF_identity(::GlobalNamespace::OVRPlugin_Quatf  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Quatf() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Quatf(float_t  x, float_t  y, float_t  z, float_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12087};

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
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Quatf, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Quatf, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Quatf, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Quatf, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Quatf) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
