#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckHeadsetViewSettingsController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckHeadsetViewSettingsController)
namespace Liv::Lck::UI {
class LckChoiceButton;
}
namespace Liv::Lck {
class LckHeadsetCamera;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckHeadsetViewSettingsController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckHeadsetViewSettingsController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckHeadsetViewSettingsController*, "Liv.Lck.Tablet", "LckHeadsetViewSettingsController");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckHeadsetViewSettingsController
class CORDL_TYPE LckHeadsetViewSettingsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cropModeChoice, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cropModeChoice, put=__cordl_internal_set__cropModeChoice)) ::UnityW<::Liv::Lck::UI::LckChoiceButton>  _cropModeChoice;

/// @brief Field _eyeChoice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__eyeChoice, put=__cordl_internal_set__eyeChoice)) ::UnityW<::Liv::Lck::UI::LckChoiceButton>  _eyeChoice;

/// @brief Field _headsetCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__headsetCamera, put=__cordl_internal_set__headsetCamera)) ::UnityW<::Liv::Lck::LckHeadsetCamera>  _headsetCamera;

static inline ::Liv::Lck::Tablet::LckHeadsetViewSettingsController* New_ctor() ;

/// @brief Method OnCropModeChanged, addr 0x9d5797c, size 0x9c, virtual false, abstract: false, final false
inline void OnCropModeChanged(int32_t  index) ;

/// @brief Method OnDisable, addr 0x9d5779c, size 0x144, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d575a4, size 0x13c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEyeChanged, addr 0x9d578e0, size 0x9c, virtual false, abstract: false, final false
inline void OnEyeChanged(int32_t  index) ;

/// @brief Method SyncVisuals, addr 0x9d576e0, size 0xbc, virtual false, abstract: false, final false
inline void SyncVisuals() ;

constexpr ::UnityW<::Liv::Lck::UI::LckChoiceButton> const& __cordl_internal_get__cropModeChoice() const;

constexpr ::UnityW<::Liv::Lck::UI::LckChoiceButton>& __cordl_internal_get__cropModeChoice() ;

constexpr ::UnityW<::Liv::Lck::UI::LckChoiceButton> const& __cordl_internal_get__eyeChoice() const;

constexpr ::UnityW<::Liv::Lck::UI::LckChoiceButton>& __cordl_internal_get__eyeChoice() ;

constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera> const& __cordl_internal_get__headsetCamera() const;

constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera>& __cordl_internal_get__headsetCamera() ;

constexpr void __cordl_internal_set__cropModeChoice(::UnityW<::Liv::Lck::UI::LckChoiceButton>  value) ;

constexpr void __cordl_internal_set__eyeChoice(::UnityW<::Liv::Lck::UI::LckChoiceButton>  value) ;

constexpr void __cordl_internal_set__headsetCamera(::UnityW<::Liv::Lck::LckHeadsetCamera>  value) ;

/// @brief Method .ctor, addr 0x9d57a18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckHeadsetViewSettingsController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetViewSettingsController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckHeadsetViewSettingsController(LckHeadsetViewSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckHeadsetViewSettingsController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckHeadsetViewSettingsController(LckHeadsetViewSettingsController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24933};

/// [SerializeField]
/// @brief Field _headsetCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckHeadsetCamera>  ____headsetCamera;

/// [Header("Choice Buttons")]
/// [SerializeField]
/// @brief Field _eyeChoice, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckChoiceButton>  ____eyeChoice;

/// [SerializeField]
/// @brief Field _cropModeChoice, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckChoiceButton>  ____cropModeChoice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckHeadsetViewSettingsController, ____headsetCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckHeadsetViewSettingsController, ____eyeChoice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckHeadsetViewSettingsController, ____cropModeChoice) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckHeadsetViewSettingsController) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
