#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKMicVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKMicVolume_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKMicVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKMicVolume::*)()>(&::Liv::Lck::Tablet::LCKMicVolume::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d57a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKMicVolume*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKMicVolume.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKMicVolume::*)()>(&::Liv::Lck::Tablet::LCKMicVolume::Update)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d57ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKMicVolume*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKMicVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKMicVolume::*)()>(&::Liv::Lck::Tablet::LCKMicVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d57be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKMicVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr float_t& Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_get__incomingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incomingVolume;
}
constexpr float_t const& Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_get__incomingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incomingVolume;
}
constexpr void Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_set__incomingVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____incomingVolume = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_get__micVolumeImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micVolumeImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_get__micVolumeImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micVolumeImage;
}
constexpr void Liv::Lck::Tablet::LCKMicVolume::__cordl_internal_set__micVolumeImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micVolumeImage = value;
}
inline void Liv::Lck::Tablet::LCKMicVolume::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKMicVolume*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKMicVolume::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKMicVolume*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKMicVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKMicVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LCKMicVolume* Liv::Lck::Tablet::LCKMicVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LCKMicVolume*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LCKMicVolume::LCKMicVolume()   {
}
