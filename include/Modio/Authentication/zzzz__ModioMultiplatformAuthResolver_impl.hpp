#pragma once
// IWYU pragma private; include "Modio/Authentication/ModioMultiplatformAuthResolver.hpp"
#include "Modio/zzzz__ModioServicePriority_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Authentication/zzzz__ModioMultiplatformAuthResolver_def.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "Modio/Authentication/zzzz__IGetActiveUserIdentifier_def.hpp"
#include "Modio/Authentication/zzzz__IModioAuthService_def.hpp"
#include "Modio/Authentication/zzzz__IPotentialModioEmailAuthService_def.hpp"
#include "Modio/Authentication/zzzz__ModioMultiplatformAuthResolver_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModioServicePriority_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.get_ServiceOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Authentication::IModioAuthService* (*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver::get_ServiceOverride)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa063908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"get_ServiceOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.set_ServiceOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Authentication::IModioAuthService*)>(&::Modio::Authentication::ModioMultiplatformAuthResolver::set_ServiceOverride)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa063950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"set_ServiceOverride", {}, {::i2c::type_of<::Modio::Authentication::IModioAuthService*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.get_AuthBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>* (*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver::get_AuthBindings)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa0639a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"get_AuthBindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.set_AuthBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*)>(&::Modio::Authentication::ModioMultiplatformAuthResolver::set_AuthBindings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa0639e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"set_AuthBindings", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver::Initialize)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0xa063a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.IsActiveForConditional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver::IsActiveForConditional)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa0640dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"IsActiveForConditional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Authentication::ModioMultiplatformAuthResolver::*)(bool, ::StringW)>(&::Modio::Authentication::ModioMultiplatformAuthResolver::Authenticate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa064124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.GetActiveUserIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Authentication::ModioMultiplatformAuthResolver::*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver::GetActiveUserIdentifier)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa0641f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.get_IsEmailPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Authentication::ModioMultiplatformAuthResolver::*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver::get_IsEmailPlatform)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa0642ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver.get_Portal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ModioAPI_Portal (::Modio::Authentication::ModioMultiplatformAuthResolver::*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver::get_Portal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa064374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"get_Portal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Authentication::ModioMultiplatformAuthResolver::*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa06443c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Authentication::ModioMultiplatformAuthResolver::setStaticF__resolveUsingThis(bool  value)  {
::cordl_internals::setStaticField<bool, "_resolveUsingThis", ::Modio::Authentication::ModioMultiplatformAuthResolver*>(std::forward<bool>(value));
}
inline bool Modio::Authentication::ModioMultiplatformAuthResolver::getStaticF__resolveUsingThis()  {
return ::cordl_internals::getStaticField<bool, "_resolveUsingThis", ::Modio::Authentication::ModioMultiplatformAuthResolver*>();
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver::setStaticF__hasInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "_hasInitialized", ::Modio::Authentication::ModioMultiplatformAuthResolver*>(std::forward<bool>(value));
}
inline bool Modio::Authentication::ModioMultiplatformAuthResolver::getStaticF__hasInitialized()  {
return ::cordl_internals::getStaticField<bool, "_hasInitialized", ::Modio::Authentication::ModioMultiplatformAuthResolver*>();
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver::setStaticF__ServiceOverride_k__BackingField(::Modio::Authentication::IModioAuthService*  value)  {
::cordl_internals::setStaticField<::Modio::Authentication::IModioAuthService*, "<ServiceOverride>k__BackingField", ::Modio::Authentication::ModioMultiplatformAuthResolver*>(std::forward<::Modio::Authentication::IModioAuthService*>(value));
}
inline ::Modio::Authentication::IModioAuthService* Modio::Authentication::ModioMultiplatformAuthResolver::getStaticF__ServiceOverride_k__BackingField()  {
return ::cordl_internals::getStaticField<::Modio::Authentication::IModioAuthService*, "<ServiceOverride>k__BackingField", ::Modio::Authentication::ModioMultiplatformAuthResolver*>();
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver::setStaticF__AuthBindings_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*, "<AuthBindings>k__BackingField", ::Modio::Authentication::ModioMultiplatformAuthResolver*>(std::forward<::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>* Modio::Authentication::ModioMultiplatformAuthResolver::getStaticF__AuthBindings_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*, "<AuthBindings>k__BackingField", ::Modio::Authentication::ModioMultiplatformAuthResolver*>();
}
inline ::Modio::Authentication::IModioAuthService* Modio::Authentication::ModioMultiplatformAuthResolver::get_ServiceOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"get_ServiceOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Authentication::IModioAuthService*>(nullptr, ___internal_method);
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver::set_ServiceOverride(::Modio::Authentication::IModioAuthService*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"set_ServiceOverride", {}, {::i2c::type_of<::Modio::Authentication::IModioAuthService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>* Modio::Authentication::ModioMultiplatformAuthResolver::get_AuthBindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"get_AuthBindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*>(nullptr, ___internal_method);
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver::set_AuthBindings(::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"set_AuthBindings", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Modio::Authentication::ModioMultiplatformAuthResolver::IsActiveForConditional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"IsActiveForConditional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Authentication::ModioMultiplatformAuthResolver::Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"Authenticate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, displayedTerms, thirdPartyEmail);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Authentication::ModioMultiplatformAuthResolver::GetActiveUserIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"GetActiveUserIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
template<typename T>
inline T Modio::Authentication::ModioMultiplatformAuthResolver::Get()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                    {"Get", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
inline bool Modio::Authentication::ModioMultiplatformAuthResolver::get_IsEmailPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"get_IsEmailPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ModioAPI_Portal Modio::Authentication::ModioMultiplatformAuthResolver::get_Portal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {"get_Portal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ModioAPI_Portal>(this, ___internal_method);
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Authentication::ModioMultiplatformAuthResolver* Modio::Authentication::ModioMultiplatformAuthResolver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Authentication::ModioMultiplatformAuthResolver*>());
}
/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr  Modio::Authentication::ModioMultiplatformAuthResolver::operator ::Modio::Authentication::IModioAuthService*() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IModioAuthService"
constexpr ::Modio::Authentication::IModioAuthService* Modio::Authentication::ModioMultiplatformAuthResolver::i___Modio__Authentication__IModioAuthService() noexcept {
return static_cast<::Modio::Authentication::IModioAuthService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr  Modio::Authentication::ModioMultiplatformAuthResolver::operator ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr ::Modio::Authentication::IGetActiveUserIdentifier* Modio::Authentication::ModioMultiplatformAuthResolver::i___Modio__Authentication__IGetActiveUserIdentifier() noexcept {
return static_cast<::Modio::Authentication::IGetActiveUserIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr  Modio::Authentication::ModioMultiplatformAuthResolver::operator ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr ::Modio::Authentication::IPotentialModioEmailAuthService* Modio::Authentication::ModioMultiplatformAuthResolver::i___Modio__Authentication__IPotentialModioEmailAuthService() noexcept {
return static_cast<::Modio::Authentication::IPotentialModioEmailAuthService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Authentication::ModioMultiplatformAuthResolver::ModioMultiplatformAuthResolver()   {
}
constexpr ::Modio::ModioServicePriority  Modio::Authentication::ModioMultiplatformAuthResolver::SERVICE_BINDING_PRIORITY{static_cast<int32_t>(0x32)};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Authentication::ModioMultiplatformAuthResolver___c::*)()>(&::Modio::Authentication::ModioMultiplatformAuthResolver___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0644ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver___c._Initialize_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioServicePriority (::Modio::Authentication::ModioMultiplatformAuthResolver___c::*)(::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>)>(&::Modio::Authentication::ModioMultiplatformAuthResolver___c::_Initialize_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0644b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(),
                        {"<Initialize>b__11_0", {}, {::i2c::type_of<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver___c._Initialize_b__11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Authentication::IModioAuthService* (::Modio::Authentication::ModioMultiplatformAuthResolver___c::*)(::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>)>(&::Modio::Authentication::ModioMultiplatformAuthResolver___c::_Initialize_b__11_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0644bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(),
                        {"<Initialize>b__11_1", {}, {::i2c::type_of<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Authentication::ModioMultiplatformAuthResolver___c._Initialize_b__11_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Authentication::ModioMultiplatformAuthResolver___c::*)(::Modio::Authentication::IModioAuthService*)>(&::Modio::Authentication::ModioMultiplatformAuthResolver___c::_Initialize_b__11_2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa0644c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(),
                        {"<Initialize>b__11_2", {}, {::i2c::type_of<::Modio::Authentication::IModioAuthService*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Authentication::ModioMultiplatformAuthResolver___c::setStaticF___9(::Modio::Authentication::ModioMultiplatformAuthResolver___c*  value)  {
::cordl_internals::setStaticField<::Modio::Authentication::ModioMultiplatformAuthResolver___c*, "<>9", ::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(std::forward<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(value));
}
inline ::Modio::Authentication::ModioMultiplatformAuthResolver___c* Modio::Authentication::ModioMultiplatformAuthResolver___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Authentication::ModioMultiplatformAuthResolver___c*, "<>9", ::Modio::Authentication::ModioMultiplatformAuthResolver___c*>();
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver___c::setStaticF___9__11_0(::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::ModioServicePriority>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::ModioServicePriority>*, "<>9__11_0", ::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(std::forward<::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::ModioServicePriority>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::ModioServicePriority>* Modio::Authentication::ModioMultiplatformAuthResolver___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::ModioServicePriority>*, "<>9__11_0", ::Modio::Authentication::ModioMultiplatformAuthResolver___c*>();
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver___c::setStaticF___9__11_1(::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::Authentication::IModioAuthService*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::Authentication::IModioAuthService*>*, "<>9__11_1", ::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(std::forward<::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::Authentication::IModioAuthService*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::Authentication::IModioAuthService*>* Modio::Authentication::ModioMultiplatformAuthResolver___c::getStaticF___9__11_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::Authentication::IModioAuthService*>*, "<>9__11_1", ::Modio::Authentication::ModioMultiplatformAuthResolver___c*>();
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver___c::setStaticF___9__11_2(::System::Func_2<::Modio::Authentication::IModioAuthService*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Authentication::IModioAuthService*,bool>*, "<>9__11_2", ::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(std::forward<::System::Func_2<::Modio::Authentication::IModioAuthService*,bool>*>(value));
}
inline ::System::Func_2<::Modio::Authentication::IModioAuthService*,bool>* Modio::Authentication::ModioMultiplatformAuthResolver___c::getStaticF___9__11_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Authentication::IModioAuthService*,bool>*, "<>9__11_2", ::Modio::Authentication::ModioMultiplatformAuthResolver___c*>();
}
inline void Modio::Authentication::ModioMultiplatformAuthResolver___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::ModioServicePriority Modio::Authentication::ModioMultiplatformAuthResolver___c::_Initialize_b__11_0(::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>  tuple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(),
                        {"<Initialize>b__11_0", {}, {::i2c::type_of<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioServicePriority>(this, ___internal_method, tuple);
}
inline ::Modio::Authentication::IModioAuthService* Modio::Authentication::ModioMultiplatformAuthResolver___c::_Initialize_b__11_1(::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>  platformPair)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(),
                        {"<Initialize>b__11_1", {}, {::i2c::type_of<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Authentication::IModioAuthService*>(this, ___internal_method, platformPair);
}
inline bool Modio::Authentication::ModioMultiplatformAuthResolver___c::_Initialize_b__11_2(::Modio::Authentication::IModioAuthService*  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>(),
                        {"<Initialize>b__11_2", {}, {::i2c::type_of<::Modio::Authentication::IModioAuthService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, platform);
}
inline ::Modio::Authentication::ModioMultiplatformAuthResolver___c* Modio::Authentication::ModioMultiplatformAuthResolver___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Authentication::ModioMultiplatformAuthResolver___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Authentication::ModioMultiplatformAuthResolver___c::ModioMultiplatformAuthResolver___c()   {
}
