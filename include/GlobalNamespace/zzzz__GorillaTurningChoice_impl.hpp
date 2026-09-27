#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTurningChoice.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTurningChoice_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTurning_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTurningChoice.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurningChoice::*)()>(&::GlobalNamespace::GorillaTurningChoice::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59470d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTurningChoice*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTurningChoice*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTurningChoice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTurningChoice::*)()>(&::GlobalNamespace::GorillaTurningChoice::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59470dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurningChoice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GorillaTurningChoice::__cordl_internal_get_choiceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___choiceName;
}
constexpr ::StringW const& GlobalNamespace::GorillaTurningChoice::__cordl_internal_get_choiceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___choiceName;
}
constexpr void GlobalNamespace::GorillaTurningChoice::__cordl_internal_set_choiceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___choiceName = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTurning>& GlobalNamespace::GorillaTurningChoice::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTurning> const& GlobalNamespace::GorillaTurningChoice::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GlobalNamespace::GorillaTurningChoice::__cordl_internal_set_parent(::UnityW<::GlobalNamespace::GorillaTurning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
inline void GlobalNamespace::GorillaTurningChoice::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTurningChoice*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTurningChoice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTurningChoice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTurningChoice* GlobalNamespace::GorillaTurningChoice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTurningChoice*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTurningChoice::GorillaTurningChoice()   {
}
