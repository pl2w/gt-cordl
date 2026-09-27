#pragma once
// IWYU pragma private; include "GlobalNamespace/StopwatchCosmetic.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GlobalNamespace/zzzz__StopwatchCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__StopwatchFace_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.get_isActivating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::get_isActivating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5790b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"get_isActivating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.get_activeTimeElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::get_activeTimeElapsed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5790b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"get_activeTimeElapsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::Awake)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5790b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                    {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5790d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                    {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579109c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                    {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.OnWatchToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::StopwatchCosmetic::OnWatchToggle)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x579117c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"OnWatchToggle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.OnWatchReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::StopwatchCosmetic::OnWatchReset)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x579132c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"OnWatchReset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.FetchMyViewID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StopwatchCosmetic::*)(::by_ref<int32_t>)>(&::GlobalNamespace::StopwatchCosmetic::FetchMyViewID)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5790e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"FetchMyViewID", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.PollActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::PollActivated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5791488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"PollActivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.TriggeredLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::TriggeredLateUpdate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x57914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                    {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::OnActivate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x57915e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                    {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.OnDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::OnDeactivate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x579163c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                    {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.CanActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::CanActivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579183c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                    {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic.CanDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::CanDeactivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x579184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                    {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StopwatchCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StopwatchCosmetic::*)()>(&::GlobalNamespace::StopwatchCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x579185c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StopwatchFace>& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__watchFace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watchFace;
}
constexpr ::UnityW<::GlobalNamespace::StopwatchFace> const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__watchFace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watchFace;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set__watchFace(::UnityW<::GlobalNamespace::StopwatchFace>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____watchFace = value;
}
constexpr bool& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__isActivating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActivating;
}
constexpr bool const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__isActivating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActivating;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set__isActivating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActivating = value;
}
constexpr float_t& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__activeTimeElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTimeElapsed;
}
constexpr float_t const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__activeTimeElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTimeElapsed;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set__activeTimeElapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeTimeElapsed = value;
}
constexpr bool& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__activated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activated;
}
constexpr bool const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__activated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activated;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set__activated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activated = value;
}
constexpr int32_t& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__photonID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photonID;
}
constexpr int32_t const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__photonID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photonID;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set__photonID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____photonID = value;
}
constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__watchToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watchToggle;
}
constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>* const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__watchToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watchToggle;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set__watchToggle(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____watchToggle = value;
}
constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__watchReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watchReset;
}
constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>* const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get__watchReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watchReset;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set__watchReset(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____watchReset = value;
}
constexpr bool& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get_disableActivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableActivation;
}
constexpr bool const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get_disableActivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableActivation;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set_disableActivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableActivation = value;
}
constexpr bool& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get_disableDeactivation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDeactivation;
}
constexpr bool const& GlobalNamespace::StopwatchCosmetic::__cordl_internal_get_disableDeactivation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDeactivation;
}
constexpr void GlobalNamespace::StopwatchCosmetic::__cordl_internal_set_disableDeactivation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableDeactivation = value;
}
inline void GlobalNamespace::StopwatchCosmetic::setStaticF_gWatchToggleRPC(::GlobalNamespace::PhotonEvent*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PhotonEvent*, "gWatchToggleRPC", ::GlobalNamespace::StopwatchCosmetic*>(std::forward<::GlobalNamespace::PhotonEvent*>(value));
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::StopwatchCosmetic::getStaticF_gWatchToggleRPC()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PhotonEvent*, "gWatchToggleRPC", ::GlobalNamespace::StopwatchCosmetic*>();
}
inline void GlobalNamespace::StopwatchCosmetic::setStaticF_gWatchResetRPC(::GlobalNamespace::PhotonEvent*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PhotonEvent*, "gWatchResetRPC", ::GlobalNamespace::StopwatchCosmetic*>(std::forward<::GlobalNamespace::PhotonEvent*>(value));
}
inline ::GlobalNamespace::PhotonEvent* GlobalNamespace::StopwatchCosmetic::getStaticF_gWatchResetRPC()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PhotonEvent*, "gWatchResetRPC", ::GlobalNamespace::StopwatchCosmetic*>();
}
inline bool GlobalNamespace::StopwatchCosmetic::get_isActivating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"get_isActivating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::StopwatchCosmetic::get_activeTimeElapsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"get_activeTimeElapsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchCosmetic::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchCosmetic::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchCosmetic::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchCosmetic::OnWatchToggle(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"OnWatchToggle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GlobalNamespace::StopwatchCosmetic::OnWatchReset(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"OnWatchReset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline bool GlobalNamespace::StopwatchCosmetic::FetchMyViewID(::by_ref<int32_t>  viewID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"FetchMyViewID", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, viewID);
}
inline bool GlobalNamespace::StopwatchCosmetic::PollActivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {"PollActivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchCosmetic::TriggeredLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchCosmetic::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchCosmetic::OnDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::StopwatchCosmetic::CanActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::StopwatchCosmetic::CanDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StopwatchCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StopwatchCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StopwatchCosmetic* GlobalNamespace::StopwatchCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StopwatchCosmetic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StopwatchCosmetic::StopwatchCosmetic()   {
}
