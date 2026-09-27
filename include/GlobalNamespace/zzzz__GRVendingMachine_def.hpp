#pragma once
// IWYU pragma private; include "GlobalNamespace/GRVendingMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRVendingMachine)
namespace GlobalNamespace {
struct GRVendingMachine_VendingEntry;
}
namespace GlobalNamespace {
class GRVendingMachine__VendingCoroutine_d__33;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRVendingMachine;
}
namespace GlobalNamespace {
class GRVendingMachine__VendingCoroutine_d__33;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRVendingMachine*);
MARK_REF_T(::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRVendingMachine*, "", "GRVendingMachine");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*, "", "GRVendingMachine/<VendingCoroutine>d__33");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRVendingMachine
class CORDL_TYPE GRVendingMachine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using VendingEntry = ::GlobalNamespace::GRVendingMachine_VendingEntry;

using _VendingCoroutine_d__33 = ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33;

/// @brief Field VendingMachineId, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_VendingMachineId, put=__cordl_internal_set_VendingMachineId)) int32_t  VendingMachineId;

/// @brief Field cardDisplayText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cardDisplayText, put=__cordl_internal_set_cardDisplayText)) ::UnityW<::TMPro::TMP_Text>  cardDisplayText;

/// @brief Field currentlyVending, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentlyVending, put=__cordl_internal_set_currentlyVending)) bool  currentlyVending;

/// @brief Field debugUnlimitedPurchasing, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugUnlimitedPurchasing, put=__cordl_internal_set_debugUnlimitedPurchasing)) bool  debugUnlimitedPurchasing;

/// @brief Field depositLocation, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositLocation, put=__cordl_internal_set_depositLocation)) ::UnityW<::UnityEngine::Transform>  depositLocation;

/// @brief Field hIndex, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_hIndex, put=__cordl_internal_set_hIndex)) int32_t  hIndex;

/// @brief Field horizontalMax, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalMax, put=__cordl_internal_set_horizontalMax)) ::UnityW<::UnityEngine::Transform>  horizontalMax;

/// @brief Field horizontalMin, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalMin, put=__cordl_internal_set_horizontalMin)) ::UnityW<::UnityEngine::Transform>  horizontalMin;

/// @brief Field horizontalSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalSpeed, put=__cordl_internal_set_horizontalSpeed)) float_t  horizontalSpeed;

/// @brief Field horizontalSteps, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalSteps, put=__cordl_internal_set_horizontalSteps)) int32_t  horizontalSteps;

/// @brief Field horizontalTransport, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalTransport, put=__cordl_internal_set_horizontalTransport)) ::UnityW<::UnityEngine::Transform>  horizontalTransport;

/// @brief Field itemSpawnLocation, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemSpawnLocation, put=__cordl_internal_set_itemSpawnLocation)) ::UnityW<::UnityEngine::Transform>  itemSpawnLocation;

/// @brief Field reactor, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field vIndex, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_vIndex, put=__cordl_internal_set_vIndex)) int32_t  vIndex;

/// @brief Field vendingCoroutine, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_vendingCoroutine, put=__cordl_internal_set_vendingCoroutine)) ::UnityEngine::Coroutine*  vendingCoroutine;

/// @brief Field vendingEntries, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_vendingEntries, put=__cordl_internal_set_vendingEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRVendingMachine_VendingEntry>*  vendingEntries;

/// @brief Field vendingIndex, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_vendingIndex, put=__cordl_internal_set_vendingIndex)) int32_t  vendingIndex;

/// @brief Field verticalMax, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalMax, put=__cordl_internal_set_verticalMax)) ::UnityW<::UnityEngine::Transform>  verticalMax;

/// @brief Field verticalMin, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalMin, put=__cordl_internal_set_verticalMin)) ::UnityW<::UnityEngine::Transform>  verticalMin;

/// @brief Field verticalSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalSpeed, put=__cordl_internal_set_verticalSpeed)) float_t  verticalSpeed;

/// @brief Field verticalSteps, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalSteps, put=__cordl_internal_set_verticalSteps)) int32_t  verticalSteps;

/// @brief Field verticalTransport, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalTransport, put=__cordl_internal_set_verticalTransport)) ::UnityW<::UnityEngine::Transform>  verticalTransport;

/// @brief Method GetSpawnMarker, addr 0x58ef828, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetSpawnMarker() ;

/// @brief Method MoveTransportToSlot, addr 0x58efbac, size 0x40c, virtual false, abstract: false, final false
inline bool MoveTransportToSlot(int32_t  x, int32_t  y, int32_t  rows, int32_t  cols, float_t  xSpeed, float_t  ySpeed, float_t  dt) ;

/// @brief Method NavButtonPressedDown, addr 0x58ef9b0, size 0x20, virtual false, abstract: false, final false
inline void NavButtonPressedDown() ;

/// @brief Method NavButtonPressedLeft, addr 0x58ef830, size 0x14, virtual false, abstract: false, final false
inline void NavButtonPressedLeft() ;

/// @brief Method NavButtonPressedRight, addr 0x58ef97c, size 0x20, virtual false, abstract: false, final false
inline void NavButtonPressedRight() ;

/// @brief Method NavButtonPressedUp, addr 0x58ef99c, size 0x14, virtual false, abstract: false, final false
inline void NavButtonPressedUp() ;

static inline ::GlobalNamespace::GRVendingMachine* New_ctor() ;

/// @brief Method RefreshCardReaderDisplay, addr 0x58ef844, size 0x138, virtual false, abstract: false, final false
inline void RefreshCardReaderDisplay() ;

/// @brief Method RequestPurchase, addr 0x58ef9d0, size 0xb4, virtual false, abstract: false, final false
inline void RequestPurchase() ;

/// @brief Method Setup, addr 0x58ef820, size 0x8, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method Update, addr 0x58efb44, size 0x68, virtual false, abstract: false, final false
inline void Update() ;

/// [IteratorStateMachine(typeof(GRVendingMachine::<VendingCoroutine>d__33))]
/// @brief Method VendingCoroutine, addr 0x58efa84, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* VendingCoroutine() ;

constexpr int32_t const& __cordl_internal_get_VendingMachineId() const;

constexpr int32_t& __cordl_internal_get_VendingMachineId() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_cardDisplayText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_cardDisplayText() ;

constexpr bool const& __cordl_internal_get_currentlyVending() const;

constexpr bool& __cordl_internal_get_currentlyVending() ;

constexpr bool const& __cordl_internal_get_debugUnlimitedPurchasing() const;

constexpr bool& __cordl_internal_get_debugUnlimitedPurchasing() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_depositLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_depositLocation() ;

constexpr int32_t const& __cordl_internal_get_hIndex() const;

constexpr int32_t& __cordl_internal_get_hIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_horizontalMax() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_horizontalMax() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_horizontalMin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_horizontalMin() ;

constexpr float_t const& __cordl_internal_get_horizontalSpeed() const;

constexpr float_t& __cordl_internal_get_horizontalSpeed() ;

constexpr int32_t const& __cordl_internal_get_horizontalSteps() const;

constexpr int32_t& __cordl_internal_get_horizontalSteps() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_horizontalTransport() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_horizontalTransport() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_itemSpawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_itemSpawnLocation() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr int32_t const& __cordl_internal_get_vIndex() const;

constexpr int32_t& __cordl_internal_get_vIndex() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_vendingCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_vendingCoroutine() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRVendingMachine_VendingEntry>* const& __cordl_internal_get_vendingEntries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRVendingMachine_VendingEntry>*& __cordl_internal_get_vendingEntries() ;

constexpr int32_t const& __cordl_internal_get_vendingIndex() const;

constexpr int32_t& __cordl_internal_get_vendingIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_verticalMax() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_verticalMax() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_verticalMin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_verticalMin() ;

constexpr float_t const& __cordl_internal_get_verticalSpeed() const;

constexpr float_t& __cordl_internal_get_verticalSpeed() ;

constexpr int32_t const& __cordl_internal_get_verticalSteps() const;

constexpr int32_t& __cordl_internal_get_verticalSteps() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_verticalTransport() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_verticalTransport() ;

constexpr void __cordl_internal_set_VendingMachineId(int32_t  value) ;

constexpr void __cordl_internal_set_cardDisplayText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_currentlyVending(bool  value) ;

constexpr void __cordl_internal_set_debugUnlimitedPurchasing(bool  value) ;

constexpr void __cordl_internal_set_depositLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hIndex(int32_t  value) ;

constexpr void __cordl_internal_set_horizontalMax(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_horizontalMin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_horizontalSpeed(float_t  value) ;

constexpr void __cordl_internal_set_horizontalSteps(int32_t  value) ;

constexpr void __cordl_internal_set_horizontalTransport(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_itemSpawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_vIndex(int32_t  value) ;

constexpr void __cordl_internal_set_vendingCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_vendingEntries(::System::Collections::Generic::List_1<::GlobalNamespace::GRVendingMachine_VendingEntry>*  value) ;

constexpr void __cordl_internal_set_vendingIndex(int32_t  value) ;

constexpr void __cordl_internal_set_verticalMax(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_verticalMin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_verticalSpeed(float_t  value) ;

constexpr void __cordl_internal_set_verticalSteps(int32_t  value) ;

constexpr void __cordl_internal_set_verticalTransport(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x58effe0, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRVendingMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRVendingMachine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRVendingMachine(GRVendingMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRVendingMachine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRVendingMachine(GRVendingMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2113};

/// [SerializeField]
/// @brief Field horizontalTransport, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___horizontalTransport;

/// [SerializeField]
/// @brief Field verticalTransport, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___verticalTransport;

/// [SerializeField]
/// @brief Field horizontalMin, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___horizontalMin;

/// [SerializeField]
/// @brief Field horizontalMax, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___horizontalMax;

/// [SerializeField]
/// @brief Field verticalMin, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___verticalMin;

/// [SerializeField]
/// @brief Field verticalMax, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___verticalMax;

/// [SerializeField]
/// @brief Field depositLocation, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___depositLocation;

/// [SerializeField]
/// @brief Field itemSpawnLocation, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___itemSpawnLocation;

/// [SerializeField]
/// @brief Field cardDisplayText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___cardDisplayText;

/// [SerializeField]
/// @brief Field horizontalSteps, offset: 0x68, size: 0x4, def value: None
 int32_t  ___horizontalSteps;

/// [SerializeField]
/// @brief Field verticalSteps, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___verticalSteps;

/// [SerializeField]
/// @brief Field horizontalSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ___horizontalSpeed;

/// [SerializeField]
/// @brief Field verticalSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___verticalSpeed;

/// [SerializeField]
/// @brief Field debugUnlimitedPurchasing, offset: 0x78, size: 0x1, def value: None
 bool  ___debugUnlimitedPurchasing;

/// [SerializeField]
/// @brief Field vendingEntries, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRVendingMachine_VendingEntry>*  ___vendingEntries;

/// @brief Field hIndex, offset: 0x88, size: 0x4, def value: None
 int32_t  ___hIndex;

/// @brief Field vIndex, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___vIndex;

/// @brief Field currentlyVending, offset: 0x90, size: 0x1, def value: None
 bool  ___currentlyVending;

/// @brief Field vendingIndex, offset: 0x94, size: 0x4, def value: None
 int32_t  ___vendingIndex;

/// @brief Field vendingCoroutine, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___vendingCoroutine;

/// @brief Field VendingMachineId, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___VendingMachineId;

/// @brief Field reactor, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___horizontalTransport) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___verticalTransport) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___horizontalMin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___horizontalMax) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___verticalMin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___verticalMax) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___depositLocation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___itemSpawnLocation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___cardDisplayText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___horizontalSteps) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___verticalSteps) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___horizontalSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___verticalSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___debugUnlimitedPurchasing) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___vendingEntries) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___hIndex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___vIndex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___currentlyVending) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___vendingIndex) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___vendingCoroutine) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___VendingMachineId) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine, ___reactor) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRVendingMachine) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRVendingMachine/<VendingCoroutine>d__33
class CORDL_TYPE GRVendingMachine__VendingCoroutine_d__33 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GRVendingMachine>  __4__this;

/// @brief Field <depositPosSqDist>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__depositPosSqDist_5__2, put=__cordl_internal_set__depositPosSqDist_5__2)) float_t  _depositPosSqDist_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x58f007c, size 0x564, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58f05e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x58f05e8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x58f0620, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x58f0078, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GRVendingMachine> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GRVendingMachine>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__depositPosSqDist_5__2() const;

constexpr float_t& __cordl_internal_get__depositPosSqDist_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRVendingMachine>  value) ;

constexpr void __cordl_internal_set__depositPosSqDist_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x58effb8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRVendingMachine__VendingCoroutine_d__33() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRVendingMachine__VendingCoroutine_d__33", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRVendingMachine__VendingCoroutine_d__33(GRVendingMachine__VendingCoroutine_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRVendingMachine__VendingCoroutine_d__33", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRVendingMachine__VendingCoroutine_d__33(GRVendingMachine__VendingCoroutine_d__33 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2112};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRVendingMachine>  _____4__this;

/// @brief Field <depositPosSqDist>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____depositPosSqDist_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33, ____depositPosSqDist_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
