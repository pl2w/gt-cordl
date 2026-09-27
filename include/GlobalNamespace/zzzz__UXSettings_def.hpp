#pragma once
// IWYU pragma private; include "GlobalNamespace/UXSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UXSettings)
// Forward declare root types
namespace GlobalNamespace {
class UXSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UXSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UXSettings*, "", "UXSettings");
// [CreateAssetMenu(fileName = "UXSettings", menuName = "UXSettings")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: UXSettings
class CORDL_TYPE UXSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field StickSensitvity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StickSensitvity, put=__cordl_internal_set_StickSensitvity)) float_t  StickSensitvity;

static inline ::GlobalNamespace::UXSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_StickSensitvity() const;

constexpr float_t& __cordl_internal_get_StickSensitvity() ;

constexpr void __cordl_internal_set_StickSensitvity(float_t  value) ;

/// @brief Method .ctor, addr 0x5ac2810, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UXSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UXSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UXSettings(UXSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UXSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UXSettings(UXSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3352};

/// @brief Field StickSensitvity, offset: 0x18, size: 0x4, def value: None
 float_t  ___StickSensitvity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UXSettings, ___StickSensitvity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UXSettings) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
