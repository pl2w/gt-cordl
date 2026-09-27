#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/StepLocomotionBroadcaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StepLocomotionBroadcaster)
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
class StepLocomotionBroadcaster___c;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class StepLocomotionBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
class StepLocomotionBroadcaster___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*);
MARK_REF_T(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster*, "Oculus.Interaction.Locomotion", "StepLocomotionBroadcaster");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*, "Oculus.Interaction.Locomotion", "StepLocomotionBroadcaster/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.StepLocomotionBroadcaster
class CORDL_TYPE StepLocomotionBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_Origin, put=set_Origin)) ::UnityW<::UnityEngine::Transform>  Origin;

 __declspec(property(get=get_StepLength, put=set_StepLength)) float_t  StepLength;

/// @brief Field WhenLocomotionPerformed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenLocomotionPerformed, put=__cordl_internal_set_WhenLocomotionPerformed)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  WhenLocomotionPerformed;

/// @brief Field _identifier, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__identifier, put=__cordl_internal_set__identifier)) ::Oculus::Interaction::UniqueIdentifier*  _identifier;

/// @brief Field _origin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__origin, put=__cordl_internal_set__origin)) ::UnityW<::UnityEngine::Transform>  _origin;

/// @brief Field _started, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _stepLength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__stepLength, put=__cordl_internal_set__stepLength)) float_t  _stepLength;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept;

/// @brief Method Awake, addr 0xa4caf1c, size 0xe4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster* New_ctor() ;

/// @brief Method Start, addr 0xa4cb000, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Step, addr 0xa4cb07c, size 0x2f4, virtual false, abstract: false, final false
inline void Step(::UnityEngine::Vector2Int  relativeDirection) ;

/// @brief Method StepBackward, addr 0xa4cb410, size 0x50, virtual false, abstract: false, final false
inline void StepBackward() ;

/// @brief Method StepForward, addr 0xa4cb3c0, size 0x50, virtual false, abstract: false, final false
inline void StepForward() ;

/// @brief Method StepLeft, addr 0xa4cb02c, size 0x50, virtual false, abstract: false, final false
inline void StepLeft() ;

/// @brief Method StepRight, addr 0xa4cb370, size 0x50, virtual false, abstract: false, final false
inline void StepRight() ;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get_WhenLocomotionPerformed() const;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get_WhenLocomotionPerformed() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__identifier() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__origin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__origin() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__stepLength() const;

constexpr float_t& __cordl_internal_get__stepLength() ;

constexpr void __cordl_internal_set_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

constexpr void __cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

constexpr void __cordl_internal_set__origin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__stepLength(float_t  value) ;

/// @brief Method .ctor, addr 0xa4cb460, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenLocomotionPerformed, addr 0xa4cadbc, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method get_Identifier, addr 0xa4cada4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// @brief Method get_Origin, addr 0xa4cad84, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Origin() ;

/// @brief Method get_StepLength, addr 0xa4cad94, size 0x8, virtual false, abstract: false, final false
inline float_t get_StepLength() ;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenLocomotionPerformed, addr 0xa4cae6c, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method set_Origin, addr 0xa4cad8c, size 0x8, virtual false, abstract: false, final false
inline void set_Origin(::UnityEngine::Transform*  value) ;

/// @brief Method set_StepLength, addr 0xa4cad9c, size 0x8, virtual false, abstract: false, final false
inline void set_StepLength(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StepLocomotionBroadcaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StepLocomotionBroadcaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StepLocomotionBroadcaster(StepLocomotionBroadcaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StepLocomotionBroadcaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StepLocomotionBroadcaster(StepLocomotionBroadcaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16276};

/// [SerializeField]
/// @brief Field _origin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____origin;

/// [SerializeField]
/// @brief Field _stepLength, offset: 0x28, size: 0x4, def value: None
 float_t  ____stepLength;

/// @brief Field _started, offset: 0x2c, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _identifier, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____identifier;

/// [CompilerGenerated]
/// @brief Field WhenLocomotionPerformed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ___WhenLocomotionPerformed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster, ____origin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster, ____stepLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster, ____started) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster, ____identifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster, ___WhenLocomotionPerformed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.StepLocomotionBroadcaster/<>c
class CORDL_TYPE StepLocomotionBroadcaster___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  __9__22_0;

static inline ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c* New_ctor() ;

/// @brief Method <.ctor>b__22_0, addr 0xa4cb5c8, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__22_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_) ;

/// @brief Method .ctor, addr 0xa4cb5c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c*  value) ;

static inline void setStaticF___9__22_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StepLocomotionBroadcaster___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StepLocomotionBroadcaster___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StepLocomotionBroadcaster___c(StepLocomotionBroadcaster___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StepLocomotionBroadcaster___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StepLocomotionBroadcaster___c(StepLocomotionBroadcaster___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16275};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::StepLocomotionBroadcaster___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
