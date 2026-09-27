#pragma once
// IWYU pragma private; include "GlobalNamespace/WardrobeInstance.hpp"
#include "GlobalNamespace/zzzz__WardrobeItemButton_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WardrobeInstance_def.hpp"
#include "GlobalNamespace/zzzz__HeadModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WardrobeInstance.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeInstance::*)()>(&::GlobalNamespace::WardrobeInstance::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x578935c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeInstance*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeInstance.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeInstance::*)()>(&::GlobalNamespace::WardrobeInstance::OnDestroy)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x57893d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeInstance*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WardrobeInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WardrobeInstance::*)()>(&::GlobalNamespace::WardrobeInstance::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5789444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::WardrobeItemButton>>& GlobalNamespace::WardrobeInstance::__cordl_internal_get_wardrobeItemButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wardrobeItemButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::WardrobeItemButton>> const& GlobalNamespace::WardrobeInstance::__cordl_internal_get_wardrobeItemButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wardrobeItemButtons;
}
constexpr void GlobalNamespace::WardrobeInstance::__cordl_internal_set_wardrobeItemButtons(::ArrayW<::UnityW<::GlobalNamespace::WardrobeItemButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wardrobeItemButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel>& GlobalNamespace::WardrobeInstance::__cordl_internal_get_selfDoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selfDoll;
}
constexpr ::UnityW<::GlobalNamespace::HeadModel> const& GlobalNamespace::WardrobeInstance::__cordl_internal_get_selfDoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selfDoll;
}
constexpr void GlobalNamespace::WardrobeInstance::__cordl_internal_set_selfDoll(::UnityW<::GlobalNamespace::HeadModel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selfDoll = value;
}
inline void GlobalNamespace::WardrobeInstance::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeInstance*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WardrobeInstance::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeInstance*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WardrobeInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WardrobeInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WardrobeInstance* GlobalNamespace::WardrobeInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WardrobeInstance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WardrobeInstance::WardrobeInstance()   {
}
