#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckOnScreenUIController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckOnScreenUIController)
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckOnScreenUIController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckOnScreenUIController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckOnScreenUIController*, "Liv.Lck.Tablet", "LckOnScreenUIController");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckOnScreenUIController
class CORDL_TYPE LckOnScreenUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _allOnscreenUI, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__allOnscreenUI, put=__cordl_internal_set__allOnscreenUI)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _allOnscreenUI;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

static inline ::Liv::Lck::Tablet::LckOnScreenUIController* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d53448, size 0x100, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d53358, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnNotificationEnded, addr 0x9d53588, size 0x20, virtual false, abstract: false, final false
inline void OnNotificationEnded() ;

/// @brief Method OnNotificationStarted, addr 0x9d5357c, size 0xc, virtual false, abstract: false, final false
inline void OnNotificationStarted() ;

/// @brief Method OnRecordingStarted, addr 0x9d53558, size 0x24, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method SetAllOnscreenButtonsState, addr 0x9d53548, size 0x10, virtual false, abstract: false, final false
inline void SetAllOnscreenButtonsState(bool  state) ;

/// @brief Method SetAllOnscreenButtonsToDefaultVisual, addr 0x9d535a8, size 0x170, virtual false, abstract: false, final false
inline void SetAllOnscreenButtonsToDefaultVisual(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectList) ;

/// @brief Method SetObjectsState, addr 0x9d53718, size 0x140, virtual false, abstract: false, final false
inline void SetObjectsState(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectList, bool  state) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__allOnscreenUI() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__allOnscreenUI() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr void __cordl_internal_set__allOnscreenUI(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

/// @brief Method .ctor, addr 0x9d53858, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckOnScreenUIController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckOnScreenUIController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckOnScreenUIController(LckOnScreenUIController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckOnScreenUIController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckOnScreenUIController(LckOnScreenUIController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24926};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _allOnscreenUI, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____allOnscreenUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckOnScreenUIController, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckOnScreenUIController, ____allOnscreenUI) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckOnScreenUIController) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
