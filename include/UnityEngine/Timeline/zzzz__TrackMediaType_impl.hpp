#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackMediaType.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_MediaType_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackMediaType_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_MediaType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackMediaType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackMediaType::*)(::GlobalNamespace::TimelineAsset_MediaType)>(&::UnityEngine::Timeline::TrackMediaType::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb3cddf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::TrackMediaType*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TimelineAsset_MediaType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TimelineAsset_MediaType& UnityEngine::Timeline::TrackMediaType::__cordl_internal_get_m_MediaType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MediaType;
}
constexpr ::GlobalNamespace::TimelineAsset_MediaType const& UnityEngine::Timeline::TrackMediaType::__cordl_internal_get_m_MediaType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MediaType;
}
constexpr void UnityEngine::Timeline::TrackMediaType::__cordl_internal_set_m_MediaType(::GlobalNamespace::TimelineAsset_MediaType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MediaType = value;
}
inline void UnityEngine::Timeline::TrackMediaType::_ctor(::GlobalNamespace::TimelineAsset_MediaType  mt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::TrackMediaType*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TimelineAsset_MediaType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mt);
}
inline ::UnityEngine::Timeline::TrackMediaType* UnityEngine::Timeline::TrackMediaType::New_ctor(::GlobalNamespace::TimelineAsset_MediaType  mt)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TrackMediaType*>(mt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackMediaType::TrackMediaType()   {
}
