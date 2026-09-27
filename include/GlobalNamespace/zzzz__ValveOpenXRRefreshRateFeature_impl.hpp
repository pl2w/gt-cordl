#pragma once
// IWYU pragma private; include "GlobalNamespace/ValveOpenXRRefreshRateFeature.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "GlobalNamespace/zzzz__ValveOpenXRRefreshRateFeature_def.hpp"
#include "GlobalNamespace/zzzz__OnRefreshRateFeatureAvailableDelegate_def.hpp"
#include "GlobalNamespace/zzzz__ValveOpenXRRefreshRateFeature_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.get_initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)()>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::get_initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb939350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"get_initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.add_OnRefreshRateFeatureAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::add_OnRefreshRateFeatureAvailable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb939358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"add_OnRefreshRateFeatureAvailable", {}, {::i2c::type_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.remove_OnRefreshRateFeatureAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::remove_OnRefreshRateFeatureAvailable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb9393f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"remove_OnRefreshRateFeatureAvailable", {}, {::i2c::type_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.OnInstanceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)(uint64_t)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb939490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.OnSessionBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)(uint64_t)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::OnSessionBegin)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb93951c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.OnSessionDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)(uint64_t)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::OnSessionDestroy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb939a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.OnSessionEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)(uint64_t)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::OnSessionEnd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb939a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.InitializeFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)()>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::InitializeFunctions)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xb93965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"InitializeFunctions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.GetRefreshRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)()>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::GetRefreshRate)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb939ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"GetRefreshRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.SetRefreshRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)(float_t)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::SetRefreshRate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb939c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"SetRefreshRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature.EnumerateRefreshRates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)(::by_ref<::System::Collections::Generic::List_1<float_t>*>)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::EnumerateRefreshRates)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xb939e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"EnumerateRefreshRates", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<float_t>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature::*)()>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93a048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr uint64_t& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_instanceHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceHandle;
}
constexpr uint64_t const& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_instanceHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceHandle;
}
constexpr void GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_set_instanceHandle(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceHandle = value;
}
constexpr uint64_t& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_sessionHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionHandle;
}
constexpr uint64_t const& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_sessionHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionHandle;
}
constexpr void GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_set_sessionHandle(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionHandle = value;
}
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_xrGetInstanceProcAddrDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrGetInstanceProcAddrDelegate;
}
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr* const& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_xrGetInstanceProcAddrDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrGetInstanceProcAddrDelegate;
}
constexpr void GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_set_xrGetInstanceProcAddrDelegate(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrGetInstanceProcAddrDelegate = value;
}
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_xrGetDisplayRefreshRateFB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrGetDisplayRefreshRateFB;
}
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB* const& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_xrGetDisplayRefreshRateFB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrGetDisplayRefreshRateFB;
}
constexpr void GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_set_xrGetDisplayRefreshRateFB(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrGetDisplayRefreshRateFB = value;
}
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_xrRequestDisplayRefreshRateFB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrRequestDisplayRefreshRateFB;
}
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB* const& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_xrRequestDisplayRefreshRateFB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrRequestDisplayRefreshRateFB;
}
constexpr void GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_set_xrRequestDisplayRefreshRateFB(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrRequestDisplayRefreshRateFB = value;
}
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_xrEnumerateDisplayRefreshRatesFB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrEnumerateDisplayRefreshRatesFB;
}
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB* const& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_xrEnumerateDisplayRefreshRatesFB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrEnumerateDisplayRefreshRatesFB;
}
constexpr void GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_set_xrEnumerateDisplayRefreshRatesFB(::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrEnumerateDisplayRefreshRatesFB = value;
}
constexpr ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_OnRefreshRateFeatureAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRefreshRateFeatureAvailable;
}
constexpr ::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate* const& GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_get_OnRefreshRateFeatureAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRefreshRateFeatureAvailable;
}
constexpr void GlobalNamespace::ValveOpenXRRefreshRateFeature::__cordl_internal_set_OnRefreshRateFeatureAvailable(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRefreshRateFeatureAvailable = value;
}
inline bool GlobalNamespace::ValveOpenXRRefreshRateFeature::get_initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"get_initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature::add_OnRefreshRateFeatureAvailable(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"add_OnRefreshRateFeatureAvailable", {}, {::i2c::type_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature::remove_OnRefreshRateFeatureAvailable(::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"remove_OnRefreshRateFeatureAvailable", {}, {::i2c::type_of<::GlobalNamespace::OnRefreshRateFeatureAvailableDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ValveOpenXRRefreshRateFeature::OnInstanceCreate(uint64_t  xrInstance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature::OnSessionBegin(uint64_t  xrSession)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature::OnSessionDestroy(uint64_t  xrSession)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature::OnSessionEnd(uint64_t  xrSession)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature::InitializeFunctions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"InitializeFunctions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::ValveOpenXRRefreshRateFeature::GetRefreshRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"GetRefreshRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature::SetRefreshRate(float_t  refreshrate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"SetRefreshRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, refreshrate);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature::EnumerateRefreshRates(::by_ref<::System::Collections::Generic::List_1<float_t>*>  displayRefreshRates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {"EnumerateRefreshRates", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<float_t>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, displayRefreshRates);
}
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature* GlobalNamespace::ValveOpenXRRefreshRateFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ValveOpenXRRefreshRateFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature::ValveOpenXRRefreshRateFeature()   {
}
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb93a474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::*)(uint64_t, uint32_t, ::by_ref<uint32_t>, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb93a514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::*)(uint64_t, uint32_t, ::by_ref<uint32_t>, ::by_ref<::ArrayW<float_t>>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb93a528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb93a5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::Invoke(uint64_t  session, uint32_t  displayRefreshRateCapacityInput, ::by_ref<uint32_t>  displayRefreshRateCountOutput, ::by_ref<::ArrayW<float_t>>  displayRefreshRates)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, session, displayRefreshRateCapacityInput, displayRefreshRateCountOutput, displayRefreshRates);
}
inline ::System::IAsyncResult* GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::BeginInvoke(uint64_t  session, uint32_t  displayRefreshRateCapacityInput, ::by_ref<uint32_t>  displayRefreshRateCountOutput, ::by_ref<::ArrayW<float_t>>  displayRefreshRates, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, session, displayRefreshRateCapacityInput, displayRefreshRateCountOutput, displayRefreshRates, callback, object);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::EndInvoke(::by_ref<uint32_t>  displayRefreshRateCountOutput, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, displayRefreshRateCountOutput, result);
}
inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB* GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB::ValveOpenXRRefreshRateFeature_Type_xrEnumerateDisplayRefreshRatesFB()   {
}
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb93a31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::*)(uint64_t, float_t)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb93a3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb93a3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::*)(::System::IAsyncResult*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb93a44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::Invoke(uint64_t  session, float_t  displayRefreshRate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, session, displayRefreshRate);
}
inline ::System::IAsyncResult* GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::BeginInvoke(uint64_t  session, float_t  displayRefreshRate, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, session, displayRefreshRate, callback, object);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB* GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB::ValveOpenXRRefreshRateFeature_Type_xrRequestDisplayRefreshRateFB()   {
}
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb93a1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::*)(uint64_t, ::by_ref<float_t>)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb93a260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::*)(uint64_t, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb93a274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::*)(::by_ref<float_t>, ::System::IAsyncResult*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb93a2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::Invoke(uint64_t  session, ::by_ref<float_t>  displayRefreshRate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, session, displayRefreshRate);
}
inline ::System::IAsyncResult* GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::BeginInvoke(uint64_t  session, ::by_ref<float_t>  displayRefreshRate, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, session, displayRefreshRate, callback, object);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::EndInvoke(::by_ref<float_t>  displayRefreshRate, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, displayRefreshRate, result);
}
inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB* GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB::ValveOpenXRRefreshRateFeature_Type_xrGetDisplayRefreshRateFB()   {
}
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb93a058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::*)(uint64_t, ::StringW, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb93a0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::*)(uint64_t, ::StringW, ::by_ref<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb93a10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::*)(::by_ref<::System::IntPtr>, ::System::IAsyncResult*)>(&::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb93a198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(),
                    {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::Invoke(uint64_t  instance, ::StringW  name, ::by_ref<::System::IntPtr>  function)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, instance, name, function);
}
inline ::System::IAsyncResult* GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::BeginInvoke(uint64_t  instance, ::StringW  name, ::by_ref<::System::IntPtr>  function, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, instance, name, function, callback, object);
}
inline int32_t GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::EndInvoke(::by_ref<::System::IntPtr>  function, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, function, result);
}
inline ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr* GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr::ValveOpenXRRefreshRateFeature_Type_xrGetInstanceProcAddr()   {
}
