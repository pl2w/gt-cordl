#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionActiveState)
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionActiveState___c;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionActiveState;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionActiveState___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionActiveState*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionActiveState___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionActiveState*, "Oculus.Interaction.Locomotion", "LocomotionActiveState");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionActiveState___c*, "Oculus.Interaction.Locomotion", "LocomotionActiveState/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionActiveState
class CORDL_TYPE LocomotionActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::LocomotionActiveState___c;

 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_IdleTime, put=set_IdleTime)) float_t  IdleTime;

 __declspec(property(get=get_LocomotionBroadcaster, put=set_LocomotionBroadcaster)) ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  LocomotionBroadcaster;

/// @brief Field <Active>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field <LocomotionBroadcaster>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocomotionBroadcaster_k__BackingField, put=__cordl_internal_set__LocomotionBroadcaster_k__BackingField)) ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  _LocomotionBroadcaster_k__BackingField;

/// @brief Field _idleTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__idleTime, put=__cordl_internal_set__idleTime)) float_t  _idleTime;

/// @brief Field _lastEventTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastEventTime, put=__cordl_internal_set__lastEventTime)) float_t  _lastEventTime;

/// @brief Field _locomotionBroadcaster, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__locomotionBroadcaster, put=__cordl_internal_set__locomotionBroadcaster)) ::UnityW<::UnityEngine::Object>  _locomotionBroadcaster;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _timeProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa4c5f90, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleLocomotionPerformed, addr 0xa4c6278, size 0x48, virtual false, abstract: false, final false
inline void HandleLocomotionPerformed(::Oculus::Interaction::Locomotion::LocomotionEvent  obj) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionActiveState* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4c6128, size 0x104, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4c602c, size 0xfc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetTimeProvider, addr 0xa4c5f78, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4c6000, size 0x2c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4c622c, size 0x4c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* const& __cordl_internal_get__LocomotionBroadcaster_k__BackingField() const;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*& __cordl_internal_get__LocomotionBroadcaster_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__idleTime() const;

constexpr float_t& __cordl_internal_get__idleTime() ;

constexpr float_t const& __cordl_internal_get__lastEventTime() const;

constexpr float_t& __cordl_internal_get__lastEventTime() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__locomotionBroadcaster() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__locomotionBroadcaster() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LocomotionBroadcaster_k__BackingField(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  value) ;

constexpr void __cordl_internal_set__idleTime(float_t  value) ;

constexpr void __cordl_internal_set__lastEventTime(float_t  value) ;

constexpr void __cordl_internal_set__locomotionBroadcaster(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa4c62c0, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Active, addr 0xa4c5f80, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_IdleTime, addr 0xa4c5f68, size 0x8, virtual false, abstract: false, final false
inline float_t get_IdleTime() ;

/// [CompilerGenerated]
/// @brief Method get_LocomotionBroadcaster, addr 0xa4c5f58, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* get_LocomotionBroadcaster() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Active, addr 0xa4c5f88, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

/// @brief Method set_IdleTime, addr 0xa4c5f70, size 0x8, virtual false, abstract: false, final false
inline void set_IdleTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LocomotionBroadcaster, addr 0xa4c5f60, size 0x8, virtual false, abstract: false, final false
inline void set_LocomotionBroadcaster(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionActiveState(LocomotionActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionActiveState(LocomotionActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16260};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster), new[] {  })]
/// @brief Field _locomotionBroadcaster, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____locomotionBroadcaster;

/// [CompilerGenerated]
/// @brief Field <LocomotionBroadcaster>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  ____LocomotionBroadcaster_k__BackingField;

/// [SerializeField]
/// @brief Field _idleTime, offset: 0x30, size: 0x4, def value: None
 float_t  ____idleTime;

/// @brief Field _timeProvider, offset: 0x38, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// [CompilerGenerated]
/// @brief Field <Active>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

/// @brief Field _lastEventTime, offset: 0x44, size: 0x4, def value: None
 float_t  ____lastEventTime;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActiveState, ____locomotionBroadcaster) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActiveState, ____LocomotionBroadcaster_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActiveState, ____idleTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActiveState, ____timeProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActiveState, ____Active_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActiveState, ____lastEventTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionActiveState, ____started) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionActiveState) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionActiveState/<>c
class CORDL_TYPE LocomotionActiveState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::LocomotionActiveState___c*  __9;

/// @brief Field <>9__23_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_0, put=setStaticF___9__23_0)) ::System::Func_1<float_t>*  __9__23_0;

static inline ::Oculus::Interaction::Locomotion::LocomotionActiveState___c* New_ctor() ;

/// @brief Method <.ctor>b__23_0, addr 0xa4c642c, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__23_0() ;

/// @brief Method .ctor, addr 0xa4c6424, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::LocomotionActiveState___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__23_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionActiveState___c*  value) ;

static inline void setStaticF___9__23_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionActiveState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActiveState___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionActiveState___c(LocomotionActiveState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionActiveState___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionActiveState___c(LocomotionActiveState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16259};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionActiveState___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
