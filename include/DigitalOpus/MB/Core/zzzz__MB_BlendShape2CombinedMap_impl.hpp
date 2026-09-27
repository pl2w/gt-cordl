#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_BlendShape2CombinedMap.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_BlendShape2CombinedMap_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__SerializableSourceBlendShape2Combined_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap.GetMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* (::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::*)()>(&::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::GetMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9dbd820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap*>(),
                        {"GetMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::*)()>(&::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dbd898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*& DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::__cordl_internal_get_srcToCombinedMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcToCombinedMap;
}
constexpr ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* const& DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::__cordl_internal_get_srcToCombinedMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___srcToCombinedMap;
}
constexpr void DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::__cordl_internal_set_srcToCombinedMap(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___srcToCombinedMap = value;
}
inline ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::GetMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap*>(),
                        {"GetMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap* DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap::MB_BlendShape2CombinedMap()   {
}
