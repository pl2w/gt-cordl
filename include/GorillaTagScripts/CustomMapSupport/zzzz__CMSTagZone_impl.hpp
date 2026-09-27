#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSTagZone.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTagZone_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTagZone.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTagZone::*)(double_t, bool, bool)>(&::GorillaTagScripts::CustomMapSupport::CMSTagZone::Trigger)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bdc9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTagZone*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTagZone*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTagZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTagZone::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSTagZone::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bdca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTagZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::CustomMapSupport::CMSTagZone::Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTagZone*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerTime, originatedLocally, ignoreTriggerCount);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTagZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTagZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSTagZone* GorillaTagScripts::CustomMapSupport::CMSTagZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSTagZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSTagZone::CMSTagZone()   {
}
