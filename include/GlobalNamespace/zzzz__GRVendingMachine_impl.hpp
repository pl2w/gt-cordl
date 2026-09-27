#pragma once
// IWYU pragma private; include "GlobalNamespace/GRVendingMachine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRVendingMachine_def.hpp"
#include "GlobalNamespace/zzzz__GRVendingMachine_VendingEntry_def.hpp"
#include "GlobalNamespace/zzzz__GRVendingMachine_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRVendingMachine::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ef820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.GetSpawnMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::GetSpawnMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ef828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.NavButtonPressedLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::NavButtonPressedLeft)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58ef830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"NavButtonPressedLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.NavButtonPressedRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::NavButtonPressedRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58ef97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"NavButtonPressedRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.NavButtonPressedUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::NavButtonPressedUp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58ef99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"NavButtonPressedUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.NavButtonPressedDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::NavButtonPressedDown)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58ef9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"NavButtonPressedDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.RequestPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::RequestPurchase)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58ef9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"RequestPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.RefreshCardReaderDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::RefreshCardReaderDisplay)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58ef844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"RefreshCardReaderDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::Update)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58efb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.MoveTransportToSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRVendingMachine::*)(int32_t, int32_t, int32_t, int32_t, float_t, float_t, float_t)>(&::GlobalNamespace::GRVendingMachine::MoveTransportToSlot)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x58efbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"MoveTransportToSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine.VendingCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::VendingCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58efa84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"VendingCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine::*)()>(&::GlobalNamespace::GRVendingMachine::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58effe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalTransport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalTransport;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalTransport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalTransport;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_horizontalTransport(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalTransport = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalTransport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalTransport;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalTransport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalTransport;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_verticalTransport(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalTransport = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalMin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalMin;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_horizontalMin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalMin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalMax;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalMax;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_horizontalMax(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalMax = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalMin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalMin;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_verticalMin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalMin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalMax;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalMax;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_verticalMax(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalMax = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_depositLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_depositLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositLocation;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_depositLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositLocation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_itemSpawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSpawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_itemSpawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSpawnLocation;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_itemSpawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemSpawnLocation = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_cardDisplayText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cardDisplayText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_cardDisplayText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cardDisplayText;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_cardDisplayText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cardDisplayText = value;
}
constexpr int32_t& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalSteps;
}
constexpr int32_t const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalSteps;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_horizontalSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalSteps = value;
}
constexpr int32_t& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSteps;
}
constexpr int32_t const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSteps;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_verticalSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalSteps = value;
}
constexpr float_t& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalSpeed;
}
constexpr float_t const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_horizontalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalSpeed;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_horizontalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalSpeed = value;
}
constexpr float_t& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSpeed;
}
constexpr float_t const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_verticalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSpeed;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_verticalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalSpeed = value;
}
constexpr bool& GlobalNamespace::GRVendingMachine::__cordl_internal_get_debugUnlimitedPurchasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugUnlimitedPurchasing;
}
constexpr bool const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_debugUnlimitedPurchasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugUnlimitedPurchasing;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_debugUnlimitedPurchasing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugUnlimitedPurchasing = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRVendingMachine_VendingEntry>*& GlobalNamespace::GRVendingMachine::__cordl_internal_get_vendingEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingEntries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRVendingMachine_VendingEntry>* const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_vendingEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingEntries;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_vendingEntries(::System::Collections::Generic::List_1<::GlobalNamespace::GRVendingMachine_VendingEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vendingEntries = value;
}
constexpr int32_t& GlobalNamespace::GRVendingMachine::__cordl_internal_get_hIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hIndex;
}
constexpr int32_t const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_hIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hIndex;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_hIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hIndex = value;
}
constexpr int32_t& GlobalNamespace::GRVendingMachine::__cordl_internal_get_vIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vIndex;
}
constexpr int32_t const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_vIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vIndex;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_vIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vIndex = value;
}
constexpr bool& GlobalNamespace::GRVendingMachine::__cordl_internal_get_currentlyVending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyVending;
}
constexpr bool const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_currentlyVending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyVending;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_currentlyVending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentlyVending = value;
}
constexpr int32_t& GlobalNamespace::GRVendingMachine::__cordl_internal_get_vendingIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingIndex;
}
constexpr int32_t const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_vendingIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingIndex;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_vendingIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vendingIndex = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRVendingMachine::__cordl_internal_get_vendingCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_vendingCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingCoroutine;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_vendingCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vendingCoroutine = value;
}
constexpr int32_t& GlobalNamespace::GRVendingMachine::__cordl_internal_get_VendingMachineId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VendingMachineId;
}
constexpr int32_t const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_VendingMachineId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VendingMachineId;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_VendingMachineId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VendingMachineId = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRVendingMachine::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRVendingMachine::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRVendingMachine::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
inline void GlobalNamespace::GRVendingMachine::Setup(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GRVendingMachine::GetSpawnMarker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine::NavButtonPressedLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"NavButtonPressedLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine::NavButtonPressedRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"NavButtonPressedRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine::NavButtonPressedUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"NavButtonPressedUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine::NavButtonPressedDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"NavButtonPressedDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine::RequestPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"RequestPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine::RefreshCardReaderDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"RefreshCardReaderDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRVendingMachine::MoveTransportToSlot(int32_t  x, int32_t  y, int32_t  rows, int32_t  cols, float_t  xSpeed, float_t  ySpeed, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"MoveTransportToSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y, rows, cols, xSpeed, ySpeed, dt);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GRVendingMachine::VendingCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {"VendingCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRVendingMachine* GlobalNamespace::GRVendingMachine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRVendingMachine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRVendingMachine::GRVendingMachine()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::*)(int32_t)>(&::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58effb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::*)()>(&::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f0078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::*)()>(&::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x58f007c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::*)()>(&::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f05e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::*)()>(&::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58f05e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::*)()>(&::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRVendingMachine>& GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GRVendingMachine> const& GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRVendingMachine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_get__depositPosSqDist_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depositPosSqDist_5__2;
}
constexpr float_t const& GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_get__depositPosSqDist_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depositPosSqDist_5__2;
}
constexpr void GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::__cordl_internal_set__depositPosSqDist_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depositPosSqDist_5__2 = value;
}
inline void GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33* GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRVendingMachine__VendingCoroutine_d__33::GRVendingMachine__VendingCoroutine_d__33()   {
}
