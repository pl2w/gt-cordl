#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundIdRemapping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SoundIdRemapping_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundIdRemapping.get_SoundIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SoundIdRemapping::*)()>(&::GlobalNamespace::SoundIdRemapping::get_SoundIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ef2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundIdRemapping*>(),
                        {"get_SoundIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundIdRemapping.get_SoundOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SoundIdRemapping::*)()>(&::GlobalNamespace::SoundIdRemapping::get_SoundOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ef2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundIdRemapping*>(),
                        {"get_SoundOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundIdRemapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundIdRemapping::*)()>(&::GlobalNamespace::SoundIdRemapping::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55ef2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundIdRemapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SoundIdRemapping::__cordl_internal_get_soundIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundIn;
}
constexpr int32_t const& GlobalNamespace::SoundIdRemapping::__cordl_internal_get_soundIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundIn;
}
constexpr void GlobalNamespace::SoundIdRemapping::__cordl_internal_set_soundIn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundIn = value;
}
constexpr int32_t& GlobalNamespace::SoundIdRemapping::__cordl_internal_get_soundOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundOut;
}
constexpr int32_t const& GlobalNamespace::SoundIdRemapping::__cordl_internal_get_soundOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundOut;
}
constexpr void GlobalNamespace::SoundIdRemapping::__cordl_internal_set_soundOut(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundOut = value;
}
inline int32_t GlobalNamespace::SoundIdRemapping::get_SoundIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundIdRemapping*>(),
                        {"get_SoundIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SoundIdRemapping::get_SoundOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundIdRemapping*>(),
                        {"get_SoundOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundIdRemapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundIdRemapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundIdRemapping* GlobalNamespace::SoundIdRemapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundIdRemapping*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundIdRemapping::SoundIdRemapping()   {
}
