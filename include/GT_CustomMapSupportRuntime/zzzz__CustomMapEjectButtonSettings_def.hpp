#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CustomMapEjectButtonSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__CustomMapEjectButtonSettings_EjectType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomMapEjectButtonSettings)
namespace GlobalNamespace {
struct CustomMapEjectButtonSettings_EjectType;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class CustomMapEjectButtonSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings*, "GT_CustomMapSupportRuntime", "CustomMapEjectButtonSettings");
// Dependencies GT_CustomMapSupportRuntime.CustomMapEjectButtonSettings::EjectType, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.CustomMapEjectButtonSettings
class CORDL_TYPE CustomMapEjectButtonSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EjectType = ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType;

/// @brief Field ejectType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ejectType, put=__cordl_internal_set_ejectType)) ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType  ejectType;

static inline ::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings* New_ctor() ;

constexpr ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType const& __cordl_internal_get_ejectType() const;

constexpr ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType& __cordl_internal_get_ejectType() ;

constexpr void __cordl_internal_set_ejectType(::GlobalNamespace::CustomMapEjectButtonSettings_EjectType  value) ;

/// @brief Method .ctor, addr 0x9cb6c20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapEjectButtonSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapEjectButtonSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapEjectButtonSettings(CustomMapEjectButtonSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapEjectButtonSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapEjectButtonSettings(CustomMapEjectButtonSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30893};

/// @brief Field ejectType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType  ___ejectType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings, ___ejectType) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::CustomMapEjectButtonSettings) == 0x28, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
