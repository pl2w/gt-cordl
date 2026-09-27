#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Colorf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_Colorf)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Colorf;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Colorf);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Colorf, "", "OVRPlugin/Colorf");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Colorf
struct CORDL_TYPE OVRPlugin_Colorf {
public:
// Declarations
/// @brief Method ToString, addr 0xa60ef34, size 0x208, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Colorf() ;

// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Colorf(float_t  r, float_t  g, float_t  b, float_t  a) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12119};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field r, offset: 0x0, size: 0x4, def value: None
 float_t  r;

/// @brief Field g, offset: 0x4, size: 0x4, def value: None
 float_t  g;

/// @brief Field b, offset: 0x8, size: 0x4, def value: None
 float_t  b;

/// @brief Field a, offset: 0xc, size: 0x4, def value: None
 float_t  a;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Colorf, r) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Colorf, g) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Colorf, b) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Colorf, a) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Colorf) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
