#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlayerCounter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPlayerCounter_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerCounter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerCounter::*)()>(&::GlobalNamespace::GorillaPlayerCounter::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5802714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerCounter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerCounter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerCounter::*)()>(&::GlobalNamespace::GorillaPlayerCounter::Update)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x580277c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerCounter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlayerCounter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlayerCounter::*)()>(&::GlobalNamespace::GorillaPlayerCounter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58029d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerCounter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaPlayerCounter::__cordl_internal_get_isRedTeam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRedTeam;
}
constexpr bool const& GlobalNamespace::GorillaPlayerCounter::__cordl_internal_get_isRedTeam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRedTeam;
}
constexpr void GlobalNamespace::GorillaPlayerCounter::__cordl_internal_set_isRedTeam(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRedTeam = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaPlayerCounter::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaPlayerCounter::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::GorillaPlayerCounter::__cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::StringW& GlobalNamespace::GorillaPlayerCounter::__cordl_internal_get_attribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr ::StringW const& GlobalNamespace::GorillaPlayerCounter::__cordl_internal_get_attribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr void GlobalNamespace::GorillaPlayerCounter::__cordl_internal_set_attribute(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attribute = value;
}
inline void GlobalNamespace::GorillaPlayerCounter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerCounter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerCounter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerCounter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlayerCounter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlayerCounter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPlayerCounter* GlobalNamespace::GorillaPlayerCounter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPlayerCounter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPlayerCounter::GorillaPlayerCounter()   {
}
