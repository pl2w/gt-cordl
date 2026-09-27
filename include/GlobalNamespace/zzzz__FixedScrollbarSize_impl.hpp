#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedScrollbarSize.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FixedScrollbarSize_def.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedScrollbarSize.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedScrollbarSize::*)()>(&::GlobalNamespace::FixedScrollbarSize::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57059bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedScrollbarSize*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedScrollbarSize.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedScrollbarSize::*)()>(&::GlobalNamespace::FixedScrollbarSize::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5705b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedScrollbarSize*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedScrollbarSize.EnforceScrollbarSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedScrollbarSize::*)()>(&::GlobalNamespace::FixedScrollbarSize::EnforceScrollbarSize)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5705a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedScrollbarSize*>(),
                        {"EnforceScrollbarSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedScrollbarSize._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FixedScrollbarSize::*)()>(&::GlobalNamespace::FixedScrollbarSize::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5705bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedScrollbarSize*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& GlobalNamespace::FixedScrollbarSize::__cordl_internal_get_ScrollRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollRect;
}
constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& GlobalNamespace::FixedScrollbarSize::__cordl_internal_get_ScrollRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScrollRect;
}
constexpr void GlobalNamespace::FixedScrollbarSize::__cordl_internal_set_ScrollRect(::UnityW<::UnityEngine::UI::ScrollRect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScrollRect = value;
}
constexpr float_t& GlobalNamespace::FixedScrollbarSize::__cordl_internal_get_HorizontalBarSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalBarSize;
}
constexpr float_t const& GlobalNamespace::FixedScrollbarSize::__cordl_internal_get_HorizontalBarSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalBarSize;
}
constexpr void GlobalNamespace::FixedScrollbarSize::__cordl_internal_set_HorizontalBarSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HorizontalBarSize = value;
}
constexpr float_t& GlobalNamespace::FixedScrollbarSize::__cordl_internal_get_VerticalBarSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalBarSize;
}
constexpr float_t const& GlobalNamespace::FixedScrollbarSize::__cordl_internal_get_VerticalBarSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalBarSize;
}
constexpr void GlobalNamespace::FixedScrollbarSize::__cordl_internal_set_VerticalBarSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerticalBarSize = value;
}
inline void GlobalNamespace::FixedScrollbarSize::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedScrollbarSize*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FixedScrollbarSize::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedScrollbarSize*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FixedScrollbarSize::EnforceScrollbarSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedScrollbarSize*>(),
                        {"EnforceScrollbarSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FixedScrollbarSize::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FixedScrollbarSize*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FixedScrollbarSize* GlobalNamespace::FixedScrollbarSize::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FixedScrollbarSize*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FixedScrollbarSize::FixedScrollbarSize()   {
}
