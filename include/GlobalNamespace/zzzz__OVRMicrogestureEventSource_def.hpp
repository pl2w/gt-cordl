#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMicrogestureEventSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRMicrogestureEventSource)
namespace GlobalNamespace {
struct OVRHand_MicrogestureType;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace GlobalNamespace {
class OVRMicrogestureEventSource___c;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMicrogestureEventSource;
}
namespace GlobalNamespace {
class OVRMicrogestureEventSource___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRMicrogestureEventSource*);
MARK_REF_T(::GlobalNamespace::OVRMicrogestureEventSource___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMicrogestureEventSource*, "", "OVRMicrogestureEventSource");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMicrogestureEventSource___c*, "", "OVRMicrogestureEventSource/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMicrogestureEventSource
class CORDL_TYPE OVRMicrogestureEventSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::OVRMicrogestureEventSource___c;

/// @brief Field GestureRecognizedEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_GestureRecognizedEvent, put=__cordl_internal_set_GestureRecognizedEvent)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>*  GestureRecognizedEvent;

 __declspec(property(get=get_Hand, put=set_Hand)) ::UnityW<::GlobalNamespace::OVRHand>  Hand;

/// @brief Field WhenGestureRecognized, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenGestureRecognized, put=__cordl_internal_set_WhenGestureRecognized)) ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*  WhenGestureRecognized;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::GlobalNamespace::OVRHand>  _hand;

static inline ::GlobalNamespace::OVRMicrogestureEventSource* New_ctor() ;

/// @brief Method RaiseGestureRecognized, addr 0xa5daf90, size 0x7c, virtual false, abstract: false, final false
inline void RaiseGestureRecognized(::GlobalNamespace::OVRHand_MicrogestureType  gesture) ;

/// @brief Method Update, addr 0xa5daf50, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>* const& __cordl_internal_get_GestureRecognizedEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>*& __cordl_internal_get_GestureRecognizedEvent() ;

constexpr ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>* const& __cordl_internal_get_WhenGestureRecognized() const;

constexpr ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*& __cordl_internal_get_WhenGestureRecognized() ;

constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get__hand() ;

constexpr void __cordl_internal_set_GestureRecognizedEvent(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>*  value) ;

constexpr void __cordl_internal_set_WhenGestureRecognized(::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::GlobalNamespace::OVRHand>  value) ;

/// @brief Method .ctor, addr 0xa5db00c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Hand, addr 0xa5daf40, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::OVRHand> get_Hand() ;

/// @brief Method set_Hand, addr 0xa5daf48, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::GlobalNamespace::OVRHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRMicrogestureEventSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRMicrogestureEventSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMicrogestureEventSource(OVRMicrogestureEventSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMicrogestureEventSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMicrogestureEventSource(OVRMicrogestureEventSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11997};

/// [SerializeField]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRHand>  ____hand;

/// @brief Field GestureRecognizedEvent, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRHand_MicrogestureType>*  ___GestureRecognizedEvent;

/// @brief Field WhenGestureRecognized, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*  ___WhenGestureRecognized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMicrogestureEventSource, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogestureEventSource, ___GestureRecognizedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMicrogestureEventSource, ___WhenGestureRecognized) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMicrogestureEventSource) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMicrogestureEventSource/<>c
class CORDL_TYPE OVRMicrogestureEventSource___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::OVRMicrogestureEventSource___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*  __9__8_0;

static inline ::GlobalNamespace::OVRMicrogestureEventSource___c* New_ctor() ;

/// @brief Method <.ctor>b__8_0, addr 0xa5db174, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__8_0(::GlobalNamespace::OVRHand_MicrogestureType  _p0_) ;

/// @brief Method .ctor, addr 0xa5db16c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OVRMicrogestureEventSource___c* getStaticF___9() ;

static inline ::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::GlobalNamespace::OVRMicrogestureEventSource___c*  value) ;

static inline void setStaticF___9__8_0(::System::Action_1<::GlobalNamespace::OVRHand_MicrogestureType>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRMicrogestureEventSource___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRMicrogestureEventSource___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMicrogestureEventSource___c(OVRMicrogestureEventSource___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMicrogestureEventSource___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMicrogestureEventSource___c(OVRMicrogestureEventSource___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRMicrogestureEventSource___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
