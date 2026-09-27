#pragma once
// IWYU pragma private; include "Docking/LivCameraDock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Docking/zzzz__Dock_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCameraDockSettings_def.hpp"
CORDL_MODULE_EXPORT(LivCameraDock)
// Forward declare root types
namespace Docking {
class LivCameraDock;
}
// Write type traits
MARK_REF_T(::Docking::LivCameraDock*);
DEFINE_IL2CPP_CLASS(::Docking::LivCameraDock*, "Docking", "LivCameraDock");
// Dependencies Docking.Dock, Liv.Lck.GorillaTag.GtCameraDockSettings
namespace Docking {
// Is value type: false
// CS Name: Docking.LivCameraDock
class CORDL_TYPE LivCameraDock : public ::Docking::Dock {
public:
// Declarations
/// @brief Field cameraSettings, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_cameraSettings, put=__cordl_internal_set_cameraSettings)) ::Liv::Lck::GorillaTag::GtCameraDockSettings  cameraSettings;

static inline ::Docking::LivCameraDock* New_ctor() ;

/// @brief Method OnValidate, addr 0x5ddcf64, size 0x30, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0x5ddcf58, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::Liv::Lck::GorillaTag::GtCameraDockSettings const& __cordl_internal_get_cameraSettings() const;

constexpr ::Liv::Lck::GorillaTag::GtCameraDockSettings& __cordl_internal_get_cameraSettings() ;

constexpr void __cordl_internal_set_cameraSettings(::Liv::Lck::GorillaTag::GtCameraDockSettings  value) ;

/// @brief Method .ctor, addr 0x5ddcf94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LivCameraDock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LivCameraDock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LivCameraDock(LivCameraDock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LivCameraDock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LivCameraDock(LivCameraDock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5110};

/// @brief Field cameraSettings, offset: 0x38, size: 0xc, def value: None
 ::Liv::Lck::GorillaTag::GtCameraDockSettings  ___cameraSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Docking::LivCameraDock, ___cameraSettings) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Docking::LivCameraDock) == 0x48, "Size mismatch!");

} // namespace end def Docking
