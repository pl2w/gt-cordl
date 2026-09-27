#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTriggerBoxGameFlag.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBoxGameFlag_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxGameFlag.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxGameFlag::*)()>(&::GlobalNamespace::GorillaTriggerBoxGameFlag::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x579dee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxGameFlag*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxGameFlag*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTriggerBoxGameFlag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTriggerBoxGameFlag::*)()>(&::GlobalNamespace::GorillaTriggerBoxGameFlag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxGameFlag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTriggerBoxGameFlag::__cordl_internal_get_functionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionName;
}
constexpr ::StringW const& GlobalNamespace::GorillaTriggerBoxGameFlag::__cordl_internal_get_functionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionName;
}
constexpr void GlobalNamespace::GorillaTriggerBoxGameFlag::__cordl_internal_set_functionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___functionName = value;
}
inline void GlobalNamespace::GorillaTriggerBoxGameFlag::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxGameFlag*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTriggerBoxGameFlag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTriggerBoxGameFlag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTriggerBoxGameFlag* GlobalNamespace::GorillaTriggerBoxGameFlag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTriggerBoxGameFlag*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTriggerBoxGameFlag::GorillaTriggerBoxGameFlag()   {
}
