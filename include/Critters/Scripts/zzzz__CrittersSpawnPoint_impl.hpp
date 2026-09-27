#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersSpawnPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Critters/Scripts/zzzz__CrittersSpawnPoint_def.hpp"
//  Writing Method size for method: ::Critters::Scripts::CrittersSpawnPoint.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersSpawnPoint::*)()>(&::Critters::Scripts::CrittersSpawnPoint::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5dddd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawnPoint*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Critters::Scripts::CrittersSpawnPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Critters::Scripts::CrittersSpawnPoint::*)()>(&::Critters::Scripts::CrittersSpawnPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dddd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Critters::Scripts::CrittersSpawnPoint::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawnPoint*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Critters::Scripts::CrittersSpawnPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Critters::Scripts::CrittersSpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Critters::Scripts::CrittersSpawnPoint* Critters::Scripts::CrittersSpawnPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Critters::Scripts::CrittersSpawnPoint*>());
}
// Ctor Parameters []
constexpr ::Critters::Scripts::CrittersSpawnPoint::CrittersSpawnPoint()   {
}
