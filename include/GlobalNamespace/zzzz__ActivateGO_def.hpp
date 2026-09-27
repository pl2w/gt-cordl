#pragma once
// IWYU pragma private; include "GlobalNamespace/ActivateGO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ActivateGO_ActivateGOMode_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_Flag_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ActivateGO)
namespace GlobalNamespace {
struct ActivateGO_ActivateGOMode;
}
namespace GlobalNamespace {
struct ActivateGO__SetGOsActive_d__13;
}
namespace GlobalNamespace {
struct PlayerPrefFlags_Flag;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ActivateGO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ActivateGO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActivateGO*, "", "ActivateGO");
// Dependencies ActivateGO::ActivateGOMode, PlayerPrefFlags::Flag, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ActivateGO
class CORDL_TYPE ActivateGO : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActivateGOMode = ::GlobalNamespace::ActivateGO_ActivateGOMode;

using _SetGOsActive_d__13 = ::GlobalNamespace::ActivateGO__SetGOsActive_d__13;

/// @brief Field active, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field flag, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_flag, put=__cordl_internal_set_flag)) ::GlobalNamespace::PlayerPrefFlags_Flag  flag;

/// @brief Field flashes, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashes, put=__cordl_internal_set_flashes)) int32_t  flashes;

/// @brief Field flashing, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_flashing, put=__cordl_internal_set_flashing)) bool  flashing;

/// @brief Field invertFlag, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertFlag, put=__cordl_internal_set_invertFlag)) bool  invertFlag;

/// @brief Field layerMask, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field mode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::ActivateGO_ActivateGOMode  mode;

/// @brief Field targetGO, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetGO, put=__cordl_internal_set_targetGO)) ::UnityW<::UnityEngine::GameObject>  targetGO;

static inline ::GlobalNamespace::ActivateGO* New_ctor() ;

/// @brief Method OnDestroy, addr 0x55e4648, size 0x124, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x55e4524, size 0x124, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x55e431c, size 0x150, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFlagChange, addr 0x55e476c, size 0x30, virtual false, abstract: false, final false
inline void OnFlagChange(::GlobalNamespace::PlayerPrefFlags_Flag  f, bool  value) ;

/// [AsyncStateMachine(typeof(ActivateGO::<SetGOsActive>d__13))]
/// @brief Method SetGOsActive, addr 0x55e446c, size 0xb8, virtual false, abstract: false, final false
inline void SetGOsActive(int32_t  fls) ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr ::GlobalNamespace::PlayerPrefFlags_Flag const& __cordl_internal_get_flag() const;

constexpr ::GlobalNamespace::PlayerPrefFlags_Flag& __cordl_internal_get_flag() ;

constexpr int32_t const& __cordl_internal_get_flashes() const;

constexpr int32_t& __cordl_internal_get_flashes() ;

constexpr bool const& __cordl_internal_get_flashing() const;

constexpr bool& __cordl_internal_get_flashing() ;

constexpr bool const& __cordl_internal_get_invertFlag() const;

constexpr bool& __cordl_internal_get_invertFlag() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr ::GlobalNamespace::ActivateGO_ActivateGOMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::ActivateGO_ActivateGOMode& __cordl_internal_get_mode() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetGO() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_flag(::GlobalNamespace::PlayerPrefFlags_Flag  value) ;

constexpr void __cordl_internal_set_flashes(int32_t  value) ;

constexpr void __cordl_internal_set_flashing(bool  value) ;

constexpr void __cordl_internal_set_invertFlag(bool  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::ActivateGO_ActivateGOMode  value) ;

constexpr void __cordl_internal_set_targetGO(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x55e488c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method toggle, addr 0x55e479c, size 0xf0, virtual false, abstract: false, final false
inline void toggle(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers, bool  state) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActivateGO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActivateGO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivateGO(ActivateGO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivateGO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivateGO(ActivateGO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14};

/// [SerializeField]
/// @brief Field targetGO, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetGO;

/// [SerializeField]
/// @brief Field flag, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PlayerPrefFlags_Flag  ___flag;

/// [SerializeField]
/// @brief Field invertFlag, offset: 0x2c, size: 0x1, def value: None
 bool  ___invertFlag;

/// [SerializeField]
/// @brief Field flashes, offset: 0x30, size: 0x4, def value: None
 int32_t  ___flashes;

/// [SerializeField]
/// @brief Field layerMask, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// [SerializeField]
/// @brief Field mode, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::ActivateGO_ActivateGOMode  ___mode;

/// @brief Field active, offset: 0x3c, size: 0x1, def value: None
 bool  ___active;

/// @brief Field flashing, offset: 0x3d, size: 0x1, def value: None
 bool  ___flashing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActivateGO, ___targetGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateGO, ___flag) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateGO, ___invertFlag) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateGO, ___flashes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateGO, ___layerMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateGO, ___mode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateGO, ___active) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActivateGO, ___flashing) == 0x3d, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActivateGO) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
