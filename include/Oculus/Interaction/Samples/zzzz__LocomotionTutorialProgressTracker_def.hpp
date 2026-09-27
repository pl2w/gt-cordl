#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/LocomotionTutorialProgressTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionTutorialProgressTracker)
namespace GlobalNamespace {
struct LocomotionEvent_RotationType;
}
namespace GlobalNamespace {
struct LocomotionEvent_TranslationType;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventHandler;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class LocomotionTutorialProgressTracker;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*, "Oculus.Interaction.Samples", "LocomotionTutorialProgressTracker");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.UI.Image
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.LocomotionTutorialProgressTracker
class CORDL_TYPE LocomotionTutorialProgressTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field LocomotionHandler, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocomotionHandler, put=__cordl_internal_set_LocomotionHandler)) ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  LocomotionHandler;

/// @brief Field WhenCompleted, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenCompleted, put=__cordl_internal_set_WhenCompleted)) ::UnityEngine::Events::UnityEvent*  WhenCompleted;

/// @brief Field _completedSprite, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__completedSprite, put=__cordl_internal_set__completedSprite)) ::UnityW<::UnityEngine::Sprite>  _completedSprite;

/// @brief Field _consumeRotationEvents, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__consumeRotationEvents, put=__cordl_internal_set__consumeRotationEvents)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*  _consumeRotationEvents;

/// @brief Field _consumeTranslationEvents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__consumeTranslationEvents, put=__cordl_internal_set__consumeTranslationEvents)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*  _consumeTranslationEvents;

/// @brief Field _currentProgress, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentProgress, put=__cordl_internal_set__currentProgress)) int32_t  _currentProgress;

/// @brief Field _currentSprite, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSprite, put=__cordl_internal_set__currentSprite)) ::UnityW<::UnityEngine::Sprite>  _currentSprite;

/// @brief Field _dots, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dots, put=__cordl_internal_set__dots)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  _dots;

/// @brief Field _locomotionHandler, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__locomotionHandler, put=__cordl_internal_set__locomotionHandler)) ::UnityW<::UnityEngine::Object>  _locomotionHandler;

/// @brief Field _pendingSprite, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingSprite, put=__cordl_internal_set__pendingSprite)) ::UnityW<::UnityEngine::Sprite>  _pendingSprite;

/// @brief Field _started, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _totalProgress, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalProgress, put=__cordl_internal_set__totalProgress)) int32_t  _totalProgress;

/// @brief Method Awake, addr 0xa438704, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllLocomotionTutorialProgressTracker, addr 0xa438b84, size 0xa0, virtual false, abstract: false, final false
inline void InjectAllLocomotionTutorialProgressTracker(::ArrayW<::UnityEngine::UI::Image*>  dots, ::UnityEngine::Sprite*  pendingSprite, ::UnityEngine::Sprite*  currentSprite, ::UnityEngine::Sprite*  completedSprite, ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*  consumeTranslationEvents, ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*  consumeRotationEvents, ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  locomotionHandler) ;

/// @brief Method InjectCompletedSprite, addr 0xa438d0c, size 0x8, virtual false, abstract: false, final false
inline void InjectCompletedSprite(::UnityEngine::Sprite*  completedSprite) ;

/// @brief Method InjectConsumeRotationEvents, addr 0xa438d1c, size 0x8, virtual false, abstract: false, final false
inline void InjectConsumeRotationEvents(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*  consumeRotationEvents) ;

/// @brief Method InjectConsumeTranslationEvents, addr 0xa438d14, size 0x8, virtual false, abstract: false, final false
inline void InjectConsumeTranslationEvents(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*  consumeTranslationEvents) ;

/// @brief Method InjectCurrentSprite, addr 0xa438d04, size 0x8, virtual false, abstract: false, final false
inline void InjectCurrentSprite(::UnityEngine::Sprite*  currentSprite) ;

/// @brief Method InjectDots, addr 0xa438cf4, size 0x8, virtual false, abstract: false, final false
inline void InjectDots(::ArrayW<::UnityEngine::UI::Image*>  dots) ;

/// @brief Method InjectLocomotionHandler, addr 0xa438c24, size 0xd0, virtual false, abstract: false, final false
inline void InjectLocomotionHandler(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  locomotionHandler) ;

/// @brief Method InjectPendingSprite, addr 0xa438cfc, size 0x8, virtual false, abstract: false, final false
inline void InjectPendingSprite(::UnityEngine::Sprite*  pendingSprite) ;

/// @brief Method LocomotionEventHandled, addr 0xa438a34, size 0x9c, virtual false, abstract: false, final false
inline void LocomotionEventHandled(::Oculus::Interaction::Locomotion::LocomotionEvent  arg1, ::UnityEngine::Pose  arg2) ;

static inline ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker* New_ctor() ;

/// @brief Method OnDisable, addr 0xa438934, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4387ac, size 0x108, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Progress, addr 0xa438ad0, size 0xb4, virtual false, abstract: false, final false
inline void Progress() ;

/// @brief Method ResetProgress, addr 0xa4388b4, size 0x80, virtual false, abstract: false, final false
inline void ResetProgress() ;

/// @brief Method Start, addr 0xa43876c, size 0x40, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* const& __cordl_internal_get_LocomotionHandler() const;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*& __cordl_internal_get_LocomotionHandler() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_WhenCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_WhenCompleted() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__completedSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__completedSprite() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>* const& __cordl_internal_get__consumeRotationEvents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*& __cordl_internal_get__consumeRotationEvents() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>* const& __cordl_internal_get__consumeTranslationEvents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*& __cordl_internal_get__consumeTranslationEvents() ;

constexpr int32_t const& __cordl_internal_get__currentProgress() const;

constexpr int32_t& __cordl_internal_get__currentProgress() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__currentSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__currentSprite() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& __cordl_internal_get__dots() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& __cordl_internal_get__dots() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__locomotionHandler() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__locomotionHandler() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__pendingSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__pendingSprite() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr int32_t const& __cordl_internal_get__totalProgress() const;

constexpr int32_t& __cordl_internal_get__totalProgress() ;

constexpr void __cordl_internal_set_LocomotionHandler(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value) ;

constexpr void __cordl_internal_set_WhenCompleted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__completedSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__consumeRotationEvents(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*  value) ;

constexpr void __cordl_internal_set__consumeTranslationEvents(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*  value) ;

constexpr void __cordl_internal_set__currentProgress(int32_t  value) ;

constexpr void __cordl_internal_set__currentSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__dots(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value) ;

constexpr void __cordl_internal_set__locomotionHandler(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__pendingSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__totalProgress(int32_t  value) ;

/// @brief Method .ctor, addr 0xa438d24, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTutorialProgressTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTutorialProgressTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTutorialProgressTracker(LocomotionTutorialProgressTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTutorialProgressTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTutorialProgressTracker(LocomotionTutorialProgressTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28306};

/// [SerializeField]
/// @brief Field _dots, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  ____dots;

/// [SerializeField]
/// @brief Field _pendingSprite, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____pendingSprite;

/// [SerializeField]
/// @brief Field _currentSprite, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____currentSprite;

/// [SerializeField]
/// @brief Field _completedSprite, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____completedSprite;

/// [SerializeField]
/// @brief Field _consumeTranslationEvents, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*  ____consumeTranslationEvents;

/// [SerializeField]
/// @brief Field _consumeRotationEvents, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*  ____consumeRotationEvents;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Locomotion.ILocomotionEventHandler), new[] {  })]
/// @brief Field _locomotionHandler, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____locomotionHandler;

/// @brief Field LocomotionHandler, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  ___LocomotionHandler;

/// @brief Field WhenCompleted, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___WhenCompleted;

/// @brief Field _started, offset: 0x68, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _currentProgress, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____currentProgress;

/// @brief Field _totalProgress, offset: 0x70, size: 0x4, def value: None
 int32_t  ____totalProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____dots) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____pendingSprite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____currentSprite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____completedSprite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____consumeTranslationEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____consumeRotationEvents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____locomotionHandler) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ___LocomotionHandler) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ___WhenCompleted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____started) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____currentProgress) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker, ____totalProgress) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
