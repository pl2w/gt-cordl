#pragma once
// IWYU pragma private; include "Liv/Lck/LckQualityConfig.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Liv/Lck/zzzz__LckQualityConfig_def.hpp"
#include "Liv/Lck/zzzz__DeviceModel_def.hpp"
#include "Liv/Lck/zzzz__ILckQualityConfig_def.hpp"
#include "Liv/Lck/zzzz__QualityOptionOverride_def.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckQualityConfig.GetQualityOptionsForSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* (::Liv::Lck::LckQualityConfig::*)()>(&::Liv::Lck::LckQualityConfig::GetQualityOptionsForSystem)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9cf3534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckQualityConfig*>(),
                        {"GetQualityOptionsForSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckQualityConfig.GetCurrentDeviceModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Liv::Lck::DeviceModel> (::Liv::Lck::LckQualityConfig::*)()>(&::Liv::Lck::LckQualityConfig::GetCurrentDeviceModel)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9cf379c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckQualityConfig*>(),
                        {"GetCurrentDeviceModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckQualityConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckQualityConfig::*)()>(&::Liv::Lck::LckQualityConfig::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9cf3908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckQualityConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*& Liv::Lck::LckQualityConfig::__cordl_internal_get_BaseAndroidQualityOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseAndroidQualityOptions;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* const& Liv::Lck::LckQualityConfig::__cordl_internal_get_BaseAndroidQualityOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseAndroidQualityOptions;
}
constexpr void Liv::Lck::LckQualityConfig::__cordl_internal_set_BaseAndroidQualityOptions(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BaseAndroidQualityOptions = value;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOptionOverride>*& Liv::Lck::LckQualityConfig::__cordl_internal_get_AndroidOptionsDeviceOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidOptionsDeviceOverrides;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOptionOverride>* const& Liv::Lck::LckQualityConfig::__cordl_internal_get_AndroidOptionsDeviceOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidOptionsDeviceOverrides;
}
constexpr void Liv::Lck::LckQualityConfig::__cordl_internal_set_AndroidOptionsDeviceOverrides(::System::Collections::Generic::List_1<::Liv::Lck::QualityOptionOverride>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AndroidOptionsDeviceOverrides = value;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*& Liv::Lck::LckQualityConfig::__cordl_internal_get_DesktopQualityOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DesktopQualityOptions;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* const& Liv::Lck::LckQualityConfig::__cordl_internal_get_DesktopQualityOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DesktopQualityOptions;
}
constexpr void Liv::Lck::LckQualityConfig::__cordl_internal_set_DesktopQualityOptions(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DesktopQualityOptions = value;
}
inline ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* Liv::Lck::LckQualityConfig::GetQualityOptionsForSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckQualityConfig*>(),
                        {"GetQualityOptionsForSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*>(this, ___internal_method);
}
inline ::System::Nullable_1<::Liv::Lck::DeviceModel> Liv::Lck::LckQualityConfig::GetCurrentDeviceModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckQualityConfig*>(),
                        {"GetCurrentDeviceModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Liv::Lck::DeviceModel>>(this, ___internal_method);
}
inline void Liv::Lck::LckQualityConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckQualityConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckQualityConfig* Liv::Lck::LckQualityConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckQualityConfig*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckQualityConfig"
constexpr  Liv::Lck::LckQualityConfig::operator ::Liv::Lck::ILckQualityConfig*() noexcept {
return static_cast<::Liv::Lck::ILckQualityConfig*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckQualityConfig"
constexpr ::Liv::Lck::ILckQualityConfig* Liv::Lck::LckQualityConfig::i___Liv__Lck__ILckQualityConfig() noexcept {
return static_cast<::Liv::Lck::ILckQualityConfig*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckQualityConfig::LckQualityConfig()   {
}
