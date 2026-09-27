#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Vector4s.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Vector4s)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Vector4s;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Vector4s);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Vector4s, "", "OVRPlugin/Vector4s");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Vector4s
struct CORDL_TYPE OVRPlugin_Vector4s {
public:
// Declarations
/// @brief Field zero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::GlobalNamespace::OVRPlugin_Vector4s  zero;

/// @brief Method ToString, addr 0xa60dec0, size 0x208, virtual true, abstract: false, final false
inline ::StringW ToString() ;

static inline ::GlobalNamespace::OVRPlugin_Vector4s getStaticF_zero() ;

static inline void setStaticF_zero(::GlobalNamespace::OVRPlugin_Vector4s  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Vector4s() ;

// Ctor Parameters [CppParam { name: "x", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Vector4s(int16_t  x, int16_t  y, int16_t  z, int16_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x2, def value: None
 int16_t  x;

/// @brief Field y, offset: 0x2, size: 0x2, def value: None
 int16_t  y;

/// @brief Field z, offset: 0x4, size: 0x2, def value: None
 int16_t  z;

/// @brief Field w, offset: 0x6, size: 0x2, def value: None
 int16_t  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector4s, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector4s, y) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector4s, z) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Vector4s, w) == 0x6, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Vector4s) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
