#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeLayerMask.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SizeLayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SizeLayerMask.get_Mask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SizeLayerMask::*)()>(&::GlobalNamespace::SizeLayerMask::get_Mask)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x595d7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerMask*>(),
                        {"get_Mask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeLayerMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeLayerMask::*)()>(&::GlobalNamespace::SizeLayerMask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x595d950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SizeLayerMask::__cordl_internal_get_affectLayerA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerA;
}
constexpr bool const& GlobalNamespace::SizeLayerMask::__cordl_internal_get_affectLayerA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerA;
}
constexpr void GlobalNamespace::SizeLayerMask::__cordl_internal_set_affectLayerA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerA = value;
}
constexpr bool& GlobalNamespace::SizeLayerMask::__cordl_internal_get_affectLayerB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerB;
}
constexpr bool const& GlobalNamespace::SizeLayerMask::__cordl_internal_get_affectLayerB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerB;
}
constexpr void GlobalNamespace::SizeLayerMask::__cordl_internal_set_affectLayerB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerB = value;
}
constexpr bool& GlobalNamespace::SizeLayerMask::__cordl_internal_get_affectLayerC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerC;
}
constexpr bool const& GlobalNamespace::SizeLayerMask::__cordl_internal_get_affectLayerC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerC;
}
constexpr void GlobalNamespace::SizeLayerMask::__cordl_internal_set_affectLayerC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerC = value;
}
constexpr bool& GlobalNamespace::SizeLayerMask::__cordl_internal_get_affectLayerD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerD;
}
constexpr bool const& GlobalNamespace::SizeLayerMask::__cordl_internal_get_affectLayerD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectLayerD;
}
constexpr void GlobalNamespace::SizeLayerMask::__cordl_internal_set_affectLayerD(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectLayerD = value;
}
inline int32_t GlobalNamespace::SizeLayerMask::get_Mask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerMask*>(),
                        {"get_Mask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SizeLayerMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeLayerMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SizeLayerMask* GlobalNamespace::SizeLayerMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SizeLayerMask*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SizeLayerMask::SizeLayerMask()   {
}
