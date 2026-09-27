#pragma once
// IWYU pragma private; include "GlobalNamespace/SubscriptionStation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SubscriptionStation_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SubscriptionStation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionStation::*)()>(&::GlobalNamespace::SubscriptionStation::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5b21dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionStation.UpdateScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionStation::*)()>(&::GlobalNamespace::SubscriptionStation::UpdateScreen)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x5b21f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"UpdateScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionStation.ToggleSubscriptionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionStation::*)()>(&::GlobalNamespace::SubscriptionStation::ToggleSubscriptionStatus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b223bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"ToggleSubscriptionStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionStation.ToggleSubsOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionStation::*)()>(&::GlobalNamespace::SubscriptionStation::ToggleSubsOnly)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b22418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"ToggleSubsOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionStation.ToggleSubsDecoration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionStation::*)()>(&::GlobalNamespace::SubscriptionStation::ToggleSubsDecoration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b22484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"ToggleSubsDecoration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubscriptionStation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubscriptionStation::*)()>(&::GlobalNamespace::SubscriptionStation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b22488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::SubscriptionStation::__cordl_internal_get_screenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::SubscriptionStation::__cordl_internal_get_screenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr void GlobalNamespace::SubscriptionStation::__cordl_internal_set_screenText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenText = value;
}
constexpr ::StringW& GlobalNamespace::SubscriptionStation::__cordl_internal_get_formatString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formatString;
}
constexpr ::StringW const& GlobalNamespace::SubscriptionStation::__cordl_internal_get_formatString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formatString;
}
constexpr void GlobalNamespace::SubscriptionStation::__cordl_internal_set_formatString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formatString = value;
}
inline void GlobalNamespace::SubscriptionStation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionStation::UpdateScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"UpdateScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionStation::ToggleSubscriptionStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"ToggleSubscriptionStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionStation::ToggleSubsOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"ToggleSubsOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionStation::ToggleSubsDecoration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {"ToggleSubsDecoration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SubscriptionStation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SubscriptionStation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionStation* GlobalNamespace::SubscriptionStation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubscriptionStation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionStation::SubscriptionStation()   {
}
