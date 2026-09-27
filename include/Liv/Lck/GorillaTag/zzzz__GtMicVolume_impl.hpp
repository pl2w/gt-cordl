#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtMicVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtMicVolume_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtAudioButton_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtMicVolume.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtMicVolume::*)()>(&::Liv::Lck::GorillaTag::GtMicVolume::Update)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d239ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtMicVolume*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtMicVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtMicVolume::*)()>(&::Liv::Lck::GorillaTag::GtMicVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d23a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtMicVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_get__incomingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incomingVolume;
}
constexpr float_t const& Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_get__incomingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incomingVolume;
}
constexpr void Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_set__incomingVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____incomingVolume = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>& Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_get__audioButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioButton;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton> const& Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_get__audioButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioButton;
}
constexpr void Liv::Lck::GorillaTag::GtMicVolume::__cordl_internal_set__audioButton(::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioButton = value;
}
inline void Liv::Lck::GorillaTag::GtMicVolume::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtMicVolume*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtMicVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtMicVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtMicVolume* Liv::Lck::GorillaTag::GtMicVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtMicVolume*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtMicVolume::GtMicVolume()   {
}
