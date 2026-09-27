#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIUser.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIUser_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__IModioUIPropertiesOwner_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "Modio/Users/zzzz__User_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.get_User
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::UserProfile* (::Modio::Unity::UI::Components::ModioUIUser::*)()>(&::Modio::Unity::UI::Components::ModioUIUser::get_User)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbe6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"get_User", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.set_User
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::ModioUIUser::set_User)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbe6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"set_User", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)()>(&::Modio::Unity::UI::Components::ModioUIUser::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9fbe6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)()>(&::Modio::Unity::UI::Components::ModioUIUser::OnDestroy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9fbe7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.AddUpdatePropertiesListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)(::UnityEngine::Events::UnityAction*)>(&::Modio::Unity::UI::Components::ModioUIUser::AddUpdatePropertiesListener)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fbe8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"AddUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.RemoveUpdatePropertiesListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)(::UnityEngine::Events::UnityAction*)>(&::Modio::Unity::UI::Components::ModioUIUser::RemoveUpdatePropertiesListener)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fbe8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"RemoveUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.GetCurrentUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)()>(&::Modio::Unity::UI::Components::ModioUIUser::GetCurrentUser)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fbe754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"GetCurrentUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.OnUserChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)(::Modio::Users::User*)>(&::Modio::Unity::UI::Components::ModioUIUser::OnUserChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fbea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"OnUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.SetUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::ModioUIUser::SetUser)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9fbe900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"SetUser", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser.ProfileUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)()>(&::Modio::Unity::UI::Components::ModioUIUser::ProfileUpdated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fbea70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"ProfileUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModioUIUser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModioUIUser::*)()>(&::Modio::Unity::UI::Components::ModioUIUser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fbea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_get_onUserUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUserUpdate;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_get_onUserUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUserUpdate;
}
constexpr void Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_set_onUserUpdate(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onUserUpdate = value;
}
constexpr bool& Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_get__useLoggedInUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLoggedInUser;
}
constexpr bool const& Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_get__useLoggedInUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLoggedInUser;
}
constexpr void Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_set__useLoggedInUser(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useLoggedInUser = value;
}
constexpr ::Modio::Users::UserProfile*& Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_get__User_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____User_k__BackingField;
}
constexpr ::Modio::Users::UserProfile* const& Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_get__User_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____User_k__BackingField;
}
constexpr void Modio::Unity::UI::Components::ModioUIUser::__cordl_internal_set__User_k__BackingField(::Modio::Users::UserProfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____User_k__BackingField = value;
}
inline ::Modio::Users::UserProfile* Modio::Unity::UI::Components::ModioUIUser::get_User()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"get_User", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::UserProfile*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIUser::set_User(::Modio::Users::UserProfile*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"set_User", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Components::ModioUIUser::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIUser::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIUser::AddUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"AddUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Modio::Unity::UI::Components::ModioUIUser::RemoveUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"RemoveUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Modio::Unity::UI::Components::ModioUIUser::GetCurrentUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"GetCurrentUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIUser::OnUserChanged(::Modio::Users::User*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"OnUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void Modio::Unity::UI::Components::ModioUIUser::SetUser(::Modio::Users::UserProfile*  profile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"SetUser", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profile);
}
inline void Modio::Unity::UI::Components::ModioUIUser::ProfileUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {"ProfileUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModioUIUser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModioUIUser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModioUIUser* Modio::Unity::UI::Components::ModioUIUser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModioUIUser*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr  Modio::Unity::UI::Components::ModioUIUser::operator ::Modio::Unity::UI::Components::IModioUIPropertiesOwner*() noexcept {
return static_cast<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr ::Modio::Unity::UI::Components::IModioUIPropertiesOwner* Modio::Unity::UI::Components::ModioUIUser::i___Modio__Unity__UI__Components__IModioUIPropertiesOwner() noexcept {
return static_cast<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModioUIUser::ModioUIUser()   {
}
