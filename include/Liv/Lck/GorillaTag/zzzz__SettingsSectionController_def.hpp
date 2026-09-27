#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/SettingsSectionController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SettingsSectionController)
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class SettingsSectionController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::SettingsSectionController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::SettingsSectionController*, "Liv.Lck.GorillaTag", "SettingsSectionController");
// Dependencies Liv.Lck.GorillaTag.CameraMode, UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.SettingsSectionController
class CORDL_TYPE SettingsSectionController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Liv::Lck::GorillaTag::CameraMode  _mode;

/// @brief Field _ui, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ui, put=__cordl_internal_set__ui)) ::UnityW<::UnityEngine::GameObject>  _ui;

/// @brief Method EvaluateMode, addr 0x9d2c8d8, size 0x28, virtual false, abstract: false, final false
inline void EvaluateMode(::Liv::Lck::GorillaTag::CameraMode  mode) ;

static inline ::Liv::Lck::GorillaTag::SettingsSectionController* New_ctor() ;

constexpr ::Liv::Lck::GorillaTag::CameraMode const& __cordl_internal_get__mode() const;

constexpr ::Liv::Lck::GorillaTag::CameraMode& __cordl_internal_get__mode() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ui() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ui() ;

constexpr void __cordl_internal_set__mode(::Liv::Lck::GorillaTag::CameraMode  value) ;

constexpr void __cordl_internal_set__ui(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d31bbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsSectionController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsSectionController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsSectionController(SettingsSectionController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSectionController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsSectionController(SettingsSectionController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29678};

/// [SerializeField]
/// @brief Field _mode, offset: 0x20, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::CameraMode  ____mode;

/// [SerializeField]
/// @brief Field _ui, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ui;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::SettingsSectionController, ____mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::SettingsSectionController, ____ui) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::SettingsSectionController) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
