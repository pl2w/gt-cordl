#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersAttachPointSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActorSettings_def.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_def.hpp"
CORDL_MODULE_EXPORT(CrittersAttachPointSettings)
// Forward declare root types
namespace GlobalNamespace {
class CrittersAttachPointSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersAttachPointSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersAttachPointSettings*, "", "CrittersAttachPointSettings");
// Dependencies CrittersActorSettings, CrittersAttachPoint::AnchoredLocationTypes
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersAttachPointSettings
class CORDL_TYPE CrittersAttachPointSettings : public ::GlobalNamespace::CrittersActorSettings {
public:
// Declarations
/// @brief Field anchoredLocation, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_anchoredLocation, put=__cordl_internal_set_anchoredLocation)) ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  anchoredLocation;

/// @brief Field isLeft, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeft, put=__cordl_internal_set_isLeft)) bool  isLeft;

static inline ::GlobalNamespace::CrittersAttachPointSettings* New_ctor() ;

/// @brief Method UpdateActorSettings, addr 0x55fb5d0, size 0xac, virtual true, abstract: false, final false
inline void UpdateActorSettings() ;

constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes const& __cordl_internal_get_anchoredLocation() const;

constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes& __cordl_internal_get_anchoredLocation() ;

constexpr bool const& __cordl_internal_get_isLeft() const;

constexpr bool& __cordl_internal_get_isLeft() ;

constexpr void __cordl_internal_set_anchoredLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  value) ;

constexpr void __cordl_internal_set_isLeft(bool  value) ;

/// @brief Method .ctor, addr 0x55fb67c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersAttachPointSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersAttachPointSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersAttachPointSettings(CrittersAttachPointSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersAttachPointSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersAttachPointSettings(CrittersAttachPointSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{85};

/// @brief Field isLeft, offset: 0x40, size: 0x1, def value: None
 bool  ___isLeft;

/// @brief Field anchoredLocation, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  ___anchoredLocation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersAttachPointSettings, ___isLeft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersAttachPointSettings, ___anchoredLocation) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersAttachPointSettings) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
