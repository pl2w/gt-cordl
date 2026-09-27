#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeSizeVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NativeSizeVolume_NativeSizeVolumeAction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NativeSizeVolume)
namespace GlobalNamespace {
class NativeSizeChangerSettings;
}
namespace GlobalNamespace {
struct NativeSizeVolume_NativeSizeVolumeAction;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class NativeSizeVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NativeSizeVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeSizeVolume*, "", "NativeSizeVolume");
// Dependencies NativeSizeVolume::NativeSizeVolumeAction, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NativeSizeVolume
class CORDL_TYPE NativeSizeVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using NativeSizeVolumeAction = ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction;

/// @brief Field OnEnterAction, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_OnEnterAction, put=__cordl_internal_set_OnEnterAction)) ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction  OnEnterAction;

/// @brief Field OnExitAction, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_OnExitAction, put=__cordl_internal_set_OnExitAction)) ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction  OnExitAction;

/// @brief Field settings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::GlobalNamespace::NativeSizeChangerSettings*  settings;

/// @brief Field triggerVolume, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerVolume, put=__cordl_internal_set_triggerVolume)) ::UnityW<::UnityEngine::Collider>  triggerVolume;

static inline ::GlobalNamespace::NativeSizeVolume* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x56d3a5c, size 0xfc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x56d3b58, size 0xfc, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction const& __cordl_internal_get_OnEnterAction() const;

constexpr ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction& __cordl_internal_get_OnEnterAction() ;

constexpr ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction const& __cordl_internal_get_OnExitAction() const;

constexpr ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction& __cordl_internal_get_OnExitAction() ;

constexpr ::GlobalNamespace::NativeSizeChangerSettings* const& __cordl_internal_get_settings() const;

constexpr ::GlobalNamespace::NativeSizeChangerSettings*& __cordl_internal_get_settings() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_triggerVolume() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_triggerVolume() ;

constexpr void __cordl_internal_set_OnEnterAction(::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction  value) ;

constexpr void __cordl_internal_set_OnExitAction(::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction  value) ;

constexpr void __cordl_internal_set_settings(::GlobalNamespace::NativeSizeChangerSettings*  value) ;

constexpr void __cordl_internal_set_triggerVolume(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0x56d3c54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeSizeVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeSizeVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeSizeVolume(NativeSizeVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeSizeVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeSizeVolume(NativeSizeVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1071};

/// [SerializeField]
/// @brief Field triggerVolume, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___triggerVolume;

/// [SerializeField]
/// @brief Field settings, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::NativeSizeChangerSettings*  ___settings;

/// [SerializeField]
/// @brief Field OnEnterAction, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction  ___OnEnterAction;

/// [SerializeField]
/// @brief Field OnExitAction, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction  ___OnExitAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeSizeVolume, ___triggerVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeVolume, ___settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeVolume, ___OnEnterAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeSizeVolume, ___OnExitAction) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeSizeVolume) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
