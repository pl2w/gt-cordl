#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreCounter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaScoreCounter_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreCounter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreCounter::*)()>(&::GlobalNamespace::GorillaScoreCounter::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58029e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreCounter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreCounter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreCounter::*)()>(&::GlobalNamespace::GorillaScoreCounter::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5802a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreCounter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaScoreCounter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaScoreCounter::*)()>(&::GlobalNamespace::GorillaScoreCounter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5802bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreCounter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaScoreCounter::__cordl_internal_get_isRedTeam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRedTeam;
}
constexpr bool const& GlobalNamespace::GorillaScoreCounter::__cordl_internal_get_isRedTeam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRedTeam;
}
constexpr void GlobalNamespace::GorillaScoreCounter::__cordl_internal_set_isRedTeam(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRedTeam = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::GorillaScoreCounter::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::GorillaScoreCounter::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::GorillaScoreCounter::__cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::StringW& GlobalNamespace::GorillaScoreCounter::__cordl_internal_get_attribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr ::StringW const& GlobalNamespace::GorillaScoreCounter::__cordl_internal_get_attribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attribute;
}
constexpr void GlobalNamespace::GorillaScoreCounter::__cordl_internal_set_attribute(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attribute = value;
}
inline void GlobalNamespace::GorillaScoreCounter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreCounter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreCounter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreCounter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaScoreCounter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaScoreCounter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaScoreCounter* GlobalNamespace::GorillaScoreCounter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaScoreCounter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaScoreCounter::GorillaScoreCounter()   {
}
