#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectSyncedBool.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectSyncedBool_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectSyncedBool.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectSyncedBool::*)()>(&::GlobalNamespace::TransferrableObjectSyncedBool::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5773254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectSyncedBool.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectSyncedBool::*)()>(&::GlobalNamespace::TransferrableObjectSyncedBool::OnDisable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5773320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectSyncedBool.SetItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectSyncedBool::*)(bool)>(&::GlobalNamespace::TransferrableObjectSyncedBool::SetItemState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57733ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                        {"SetItemState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectSyncedBool.ToggleItemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectSyncedBool::*)()>(&::GlobalNamespace::TransferrableObjectSyncedBool::ToggleItemState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5773408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                        {"ToggleItemState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectSyncedBool.OnItemStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectSyncedBool::*)()>(&::GlobalNamespace::TransferrableObjectSyncedBool::OnItemStateChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5773420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                        {"OnItemStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectSyncedBool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectSyncedBool::*)()>(&::GlobalNamespace::TransferrableObjectSyncedBool::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5773448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_get_deprecatedWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deprecatedWarning;
}
constexpr bool const& GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_get_deprecatedWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deprecatedWarning;
}
constexpr void GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_set_deprecatedWarning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deprecatedWarning = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_get_OnItemStateSetTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateSetTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_get_OnItemStateSetTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateSetTrue;
}
constexpr void GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_set_OnItemStateSetTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateSetTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_get_OnItemStateSetFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateSetFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_get_OnItemStateSetFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateSetFalse;
}
constexpr void GlobalNamespace::TransferrableObjectSyncedBool::__cordl_internal_set_OnItemStateSetFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateSetFalse = value;
}
inline void GlobalNamespace::TransferrableObjectSyncedBool::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectSyncedBool::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectSyncedBool::SetItemState(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                        {"SetItemState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::TransferrableObjectSyncedBool::ToggleItemState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                        {"ToggleItemState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectSyncedBool::OnItemStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                        {"OnItemStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectSyncedBool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectSyncedBool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObjectSyncedBool* GlobalNamespace::TransferrableObjectSyncedBool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObjectSyncedBool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObjectSyncedBool::TransferrableObjectSyncedBool()   {
}
