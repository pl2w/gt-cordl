#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableGameObjectDelayed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DisableGameObjectDelayed)
// Forward declare root types
namespace GlobalNamespace {
class DisableGameObjectDelayed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisableGameObjectDelayed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisableGameObjectDelayed*, "", "DisableGameObjectDelayed");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisableGameObjectDelayed
class CORDL_TYPE DisableGameObjectDelayed : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field delayTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayTime, put=__cordl_internal_set_delayTime)) float_t  delayTime;

/// @brief Field enabledTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_enabledTime, put=__cordl_internal_set_enabledTime)) float_t  enabledTime;

/// @brief Method EnableAndResetTimer, addr 0x5b07c1c, size 0x38, virtual false, abstract: false, final false
inline void EnableAndResetTimer() ;

static inline ::GlobalNamespace::DisableGameObjectDelayed* New_ctor() ;

/// @brief Method OnEnable, addr 0x5b07bb4, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x5b07bd0, size 0x4c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_delayTime() const;

constexpr float_t& __cordl_internal_get_delayTime() ;

constexpr float_t const& __cordl_internal_get_enabledTime() const;

constexpr float_t& __cordl_internal_get_enabledTime() ;

constexpr void __cordl_internal_set_delayTime(float_t  value) ;

constexpr void __cordl_internal_set_enabledTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5b07c54, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableGameObjectDelayed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableGameObjectDelayed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableGameObjectDelayed(DisableGameObjectDelayed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableGameObjectDelayed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableGameObjectDelayed(DisableGameObjectDelayed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3495};

/// @brief Field delayTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___delayTime;

/// @brief Field enabledTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___enabledTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisableGameObjectDelayed, ___delayTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableGameObjectDelayed, ___enabledTime) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DisableGameObjectDelayed) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
