#pragma once
// IWYU pragma private; include "GlobalNamespace/ReleaseCageWhenUpsideDown.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReleaseCageWhenUpsideDown_def.hpp"
#include "GlobalNamespace/zzzz__CrittersCage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReleaseCageWhenUpsideDown.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReleaseCageWhenUpsideDown::*)()>(&::GlobalNamespace::ReleaseCageWhenUpsideDown::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56fcf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseCageWhenUpsideDown*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReleaseCageWhenUpsideDown.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReleaseCageWhenUpsideDown::*)()>(&::GlobalNamespace::ReleaseCageWhenUpsideDown::Update)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x56fcfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseCageWhenUpsideDown*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReleaseCageWhenUpsideDown._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReleaseCageWhenUpsideDown::*)()>(&::GlobalNamespace::ReleaseCageWhenUpsideDown::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56fd144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseCageWhenUpsideDown*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrittersCage>& GlobalNamespace::ReleaseCageWhenUpsideDown::__cordl_internal_get_cage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cage;
}
constexpr ::UnityW<::GlobalNamespace::CrittersCage> const& GlobalNamespace::ReleaseCageWhenUpsideDown::__cordl_internal_get_cage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cage;
}
constexpr void GlobalNamespace::ReleaseCageWhenUpsideDown::__cordl_internal_set_cage(::UnityW<::GlobalNamespace::CrittersCage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cage = value;
}
constexpr float_t& GlobalNamespace::ReleaseCageWhenUpsideDown::__cordl_internal_get_releaseCritterThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseCritterThreshold;
}
constexpr float_t const& GlobalNamespace::ReleaseCageWhenUpsideDown::__cordl_internal_get_releaseCritterThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseCritterThreshold;
}
constexpr void GlobalNamespace::ReleaseCageWhenUpsideDown::__cordl_internal_set_releaseCritterThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseCritterThreshold = value;
}
inline void GlobalNamespace::ReleaseCageWhenUpsideDown::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseCageWhenUpsideDown*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReleaseCageWhenUpsideDown::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseCageWhenUpsideDown*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ReleaseCageWhenUpsideDown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReleaseCageWhenUpsideDown*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReleaseCageWhenUpsideDown* GlobalNamespace::ReleaseCageWhenUpsideDown::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReleaseCageWhenUpsideDown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReleaseCageWhenUpsideDown::ReleaseCageWhenUpsideDown()   {
}
