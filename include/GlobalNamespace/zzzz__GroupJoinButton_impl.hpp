#pragma once
// IWYU pragma private; include "GlobalNamespace/GroupJoinButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__GroupJoinButton_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GroupJoinButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GroupJoinButton::*)()>(&::GlobalNamespace::GroupJoinButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x594824c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GroupJoinButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GroupJoinButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GroupJoinButton::*)()>(&::GlobalNamespace::GroupJoinButton::Update)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59482e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GroupJoinButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GroupJoinButton::*)()>(&::GlobalNamespace::GroupJoinButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5948388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GroupJoinButton::__cordl_internal_get_gameModeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeIndex;
}
constexpr int32_t const& GlobalNamespace::GroupJoinButton::__cordl_internal_get_gameModeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeIndex;
}
constexpr void GlobalNamespace::GroupJoinButton::__cordl_internal_set_gameModeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GlobalNamespace::GroupJoinButton::__cordl_internal_get_friendCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GlobalNamespace::GroupJoinButton::__cordl_internal_get_friendCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCollider;
}
constexpr void GlobalNamespace::GroupJoinButton::__cordl_internal_set_friendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendCollider = value;
}
constexpr bool& GlobalNamespace::GroupJoinButton::__cordl_internal_get_inPrivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inPrivate;
}
constexpr bool const& GlobalNamespace::GroupJoinButton::__cordl_internal_get_inPrivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inPrivate;
}
constexpr void GlobalNamespace::GroupJoinButton::__cordl_internal_set_inPrivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inPrivate = value;
}
inline void GlobalNamespace::GroupJoinButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GroupJoinButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GroupJoinButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GroupJoinButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GroupJoinButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GroupJoinButton* GlobalNamespace::GroupJoinButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GroupJoinButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GroupJoinButton::GroupJoinButton()   {
}
