#pragma once
// IWYU pragma private; include "Fusion/PeerPing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__PeerPing_def.hpp"
#include "Fusion/Protocol/zzzz__ReflexiveInfo_def.hpp"
//  Writing Method size for method: ::Fusion::PeerPing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::PeerPing::*)(::Fusion::Protocol::ReflexiveInfo*)>(&::Fusion::PeerPing::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f7a5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::PeerPing*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::ReflexiveInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::PeerPing.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::PeerPing::*)()>(&::Fusion::PeerPing::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5f7a630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::PeerPing*>(),
                    {::i2c::class_of<::Fusion::PeerPing*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::PeerPing::__cordl_internal_get_AttemptCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttemptCount;
}
constexpr int32_t const& Fusion::PeerPing::__cordl_internal_get_AttemptCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttemptCount;
}
constexpr void Fusion::PeerPing::__cordl_internal_set_AttemptCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttemptCount = value;
}
constexpr float_t& Fusion::PeerPing::__cordl_internal_get_NextAttemptCountDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextAttemptCountDown;
}
constexpr float_t const& Fusion::PeerPing::__cordl_internal_get_NextAttemptCountDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextAttemptCountDown;
}
constexpr void Fusion::PeerPing::__cordl_internal_set_NextAttemptCountDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextAttemptCountDown = value;
}
constexpr ::Fusion::Protocol::ReflexiveInfo*& Fusion::PeerPing::__cordl_internal_get_ReflexiveInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflexiveInfo;
}
constexpr ::Fusion::Protocol::ReflexiveInfo* const& Fusion::PeerPing::__cordl_internal_get_ReflexiveInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflexiveInfo;
}
constexpr void Fusion::PeerPing::__cordl_internal_set_ReflexiveInfo(::Fusion::Protocol::ReflexiveInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReflexiveInfo = value;
}
inline void Fusion::PeerPing::_ctor(::Fusion::Protocol::ReflexiveInfo*  reflexiveInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::PeerPing*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::ReflexiveInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reflexiveInfo);
}
inline ::StringW Fusion::PeerPing::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::PeerPing*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::PeerPing* Fusion::PeerPing::New_ctor(::Fusion::Protocol::ReflexiveInfo*  reflexiveInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::PeerPing*>(reflexiveInfo));
}
// Ctor Parameters []
constexpr ::Fusion::PeerPing::PeerPing()   {
}
