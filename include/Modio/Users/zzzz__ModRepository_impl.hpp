#pragma once
// IWYU pragma private; include "Modio/Users/ModRepository.hpp"
#include "Modio/Mods/zzzz__ModId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Users/zzzz__ModRepository_def.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Users/zzzz__ModRepository_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Modio::Users::ModRepository.get_HasGotSubscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::ModRepository::*)()>(&::Modio::Users::ModRepository::get_HasGotSubscriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01ca3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"get_HasGotSubscriptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.set_HasGotSubscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository::*)(bool)>(&::Modio::Users::ModRepository::set_HasGotSubscriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01ca44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"set_HasGotSubscriptions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.add_OnContentsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository::*)(::System::Action*)>(&::Modio::Users::ModRepository::add_OnContentsChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa01ca4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"add_OnContentsChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.remove_OnContentsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository::*)(::System::Action*)>(&::Modio::Users::ModRepository::remove_OnContentsChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa01cae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"remove_OnContentsChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.GetCreatedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* (::Modio::Users::ModRepository::*)()>(&::Modio::Users::ModRepository::GetCreatedMods)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01cb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"GetCreatedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.GetSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* (::Modio::Users::ModRepository::*)()>(&::Modio::Users::ModRepository::GetSubscribed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01cb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"GetSubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.GetPurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* (::Modio::Users::ModRepository::*)()>(&::Modio::Users::ModRepository::GetPurchased)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01cb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"GetPurchased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.GetDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* (::Modio::Users::ModRepository::*)()>(&::Modio::Users::ModRepository::GetDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01cb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"GetDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository::*)()>(&::Modio::Users::ModRepository::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa01cba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.OnModSubscriptionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository::*)(::Modio::Mods::Mod*, ::Modio::Mods::ModChangeType)>(&::Modio::Users::ModRepository::OnModSubscriptionChange)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa01cde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"OnModSubscriptionChange", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.OnModEnabledChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository::*)(::Modio::Mods::Mod*, ::Modio::Mods::ModChangeType)>(&::Modio::Users::ModRepository::OnModEnabledChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa01cec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"OnModEnabledChange", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.OnModPurchasedChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository::*)(::Modio::Mods::Mod*, ::Modio::Mods::ModChangeType)>(&::Modio::Users::ModRepository::OnModPurchasedChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa01cf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"OnModPurchasedChange", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.IsSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::ModRepository::*)(::Modio::Mods::ModId)>(&::Modio::Users::ModRepository::IsSubscribed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa00afac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"IsSubscribed", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.IsDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::ModRepository::*)(::Modio::Mods::ModId)>(&::Modio::Users::ModRepository::IsDisabled)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa01d040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"IsDisabled", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.IsPurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::ModRepository::*)(::Modio::Mods::ModId)>(&::Modio::Users::ModRepository::IsPurchased)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa01d11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"IsPurchased", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository::*)()>(&::Modio::Users::ModRepository::Dispose)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa01d1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Users::ModRepository::__cordl_internal_get__HasGotSubscriptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasGotSubscriptions_k__BackingField;
}
constexpr bool const& Modio::Users::ModRepository::__cordl_internal_get__HasGotSubscriptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasGotSubscriptions_k__BackingField;
}
constexpr void Modio::Users::ModRepository::__cordl_internal_set__HasGotSubscriptions_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasGotSubscriptions_k__BackingField = value;
}
constexpr ::System::Action*& Modio::Users::ModRepository::__cordl_internal_get_OnContentsChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnContentsChanged;
}
constexpr ::System::Action* const& Modio::Users::ModRepository::__cordl_internal_get_OnContentsChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnContentsChanged;
}
constexpr void Modio::Users::ModRepository::__cordl_internal_set_OnContentsChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnContentsChanged = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*& Modio::Users::ModRepository::__cordl_internal_get__created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____created;
}
constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* const& Modio::Users::ModRepository::__cordl_internal_get__created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____created;
}
constexpr void Modio::Users::ModRepository::__cordl_internal_set__created(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____created = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*& Modio::Users::ModRepository::__cordl_internal_get__subscribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribed;
}
constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* const& Modio::Users::ModRepository::__cordl_internal_get__subscribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribed;
}
constexpr void Modio::Users::ModRepository::__cordl_internal_set__subscribed(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscribed = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*& Modio::Users::ModRepository::__cordl_internal_get__purchased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchased;
}
constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* const& Modio::Users::ModRepository::__cordl_internal_get__purchased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchased;
}
constexpr void Modio::Users::ModRepository::__cordl_internal_set__purchased(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchased = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*& Modio::Users::ModRepository::__cordl_internal_get__disabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabled;
}
constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* const& Modio::Users::ModRepository::__cordl_internal_get__disabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabled;
}
constexpr void Modio::Users::ModRepository::__cordl_internal_set__disabled(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabled = value;
}
inline bool Modio::Users::ModRepository::get_HasGotSubscriptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"get_HasGotSubscriptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Users::ModRepository::set_HasGotSubscriptions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"set_HasGotSubscriptions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Users::ModRepository::add_OnContentsChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"add_OnContentsChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Users::ModRepository::remove_OnContentsChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"remove_OnContentsChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* Modio::Users::ModRepository::GetCreatedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"GetCreatedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* Modio::Users::ModRepository::GetSubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"GetSubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* Modio::Users::ModRepository::GetPurchased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"GetPurchased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* Modio::Users::ModRepository::GetDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"GetDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>*>(this, ___internal_method);
}
inline void Modio::Users::ModRepository::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Users::ModRepository::OnModSubscriptionChange(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"OnModSubscriptionChange", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, changeType);
}
inline void Modio::Users::ModRepository::OnModEnabledChange(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"OnModEnabledChange", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, changeType);
}
inline void Modio::Users::ModRepository::OnModPurchasedChange(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"OnModPurchasedChange", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, changeType);
}
inline bool Modio::Users::ModRepository::IsSubscribed(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"IsSubscribed", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId);
}
inline bool Modio::Users::ModRepository::IsDisabled(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"IsDisabled", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId);
}
inline bool Modio::Users::ModRepository::IsPurchased(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"IsPurchased", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId);
}
inline void Modio::Users::ModRepository::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Users::ModRepository* Modio::Users::ModRepository::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::ModRepository*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::Users::ModRepository::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::Users::ModRepository::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Users::ModRepository::ModRepository()   {
}
//  Writing Method size for method: ::Modio::Users::ModRepository___c__DisplayClass21_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository___c__DisplayClass21_0::*)()>(&::Modio::Users::ModRepository___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository___c__DisplayClass21_0._IsPurchased_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::ModRepository___c__DisplayClass21_0::*)(::Modio::Mods::Mod*)>(&::Modio::Users::ModRepository___c__DisplayClass21_0::_IsPurchased_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa01d3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass21_0*>(),
                        {"<IsPurchased>b__0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Mods::ModId& Modio::Users::ModRepository___c__DisplayClass21_0::__cordl_internal_get_modId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr ::Modio::Mods::ModId const& Modio::Users::ModRepository___c__DisplayClass21_0::__cordl_internal_get_modId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr void Modio::Users::ModRepository___c__DisplayClass21_0::__cordl_internal_set_modId(::Modio::Mods::ModId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modId = value;
}
inline void Modio::Users::ModRepository___c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Users::ModRepository___c__DisplayClass21_0::_IsPurchased_b__0(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass21_0*>(),
                        {"<IsPurchased>b__0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mod);
}
inline ::Modio::Users::ModRepository___c__DisplayClass21_0* Modio::Users::ModRepository___c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::ModRepository___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::ModRepository___c__DisplayClass21_0::ModRepository___c__DisplayClass21_0()   {
}
//  Writing Method size for method: ::Modio::Users::ModRepository___c__DisplayClass20_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository___c__DisplayClass20_0::*)()>(&::Modio::Users::ModRepository___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository___c__DisplayClass20_0._IsDisabled_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::ModRepository___c__DisplayClass20_0::*)(::Modio::Mods::Mod*)>(&::Modio::Users::ModRepository___c__DisplayClass20_0::_IsDisabled_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa01d38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass20_0*>(),
                        {"<IsDisabled>b__0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Mods::ModId& Modio::Users::ModRepository___c__DisplayClass20_0::__cordl_internal_get_modId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr ::Modio::Mods::ModId const& Modio::Users::ModRepository___c__DisplayClass20_0::__cordl_internal_get_modId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr void Modio::Users::ModRepository___c__DisplayClass20_0::__cordl_internal_set_modId(::Modio::Mods::ModId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modId = value;
}
inline void Modio::Users::ModRepository___c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Users::ModRepository___c__DisplayClass20_0::_IsDisabled_b__0(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass20_0*>(),
                        {"<IsDisabled>b__0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mod);
}
inline ::Modio::Users::ModRepository___c__DisplayClass20_0* Modio::Users::ModRepository___c__DisplayClass20_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::ModRepository___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::ModRepository___c__DisplayClass20_0::ModRepository___c__DisplayClass20_0()   {
}
//  Writing Method size for method: ::Modio::Users::ModRepository___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::ModRepository___c__DisplayClass19_0::*)()>(&::Modio::Users::ModRepository___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::ModRepository___c__DisplayClass19_0._IsSubscribed_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::ModRepository___c__DisplayClass19_0::*)(::Modio::Mods::Mod*)>(&::Modio::Users::ModRepository___c__DisplayClass19_0::_IsSubscribed_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa01d36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass19_0*>(),
                        {"<IsSubscribed>b__0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Mods::ModId& Modio::Users::ModRepository___c__DisplayClass19_0::__cordl_internal_get_modId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr ::Modio::Mods::ModId const& Modio::Users::ModRepository___c__DisplayClass19_0::__cordl_internal_get_modId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modId;
}
constexpr void Modio::Users::ModRepository___c__DisplayClass19_0::__cordl_internal_set_modId(::Modio::Mods::ModId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modId = value;
}
inline void Modio::Users::ModRepository___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Users::ModRepository___c__DisplayClass19_0::_IsSubscribed_b__0(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::ModRepository___c__DisplayClass19_0*>(),
                        {"<IsSubscribed>b__0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mod);
}
inline ::Modio::Users::ModRepository___c__DisplayClass19_0* Modio::Users::ModRepository___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::ModRepository___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::ModRepository___c__DisplayClass19_0::ModRepository___c__DisplayClass19_0()   {
}
