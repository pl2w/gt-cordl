#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipLogCallback.hpp"
#include "GlobalNamespace/zzzz__MothershipLogDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipLogCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipLogLevel_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipLogCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipLogCallback::*)(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*)>(&::GlobalNamespace::MothershipLogCallback::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x53c0c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipLogCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipLogCallback.OnLogCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipLogCallback::*)(::GlobalNamespace::MothershipLogLevel, ::StringW)>(&::GlobalNamespace::MothershipLogCallback::OnLogCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x53c0c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipLogCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipLogCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*& GlobalNamespace::MothershipLogCallback::__cordl_internal_get__logFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logFunction;
}
constexpr ::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>* const& GlobalNamespace::MothershipLogCallback::__cordl_internal_get__logFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logFunction;
}
constexpr void GlobalNamespace::MothershipLogCallback::__cordl_internal_set__logFunction(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logFunction = value;
}
inline void GlobalNamespace::MothershipLogCallback::_ctor(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  logFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipLogCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logFunction);
}
inline void GlobalNamespace::MothershipLogCallback::OnLogCallback(::GlobalNamespace::MothershipLogLevel  level, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipLogCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message);
}
inline ::GlobalNamespace::MothershipLogCallback* GlobalNamespace::MothershipLogCallback::New_ctor(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  logFunction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipLogCallback*>(logFunction));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipLogCallback::MothershipLogCallback()   {
}
