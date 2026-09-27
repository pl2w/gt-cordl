#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOEReceiver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOEReceiver_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOEContextEvent_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__AOEReceiver_AOEContext_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOEReceiver.ReceiveAOE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOEReceiver::*)(::by_ref<::GlobalNamespace::AOEReceiver_AOEContext>)>(&::GorillaTag::Cosmetics::AOEReceiver::ReceiveAOE)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d6d714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOEReceiver*>(),
                        {"ReceiveAOE", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AOEReceiver_AOEContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::AOEReceiver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::AOEReceiver::*)()>(&::GorillaTag::Cosmetics::AOEReceiver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d6d78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOEReceiver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::Cosmetics::AOEContextEvent*& GorillaTag::Cosmetics::AOEReceiver::__cordl_internal_get_OnAOEReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAOEReceived;
}
constexpr ::GorillaTag::Cosmetics::AOEContextEvent* const& GorillaTag::Cosmetics::AOEReceiver::__cordl_internal_get_OnAOEReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAOEReceived;
}
constexpr void GorillaTag::Cosmetics::AOEReceiver::__cordl_internal_set_OnAOEReceived(::GorillaTag::Cosmetics::AOEContextEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAOEReceived = value;
}
constexpr bool& GorillaTag::Cosmetics::AOEReceiver::__cordl_internal_get_enabledForAOE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledForAOE;
}
constexpr bool const& GorillaTag::Cosmetics::AOEReceiver::__cordl_internal_get_enabledForAOE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledForAOE;
}
constexpr void GorillaTag::Cosmetics::AOEReceiver::__cordl_internal_set_enabledForAOE(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabledForAOE = value;
}
inline void GorillaTag::Cosmetics::AOEReceiver::ReceiveAOE(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::AOEReceiver_AOEContext>  AOEContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOEReceiver*>(),
                        {"ReceiveAOE", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AOEReceiver_AOEContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, AOEContext);
}
inline void GorillaTag::Cosmetics::AOEReceiver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::AOEReceiver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::AOEReceiver* GorillaTag::Cosmetics::AOEReceiver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::AOEReceiver*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::AOEReceiver::AOEReceiver()   {
}
