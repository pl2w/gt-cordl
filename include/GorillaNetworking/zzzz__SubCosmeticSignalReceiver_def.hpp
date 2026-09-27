#pragma once
// IWYU pragma private; include "GorillaNetworking/SubCosmeticSignalReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubCosmeticSignalReceiver)
namespace GorillaNetworking {
class SubCosmeticSignalReceiver_SignalTrigger;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaNetworking {
class SubCosmeticSignalReceiver;
}
namespace GorillaNetworking {
class SubCosmeticSignalReceiver_SignalTrigger;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::SubCosmeticSignalReceiver*);
MARK_REF_T(::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::SubCosmeticSignalReceiver*, "GorillaNetworking", "SubCosmeticSignalReceiver");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*, "GorillaNetworking", "SubCosmeticSignalReceiver/SignalTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.SubCosmeticSignalReceiver
class CORDL_TYPE SubCosmeticSignalReceiver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SignalTrigger = ::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger;

/// @brief Field onAnySignal, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAnySignal, put=__cordl_internal_set_onAnySignal)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onAnySignal;

/// @brief Field triggers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggers, put=__cordl_internal_set_triggers)) ::System::Collections::Generic::List_1<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>*  triggers;

static inline ::GorillaNetworking::SubCosmeticSignalReceiver* New_ctor() ;

/// @brief Method ReceiveSignal, addr 0x5c71694, size 0x110, virtual false, abstract: false, final false
inline void ReceiveSignal(int32_t  signal) ;

/// [Tooltip("Resets all \'triggerOnce\' flags so single-fire triggers can fire again.")]
/// @brief Method ResetTriggers, addr 0x5c71824, size 0xa0, virtual false, abstract: false, final false
inline void ResetTriggers() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onAnySignal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onAnySignal() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>* const& __cordl_internal_get_triggers() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>*& __cordl_internal_get_triggers() ;

constexpr void __cordl_internal_set_onAnySignal(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_triggers(::System::Collections::Generic::List_1<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>*  value) ;

/// @brief Method .ctor, addr 0x5c718c4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubCosmeticSignalReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubCosmeticSignalReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubCosmeticSignalReceiver(SubCosmeticSignalReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubCosmeticSignalReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubCosmeticSignalReceiver(SubCosmeticSignalReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4312};

/// [Header("Signal Triggers")]
/// [SerializeField]
/// @brief Field triggers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger*>*  ___triggers;

/// [Header("Catch-All")]
/// [Tooltip("[Optional] event fired for every received signal regardless of value, after any specific triggers above run")]
/// @brief Field onAnySignal, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onAnySignal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::SubCosmeticSignalReceiver, ___triggers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SubCosmeticSignalReceiver, ___onAnySignal) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::SubCosmeticSignalReceiver) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.SubCosmeticSignalReceiver/SignalTrigger
class CORDL_TYPE SubCosmeticSignalReceiver_SignalTrigger : public ::System::Object {
public:
// Declarations
/// @brief Field hasTriggered, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTriggered, put=__cordl_internal_set_hasTriggered)) bool  hasTriggered;

/// @brief Field onSignalReceived, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSignalReceived, put=__cordl_internal_set_onSignalReceived)) ::UnityEngine::Events::UnityEvent*  onSignalReceived;

/// @brief Field signal, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_signal, put=__cordl_internal_set_signal)) int32_t  signal;

/// @brief Field triggerOnce, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerOnce, put=__cordl_internal_set_triggerOnce)) bool  triggerOnce;

static inline ::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger* New_ctor() ;

constexpr bool const& __cordl_internal_get_hasTriggered() const;

constexpr bool& __cordl_internal_get_hasTriggered() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onSignalReceived() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onSignalReceived() ;

constexpr int32_t const& __cordl_internal_get_signal() const;

constexpr int32_t& __cordl_internal_get_signal() ;

constexpr bool const& __cordl_internal_get_triggerOnce() const;

constexpr bool& __cordl_internal_get_triggerOnce() ;

constexpr void __cordl_internal_set_hasTriggered(bool  value) ;

constexpr void __cordl_internal_set_onSignalReceived(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_signal(int32_t  value) ;

constexpr void __cordl_internal_set_triggerOnce(bool  value) ;

/// @brief Method .ctor, addr 0x5c7194c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubCosmeticSignalReceiver_SignalTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubCosmeticSignalReceiver_SignalTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubCosmeticSignalReceiver_SignalTrigger(SubCosmeticSignalReceiver_SignalTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubCosmeticSignalReceiver_SignalTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubCosmeticSignalReceiver_SignalTrigger(SubCosmeticSignalReceiver_SignalTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4311};

/// [Tooltip("Integer signal value that fires this trigger")]
/// @brief Field signal, offset: 0x10, size: 0x4, def value: None
 int32_t  ___signal;

/// [Tooltip("Events invoked when this signal is received")]
/// @brief Field onSignalReceived, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onSignalReceived;

/// [Tooltip("Fire only once per session, ignoring subsequent broadcasts of the same signal")]
/// @brief Field triggerOnce, offset: 0x20, size: 0x1, def value: None
 bool  ___triggerOnce;

/// @brief Field hasTriggered, offset: 0x21, size: 0x1, def value: None
 bool  ___hasTriggered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger, ___signal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger, ___onSignalReceived) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger, ___triggerOnce) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger, ___hasTriggered) == 0x21, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::SubCosmeticSignalReceiver_SignalTrigger) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
