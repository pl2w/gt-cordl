#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersAttachPoint.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_def.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersAttachPoint.ProcessRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersAttachPoint::*)()>(&::GlobalNamespace::CrittersAttachPoint::ProcessRemote)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55fb5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersAttachPoint*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersAttachPoint*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersAttachPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersAttachPoint::*)()>(&::GlobalNamespace::CrittersAttachPoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55fb5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAttachPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CrittersAttachPoint::__cordl_internal_get_fixedOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedOrientation;
}
constexpr bool const& GlobalNamespace::CrittersAttachPoint::__cordl_internal_get_fixedOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixedOrientation;
}
constexpr void GlobalNamespace::CrittersAttachPoint::__cordl_internal_set_fixedOrientation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixedOrientation = value;
}
constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes& GlobalNamespace::CrittersAttachPoint::__cordl_internal_get_anchorLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorLocation;
}
constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes const& GlobalNamespace::CrittersAttachPoint::__cordl_internal_get_anchorLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorLocation;
}
constexpr void GlobalNamespace::CrittersAttachPoint::__cordl_internal_set_anchorLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorLocation = value;
}
constexpr bool& GlobalNamespace::CrittersAttachPoint::__cordl_internal_get_isLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr bool const& GlobalNamespace::CrittersAttachPoint::__cordl_internal_get_isLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr void GlobalNamespace::CrittersAttachPoint::__cordl_internal_set_isLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeft = value;
}
inline void GlobalNamespace::CrittersAttachPoint::ProcessRemote()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersAttachPoint*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersAttachPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersAttachPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersAttachPoint* GlobalNamespace::CrittersAttachPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersAttachPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersAttachPoint::CrittersAttachPoint()   {
}
