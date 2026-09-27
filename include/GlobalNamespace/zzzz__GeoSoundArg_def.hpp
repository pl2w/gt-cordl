#pragma once
// IWYU pragma private; include "GlobalNamespace/GeoSoundArg.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FXSArgs_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GeoSoundArg)
// Forward declare root types
namespace GlobalNamespace {
class GeoSoundArg;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GeoSoundArg*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GeoSoundArg*, "", "GeoSoundArg");
// Dependencies FXSArgs, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GeoSoundArg
class CORDL_TYPE GeoSoundArg : public ::GlobalNamespace::FXSArgs {
public:
// Declarations
/// @brief Field position, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

static inline ::GlobalNamespace::GeoSoundArg* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x58fe4cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeoSoundArg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeoSoundArg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeoSoundArg(GeoSoundArg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeoSoundArg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeoSoundArg(GeoSoundArg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2142};

/// @brief Field position, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GeoSoundArg, ___position) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GeoSoundArg) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
