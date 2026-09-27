#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/HandScanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableBehavior_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandScanner)
namespace GlobalNamespace {
class IClickable;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription {
class HandScanner;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::HandScanner*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::HandScanner*, "GorillaTagScripts.Subscription", "HandScanner");
// Dependencies ObservableBehavior
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.HandScanner
class CORDL_TYPE HandScanner : public ::GlobalNamespace::ObservableBehavior {
public:
// Declarations
/// @brief Field onHandScanAbort, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHandScanAbort, put=__cordl_internal_set_onHandScanAbort)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  onHandScanAbort;

/// @brief Field onHandScanInRange, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHandScanInRange, put=__cordl_internal_set_onHandScanInRange)) ::UnityEngine::Events::UnityEvent*  onHandScanInRange;

/// @brief Field onHandScanOutOfRange, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHandScanOutOfRange, put=__cordl_internal_set_onHandScanOutOfRange)) ::UnityEngine::Events::UnityEvent*  onHandScanOutOfRange;

/// @brief Field onHandScanStart, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHandScanStart, put=__cordl_internal_set_onHandScanStart)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  onHandScanStart;

/// @brief Field onHandScanSuccess, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHandScanSuccess, put=__cordl_internal_set_onHandScanSuccess)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  onHandScanSuccess;

/// @brief Field scanStart, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_scanStart, put=__cordl_internal_set_scanStart)) float_t  scanStart;

/// @brief Field scanTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_scanTime, put=__cordl_internal_set_scanTime)) float_t  scanTime;

/// @brief Field scanningRig, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanningRig, put=__cordl_internal_set_scanningRig)) ::UnityW<::GlobalNamespace::VRRig>  scanningRig;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method Click, addr 0x5bf7a94, size 0x138, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

static inline ::GorillaTagScripts::Subscription::HandScanner* New_ctor() ;

/// @brief Method ObservableSliceUpdate, addr 0x5bf76cc, size 0xd4, virtual true, abstract: false, final false
inline void ObservableSliceUpdate() ;

/// @brief Method OnBecameObservable, addr 0x5bf77a0, size 0x14, virtual true, abstract: false, final false
inline void OnBecameObservable() ;

/// @brief Method OnLostObservable, addr 0x5bf77b4, size 0x14, virtual true, abstract: false, final false
inline void OnLostObservable() ;

/// @brief Method OnTriggerEnter, addr 0x5bf77c8, size 0x150, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5bf7918, size 0x17c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_onHandScanAbort() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_onHandScanAbort() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onHandScanInRange() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onHandScanInRange() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onHandScanOutOfRange() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onHandScanOutOfRange() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_onHandScanStart() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_onHandScanStart() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_onHandScanSuccess() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_onHandScanSuccess() ;

constexpr float_t const& __cordl_internal_get_scanStart() const;

constexpr float_t& __cordl_internal_get_scanStart() ;

constexpr float_t const& __cordl_internal_get_scanTime() const;

constexpr float_t& __cordl_internal_get_scanTime() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_scanningRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_scanningRig() ;

constexpr void __cordl_internal_set_onHandScanAbort(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_onHandScanInRange(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onHandScanOutOfRange(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onHandScanStart(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_onHandScanSuccess(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_scanStart(float_t  value) ;

constexpr void __cordl_internal_set_scanTime(float_t  value) ;

constexpr void __cordl_internal_set_scanningRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5bf7bcc, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandScanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandScanner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandScanner(HandScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandScanner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandScanner(HandScanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4090};

/// [SerializeField]
/// @brief Field scanTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___scanTime;

/// @brief Field onHandScanStart, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  ___onHandScanStart;

/// @brief Field onHandScanAbort, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  ___onHandScanAbort;

/// @brief Field onHandScanSuccess, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  ___onHandScanSuccess;

/// @brief Field onHandScanInRange, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onHandScanInRange;

/// @brief Field onHandScanOutOfRange, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onHandScanOutOfRange;

/// @brief Field scanningRig, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___scanningRig;

/// @brief Field scanStart, offset: 0x78, size: 0x4, def value: None
 float_t  ___scanStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::HandScanner, ___scanTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::HandScanner, ___onHandScanStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::HandScanner, ___onHandScanAbort) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::HandScanner, ___onHandScanSuccess) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::HandScanner, ___onHandScanInRange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::HandScanner, ___onHandScanOutOfRange) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::HandScanner, ___scanningRig) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::HandScanner, ___scanStart) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::HandScanner) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
