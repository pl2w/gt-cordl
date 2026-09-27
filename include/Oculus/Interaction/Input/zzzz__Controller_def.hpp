#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Controller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Controller)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
struct ControllerButtonUsage;
}
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
namespace Oculus::Interaction::Input {
struct ControllerInput;
}
namespace Oculus::Interaction::Input {
class Controller___c;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class IDataSource_1;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class Controller;
}
namespace Oculus::Interaction::Input {
class Controller___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Controller*);
MARK_REF_T(::Oculus::Interaction::Input::Controller___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Controller*, "Oculus.Interaction.Input", "Controller");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Controller___c*, "Oculus.Interaction.Input", "Controller/<>c");
// Dependencies Oculus.Interaction.Input.DataModifier`1<TData>
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Controller
class CORDL_TYPE Controller : public ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::ControllerDataAsset*> {
public:
// Declarations
using __c = ::Oculus::Interaction::Input::Controller___c;

 __declspec(property(get=get_ControllerInput)) ::Oculus::Interaction::Input::ControllerInput  ControllerInput;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsPointerPoseValid)) bool  IsPointerPoseValid;

 __declspec(property(get=get_IsPoseValid)) bool  IsPoseValid;

 __declspec(property(get=get_Scale)) float_t  Scale;

 __declspec(property(get=get_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field WhenUpdated, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenUpdated, put=__cordl_internal_set_WhenUpdated)) ::System::Action*  WhenUpdated;

/// @brief Convert operator to "::Oculus::Interaction::Input::IController"
constexpr operator  ::Oculus::Interaction::Input::IController*() noexcept;

/// @brief Method Apply, addr 0xa504958, size 0x4, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::ControllerDataAsset*  data) ;

/// @brief Method InjectAllController, addr 0xa50495c, size 0x78, virtual false, abstract: false, final false
inline void InjectAllController(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*  modifyDataFromSource, bool  applyModifier) ;

/// @brief Method IsButtonUsageAllActive, addr 0xa504538, size 0x7c, virtual true, abstract: false, final false
inline bool IsButtonUsageAllActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage) ;

/// @brief Method IsButtonUsageAnyActive, addr 0xa5044bc, size 0x7c, virtual true, abstract: false, final false
inline bool IsButtonUsageAnyActive(::Oculus::Interaction::Input::ControllerButtonUsage  buttonUsage) ;

/// @brief Method MarkInputDataRequiresUpdate, addr 0xa5048d4, size 0x84, virtual true, abstract: false, final false
inline void MarkInputDataRequiresUpdate() ;

static inline ::Oculus::Interaction::Input::Controller* New_ctor() ;

/// @brief Method TryGetPointerPose, addr 0xa504744, size 0x190, virtual true, abstract: false, final false
inline bool TryGetPointerPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method TryGetPose, addr 0xa5045b4, size 0x190, virtual true, abstract: false, final false
inline bool TryGetPose(::by_ref<::UnityEngine::Pose>  pose) ;

constexpr ::System::Action* const& __cordl_internal_get_WhenUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_WhenUpdated() ;

constexpr void __cordl_internal_set_WhenUpdated(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xa5049d4, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenUpdated, addr 0xa504258, size 0x9c, virtual true, abstract: false, final false
inline void add_WhenUpdated(::System::Action*  value) ;

/// @brief Method get_ControllerInput, addr 0xa5041e8, size 0x70, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerInput get_ControllerInput() ;

/// @brief Method get_Handedness, addr 0xa504038, size 0x60, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_IsConnected, addr 0xa504098, size 0x70, virtual true, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsPointerPoseValid, addr 0xa504178, size 0x70, virtual true, abstract: false, final false
inline bool get_IsPointerPoseValid() ;

/// @brief Method get_IsPoseValid, addr 0xa504108, size 0x70, virtual true, abstract: false, final false
inline bool get_IsPoseValid() ;

/// @brief Method get_Scale, addr 0xa5043f0, size 0xcc, virtual true, abstract: false, final false
inline float_t get_Scale() ;

/// @brief Method get_TrackingToWorldTransformer, addr 0xa504390, size 0x60, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* get_TrackingToWorldTransformer() ;

/// @brief Convert to "::Oculus::Interaction::Input::IController"
constexpr ::Oculus::Interaction::Input::IController* i___Oculus__Interaction__Input__IController() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenUpdated, addr 0xa5042f4, size 0x9c, virtual true, abstract: false, final false
inline void remove_WhenUpdated(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller(Controller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller(Controller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16451};

/// [CompilerGenerated]
/// @brief Field WhenUpdated, offset: 0x70, size: 0x8, def value: None
 ::System::Action*  ___WhenUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Controller, ___WhenUpdated) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Controller) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Controller/<>c
class CORDL_TYPE Controller___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::Controller___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Action*  __9__24_0;

static inline ::Oculus::Interaction::Input::Controller___c* New_ctor() ;

/// @brief Method <.ctor>b__24_0, addr 0xa504b74, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__24_0() ;

/// @brief Method .ctor, addr 0xa504b6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::Controller___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__24_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::Controller___c*  value) ;

static inline void setStaticF___9__24_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller___c(Controller___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller___c(Controller___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16450};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::Controller___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
