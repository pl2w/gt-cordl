#pragma once
// IWYU pragma private; include "GlobalNamespace/HowManyMonke.hpp"
#include "GlobalNamespace/zzzz__HowManyMonke_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HowManyMonke_def.hpp"
#include "GlobalNamespace/zzzz__HowManyMonke_State_def.hpp"
#include "GlobalNamespace/zzzz__HowManyMonke__FetchRecheckDelay_d__12_def.hpp"
#include "GlobalNamespace/zzzz__HowManyMonke__FetchThisMany_d__15_def.hpp"
#include "GlobalNamespace/zzzz__HowManyMonke__Start_d__11_def.hpp"
#include "GlobalNamespace/zzzz__HowManyMonke_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HowManyMonke.get_RecheckDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::HowManyMonke::get_RecheckDelay)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56bfc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"get_RecheckDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonke.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonke::*)()>(&::GlobalNamespace::HowManyMonke::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56bfc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonke.FetchRecheckDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::HowManyMonke::*)()>(&::GlobalNamespace::HowManyMonke::FetchRecheckDelay)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56bfd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"FetchRecheckDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonke.onTDError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonke::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::HowManyMonke::onTDError)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56bfe14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonke.onTD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonke::*)(::StringW)>(&::GlobalNamespace::HowManyMonke::onTD)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56bfe74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonke.FetchThisMany
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::GlobalNamespace::HowManyMonke::*)()>(&::GlobalNamespace::HowManyMonke::FetchThisMany)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x56bff34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"FetchThisMany", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonke._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonke::*)()>(&::GlobalNamespace::HowManyMonke::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c0040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::HowManyMonke::__cordl_internal_get_titleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr ::StringW const& GlobalNamespace::HowManyMonke::__cordl_internal_get_titleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr void GlobalNamespace::HowManyMonke::__cordl_internal_set_titleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataKey = value;
}
constexpr ::GlobalNamespace::HowManyMonke_State& GlobalNamespace::HowManyMonke::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::HowManyMonke_State const& GlobalNamespace::HowManyMonke::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::HowManyMonke::__cordl_internal_set_state(::GlobalNamespace::HowManyMonke_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::StringW& GlobalNamespace::HowManyMonke::__cordl_internal_get_CCUEndpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CCUEndpoint;
}
constexpr ::StringW const& GlobalNamespace::HowManyMonke::__cordl_internal_get_CCUEndpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CCUEndpoint;
}
constexpr void GlobalNamespace::HowManyMonke::__cordl_internal_set_CCUEndpoint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CCUEndpoint = value;
}
inline void GlobalNamespace::HowManyMonke::setStaticF_ThisMany(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ThisMany", ::GlobalNamespace::HowManyMonke*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::HowManyMonke::getStaticF_ThisMany()  {
return ::cordl_internals::getStaticField<int32_t, "ThisMany", ::GlobalNamespace::HowManyMonke*>();
}
inline void GlobalNamespace::HowManyMonke::setStaticF_OnCheck(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "OnCheck", ::GlobalNamespace::HowManyMonke*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::HowManyMonke::getStaticF_OnCheck()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "OnCheck", ::GlobalNamespace::HowManyMonke*>();
}
inline void GlobalNamespace::HowManyMonke::setStaticF_recheckDelay(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "recheckDelay", ::GlobalNamespace::HowManyMonke*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::HowManyMonke::getStaticF_recheckDelay()  {
return ::cordl_internals::getStaticField<int32_t, "recheckDelay", ::GlobalNamespace::HowManyMonke*>();
}
inline float_t GlobalNamespace::HowManyMonke::get_RecheckDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"get_RecheckDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::HowManyMonke::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::HowManyMonke::FetchRecheckDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"FetchRecheckDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::HowManyMonke::onTDError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::HowManyMonke::onTD(::StringW  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* GlobalNamespace::HowManyMonke::FetchThisMany()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {"FetchThisMany", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::HowManyMonke::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HowManyMonke* GlobalNamespace::HowManyMonke::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HowManyMonke*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HowManyMonke::HowManyMonke()   {
}
//  Writing Method size for method: ::GlobalNamespace::HowManyMonke_CCUResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonke_CCUResponse::*)()>(&::GlobalNamespace::HowManyMonke_CCUResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c0094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke_CCUResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HowManyMonke_CCUResponse::__cordl_internal_get_CCUTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CCUTotal;
}
constexpr int32_t const& GlobalNamespace::HowManyMonke_CCUResponse::__cordl_internal_get_CCUTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CCUTotal;
}
constexpr void GlobalNamespace::HowManyMonke_CCUResponse::__cordl_internal_set_CCUTotal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CCUTotal = value;
}
constexpr ::StringW& GlobalNamespace::HowManyMonke_CCUResponse::__cordl_internal_get_ErrorMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorMessage;
}
constexpr ::StringW const& GlobalNamespace::HowManyMonke_CCUResponse::__cordl_internal_get_ErrorMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorMessage;
}
constexpr void GlobalNamespace::HowManyMonke_CCUResponse::__cordl_internal_set_ErrorMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorMessage = value;
}
inline void GlobalNamespace::HowManyMonke_CCUResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonke_CCUResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HowManyMonke_CCUResponse* GlobalNamespace::HowManyMonke_CCUResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HowManyMonke_CCUResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HowManyMonke_CCUResponse::HowManyMonke_CCUResponse()   {
}
