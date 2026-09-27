#pragma once
// IWYU pragma private; include "GlobalNamespace/TextWatcherTMPro.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextWatcherTMPro_def.hpp"
#include "GlobalNamespace/zzzz__WatchableStringSO_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextWatcherTMPro.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWatcherTMPro::*)()>(&::GlobalNamespace::TextWatcherTMPro::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x598f7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextWatcherTMPro*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWatcherTMPro.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWatcherTMPro::*)()>(&::GlobalNamespace::TextWatcherTMPro::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x598f8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextWatcherTMPro*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWatcherTMPro.OnTextChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWatcherTMPro::*)(::StringW)>(&::GlobalNamespace::TextWatcherTMPro::OnTextChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x598f94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextWatcherTMPro*>(),
                        {"OnTextChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWatcherTMPro._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWatcherTMPro::*)()>(&::GlobalNamespace::TextWatcherTMPro::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598f96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextWatcherTMPro*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::WatchableStringSO>& GlobalNamespace::TextWatcherTMPro::__cordl_internal_get_textToCopy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToCopy;
}
constexpr ::UnityW<::GlobalNamespace::WatchableStringSO> const& GlobalNamespace::TextWatcherTMPro::__cordl_internal_get_textToCopy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textToCopy;
}
constexpr void GlobalNamespace::TextWatcherTMPro::__cordl_internal_set_textToCopy(::UnityW<::GlobalNamespace::WatchableStringSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textToCopy = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::TextWatcherTMPro::__cordl_internal_get_myText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::TextWatcherTMPro::__cordl_internal_get_myText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr void GlobalNamespace::TextWatcherTMPro::__cordl_internal_set_myText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myText = value;
}
inline void GlobalNamespace::TextWatcherTMPro::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextWatcherTMPro*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextWatcherTMPro::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextWatcherTMPro*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextWatcherTMPro::OnTextChanged(::StringW  newText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextWatcherTMPro*>(),
                        {"OnTextChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newText);
}
inline void GlobalNamespace::TextWatcherTMPro::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextWatcherTMPro*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextWatcherTMPro* GlobalNamespace::TextWatcherTMPro::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextWatcherTMPro*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextWatcherTMPro::TextWatcherTMPro()   {
}
