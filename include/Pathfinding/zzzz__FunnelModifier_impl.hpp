#pragma once
// IWYU pragma private; include "Pathfinding/FunnelModifier.hpp"
#include "Pathfinding/zzzz__MonoModifier_impl.hpp"
#include "Pathfinding/zzzz__FunnelModifier_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
//  Writing Method size for method: ::Pathfinding::FunnelModifier.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::FunnelModifier::*)()>(&::Pathfinding::FunnelModifier::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea0c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FunnelModifier*>(),
                    {::i2c::class_of<::Pathfinding::FunnelModifier*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FunnelModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FunnelModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::FunnelModifier::Apply)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5ea0c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::FunnelModifier*>(),
                    {::i2c::class_of<::Pathfinding::FunnelModifier*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FunnelModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FunnelModifier::*)()>(&::Pathfinding::FunnelModifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ea106c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FunnelModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::FunnelModifier::__cordl_internal_get_unwrap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unwrap;
}
constexpr bool const& Pathfinding::FunnelModifier::__cordl_internal_get_unwrap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unwrap;
}
constexpr void Pathfinding::FunnelModifier::__cordl_internal_set_unwrap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unwrap = value;
}
constexpr bool& Pathfinding::FunnelModifier::__cordl_internal_get_splitAtEveryPortal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAtEveryPortal;
}
constexpr bool const& Pathfinding::FunnelModifier::__cordl_internal_get_splitAtEveryPortal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitAtEveryPortal;
}
constexpr void Pathfinding::FunnelModifier::__cordl_internal_set_splitAtEveryPortal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitAtEveryPortal = value;
}
inline int32_t Pathfinding::FunnelModifier::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FunnelModifier*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::FunnelModifier::Apply(::Pathfinding::Path*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::FunnelModifier*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Pathfinding::FunnelModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FunnelModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::FunnelModifier* Pathfinding::FunnelModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::FunnelModifier*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::FunnelModifier::FunnelModifier()   {
}
