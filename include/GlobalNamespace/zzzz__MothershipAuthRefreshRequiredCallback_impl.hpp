#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAuthRefreshRequiredCallback.hpp"
#include "GlobalNamespace/zzzz__AuthRefreshRequiredDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipAuthRefreshRequiredCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthRefreshRequiredCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthRefreshRequiredCallback::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MothershipAuthRefreshRequiredCallback::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x53b9044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipAuthRefreshRequiredCallback.AuthRefreshRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipAuthRefreshRequiredCallback::*)(::StringW)>(&::GlobalNamespace::MothershipAuthRefreshRequiredCallback::AuthRefreshRequired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x53b90bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MothershipAuthRefreshRequiredCallback::__cordl_internal_get__authRefreshFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authRefreshFunction;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MothershipAuthRefreshRequiredCallback::__cordl_internal_get__authRefreshFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authRefreshFunction;
}
constexpr void GlobalNamespace::MothershipAuthRefreshRequiredCallback::__cordl_internal_set__authRefreshFunction(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____authRefreshFunction = value;
}
inline void GlobalNamespace::MothershipAuthRefreshRequiredCallback::_ctor(::System::Action_1<::StringW>*  authRefreshFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authRefreshFunction);
}
inline void GlobalNamespace::MothershipAuthRefreshRequiredCallback::AuthRefreshRequired(::StringW  arg0)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0);
}
inline ::GlobalNamespace::MothershipAuthRefreshRequiredCallback* GlobalNamespace::MothershipAuthRefreshRequiredCallback::New_ctor(::System::Action_1<::StringW>*  authRefreshFunction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*>(authRefreshFunction));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipAuthRefreshRequiredCallback::MothershipAuthRefreshRequiredCallback()   {
}
