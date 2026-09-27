#pragma once
// IWYU pragma private; include "GlobalNamespace/TitleDataDateRefActivation.hpp"
#include "GlobalNamespace/zzzz__TitleDataDateRefActivation_ReadyState_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TitleDataDateRefActivation_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__TitleDataDateRefActivation_ReadyState_def.hpp"
#include "GlobalNamespace/zzzz__TitleDataDateRefActivation__Initialize_d__8_def.hpp"
#include "GlobalNamespace/zzzz__TitleDataDateRefActivation_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)()>(&::GlobalNamespace::TitleDataDateRefActivation::Initialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b37b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation.onTD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)(::StringW)>(&::GlobalNamespace::TitleDataDateRefActivation::onTD)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5b37bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation.StartNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)(float_t)>(&::GlobalNamespace::TitleDataDateRefActivation::StartNow)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b37ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"StartNow", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation.setStartDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)(::System::DateTime)>(&::GlobalNamespace::TitleDataDateRefActivation::setStartDate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b37d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"setStartDate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation.onTDError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::TitleDataDateRefActivation::onTDError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b38030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)()>(&::GlobalNamespace::TitleDataDateRefActivation::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b380cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)()>(&::GlobalNamespace::TitleDataDateRefActivation::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b380ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation.IGorillaSliceableSimple_SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)()>(&::GlobalNamespace::TitleDataDateRefActivation::IGorillaSliceableSimple_SliceUpdate)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5b380f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation::*)()>(&::GlobalNamespace::TitleDataDateRefActivation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b384d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_titleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr ::StringW const& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_titleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_set_titleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataKey = value;
}
constexpr ::ArrayW<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*> const& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_tmpStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpStatus;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_tmpStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpStatus;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_set_tmpStatus(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tmpStatus = value;
}
constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_readyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyState;
}
constexpr ::GlobalNamespace::TitleDataDateRefActivation_ReadyState const& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_readyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyState;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_set_readyState(::GlobalNamespace::TitleDataDateRefActivation_ReadyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyState = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_nodeList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>* const& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_nodeList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeList;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_set_nodeList(::System::Collections::Generic::List_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeList = value;
}
constexpr int32_t& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_activations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activations;
}
constexpr int32_t const& GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_get_activations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activations;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation::__cordl_internal_set_activations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activations = value;
}
inline void GlobalNamespace::TitleDataDateRefActivation::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TitleDataDateRefActivation::onTD(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"onTD", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void GlobalNamespace::TitleDataDateRefActivation::StartNow(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"StartNow", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void GlobalNamespace::TitleDataDateRefActivation::setStartDate(::System::DateTime  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"setStartDate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void GlobalNamespace::TitleDataDateRefActivation::onTDError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"onTDError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::TitleDataDateRefActivation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TitleDataDateRefActivation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TitleDataDateRefActivation::IGorillaSliceableSimple_SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {"IGorillaSliceableSimple.SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TitleDataDateRefActivation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TitleDataDateRefActivation* GlobalNamespace::TitleDataDateRefActivation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TitleDataDateRefActivation*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::TitleDataDateRefActivation::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::TitleDataDateRefActivation::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TitleDataDateRefActivation::TitleDataDateRefActivation()   {
}
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget.get_GameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::*)()>(&::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::get_GameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3855c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"get_GameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget.get_ActivationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::*)()>(&::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::get_ActivationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b38564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"get_ActivationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::*)(::System::DateTime)>(&::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::Initialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b37f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::*)(::System::DateTime)>(&::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::Activate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b3841c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"Activate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::*)()>(&::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::Activate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b38648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"Activate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::*)(float_t)>(&::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::Activate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b3856c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"Activate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget.System_IComparable_TitleDataDateRefActivation_TitleDataDateRefActivationTarget__CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::*)(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*)>(&::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::System_IComparable_TitleDataDateRefActivation_TitleDataDateRefActivationTarget__CompareTo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b38650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"System.IComparable<TitleDataDateRefActivation.TitleDataDateRefActivationTarget>.CompareTo", {}, {::i2c::type_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::*)()>(&::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b386a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_activationState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationState;
}
constexpr bool const& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_activationState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationState;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_set_activationState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationState = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr int32_t& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_hrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hrs;
}
constexpr int32_t const& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_hrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hrs;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_set_hrs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hrs = value;
}
constexpr int32_t& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr int32_t const& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_set_min(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr int32_t& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_sec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sec;
}
constexpr int32_t const& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_sec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sec;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_set_sec(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sec = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_set_payload(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___payload = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_persistantPayload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistantPayload;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_persistantPayload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistantPayload;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_set_persistantPayload(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistantPayload = value;
}
constexpr ::System::DateTime& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_dateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTime;
}
constexpr ::System::DateTime const& GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_get_dateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dateTime;
}
constexpr void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::__cordl_internal_set_dateTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dateTime = value;
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::get_GameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"get_GameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::System::DateTime GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::get_ActivationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"get_ActivationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::Initialize(::System::DateTime  refTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refTime);
}
inline void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::Activate(::System::DateTime  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"Activate", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, now);
}
inline void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::Activate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"Activate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::Activate(float_t  late)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"Activate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, late);
}
inline int32_t GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::System_IComparable_TitleDataDateRefActivation_TitleDataDateRefActivationTarget__CompareTo(::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {"System.IComparable<TitleDataDateRefActivation.TitleDataDateRefActivationTarget>.CompareTo", {}, {::i2c::type_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline void GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget* GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>());
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>"
constexpr  GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::operator ::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>"
constexpr ::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>* GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::i___System__IComparable_1___GlobalNamespace__TitleDataDateRefActivation_TitleDataDateRefActivationTarget__() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TitleDataDateRefActivation_TitleDataDateRefActivationTarget::TitleDataDateRefActivation_TitleDataDateRefActivationTarget()   {
}
