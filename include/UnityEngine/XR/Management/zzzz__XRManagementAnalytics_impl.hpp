#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRManagementAnalytics.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_BuildEvent_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/Analytics/zzzz__IAnalytic_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_BuildEvent_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Management::XRManagementAnalytics.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::Management::XRManagementAnalytics::Initialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4df444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRManagementAnalytics*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Management::XRManagementAnalytics::setStaticF_s_Initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "s_Initialized", ::UnityEngine::XR::Management::XRManagementAnalytics*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::Management::XRManagementAnalytics::getStaticF_s_Initialized()  {
return ::cordl_internals::getStaticField<bool, "s_Initialized", ::UnityEngine::XR::Management::XRManagementAnalytics*>();
}
inline bool UnityEngine::XR::Management::XRManagementAnalytics::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRManagementAnalytics*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRManagementAnalytics::XRManagementAnalytics()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::*)(::GlobalNamespace::XRManagementAnalytics_BuildEvent)>(&::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4df48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::XRManagementAnalytics_BuildEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic.TryGatherData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::*)(::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>, ::by_ref<::System::Exception*>)>(&::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::TryGatherData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4df52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic*>(),
                        {"TryGatherData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::GlobalNamespace::XRManagementAnalytics_BuildEvent>& UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Nullable_1<::GlobalNamespace::XRManagementAnalytics_BuildEvent> const& UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::__cordl_internal_set_data(::System::Nullable_1<::GlobalNamespace::XRManagementAnalytics_BuildEvent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::_ctor(::GlobalNamespace::XRManagementAnalytics_BuildEvent  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::XRManagementAnalytics_BuildEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::TryGatherData(::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>  data, /* [NotNullWhen(false)] */ ::by_ref<::System::Exception*>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic*>(),
                        {"TryGatherData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, error);
}
inline ::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic* UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::New_ctor(::GlobalNamespace::XRManagementAnalytics_BuildEvent  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic*>(data));
}
/// @brief Convert operator to "::UnityEngine::Analytics::IAnalytic"
constexpr  UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::operator ::UnityEngine::Analytics::IAnalytic*() noexcept {
return static_cast<::UnityEngine::Analytics::IAnalytic*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Analytics::IAnalytic"
constexpr ::UnityEngine::Analytics::IAnalytic* UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::i___UnityEngine__Analytics__IAnalytic() noexcept {
return static_cast<::UnityEngine::Analytics::IAnalytic*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic::XRManagementAnalytics_XrInitializeAnalytic()   {
}
