#pragma once
// IWYU pragma private; include "GorillaTag/ExpectedUsersDecayTimer.hpp"
#include "GorillaTag/zzzz__TickSystemTimerAbstract_impl.hpp"
#include "GorillaTag/zzzz__ExpectedUsersDecayTimer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GorillaTag::ExpectedUsersDecayTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ExpectedUsersDecayTimer::*)()>(&::GorillaTag::ExpectedUsersDecayTimer::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d36418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ExpectedUsersDecayTimer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ExpectedUsersDecayTimer.OnTimedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ExpectedUsersDecayTimer::*)()>(&::GorillaTag::ExpectedUsersDecayTimer::OnTimedEvent)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5d364bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ExpectedUsersDecayTimer*>(),
                    {::i2c::class_of<::GorillaTag::ExpectedUsersDecayTimer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ExpectedUsersDecayTimer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ExpectedUsersDecayTimer::*)()>(&::GorillaTag::ExpectedUsersDecayTimer::Stop)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d36760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ExpectedUsersDecayTimer*>(),
                    {::i2c::class_of<::GorillaTag::ExpectedUsersDecayTimer*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::ExpectedUsersDecayTimer::__cordl_internal_get_decayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decayTime;
}
constexpr float_t const& GorillaTag::ExpectedUsersDecayTimer::__cordl_internal_get_decayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decayTime;
}
constexpr void GorillaTag::ExpectedUsersDecayTimer::__cordl_internal_set_decayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decayTime = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,float_t>*& GorillaTag::ExpectedUsersDecayTimer::__cordl_internal_get_expectedUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedUsers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,float_t>* const& GorillaTag::ExpectedUsersDecayTimer::__cordl_internal_get_expectedUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedUsers;
}
constexpr void GorillaTag::ExpectedUsersDecayTimer::__cordl_internal_set_expectedUsers(::System::Collections::Generic::Dictionary_2<::StringW,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expectedUsers = value;
}
inline void GorillaTag::ExpectedUsersDecayTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ExpectedUsersDecayTimer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ExpectedUsersDecayTimer::OnTimedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ExpectedUsersDecayTimer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ExpectedUsersDecayTimer::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ExpectedUsersDecayTimer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::ExpectedUsersDecayTimer* GorillaTag::ExpectedUsersDecayTimer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ExpectedUsersDecayTimer*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::ExpectedUsersDecayTimer::ExpectedUsersDecayTimer()   {
}
