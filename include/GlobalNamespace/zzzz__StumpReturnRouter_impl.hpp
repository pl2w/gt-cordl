#pragma once
// IWYU pragma private; include "GlobalNamespace/StumpReturnRouter.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StumpReturnRouter_def.hpp"
#include "GlobalNamespace/zzzz__TeleportNode_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StumpReturnRouter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StumpReturnRouter::*)()>(&::GlobalNamespace::StumpReturnRouter::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59f4af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StumpReturnRouter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StumpReturnRouter::*)()>(&::GlobalNamespace::StumpReturnRouter::Update)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x59f4b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StumpReturnRouter.OnReturnedToHallway
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StumpReturnRouter::*)()>(&::GlobalNamespace::StumpReturnRouter::OnReturnedToHallway)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59f4e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {"OnReturnedToHallway", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StumpReturnRouter.GetDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::StumpReturnRouter::*)(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode)>(&::GlobalNamespace::StumpReturnRouter::GetDestination)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59f4e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {"GetDestination", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StumpReturnRouter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StumpReturnRouter::*)()>(&::GlobalNamespace::StumpReturnRouter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f4e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_customDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customDestination;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_customDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customDestination;
}
constexpr void GlobalNamespace::StumpReturnRouter::__cordl_internal_set_customDestination(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customDestination = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_featureADestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featureADestination;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_featureADestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featureADestination;
}
constexpr void GlobalNamespace::StumpReturnRouter::__cordl_internal_set_featureADestination(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___featureADestination = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_featureBDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featureBDestination;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_featureBDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featureBDestination;
}
constexpr void GlobalNamespace::StumpReturnRouter::__cordl_internal_set_featureBDestination(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___featureBDestination = value;
}
constexpr ::UnityW<::GlobalNamespace::TeleportNode>& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::UnityW<::GlobalNamespace::TeleportNode> const& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void GlobalNamespace::StumpReturnRouter::__cordl_internal_set_node(::UnityW<::GlobalNamespace::TeleportNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_appliedMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appliedMode;
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode const& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_appliedMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appliedMode;
}
constexpr void GlobalNamespace::StumpReturnRouter::__cordl_internal_set_appliedMode(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appliedMode = value;
}
constexpr bool& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_hasApplied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasApplied;
}
constexpr bool const& GlobalNamespace::StumpReturnRouter::__cordl_internal_get_hasApplied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasApplied;
}
constexpr void GlobalNamespace::StumpReturnRouter::__cordl_internal_set_hasApplied(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasApplied = value;
}
inline void GlobalNamespace::StumpReturnRouter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StumpReturnRouter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StumpReturnRouter::OnReturnedToHallway()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {"OnReturnedToHallway", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::StumpReturnRouter::GetDestination(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {"GetDestination", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, mode);
}
inline void GlobalNamespace::StumpReturnRouter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StumpReturnRouter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StumpReturnRouter* GlobalNamespace::StumpReturnRouter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StumpReturnRouter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StumpReturnRouter::StumpReturnRouter()   {
}
