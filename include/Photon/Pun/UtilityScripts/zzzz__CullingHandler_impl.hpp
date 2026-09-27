#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CullingHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CullingHandler_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CullArea_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CullingHandler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CullingHandler::*)()>(&::Photon::Pun::UtilityScripts::CullingHandler::OnEnable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa72fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CullingHandler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CullingHandler::*)()>(&::Photon::Pun::UtilityScripts::CullingHandler::Start)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa72ffc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CullingHandler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CullingHandler::*)()>(&::Photon::Pun::UtilityScripts::CullingHandler::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa730104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CullingHandler.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CullingHandler::*)()>(&::Photon::Pun::UtilityScripts::CullingHandler::OnGUI)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xa730654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CullingHandler.HaveActiveCellsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::CullingHandler::*)()>(&::Photon::Pun::UtilityScripts::CullingHandler::HaveActiveCellsChanged)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa7301d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"HaveActiveCellsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CullingHandler.UpdateInterestGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CullingHandler::*)()>(&::Photon::Pun::UtilityScripts::CullingHandler::UpdateInterestGroups)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa7303ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"UpdateInterestGroups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CullingHandler.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CullingHandler::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::UtilityScripts::CullingHandler::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa730a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CullingHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CullingHandler::*)()>(&::Photon::Pun::UtilityScripts::CullingHandler::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa730b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_orderIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orderIndex;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_orderIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orderIndex;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_orderIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orderIndex = value;
}
constexpr ::UnityW<::Photon::Pun::UtilityScripts::CullArea>& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_cullArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullArea;
}
constexpr ::UnityW<::Photon::Pun::UtilityScripts::CullArea> const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_cullArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullArea;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_cullArea(::UnityW<::Photon::Pun::UtilityScripts::CullArea>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cullArea = value;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>*& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_previousActiveCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousActiveCells;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_previousActiveCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousActiveCells;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_previousActiveCells(::System::Collections::Generic::List_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousActiveCells = value;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>*& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_activeCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCells;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_activeCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCells;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_activeCells(::System::Collections::Generic::List_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCells = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_pView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_pView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pView;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_pView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pView = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_currentPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_currentPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPosition;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_currentPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPosition = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_timeSinceUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceUpdate;
}
constexpr float_t const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_timeSinceUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceUpdate;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_timeSinceUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSinceUpdate = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_timeBetweenUpdatesMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenUpdatesMin;
}
constexpr float_t const& Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_get_timeBetweenUpdatesMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenUpdatesMin;
}
constexpr void Photon::Pun::UtilityScripts::CullingHandler::__cordl_internal_set_timeBetweenUpdatesMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeBetweenUpdatesMin = value;
}
inline void Photon::Pun::UtilityScripts::CullingHandler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CullingHandler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CullingHandler::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CullingHandler::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::CullingHandler::HaveActiveCellsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"HaveActiveCellsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CullingHandler::UpdateInterestGroups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"UpdateInterestGroups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CullingHandler::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::UtilityScripts::CullingHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CullingHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::CullingHandler* Photon::Pun::UtilityScripts::CullingHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::CullingHandler*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  Photon::Pun::UtilityScripts::CullingHandler::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* Photon::Pun::UtilityScripts::CullingHandler::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::CullingHandler::CullingHandler()   {
}
