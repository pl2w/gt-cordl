#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FXSArgs_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandTapArgs)
// Forward declare root types
namespace GlobalNamespace {
class HandTapArgs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandTapArgs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTapArgs*, "", "HandTapArgs");
// Dependencies FXSArgs
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTapArgs
class CORDL_TYPE HandTapArgs : public ::GlobalNamespace::FXSArgs {
public:
// Declarations
/// @brief Field isLeftHand, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field soundIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundIndex, put=__cordl_internal_set_soundIndex)) int32_t  soundIndex;

/// @brief Field tapVolume, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapVolume, put=__cordl_internal_set_tapVolume)) float_t  tapVolume;

static inline ::GlobalNamespace::HandTapArgs* New_ctor() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr int32_t const& __cordl_internal_get_soundIndex() const;

constexpr int32_t& __cordl_internal_get_soundIndex() ;

constexpr float_t const& __cordl_internal_get_tapVolume() const;

constexpr float_t& __cordl_internal_get_tapVolume() ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_soundIndex(int32_t  value) ;

constexpr void __cordl_internal_set_tapVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x58fe4c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTapArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTapArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTapArgs(HandTapArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTapArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTapArgs(HandTapArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2141};

/// @brief Field soundIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___soundIndex;

/// @brief Field isLeftHand, offset: 0x14, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field tapVolume, offset: 0x18, size: 0x4, def value: None
 float_t  ___tapVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTapArgs, ___soundIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapArgs, ___isLeftHand) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTapArgs, ___tapVolume) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTapArgs) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
