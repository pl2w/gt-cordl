#pragma once
// IWYU pragma private; include "GlobalNamespace/CreatorCodeSmallDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CreatorCodeSmallDisplay_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeSmallDisplay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreatorCodeSmallDisplay::*)()>(&::GlobalNamespace::CreatorCodeSmallDisplay::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x577ec2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeSmallDisplay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeSmallDisplay.SetCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreatorCodeSmallDisplay::*)(::StringW)>(&::GlobalNamespace::CreatorCodeSmallDisplay::SetCode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x577c878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeSmallDisplay*>(),
                        {"SetCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeSmallDisplay.SuccessfulPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreatorCodeSmallDisplay::*)(::StringW)>(&::GlobalNamespace::CreatorCodeSmallDisplay::SuccessfulPurchase)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x577db14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeSmallDisplay*>(),
                        {"SuccessfulPurchase", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodeSmallDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreatorCodeSmallDisplay::*)()>(&::GlobalNamespace::CreatorCodeSmallDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x577ed2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeSmallDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::CreatorCodeSmallDisplay::__cordl_internal_get_codeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::CreatorCodeSmallDisplay::__cordl_internal_get_codeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeText;
}
constexpr void GlobalNamespace::CreatorCodeSmallDisplay::__cordl_internal_set_codeText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___codeText = value;
}
inline void GlobalNamespace::CreatorCodeSmallDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeSmallDisplay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreatorCodeSmallDisplay::SetCode(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeSmallDisplay*>(),
                        {"SetCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void GlobalNamespace::CreatorCodeSmallDisplay::SuccessfulPurchase(::StringW  memberName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeSmallDisplay*>(),
                        {"SuccessfulPurchase", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberName);
}
inline void GlobalNamespace::CreatorCodeSmallDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodeSmallDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreatorCodeSmallDisplay* GlobalNamespace::CreatorCodeSmallDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreatorCodeSmallDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreatorCodeSmallDisplay::CreatorCodeSmallDisplay()   {
}
