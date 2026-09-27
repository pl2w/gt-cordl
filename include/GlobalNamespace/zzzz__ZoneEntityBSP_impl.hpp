#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneEntityBSP.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneEntityBSP_def.hpp"
#include "GlobalNamespace/zzzz__GTSubZone_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__ZoneDef_def.hpp"
#include "GlobalNamespace/zzzz__ZoneEntityBSP_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.add_onPlayerZoneChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*)>(&::GlobalNamespace::ZoneEntityBSP::add_onPlayerZoneChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b49f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"add_onPlayerZoneChange", {}, {::i2c::type_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.remove_onPlayerZoneChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*)>(&::GlobalNamespace::ZoneEntityBSP::remove_onPlayerZoneChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b49fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"remove_onPlayerZoneChange", {}, {::i2c::type_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.get_entityRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::get_entityRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4a07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"get_entityRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.get_currentZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTZone (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::get_currentZone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b4a084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"get_currentZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.get_currentSubZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTSubZone (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::get_currentSubZone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b4a09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"get_currentSubZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.get_GroupZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GroupJoinZoneAB (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::get_GroupZone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b4a0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"get_GroupZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b4a0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4a39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                    {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4a3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                    {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::SliceUpdate)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5b4a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.EnableZoneChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::EnableZoneChanges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4a3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"EnableZoneChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP.DisableZoneChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::DisableZoneChanges)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4a3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"DisableZoneChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP::*)()>(&::GlobalNamespace::ZoneEntityBSP::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b4a3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get__emitTelemetry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitTelemetry;
}
constexpr bool const& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get__emitTelemetry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitTelemetry;
}
constexpr void GlobalNamespace::ZoneEntityBSP::__cordl_internal_set__emitTelemetry(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emitTelemetry = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get__entityRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entityRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get__entityRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entityRig;
}
constexpr void GlobalNamespace::ZoneEntityBSP::__cordl_internal_set__entityRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entityRig = value;
}
constexpr ::UnityW<::GlobalNamespace::ZoneDef>& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get_currentNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNode;
}
constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get_currentNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNode;
}
constexpr void GlobalNamespace::ZoneEntityBSP::__cordl_internal_set_currentNode(::UnityW<::GlobalNamespace::ZoneDef>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNode = value;
}
constexpr ::UnityW<::GlobalNamespace::ZoneDef>& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get_lastEnteredNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEnteredNode;
}
constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get_lastEnteredNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEnteredNode;
}
constexpr void GlobalNamespace::ZoneEntityBSP::__cordl_internal_set_lastEnteredNode(::UnityW<::GlobalNamespace::ZoneDef>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastEnteredNode = value;
}
constexpr ::UnityW<::GlobalNamespace::ZoneDef>& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get_lastExitedNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastExitedNode;
}
constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get_lastExitedNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastExitedNode;
}
constexpr void GlobalNamespace::ZoneEntityBSP::__cordl_internal_set_lastExitedNode(::UnityW<::GlobalNamespace::ZoneDef>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastExitedNode = value;
}
constexpr bool& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get_isUpdateDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUpdateDisabled;
}
constexpr bool const& GlobalNamespace::ZoneEntityBSP::__cordl_internal_get_isUpdateDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUpdateDisabled;
}
constexpr void GlobalNamespace::ZoneEntityBSP::__cordl_internal_set_isUpdateDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isUpdateDisabled = value;
}
inline void GlobalNamespace::ZoneEntityBSP::setStaticF_onPlayerZoneChange(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*, "onPlayerZoneChange", ::GlobalNamespace::ZoneEntityBSP*>(std::forward<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(value));
}
inline ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange* GlobalNamespace::ZoneEntityBSP::getStaticF_onPlayerZoneChange()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*, "onPlayerZoneChange", ::GlobalNamespace::ZoneEntityBSP*>();
}
inline void GlobalNamespace::ZoneEntityBSP::add_onPlayerZoneChange(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"add_onPlayerZoneChange", {}, {::i2c::type_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ZoneEntityBSP::remove_onPlayerZoneChange(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"remove_onPlayerZoneChange", {}, {::i2c::type_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::ZoneEntityBSP::get_entityRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"get_entityRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline ::GlobalNamespace::GTZone GlobalNamespace::ZoneEntityBSP::get_currentZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"get_currentZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTZone>(this, ___internal_method);
}
inline ::GlobalNamespace::GTSubZone GlobalNamespace::ZoneEntityBSP::get_currentSubZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"get_currentSubZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTSubZone>(this, ___internal_method);
}
inline ::GlobalNamespace::GroupJoinZoneAB GlobalNamespace::ZoneEntityBSP::get_GroupZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"get_GroupZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GroupJoinZoneAB>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneEntityBSP::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneEntityBSP::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneEntityBSP::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneEntityBSP::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneEntityBSP::EnableZoneChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"EnableZoneChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneEntityBSP::DisableZoneChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {"DisableZoneChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneEntityBSP::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneEntityBSP* GlobalNamespace::ZoneEntityBSP::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneEntityBSP*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::ZoneEntityBSP::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::ZoneEntityBSP::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneEntityBSP::ZoneEntityBSP()   {
}
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b4a3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GTZone, ::GlobalNamespace::GTZone)>(&::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b4a4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(),
                    {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::GTZone, ::GlobalNamespace::GTZone, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b4a4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(),
                    {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::*)(::System::IAsyncResult*)>(&::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4a5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(),
                    {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::Invoke(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GTZone  fromZone, ::GlobalNamespace::GTZone  toZone)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, fromZone, toZone);
}
inline ::System::IAsyncResult* GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::BeginInvoke(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GTZone  fromZone, ::GlobalNamespace::GTZone  toZone, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rig, fromZone, toZone, callback, object);
}
inline void GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange* GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange::ZoneEntityBSP_PlayerZoneChange()   {
}
