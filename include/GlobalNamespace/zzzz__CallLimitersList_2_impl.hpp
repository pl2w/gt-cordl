#pragma once
// IWYU pragma private; include "GlobalNamespace/CallLimitersList_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CallLimitersList_2_def.hpp"
template<typename Titem,typename Tenum>
constexpr ::ArrayW<Titem>& GlobalNamespace::CallLimitersList_2<Titem,Tenum>::__cordl_internal_get_m_callLimiters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_callLimiters;
}
template<typename Titem,typename Tenum>
constexpr ::ArrayW<Titem> const& GlobalNamespace::CallLimitersList_2<Titem,Tenum>::__cordl_internal_get_m_callLimiters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_callLimiters;
}
template<typename Titem,typename Tenum>
constexpr void GlobalNamespace::CallLimitersList_2<Titem,Tenum>::__cordl_internal_set_m_callLimiters(::ArrayW<Titem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_callLimiters = value;
}
template<typename Titem,typename Tenum>
inline void GlobalNamespace::CallLimitersList_2<Titem,Tenum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Titem,typename Tenum>
inline void GlobalNamespace::CallLimitersList_2<Titem,Tenum>::_ctor(::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename Titem,typename Tenum>
inline ::GlobalNamespace::CallLimitersList_2<Titem,Tenum>* GlobalNamespace::CallLimitersList_2<Titem,Tenum>::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(),
                        {"GetCopy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(this, ___internal_method);
}
template<typename Titem,typename Tenum>
inline bool GlobalNamespace::CallLimitersList_2<Titem,Tenum>::IsSpamming(Tenum  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(),
                        {"IsSpamming", {}, {::i2c::type_of<Tenum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
template<typename Titem,typename Tenum>
inline bool GlobalNamespace::CallLimitersList_2<Titem,Tenum>::IsSpamming(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(),
                        {"IsSpamming", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
template<typename Titem,typename Tenum>
inline bool GlobalNamespace::CallLimitersList_2<Titem,Tenum>::IsSpamming(Tenum  index, double_t  serverTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(),
                        {"IsSpamming", {}, {::i2c::type_of<Tenum>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, serverTime);
}
template<typename Titem,typename Tenum>
inline bool GlobalNamespace::CallLimitersList_2<Titem,Tenum>::IsSpamming(int32_t  index, double_t  serverTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(),
                        {"IsSpamming", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, serverTime);
}
template<typename Titem,typename Tenum>
inline void GlobalNamespace::CallLimitersList_2<Titem,Tenum>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename Titem,typename Tenum>
inline ::GlobalNamespace::CallLimitersList_2<Titem,Tenum>* GlobalNamespace::CallLimitersList_2<Titem,Tenum>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>());
}
template<typename Titem,typename Tenum>
inline ::GlobalNamespace::CallLimitersList_2<Titem,Tenum>* GlobalNamespace::CallLimitersList_2<Titem,Tenum>::New_ctor(::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallLimitersList_2<Titem,Tenum>*>(source));
}
// Ctor Parameters []
template<typename Titem,typename Tenum>
constexpr ::GlobalNamespace::CallLimitersList_2<Titem,Tenum>::CallLimitersList_2()   {
}
